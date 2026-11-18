// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147aa60c0

UClass * __cdecl UDebugDrawService::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDebugDrawService.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DebugDrawService",
               &Z_Registration_Info_UClass_UDebugDrawService.InnerSingleton,
               StaticRegisterNativesUDebugDrawService,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDebugDrawService>,
               InternalVTableHelperCtorCaller<UDebugDrawService>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDebugDrawService.InnerSingleton;
}

// UDebugDrawService @ 147abd190

UDebugDrawService * __thiscall
UDebugDrawService::UDebugDrawService(UDebugDrawService *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDebugDrawService__6B_;
  return this;
}

// UDebugDrawService @ 147abd1c0

UDebugDrawService * __thiscall
UDebugDrawService::UDebugDrawService(UDebugDrawService *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDebugDrawService__6B_;
  if (Delegates.ArrayMax < 0x200) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0x200,&Delegates.AllocatorInstance,Delegates.ArrayNum,&Delegates.ArrayMax);
  }
  return this;
}

// ~UDebugDrawService @ 147abf6f0

void __thiscall UDebugDrawService::~UDebugDrawService(UDebugDrawService *this)

{
  *(undefined ***)this = &___7UDebugDrawService__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Draw @ 147ad22d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UDebugDrawService::Draw
          (FEngineShowFlags *param_1,FViewport *param_2,FSceneView *param_3,FCanvas *param_4,
          UCanvas *param_5,APlayerController *param_6)

{
  FName FVar1;
  ForElementType<unsigned_int> FVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  FName *pFVar5;
  FUObjectItem *this;
  FEngineShowFlags *pFVar6;
  longlong *plVar7;
  undefined1 auStackY_138 [32];
  TStringView<wchar_t> local_108;
  FEngineShowFlags local_f8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (param_5 == (UCanvas *)0x0) {
    local_108.DataPtr = L"DebugCanvasObject";
    local_108.Size = 0x11;
    pUVar3 = GetTransientPackage();
    pUVar4 = Z_Construct_UClass_UCanvas_NoRegister();
    param_5 = (UCanvas *)StaticFindObject(pUVar4,(UObject *)pUVar3,&local_108,None);
    if (param_5 == (UCanvas *)0x0) {
      pFVar5 = ::FName::FName((FName *)&local_108,L"DebugCanvasObject");
      FVar1 = *pFVar5;
      pUVar3 = GetTransientPackage();
      if (FVar1 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar3,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar4 = Z_Construct_UClass_UCanvas_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar4);
      local_b8._24_4_ = RF_NoFlags;
      local_b8._40_8_ = (UObject *)0x0;
      local_b8[0x20] = false;
      local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_b8._56_8_ = (UPackage *)0x0;
      local_b8._8_8_ = pUVar3;
      local_b8._16_8_ = FVar1;
      param_5 = (UCanvas *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar7 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      this = FUObjectArray::IndexToObject
                       (&GUObjectArray,*(int *)((longlong)&param_5->_padding_ + 4));
      FUObjectItem::SetRootFlags(this,RootSet);
    }
  }
  UCanvas::Init(param_5,*(int *)((longlong)&(param_3->UnscaledViewRect).field0_0x0 + 8) -
                        *(int *)&(param_3->UnscaledViewRect).field0_0x0,
                *(int *)((longlong)&(param_3->UnscaledViewRect).field0_0x0 + 0xc) -
                *(int *)((longlong)&(param_3->UnscaledViewRect).field0_0x0 + 4),param_3,param_4);
  UCanvas::Update(param_5);
  UCanvas::SetView(param_5,param_3);
  pFVar6 = FEngineShowFlags::FEngineShowFlags(&local_f8,param_1);
  Draw(pFVar6,param_5,param_6);
  FVar2 = (param_1->CustomShowFlags).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

// Draw @ 147ad24f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDebugDrawService::Draw(FEngineShowFlags *param_1,UCanvas *param_2,APlayerController *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  longlong lVar10;
  uint uVar11;
  longlong local_60;
  FDestructionSentinel local_50;
  
  if ((param_2 == (UCanvas *)0x0) || (param_2->Canvas == (FCanvas *)0x0)) {
    FVar8 = (param_1->CustomShowFlags).AllocatorInstance.SecondaryData;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DelegatesLock);
    uVar11 = 0;
    if (0 < Delegates.ArrayNum) {
      local_60 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < Delegates.ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               (Delegates.AllocatorInstance.Data + local_60);
        bVar4 = FEngineShowFlags::GetSingleFlag(param_1,uVar11);
        if ((bVar4) && (bVar4 = FEngineShowFlags::GetSingleFlag(&ObservedFlags,uVar11), bVar4)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                     (FWriteAccessScope *)&local_50);
          this->InvocationListLockCount = this->InvocationListLockCount + 1;
          bVar4 = false;
          uVar9 = (this->InvocationList).ArrayNum - 1;
          if (-1 < (int)uVar9) {
            lVar10 = (longlong)(int)uVar9 << 4;
            do {
              uVar7 = 0;
              if ((int)uVar9 < (this->InvocationList).ArrayNum) {
                uVar7 = ~uVar9 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar1 = (this->InvocationList).AllocatorInstance.Data;
              if (((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
                  (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_2,param_3), cVar6 == '\0')) {
                bVar4 = true;
              }
              lVar10 = lVar10 + -0x10;
              uVar9 = uVar9 - 1;
            } while (-1 < (int)uVar9);
          }
          this->InvocationListLockCount = this->InvocationListLockCount + -1;
          if (bVar4) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,false);
          }
          if (local_50.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
          }
        }
        local_60 = local_60 + 0x20;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < Delegates.ArrayNum);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DelegatesLock);
    FVar8 = (param_1->CustomShowFlags).AllocatorInstance.SecondaryData;
  }
  if (FVar8 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  return;
}

