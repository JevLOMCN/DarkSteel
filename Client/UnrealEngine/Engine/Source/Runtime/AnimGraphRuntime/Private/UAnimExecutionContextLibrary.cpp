// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 24

// StaticClass @ 1463d1fc0

UClass * __cdecl UAnimExecutionContextLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimExecutionContextLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"AnimExecutionContextLibrary",
               &Z_Registration_Info_UClass_UAnimExecutionContextLibrary.InnerSingleton,
               StaticRegisterNativesUAnimExecutionContextLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimExecutionContextLibrary>,
               InternalVTableHelperCtorCaller<UAnimExecutionContextLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimExecutionContextLibrary.InnerSingleton;
}

// UAnimExecutionContextLibrary @ 146407520

UAnimExecutionContextLibrary * __thiscall
UAnimExecutionContextLibrary::UAnimExecutionContextLibrary
          (UAnimExecutionContextLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimExecutionContextLibrary__6B_;
  return this;
}

// UAnimExecutionContextLibrary @ 146407550

UAnimExecutionContextLibrary * __thiscall
UAnimExecutionContextLibrary::UAnimExecutionContextLibrary
          (UAnimExecutionContextLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimExecutionContextLibrary__6B_;
  return this;
}

// ~UAnimExecutionContextLibrary @ 146409640

void __thiscall
UAnimExecutionContextLibrary::~UAnimExecutionContextLibrary(UAnimExecutionContextLibrary *this)

{
  *(undefined ***)this = &___7UAnimExecutionContextLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertToComponentSpacePoseContext @ 146421990

FAnimComponentSpacePoseContext * __cdecl
UAnimExecutionContextLibrary::ConvertToComponentSpacePoseContext
          (FAnimComponentSpacePoseContext *__return_storage_ptr__,FAnimExecutionContext *param_1,
          EAnimExecutionContextConversionResult *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (param_1->Data).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1464219c5;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar7);
    pFVar3 = (param_1->Data).Object;
    if ((pFVar3 != (FData *)0x0) && (pFVar3->ContextType == ComponentSpacePose)) {
      *param_2 = Succeeded;
      pTVar4 = (param_1->Data).WeakReferenceCount.ReferenceController;
      pFVar3 = (param_1->Data).Object;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        *(FData **)__return_storage_ptr__ = pFVar3;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      }
      else {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        *(FData **)__return_storage_ptr__ = pFVar3;
        *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar4;
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          return __return_storage_ptr__;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return __return_storage_ptr__;
    }
  }
LAB_1464219c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *param_2 = Failed;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// ConvertToInitializationContext @ 146421a80

FAnimInitializationContext * __cdecl
UAnimExecutionContextLibrary::ConvertToInitializationContext
          (FAnimInitializationContext *__return_storage_ptr__,FAnimExecutionContext *param_1,
          EAnimExecutionContextConversionResult *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (param_1->Data).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146421ab5;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar7);
    pFVar3 = (param_1->Data).Object;
    if ((pFVar3 != (FData *)0x0) && (pFVar3->ContextType == Initialize)) {
      *param_2 = Succeeded;
      pTVar4 = (param_1->Data).WeakReferenceCount.ReferenceController;
      pFVar3 = (param_1->Data).Object;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        *(FData **)__return_storage_ptr__ = pFVar3;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      }
      else {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        *(FData **)__return_storage_ptr__ = pFVar3;
        *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar4;
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          return __return_storage_ptr__;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return __return_storage_ptr__;
    }
  }
LAB_146421ab5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *param_2 = Failed;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// ConvertToPoseContext @ 146421e40

