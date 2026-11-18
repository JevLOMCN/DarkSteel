// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 10

// StaticClass @ 14eb230d0

UClass * __cdecl UNamedInterfaces::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamedInterfaces.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystem",L"NamedInterfaces",
               &Z_Registration_Info_UClass_UNamedInterfaces.InnerSingleton,
               StaticRegisterNativesUNamedInterfaces,0x68,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNamedInterfaces>,
               InternalVTableHelperCtorCaller<UNamedInterfaces>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamedInterfaces.InnerSingleton;
}

// UNamedInterfaces @ 14eb316e0

UNamedInterfaces * __thiscall
UNamedInterfaces::UNamedInterfaces(UNamedInterfaces *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNamedInterfaces__6B_;
  (this->NamedInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamedInterfaces).ArrayNum = 0;
  (this->NamedInterfaces).ArrayMax = 0;
  (this->NamedInterfaceDefs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamedInterfaceDefs).ArrayNum = 0;
  (this->NamedInterfaceDefs).ArrayMax = 0;
  *(undefined8 *)&this->CleanupDelegates = 0;
  *(undefined8 *)&(this->CleanupDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->CleanupDelegates).field_0x10 = 0;
  *(undefined8 *)&(this->CleanupDelegates).field_0x18 = 2;
  return this;
}

// UNamedInterfaces @ 14eb31730

UNamedInterfaces * __thiscall
UNamedInterfaces::UNamedInterfaces(UNamedInterfaces *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNamedInterfaces__6B_;
  (this->NamedInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamedInterfaces).ArrayNum = 0;
  (this->NamedInterfaces).ArrayMax = 0;
  (this->NamedInterfaceDefs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NamedInterfaceDefs).ArrayNum = 0;
  (this->NamedInterfaceDefs).ArrayMax = 0;
  *(undefined8 *)&this->CleanupDelegates = 0;
  *(undefined8 *)&(this->CleanupDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->CleanupDelegates).field_0x10 = 0;
  *(undefined8 *)&(this->CleanupDelegates).field_0x18 = 2;
  return this;
}

// ~UNamedInterfaces @ 14eb35a20

void __thiscall UNamedInterfaces::~UNamedInterfaces(UNamedInterfaces *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNamedInterfaces__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->CleanupDelegates).field_0x8,*(int *)&(this->CleanupDelegates).field_0x10);
  pvVar1 = *(void **)&(this->CleanupDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CleanupDelegates);
  DestructItems<FNamedInterfaceDef,int>
            ((FNamedInterfaceDef *)(this->NamedInterfaceDefs).AllocatorInstance.Data,
             (this->NamedInterfaceDefs).ArrayNum);
  pFVar2 = (this->NamedInterfaceDefs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NamedInterfaces).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14ebb8310

void __thiscall UNamedInterfaces::BeginDestroy(UNamedInterfaces *this)

{
  if ((this->_padding_ & 0x10) == 0) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->CleanupDelegates);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// GetNamedInterface @ 14ec00b10

UObject * __thiscall UNamedInterfaces::GetNamedInterface(UNamedInterfaces *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  FName *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->NamedInterfaces).ArrayNum;
  pFVar3 = (FName *)(this->NamedInterfaces).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 2;
  while( true ) {
    if ((this->NamedInterfaces).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNamedInterface_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*pFVar3 == param_1) {
      return (UObject *)pFVar3[1];
    }
    pFVar3 = pFVar3 + 2;
  }
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 14ec02880

UClass * __cdecl UNamedInterfaces::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNamedInterfaces.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystem",L"NamedInterfaces",
               &Z_Registration_Info_UClass_UNamedInterfaces.InnerSingleton,
               StaticRegisterNativesUNamedInterfaces,0x68,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNamedInterfaces>,
               InternalVTableHelperCtorCaller<UNamedInterfaces>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNamedInterfaces.InnerSingleton;
}