// GetPrivateStaticClass @ 147aeb4f0

UClass * __cdecl UDebugDrawService::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDebugDrawService.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DebugDrawService",
               &Z_Registration_Info_UClass_UDebugDrawService.InnerSingleton,
               StaticRegisterNativesUDebugDrawService,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDebugDrawService>,
               InternalVTableHelperCtorCaller<UDebugDrawService>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDebugDrawService.InnerSingleton;
}

// Register @ 147b08b40

FDelegateHandle __cdecl
UDebugDrawService::Register
          (wchar_t *param_1,
          TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FDelegateHandle FVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = FEngineShowFlags::FindIndexByName((wchar_t *)param_2,(wchar_t *)0x0);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  if (uVar3 != 0xffffffff) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DelegatesLock);
    iVar4 = Delegates.ArrayNum;
    if (iVar4 <= (int)uVar3) {
      iVar6 = (uVar3 - iVar4) + 1;
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,iVar6,&Delegates.AllocatorInstance,&Delegates.ArrayNum,
                         &Delegates.ArrayMax);
      memset(Delegates.AllocatorInstance.Data + (longlong)iVar4 * 0x20,0,(longlong)iVar6 << 5);
      iVar4 = Delegates.ArrayNum;
    }
    uVar7 = 0;
    if ((int)uVar3 < iVar4) {
      uVar7 = ~uVar3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar5.ID = (*pcVar1)();
        return (FDelegateHandle)FVar5.ID;
      }
    }
    FVar5 = TMulticastDelegateRegistration<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
            ::Add((TMulticastDelegateRegistration<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                   *)(Delegates.AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20),
                  (TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                   *)&stack0x00000008);
    *(undefined8 *)param_1 = *(undefined8 *)FVar5.ID;
    FEngineShowFlags::SetSingleFlag(&ObservedFlags,uVar3,true);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DelegatesLock);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// StaticRegisterNativesUDebugDrawService @ 147b172a0

void __cdecl UDebugDrawService::StaticRegisterNativesUDebugDrawService(void)

{
  return;
}

// Unregister @ 147b1f300

void __cdecl UDebugDrawService::Unregister(FDelegateHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  undefined1 local_res10 [8];
  FReadAccessScope local_38;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DelegatesLock);
  uVar7 = 0;
  iVar4 = Delegates.ArrayNum;
  if (0 < Delegates.ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar7 < iVar4) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar4 = Delegates.ArrayNum, bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             (Delegates.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
      if ((param_1.ID != 0) &&
         (bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                            (this,param_1), iVar4 = Delegates.ArrayNum, bVar2)) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_38);
        iVar4 = (this->InvocationList).ArrayNum;
        pFVar5 = (this->InvocationList).AllocatorInstance.Data;
        pFVar6 = pFVar5 + (longlong)iVar4 * 0x10;
        goto LAB_147b1f3e0;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar4);
  }
LAB_147b1f440:
                    /* WARNING: Could not recover jumptable at 0x000147b1f44d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DelegatesLock);
  return;
LAB_147b1f3e0:
  if ((this->InvocationList).ArrayNum != iVar4) {
    `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
    operator!='::__l2::<lambda_1>::operator()(local_res10);
  }
  if (pFVar5 == pFVar6) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    FEngineShowFlags::SetSingleFlag(&ObservedFlags,uVar7,false);
    goto LAB_147b1f440;
  }
  if ((*(int *)(pFVar5 + 8) != 0) && (*(longlong *)pFVar5 != 0)) goto LAB_147b1f407;
  pFVar5 = pFVar5 + 0x10;
  goto LAB_147b1f3e0;
LAB_147b1f407:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  goto LAB_147b1f440;
}