FAnimPoseContext * __cdecl
UAnimExecutionContextLibrary::ConvertToPoseContext
          (FAnimPoseContext *__return_storage_ptr__,FAnimExecutionContext *param_1,
          EAnimExecutionContextConversionResult *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (param_1->Data).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146421e75;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar7);
    pFVar3 = (param_1->Data).Object;
    if ((pFVar3 != (FData *)0x0) && (pFVar3->ContextType == Pose)) {
      *param_2 = Succeeded;
      pTVar4 = (param_1->Data).WeakReferenceCount.ReferenceController;
      pFVar3 = (param_1->Data).Object;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        *(FData **)__return_storage_ptr__ = pFVar3;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      }
      else {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        *(FData **)__return_storage_ptr__ = pFVar3;
        *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar4;
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          return __return_storage_ptr__;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return __return_storage_ptr__;
    }
  }
LAB_146421e75:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *param_2 = Failed;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// ConvertToUpdateContext @ 1464222c0

FAnimUpdateContext * __cdecl
UAnimExecutionContextLibrary::ConvertToUpdateContext
          (FAnimUpdateContext *__return_storage_ptr__,FAnimExecutionContext *param_1,
          EAnimExecutionContextConversionResult *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = (param_1->Data).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1464222f5;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar2 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar7);
    pFVar3 = (param_1->Data).Object;
    if ((pFVar3 != (FData *)0x0) && (pFVar3->ContextType == Update)) {
      *param_2 = Succeeded;
      pTVar4 = (param_1->Data).WeakReferenceCount.ReferenceController;
      pFVar3 = (param_1->Data).Object;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        *(FData **)__return_storage_ptr__ = pFVar3;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      }
      else {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        *(FData **)__return_storage_ptr__ = pFVar3;
        *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar4;
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
          return __return_storage_ptr__;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return __return_storage_ptr__;
    }
  }
LAB_1464222f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *param_2 = Failed;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// GetAnimInstance @ 146447820

UAnimInstance * __cdecl
UAnimExecutionContextLibrary::GetAnimInstance(FAnimExecutionContext *param_1)

{
  int iVar1;
  FAnimationBaseContext *pFVar2;
  FData *pFVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  UAnimInstance *pUVar6;
  FString *pFVar7;
  UClass *pUVar8;
  FAnimationBaseContext *pFVar9;
  FAnimationBaseContext *this;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  bool bVar12;
  FString local_28;
  FString local_18;
  
  pFVar2 = (FAnimationBaseContext *)(param_1->Data).WeakReferenceCount.ReferenceController;
  this = (FAnimationBaseContext *)0x0;
  pFVar9 = pFVar2;
  if (pFVar2 != (FAnimationBaseContext *)0x0) {
    aVar4 = *(atomic<int> *)&pFVar2->SharedContext;
    do {
      pFVar9 = this;
      if (aVar4 == (atomic<int>)0x0) goto LAB_146447851;
      LOCK();
      aVar5 = *(atomic<int> *)&pFVar2->SharedContext;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        *(atomic<int> *)&pFVar2->SharedContext = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    pFVar3 = (param_1->Data).Object;
    pFVar9 = pFVar2;
    if (pFVar3 != (FData *)0x0) {
      this = pFVar3->Context;
    }
  }
LAB_146447851:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar9);
  pUVar6 = (UAnimInstance *)FAnimationBaseContext::GetAnimInstanceObject(this);
  if (pUVar6 == (UAnimInstance *)0x0) {
    pFVar7 = GetTypeName<UAnimInstance>(&local_28);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar10);
  }
  pUVar8 = Z_Construct_UClass_UAnimInstance_NoRegister();
  iVar1 = (int)pUVar8->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      == &pUVar8->_padding_)) {
    return pUVar6;
  }
  pFVar7 = GetTypeName<UAnimInstance>(&local_28);
  pwVar10 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar6);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar10,pwVar11);
}

// GetAnimNodeReference @ 146447930

FAnimNodeReference * __cdecl
UAnimExecutionContextLibrary::GetAnimNodeReference
          (FAnimNodeReference *__return_storage_ptr__,UAnimInstance *param_1,int param_2)

{
  IAnimClassInterface *pIVar1;
  longlong lVar2;
  
  pIVar1 = IAnimClassInterface::GetFromClass(*(UClass **)&param_1->field_0x10);
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1);
  FAnimNodeReference::FAnimNodeReference
            (__return_storage_ptr__,param_1,(*(int *)(lVar2 + 8) - param_2) + -1);
  return __return_storage_ptr__;
}

