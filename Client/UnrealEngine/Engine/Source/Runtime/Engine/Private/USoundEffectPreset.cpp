// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// ~USoundEffectPreset @ 1473313e0

void __thiscall USoundEffectPreset::~USoundEffectPreset(USoundEffectPreset *this)

{
  FScriptContainerElement *pFVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InstancesMutationCriticalSection);
  DestructItems<TWeakPtr<FSoundEffectBase,1>,int>
            ((TWeakPtr<FSoundEffectBase,1> *)(this->Instances).AllocatorInstance.Data,
             (this->Instances).ArrayNum);
  pFVar1 = (this->Instances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CanFilter @ 147331e10

bool __thiscall USoundEffectPreset::CanFilter(USoundEffectPreset *this)

{
  return true;
}

// CreateNewEffect @ 147331e20

FSoundEffectBase * __thiscall USoundEffectPreset::CreateNewEffect(USoundEffectPreset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\SoundEffectPreset.h"
             ,0x24,L"Pure virtual not implemented (%s)");
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 147331e50

USoundEffectPreset * __thiscall
USoundEffectPreset::CreateNewPreset
          (USoundEffectPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\SoundEffectPreset.h"
             ,0x23,L"Pure virtual not implemented (%s)");
  return (USoundEffectPreset *)0x0;
}

// GetAssetActionName @ 147332400

FText * __thiscall
USoundEffectPreset::GetAssetActionName(USoundEffectPreset *this,FText *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\SoundEffectPreset.h"
             ,0x21,L"Pure virtual not implemented (%s)");
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPresetColor @ 1473324b0

FColor __thiscall USoundEffectPreset::GetPresetColor(USoundEffectPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xffc86464;
  return (FColor)SUB84(in_RDX,0);
}

// GetSupportedClass @ 1473331f0

UClass * __thiscall USoundEffectPreset::GetSupportedClass(USoundEffectPreset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\SoundEffectPreset.h"
             ,0x22,L"Pure virtual not implemented (%s)");
  return (UClass *)0x0;
}

// HasAssetActions @ 147333220

bool __thiscall USoundEffectPreset::HasAssetActions(USoundEffectPreset *this)

{
  return false;
}

// Init @ 147333230

void __thiscall USoundEffectPreset::Init(USoundEffectPreset *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Sound\\SoundEffectPreset.h"
             ,0x26,L"Pure virtual not implemented (%s)");
  return;
}

// StaticClass @ 147333370

UClass * __cdecl USoundEffectPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundEffectPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundEffectPreset",
               &Z_Registration_Info_UClass_USoundEffectPreset.InnerSingleton,
               StaticRegisterNativesUSoundEffectPreset,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundEffectPreset>,
               InternalVTableHelperCtorCaller<USoundEffectPreset>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundEffectPreset.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14867d1a0