// Initialize @ 14ec09960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNamedInterfaces::Initialize(UNamedInterfaces *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  size_t sVar8;
  UClass *pUVar9;
  UPackage *pUVar10;
  UClass *pUVar11;
  FName FVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  FName *this_00;
  uint uVar15;
  FName *pFVar16;
  undefined1 auStackY_178 [32];
  longlong local_140;
  FName local_138;
  undefined4 uStack_12c;
  FString local_128;
  FString local_118;
  wchar_t *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar15 = 0;
  if (0 < (this->NamedInterfaceDefs).ArrayNum) {
    local_140 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar15 < (this->NamedInterfaceDefs).ArrayNum) {
        uVar6 = ~uVar15 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = (FName *)((this->NamedInterfaceDefs).AllocatorInstance.Data + local_140);
      local_108 = (wchar_t *)0x0;
      iStack_100 = 0;
      if (this_00[2].ComparisonIndex.Value == 0) {
        local_138 = (FName)0x15060d16c;
LAB_14ec09a2c:
        sVar8 = wcslen((wchar_t *)local_138);
        iVar5 = (int)sVar8;
      }
      else {
        local_138 = this_00[1];
        iVar5 = 0;
        if (local_138 != (FName)0x0) goto LAB_14ec09a2c;
      }
      pUVar9 = Z_Construct_UClass_UObject_NoRegister();
      local_f8._12_4_ = uStack_fc;
      local_f8.Size = iStack_100;
      local_e8._12_4_ = uStack_12c;
      local_e8.Size = iVar5;
      local_f8.DataPtr = local_108;
      local_e8.DataPtr = (wchar_t *)local_138;
      pUVar9 = StaticLoadClass(pUVar9,(UObject *)0x0,&local_e8,&local_f8,0,(UPackageMap *)0x0);
      if (pUVar9 == (UClass *)0x0) {
        if (2 < (byte)LogOnline._0_1_) {
          ::FName::ToString(this_00,&local_c8);
          ::FString::PrintfImpl(&local_118,L"Failed to load class (%s) for named interface (%s)");
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          FVar14.Data = local_c8.Data.AllocatorInstance.Data;
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
            FVar14.Data = local_c8.Data.AllocatorInstance.Data;
          }
          goto LAB_14ec09cc5;
        }
      }
      else {
        uVar6 = (this->NamedInterfaces).ArrayNum;
        piVar1 = &(this->NamedInterfaces).ArrayMax;
        if (uVar6 == *piVar1) {
          uVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->NamedInterfaces).AllocatorInstance,piVar1);
        }
        (this->NamedInterfaces).ArrayNum = uVar6 + 1;
        pFVar2 = (this->NamedInterfaces).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
        *(undefined8 *)pFVar2 = 0;
        *(undefined8 *)(pFVar2 + 8) = 0;
        uVar7 = 0;
        if ((int)uVar6 < (this->NamedInterfaces).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar16 = (FName *)((this->NamedInterfaces).AllocatorInstance.Data +
                           (longlong)(int)uVar6 * 0x10);
        *pFVar16 = *this_00;
        pUVar10 = GetTransientPackage();
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar10,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar11 = Z_Construct_UClass_UObject_NoRegister();
        CheckIsClassChildOf_Internal(pUVar11,pUVar9);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar9);
        local_b8._16_4_ = 0;
        local_b8._20_4_ = 0;
        local_b8._24_4_ = RF_NoFlags;
        local_b8._40_8_ = (UObject *)0x0;
        local_b8[0x20] = false;
        local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_b8._56_8_ = (UPackage *)0x0;
        local_b8._8_8_ = pUVar10;
        FVar12 = (FName)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8)
        ;
        if (local_b8._64_8_ != 0) {
          plVar13 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar13 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar12 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar12);
        }
        pFVar16[1] = FVar12;
        if (3 < (byte)LogOnline._0_1_) {
          ::FName::ToString(this_00,&local_d8);
          ::FString::PrintfImpl(&local_128,L"Created named interface (%s) of type (%s)");
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
          FVar14.Data = local_d8.Data.AllocatorInstance.Data;
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
            FVar14.Data = local_d8.Data.AllocatorInstance.Data;
          }
LAB_14ec09cc5:
          if (FVar14.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar14.Data);
          }
        }
      }
      uVar15 = uVar15 + 1;
      local_140 = local_140 + 0x18;
    } while ((int)uVar15 < (this->NamedInterfaceDefs).ArrayNum);
  }
  return;
}

// SetNamedInterface @ 14ec12290

void __thiscall
UNamedInterfaces::SetNamedInterface(UNamedInterfaces *this,FName param_1,UObject *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->NamedInterfaces).ArrayNum) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->NamedInterfaces).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (*(FName *)((this->NamedInterfaces).AllocatorInstance.Data + lVar5) == param_1) break;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((int)uVar6 < (this->NamedInterfaces).ArrayNum);
  }
  uVar4 = (this->NamedInterfaces).ArrayNum;
  if ((int)uVar6 < (int)uVar4) {
    if ((int)uVar6 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->NamedInterfaces).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    *(UObject **)(pFVar1 + (longlong)(int)uVar6 * 0x10 + 8) = param_2;
  }
  else {
    if (uVar4 == (this->NamedInterfaces).ArrayMax) {
      uVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->NamedInterfaces).AllocatorInstance,
                         &(this->NamedInterfaces).ArrayMax);
      (this->NamedInterfaces).ArrayNum = uVar4;
    }
    lVar5 = (longlong)(int)uVar4;
    (this->NamedInterfaces).ArrayNum = uVar4 + 1;
    pFVar1 = (this->NamedInterfaces).AllocatorInstance.Data + lVar5 * 0x10;
    *(undefined8 *)pFVar1 = 0;
    *(undefined8 *)(pFVar1 + 8) = 0;
    uVar6 = 0;
    if ((int)uVar4 < (this->NamedInterfaces).ArrayNum) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->NamedInterfaces).AllocatorInstance.Data;
    *(FName *)(pFVar1 + lVar5 * 0x10) = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    *(UObject **)(pFVar1 + lVar5 * 0x10 + 8) = param_2;
  }
  return;
}

// StaticRegisterNativesUNamedInterfaces @ 14ec12f90

void __cdecl UNamedInterfaces::StaticRegisterNativesUNamedInterfaces(void)

{
  return;
}