// GetCurrentWeight @ 146449650

float __cdecl UAnimExecutionContextLibrary::GetCurrentWeight(FAnimUpdateContext *param_1)

{
  FAnimationUpdateContext *pFVar1;
  
  pFVar1 = FAnimUpdateContext::GetContext(param_1);
  if (pFVar1 != (FAnimationUpdateContext *)0x0) {
    return pFVar1->CurrentWeight;
  }
  return 0.0;
}

// GetDeltaTime @ 146449940

float __cdecl UAnimExecutionContextLibrary::GetDeltaTime(FAnimUpdateContext *param_1)

{
  FAnimationUpdateContext *pFVar1;
  
  pFVar1 = FAnimUpdateContext::GetContext(param_1);
  if (pFVar1 != (FAnimationUpdateContext *)0x0) {
    return pFVar1->DeltaTime;
  }
  return 0.0;
}

// GetPrivateStaticClass @ 14644cbe0

UClass * __cdecl UAnimExecutionContextLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimExecutionContextLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimGraphRuntime",L"AnimExecutionContextLibrary",
               &Z_Registration_Info_UClass_UAnimExecutionContextLibrary.InnerSingleton,
               StaticRegisterNativesUAnimExecutionContextLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimExecutionContextLibrary>,
               InternalVTableHelperCtorCaller<UAnimExecutionContextLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimExecutionContextLibrary.InnerSingleton;
}

// IsActive @ 14645ab90

bool __cdecl UAnimExecutionContextLibrary::IsActive(FAnimExecutionContext *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FData *pFVar2;
  FAnimationBaseContext *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar1 = (param_1->Data).WeakReferenceCount.ReferenceController;
  pTVar8 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar1->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14645abc1;
      LOCK();
      aVar7 = pTVar1->SharedReferenceCount;
      bVar9 = aVar5 == aVar7;
      if (bVar9) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar9);
    pFVar2 = (param_1->Data).Object;
    pTVar8 = pTVar1;
    if (pFVar2 != (FData *)0x0) {
      pFVar3 = pFVar2->Context;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      if (pFVar3 != (FAnimationBaseContext *)0x0) {
        return pFVar3->bIsActive;
      }
      goto LAB_14645abc9;
    }
  }
LAB_14645abc1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_14645abc9:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("BaseContext",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimExecutionContextLibrary.cpp"
                     ,0x3c,L"");
  if (!bVar9) {
    return (bool)DAT_00000010;
  }
  pcVar4 = (code *)swi(3);
  uVar6 = (*pcVar4)();
  return (bool)uVar6;
}

// StaticRegisterNativesUAnimExecutionContextLibrary @ 14646e4e0

void __cdecl UAnimExecutionContextLibrary::StaticRegisterNativesUAnimExecutionContextLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UAnimExecutionContextLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertToComponentSpacePoseContext @ 14647ed10

void __cdecl
UAnimExecutionContextLibrary::execConvertToComponentSpacePoseContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FProperty *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  atomic<int> aVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  uchar *puVar11;
  longlong *plVar12;
  bool bVar13;
  uchar local_res10 [8];
  longlong local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  plVar5 = (longlong *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  plVar12 = &local_48;
  if (plVar5 != (longlong *)0x0) {
    plVar12 = plVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar11 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar7 = (TReferenceControllerBase<1> *)plVar12[1];
  pTVar10 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14647ee15;
      LOCK();
      aVar8 = pTVar7->SharedReferenceCount;
      bVar13 = aVar4 == aVar8;
      if (bVar13) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar8 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar8;
    } while (!bVar13);
    pTVar10 = pTVar7;
    if ((*plVar12 != 0) && (*(int *)(*plVar12 + 8) == 5)) {
      *puVar11 = '\x01';
      pTVar9 = (TReferenceControllerBase<1> *)plVar12[1];
      pTVar10 = (TReferenceControllerBase<1> *)*plVar12;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
        LOCK();
        paVar2 = &pTVar9->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_14647ee23;
    }
  }