void __cdecl
`USoundEffectPreset::BeginDestroy'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FSoundEffectBase *param_1)

{
  (param_1->Preset).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// IterateEffects<FSoundEffectBase> @ 14868c960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundEffectPreset::IterateEffects<FSoundEffectBase>
          (USoundEffectPreset *this,TFunction<void___cdecl(FSoundEffectBase_&)> *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  undefined8 uVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  LPCRITICAL_SECTION local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_40 = (LPCRITICAL_SECTION)&this->InstancesMutationCriticalSection;
  if (local_40 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_40);
  iVar1 = (this->Instances).ArrayNum;
  pFVar10 = (this->Instances).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
  do {
    while( true ) {
      if ((this->Instances).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TWeakPtr<FSoundEffectBase,1>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_48);
      }
      if (pFVar10 == pFVar9) {
        LeaveCriticalSection(local_40);
        if (*(longlong *)param_1 != 0) {
          plVar7 = (longlong *)&param_1->field_0x10;
          if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
            plVar7 = *(longlong **)&param_1->field_0x28;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        return;
      }
      pTVar8 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) break;
LAB_14868ca05:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      pFVar10 = pFVar10 + 0x10;
    }
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14868ca05;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar11 = aVar4 == aVar5;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar11);
    lVar2 = *(longlong *)pFVar10;
    if (lVar2 == 0) goto LAB_14868ca05;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar3 = *(code **)param_1;
    plVar7 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar7 = (longlong *)&param_1->field_0x10;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar3)(uVar6,lVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// USoundEffectPreset @ 148696da0

USoundEffectPreset * __thiscall
USoundEffectPreset::USoundEffectPreset(USoundEffectPreset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundEffectPreset__6B_;
  (this->Instances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Instances).ArrayNum = 0;
  (this->Instances).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->InstancesMutationCriticalSection,4000);
  return this;
}

// USoundEffectPreset @ 148696de0

USoundEffectPreset * __thiscall
USoundEffectPreset::USoundEffectPreset(USoundEffectPreset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundEffectPreset__6B_;
  (this->Instances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Instances).ArrayNum = 0;
  (this->Instances).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->InstancesMutationCriticalSection,4000);
  this->bInitialized = false;
  return this;
}

// AddEffectInstance @ 1486a4d00

void __thiscall
USoundEffectPreset::AddEffectInstance
          (USoundEffectPreset *this,TSharedPtr<FSoundEffectBase,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TWeakPtr<FSoundEffectBase,1> local_18;
  
  if (this->bInitialized == false) {
    this->bInitialized = true;
    (**(code **)(this->_padding_ + 0x2e0))();
    (**(code **)(this->_padding_ + 0x2e8))(this);
  }
  lpCriticalSection = &this->InstancesMutationCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.Object = param_1->Object;
    local_18.WeakReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakPtr<FSoundEffectBase,1>_>(&this->Instances,&local_18);
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.WeakReferenceCount.ReferenceController,1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001486a4da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddReferencedEffects @ 1486a5ca0

void __thiscall
USoundEffectPreset::AddReferencedEffects(USoundEffectPreset *this,FReferenceCollector *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  FReferenceCollector *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USoundEffectPreset::AddReferencedEffects'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USoundEffectPreset::AddReferencedEffects'::__l2::<lambda_1>,void,FSoundEffectBase_&>
                ::Call;
  local_20 = param_1;
  IterateEffects<FSoundEffectBase>(this,(TFunction<void___cdecl(FSoundEffectBase_&)> *)local_38);
  return;
}

// BeginDestroy @ 1486a6910

void __thiscall USoundEffectPreset::BeginDestroy(USoundEffectPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  TWeakPtr<FSoundEffectBase,1> *pTVar3;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  lpCriticalSection = &this->InstancesMutationCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_28 = &
               ___7__TFunction_OwnedObject_P6AXAEAVFSoundEffectBase___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_10 = 0;
    local_20 = `USoundEffectPreset::BeginDestroy'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(FSoundEffectBase_&),void,FSoundEffectBase_&>::
                  Call;
    IterateEffects<FSoundEffectBase>(this,(TFunction<void___cdecl(FSoundEffectBase_&)> *)local_38);
    piVar1 = &(this->Instances).ArrayMax;
    pTVar3 = (TWeakPtr<FSoundEffectBase,1> *)(this->Instances).AllocatorInstance.Data;
    iVar2 = (this->Instances).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TWeakPtr<FSoundEffectBase,1>,int>(pTVar3,iVar2);
      (this->Instances).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->Instances).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TWeakPtr<FSoundEffectBase,1>,int>(pTVar3,iVar2);
      (this->Instances).ArrayNum = 0;
    }
    UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001486a69ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetPrivateStaticClass @ 1486c4370

UClass * __cdecl USoundEffectPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundEffectPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundEffectPreset",
               &Z_Registration_Info_UClass_USoundEffectPreset.InnerSingleton,
               StaticRegisterNativesUSoundEffectPreset,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundEffectPreset>,
               InternalVTableHelperCtorCaller<USoundEffectPreset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundEffectPreset.InnerSingleton;
}

// RegisterInstance @ 1486e3ff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
USoundEffectPreset::RegisterInstance
          (USoundEffectPreset *param_1,TSharedPtr<FSoundEffectBase,1> *param_2)