LAB_14647ee15:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  *puVar11 = '\0';
  pTVar10 = pTVar9;
LAB_14647ee23:
  local_38 = *(undefined4 *)param_3;
  uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_30 = *(undefined4 *)((longlong)param_3 + 8);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
  plVar5 = *(longlong **)((longlong)param_3 + 8);
  *(TReferenceControllerBase<1> **)param_3 = pTVar10;
  *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = pTVar9;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar9->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_40 + 8))(plStack_40,1);
    }
  }
  return;
}

// execConvertToInitializationContext @ 14647ef20

void __cdecl
UAnimExecutionContextLibrary::execConvertToInitializationContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FProperty *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  atomic<int> aVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  uchar *puVar11;
  longlong *plVar12;
  bool bVar13;
  uchar local_res10 [8];
  longlong local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  plVar5 = (longlong *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  plVar12 = &local_48;
  if (plVar5 != (longlong *)0x0) {
    plVar12 = plVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar11 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar7 = (TReferenceControllerBase<1> *)plVar12[1];
  pTVar10 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14647f025;
      LOCK();
      aVar8 = pTVar7->SharedReferenceCount;
      bVar13 = aVar4 == aVar8;
      if (bVar13) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar8 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar8;
    } while (!bVar13);
    pTVar10 = pTVar7;
    if ((*plVar12 != 0) && (*(int *)(*plVar12 + 8) == 2)) {
      *puVar11 = '\x01';
      pTVar9 = (TReferenceControllerBase<1> *)plVar12[1];
      pTVar10 = (TReferenceControllerBase<1> *)*plVar12;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
        LOCK();
        paVar2 = &pTVar9->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_14647f033;
    }
  }
LAB_14647f025:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  *puVar11 = '\0';
  pTVar10 = pTVar9;
LAB_14647f033:
  local_38 = *(undefined4 *)param_3;
  uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_30 = *(undefined4 *)((longlong)param_3 + 8);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
  plVar5 = *(longlong **)((longlong)param_3 + 8);
  *(TReferenceControllerBase<1> **)param_3 = pTVar10;
  *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = pTVar9;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar9->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_40 + 8))(plStack_40,1);
    }
  }
  return;
}

// execConvertToPoseContext @ 14647fc80

void __cdecl
UAnimExecutionContextLibrary::execConvertToPoseContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FProperty *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  atomic<int> aVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  uchar *puVar11;
  longlong *plVar12;
  bool bVar13;
  uchar local_res10 [8];
  longlong local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  plVar5 = (longlong *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  plVar12 = &local_48;
  if (plVar5 != (longlong *)0x0) {
    plVar12 = plVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar11 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar7 = (TReferenceControllerBase<1> *)plVar12[1];
  pTVar10 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14647fd85;
      LOCK();
      aVar8 = pTVar7->SharedReferenceCount;
      bVar13 = aVar4 == aVar8;
      if (bVar13) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar8 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar8;
    } while (!bVar13);
    pTVar10 = pTVar7;
    if ((*plVar12 != 0) && (*(int *)(*plVar12 + 8) == 4)) {
      *puVar11 = '\x01';
      pTVar9 = (TReferenceControllerBase<1> *)plVar12[1];
      pTVar10 = (TReferenceControllerBase<1> *)*plVar12;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
        LOCK();
        paVar2 = &pTVar9->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_14647fd93;
    }
  }
LAB_14647fd85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  *puVar11 = '\0';
  pTVar10 = pTVar9;
LAB_14647fd93:
  local_38 = *(undefined4 *)param_3;
  uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_30 = *(undefined4 *)((longlong)param_3 + 8);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
  plVar5 = *(longlong **)((longlong)param_3 + 8);
  *(TReferenceControllerBase<1> **)param_3 = pTVar10;
  *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = pTVar9;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar9->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_40 + 8))(plStack_40,1);
    }
  }
  return;
}

// execConvertToUpdateContext @ 1464809e0

void __cdecl
UAnimExecutionContextLibrary::execConvertToUpdateContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  atomic<int> aVar4;
  longlong *plVar5;
  FProperty *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  atomic<int> aVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  uchar *puVar11;
  longlong *plVar12;
  bool bVar13;
  uchar local_res10 [8];
  longlong local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  plVar5 = (longlong *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  plVar12 = &local_48;
  if (plVar5 != (longlong *)0x0) {
    plVar12 = plVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar11 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar7 = (TReferenceControllerBase<1> *)plVar12[1];
  pTVar10 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar4 == (atomic<int>)0x0) goto LAB_146480ae5;
      LOCK();
      aVar8 = pTVar7->SharedReferenceCount;
      bVar13 = aVar4 == aVar8;
      if (bVar13) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar8 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar8;
    } while (!bVar13);
    pTVar10 = pTVar7;
    if ((*plVar12 != 0) && (*(int *)(*plVar12 + 8) == 3)) {
      *puVar11 = '\x01';
      pTVar9 = (TReferenceControllerBase<1> *)plVar12[1];
      pTVar10 = (TReferenceControllerBase<1> *)*plVar12;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
        LOCK();
        paVar2 = &pTVar9->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_146480af3;
    }
  }
LAB_146480ae5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  *puVar11 = '\0';
  pTVar10 = pTVar9;
LAB_146480af3:
  local_38 = *(undefined4 *)param_3;
  uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_30 = *(undefined4 *)((longlong)param_3 + 8);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
  plVar5 = *(longlong **)((longlong)param_3 + 8);
  *(TReferenceControllerBase<1> **)param_3 = pTVar10;
  *(TReferenceControllerBase<1> **)((longlong)param_3 + 8) = pTVar9;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar9->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plStack_40 + 8))(plStack_40,1);
    }
  }
  return;
}

// execGetAnimInstance @ 146481490

void __cdecl
UAnimExecutionContextLibrary::execGetAnimInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  FAnimationBaseContext *pFVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  UObject *pUVar7;
  FString *pFVar8;
  UClass *pUVar9;
  FAnimationBaseContext *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  FAnimationBaseContext *this;
  longlong *plVar13;
  bool bVar14;
  longlong local_38;
  longlong *plStack_30;
  FString local_28;
  FString local_18;
  
  this = (FAnimationBaseContext *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  plVar13 = &local_38;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar13 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = (FAnimationBaseContext *)plVar13[1];
  pFVar10 = pFVar4;
  if (pFVar4 != (FAnimationBaseContext *)0x0) {
    aVar5 = *(atomic<int> *)&pFVar4->SharedContext;
    do {
      pFVar10 = this;
      if (aVar5 == (atomic<int>)0x0) goto LAB_146481532;
      LOCK();
      aVar6 = *(atomic<int> *)&pFVar4->SharedContext;
      bVar14 = aVar5 == aVar6;
      if (bVar14) {
        *(atomic<int> *)&pFVar4->SharedContext = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar14);
    pFVar10 = pFVar4;
    if ((undefined8 *)*plVar13 != (undefined8 *)0x0) {
      this = *(FAnimationBaseContext **)*plVar13;
    }
  }
LAB_146481532:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  pUVar7 = FAnimationBaseContext::GetAnimInstanceObject(this);
  if (pUVar7 == (UObject *)0x0) {
    pFVar8 = GetTypeName<UAnimInstance>(&local_28);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pUVar9 = Z_Construct_UClass_UAnimInstance_NoRegister();
  iVar2 = (int)pUVar9->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8)
      == &pUVar9->_padding_)) {
    *(UObject **)param_3 = pUVar7;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plStack_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (plStack_30 != (longlong *)0x0)) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
    return;
  }
  pFVar8 = GetTypeName<UAnimInstance>(&local_28);
  pwVar11 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar8 = GetFullNameForCastLogError<UObject>(&local_18,pUVar7);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar11,pwVar12);
}