{
  undefined1 *lpCriticalSection;
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSoundEffectBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  USoundEffectPreset *pUVar7;
  UObject *pUVar8;
  USoundEffectPreset *local_res10;
  TWeakPtr<FSoundEffectBase,1> local_48;
  TWeakPtr<FSoundEffectBase,1> local_38;
  
  bVar6 = IsInAudioThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6593113328682270873>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundEffectPreset.cpp"
                         ,0x99,"IsInAudioThread() || IsInGameThread()");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  if (param_2->Object == (FSoundEffectBase *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return;
  }
  pUVar7 = (USoundEffectPreset *)FWeakObjectPtr::Get(&(param_2->Object->Preset).WeakPtr);
  if (pUVar7 == param_1) goto LAB_1486e42ab;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar4 = param_2->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar6 = IsInAudioThread();
  if (bVar6) {
LAB_1486e40e7:
    if (pFVar4 != (FSoundEffectBase *)0x0) {
      bVar6 = FWeakObjectPtr::IsValid(&(pFVar4->Preset).WeakPtr);
      if (bVar6) {
        pUVar8 = FWeakObjectPtr::Get(&(pFVar4->Preset).WeakPtr);
        if (pUVar8 != (UObject *)0x0) {
          lpCriticalSection = &pUVar8[1].field_0x10;
          if (lpCriticalSection == (undefined1 *)0x0) goto LAB_1486e4311;
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
            UNLOCK();
          }
          local_48.Object = pFVar4;
          local_48.WeakReferenceCount.ReferenceController = pTVar3;
          TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
                    ((TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32>_> *)
                     (pUVar8 + 1),&local_48,Default);
          if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
          {
            LOCK();
            paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                        (local_48.WeakReferenceCount.ReferenceController,1);
            }
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
      }
      (pFVar4->Preset).WeakPtr = (FWeakObjectPtr)0x0;
    }
  }
  else {
    bVar6 = IsInGameThread();
    if (bVar6) goto LAB_1486e40e7;
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6593113328682270857>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundEffectPreset.cpp"
                       ,0x89,"IsInAudioThread() || IsInGameThread()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (param_2->Object == (FSoundEffectBase *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = param_2->Object;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundEffectPreset *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(pFVar4->Preset).WeakPtr,(FObjectPtr)&local_res10);
  if (param_2->Object == (FSoundEffectBase *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar6 = FWeakObjectPtr::IsValid(&(param_2->Object->Preset).WeakPtr);
  if (bVar6) {
    if (param_1->bInitialized == false) {
      param_1->bInitialized = true;
      (**(code **)(param_1->_padding_ + 0x2e0))(param_1);
      (**(code **)(param_1->_padding_ + 0x2e8))(param_1);
    }
    lpCriticalSection_00 = &param_1->InstancesMutationCriticalSection;
    if (lpCriticalSection_00 == (FWindowsRecursiveMutex *)0x0) {
LAB_1486e4311:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    local_38.Object = param_2->Object;
    local_38.WeakReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TWeakPtr<FSoundEffectBase,1>_>(&param_1->Instances,&local_38);
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_38.WeakReferenceCount.ReferenceController,1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
LAB_1486e42ab:
  if (param_2->Object == (FSoundEffectBase *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  LOCK();
  param_2->Object->bChanged = (FThreadSafeBool)0x1;
  UNLOCK();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveEffectInstance @ 1486e8560

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
USoundEffectPreset::RemoveEffectInstance
          (USoundEffectPreset *this,TSharedPtr<FSoundEffectBase,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TWeakPtr<FSoundEffectBase,1> local_18;
  
  lpCriticalSection = &this->InstancesMutationCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18.Object = param_1->Object;
    local_18.WeakReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
              (&this->Instances,&local_18,Default);
    if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.WeakReferenceCount.ReferenceController,1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001486e85e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSoundEffectPreset @ 1486f1870

void __cdecl USoundEffectPreset::StaticRegisterNativesUSoundEffectPreset(void)

{
  return;
}

// UnregisterInstance @ 1486f3a50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl USoundEffectPreset::UnregisterInstance(TSharedPtr<FSoundEffectBase,1> *param_1)

{
  TWeakObjectPtr<USoundEffectPreset,FWeakObjectPtr> *this;
  undefined1 *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  TWeakPtr<FSoundEffectBase,1> local_18;
  
  bVar4 = IsInAudioThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6593113328682270857>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundEffectPreset.cpp"
                         ,0x89,"IsInAudioThread() || IsInGameThread()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1486f3b79;
    }
  }
  if (param_1->Object != (FSoundEffectBase *)0x0) {
    this = &param_1->Object->Preset;
    bVar4 = FWeakObjectPtr::IsValid(&this->WeakPtr);
    if (bVar4) {
      pUVar5 = FWeakObjectPtr::Get(&this->WeakPtr);
      if (pUVar5 != (UObject *)0x0) {
        lpCriticalSection = &pUVar5[1].field_0x10;
        if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        local_18.Object = param_1->Object;
        local_18.WeakReferenceCount.ReferenceController =
             (param_1->SharedReferenceCount).ReferenceController;
        if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
                  ((TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32>_> *)(pUVar5 + 1),
                   &local_18,Default);
        if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_18.WeakReferenceCount.ReferenceController,1);
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    if (param_1->Object == (FSoundEffectBase *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (param_1->Object->Preset).WeakPtr = (FWeakObjectPtr)0x0;
  }
LAB_1486f3b79:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Update @ 1486f40e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USoundEffectPreset::Update(USoundEffectPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *lpCriticalSection_00;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FSoundEffectBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  UObject *pUVar8;
  USoundEffectPreset *pUVar9;
  TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int local_res8;
  USoundEffectPreset *local_res20;
  TWeakPtr<FSoundEffectBase,1> local_68;
  TWeakPtr<FSoundEffectBase,1> local_58;
  
  lpCriticalSection = &this->InstancesMutationCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8 = (this->Instances).ArrayNum;
    uVar12 = local_res8 - 1;
    if (-1 < (int)uVar12) {
      lVar10 = (longlong)(int)uVar12 << 4;
      do {
        this_00 = &this->Instances;
        uVar7 = 0;
        if ((int)uVar12 < (this->Instances).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (this_00->AllocatorInstance).Data + lVar10;
        pTVar11 = *(TReferenceControllerBase<1> **)(pFVar13 + 8);
        if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_1486f4402:
          uVar7 = 0;
          if (local_res8 <= (this->Instances).ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (this_00,uVar12,1);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this_00->AllocatorInstance,(this->Instances).ArrayNum,
                     &(this->Instances).ArrayMax);
        }
        else {
          aVar2 = pTVar11->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              pTVar11 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_1486f4402;
            }
            LOCK();
            aVar6 = pTVar11->SharedReferenceCount;
            bVar5 = aVar2 == aVar6;
            if (bVar5) {
              pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar6 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar6;
          } while (!bVar5);
          pFVar3 = *(FSoundEffectBase **)pFVar13;
          if (((pFVar3 == (FSoundEffectBase *)0x0) ||
              (bVar5 = FWeakObjectPtr::IsValid(&(pFVar3->Preset).WeakPtr), !bVar5)) ||
             (pUVar8 = FWeakObjectPtr::Get(&(pFVar3->Preset).WeakPtr), pUVar8 == (UObject *)0x0))
          goto LAB_1486f4402;
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
          bVar5 = IsInAudioThread();
          if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
             (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<6593113328682270873>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundEffectPreset.cpp"
                                 ,0x99,"IsInAudioThread() || IsInGameThread()"), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar9 = (USoundEffectPreset *)FWeakObjectPtr::Get(&(pFVar3->Preset).WeakPtr);
          if (pUVar9 != this) {
            LOCK();
            pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
            UNLOCK();
            bVar5 = IsInAudioThread();
            if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
              bVar5 = FWeakObjectPtr::IsValid(&(pFVar3->Preset).WeakPtr);
              if ((bVar5) &&
                 (pUVar8 = FWeakObjectPtr::Get(&(pFVar3->Preset).WeakPtr), pUVar8 != (UObject *)0x0)
                 ) {
                lpCriticalSection_00 = &pUVar8[1].field_0x10;
                if (lpCriticalSection_00 == (undefined1 *)0x0) goto LAB_1486f44d1;
                EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
                LOCK();
                pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
                UNLOCK();
                local_68.Object = pFVar3;
                local_68.WeakReferenceCount.ReferenceController = pTVar11;
                TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
                          ((TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32>_> *)
                           (pUVar8 + 1),&local_68,Default);
                if (local_68.WeakReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
                  aVar2 = *paVar1;
                  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                  UNLOCK();
                  if (aVar2 == (atomic<int>)0x1) {
                    (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                              (local_68.WeakReferenceCount.ReferenceController,1);
                  }
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
              }
              (pFVar3->Preset).WeakPtr = (FWeakObjectPtr)0x0;
            }
            else {
              bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<6593113328682270857>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundEffectPreset.cpp"
                                 ,0x89,"IsInAudioThread() || IsInGameThread()");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar11);
            local_res20 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=(&(pFVar3->Preset).WeakPtr,(FObjectPtr)&local_res20);
            bVar5 = FWeakObjectPtr::IsValid(&(pFVar3->Preset).WeakPtr);
            if (bVar5) {
              if (this->bInitialized == false) {
                this->bInitialized = true;
                (**(code **)(this->_padding_ + 0x2e0))(this);
                (**(code **)(this->_padding_ + 0x2e8))(this);
              }
              EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              LOCK();
              pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
              UNLOCK();
              local_58.Object = pFVar3;
              local_58.WeakReferenceCount.ReferenceController = pTVar11;
              TArray<TWeakPtr<FSoundEffectBase,1>,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<TWeakPtr<FSoundEffectBase,1>_>(&this->Instances,&local_58);
              if (local_58.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
                aVar2 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar2 == (atomic<int>)0x1) {
                  (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                            (local_58.WeakReferenceCount.ReferenceController,1);
                }
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            }
          }
          LOCK();
          pFVar3->bChanged = (FThreadSafeBool)0x1;
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        local_res8 = local_res8 + -1;
        lVar10 = lVar10 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
                    /* WARNING: Could not recover jumptable at 0x0001486f44ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
LAB_1486f44d1:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