// execGetAnimNodeReference @ 146481630

void __cdecl
UAnimExecutionContextLibrary::execGetAnimNodeReference
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UAnimInstance *pUVar3;
  IAnimClassInterface *pIVar4;
  longlong lVar5;
  int local_res10 [2];
  UAnimInstance *local_res18;
  FAnimNodeReference local_18;
  
  local_res18 = (UAnimInstance *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_res18;
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar4 = IAnimClassInterface::GetFromClass(*(UClass **)&local_res18->field_0x10);
  lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
  FAnimNodeReference::FAnimNodeReference(&local_18,pUVar3,(*(int *)(lVar5 + 8) - iVar2) + -1);
  *(FAnimNode_Base **)param_3 = local_18.AnimNode;
  *(UScriptStruct **)((longlong)param_3 + 8) = local_18.AnimNodeStruct;
  return;
}

// execGetCurrentWeight @ 1464818f0

void __cdecl
UAnimExecutionContextLibrary::execGetCurrentWeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  FAnimationUpdateContext *pFVar4;
  FAnimUpdateContext *this;
  float fVar5;
  undefined1 local_18 [8];
  longlong *plStack_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18 = (undefined1  [8])0x0;
  plStack_10 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  this = (FAnimUpdateContext *)local_18;
  if ((FAnimUpdateContext *)param_2->MostRecentPropertyAddress != (FAnimUpdateContext *)0x0) {
    this = (FAnimUpdateContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FAnimUpdateContext::GetContext(this);
  if (pFVar4 == (FAnimationUpdateContext *)0x0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = pFVar4->CurrentWeight;
  }
  *(float *)param_3 = fVar5;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_10 + 8))(plStack_10,1);
    }
  }
  return;
}

// execGetDeltaTime @ 1464819d0

void __cdecl
UAnimExecutionContextLibrary::execGetDeltaTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  FAnimationUpdateContext *pFVar4;
  FAnimUpdateContext *this;
  float fVar5;
  undefined1 local_18 [8];
  longlong *plStack_10;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18 = (undefined1  [8])0x0;
  plStack_10 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  this = (FAnimUpdateContext *)local_18;
  if ((FAnimUpdateContext *)param_2->MostRecentPropertyAddress != (FAnimUpdateContext *)0x0) {
    this = (FAnimUpdateContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FAnimUpdateContext::GetContext(this);
  if (pFVar4 == (FAnimationUpdateContext *)0x0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = pFVar4->DeltaTime;
  }
  *(float *)param_3 = fVar5;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_10 + 8))(plStack_10,1);
    }
  }
  return;
}

// execIsActive @ 146483380

void __cdecl
UAnimExecutionContextLibrary::execIsActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong *plVar10;
  bool bVar11;
  longlong local_18;
  longlong *plStack_10;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  plVar10 = &local_18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar10 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = (TReferenceControllerBase<1> *)plVar10[1];
  pTVar8 = pTVar4;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_146483422:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  else {
    aVar6 = pTVar4->SharedReferenceCount;
    do {
      pTVar8 = pTVar9;
      if (aVar6 == (atomic<int>)0x0) goto LAB_146483422;
      LOCK();
      aVar7 = pTVar4->SharedReferenceCount;
      bVar11 = aVar6 == aVar7;
      if (bVar11) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar11);
    pTVar8 = pTVar4;
    if ((longlong *)*plVar10 == (longlong *)0x0) goto LAB_146483422;
    pTVar9 = *(TReferenceControllerBase<1> **)*plVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) goto LAB_146483450;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("BaseContext",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimExecutionContextLibrary.cpp"
                      ,0x3c,L"");
  if (bVar11) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_146483450:
  *(char *)param_3 = (char)pTVar9[1]._padding_;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plStack_10 + 8))(plStack_10,1);
    }
  }
  return;
}

