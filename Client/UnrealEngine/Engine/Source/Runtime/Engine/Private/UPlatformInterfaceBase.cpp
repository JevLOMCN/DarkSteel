// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticClass @ 147270910

UClass * __cdecl UPlatformInterfaceBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformInterfaceBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlatformInterfaceBase",
               &Z_Registration_Info_UClass_UPlatformInterfaceBase.InnerSingleton,
               StaticRegisterNativesUPlatformInterfaceBase,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlatformInterfaceBase>,
               InternalVTableHelperCtorCaller<UPlatformInterfaceBase>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformInterfaceBase.InnerSingleton;
}

// UPlatformInterfaceBase @ 147324c10

UPlatformInterfaceBase * __thiscall
UPlatformInterfaceBase::UPlatformInterfaceBase(UPlatformInterfaceBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPlatformInterfaceBase__6B_;
  (this->AllDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllDelegates).ArrayNum = 0;
  (this->AllDelegates).ArrayMax = 0;
  return this;
}

// ~UPlatformInterfaceBase @ 147325310

void __thiscall UPlatformInterfaceBase::~UPlatformInterfaceBase(UPlatformInterfaceBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPlatformInterfaceBase__6B_;
  DestructItems<FDelegateArray,int>
            ((FDelegateArray *)(this->AllDelegates).AllocatorInstance.Data,
             (this->AllDelegates).ArrayNum);
  pFVar1 = (this->AllDelegates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147327310

UClass * __cdecl UPlatformInterfaceBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformInterfaceBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlatformInterfaceBase",
               &Z_Registration_Info_UClass_UPlatformInterfaceBase.InnerSingleton,
               StaticRegisterNativesUPlatformInterfaceBase,0x38,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlatformInterfaceBase>,
               InternalVTableHelperCtorCaller<UPlatformInterfaceBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformInterfaceBase.InnerSingleton;
}

// StaticRegisterNativesUPlatformInterfaceBase @ 147328270

void __cdecl UPlatformInterfaceBase::StaticRegisterNativesUPlatformInterfaceBase(void)

{
  return;
}

// UPlatformInterfaceBase @ 14850fdf0

UPlatformInterfaceBase * __thiscall
UPlatformInterfaceBase::UPlatformInterfaceBase
          (UPlatformInterfaceBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPlatformInterfaceBase__6B_;
  (this->AllDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllDelegates).ArrayNum = 0;
  (this->AllDelegates).ArrayMax = 0;
  return this;
}

// AddDelegate @ 148515a60

void __thiscall
UPlatformInterfaceBase::AddDelegate
          (UPlatformInterfaceBase *this,int param_1,FPlatformInterfaceDelegate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  void *local_48;
  undefined8 local_40;
  FReadAccessScope local_38;
  
  iVar8 = 0;
  iVar4 = (this->AllDelegates).ArrayNum;
  if ((iVar4 < param_1 + 1) && (0 < (param_1 - iVar4) + 1)) {
    do {
      pFVar7 = (this->AllDelegates).AllocatorInstance.Data;
      local_48 = (void *)0x0;
      local_40 = 0;
      if ((pFVar7 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 <
          pFVar7 + (longlong)(this->AllDelegates).ArrayMax * 0x10)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = (this->AllDelegates).ArrayNum;
      if (iVar4 == (this->AllDelegates).ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->AllDelegates).AllocatorInstance,
                           &(this->AllDelegates).ArrayMax);
      }
      (this->AllDelegates).ArrayNum = iVar4 + 1;
      pFVar7 = (this->AllDelegates).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar7 = 0;
      *(void **)pFVar7 = local_48;
      local_48 = (void *)0x0;
      *(undefined4 *)(pFVar7 + 8) = (undefined4)local_40;
      *(undefined4 *)(pFVar7 + 0xc) = local_40._4_4_;
      local_40 = 0;
      DestructItems<FPlatformInterfaceDelegate,int>((FPlatformInterfaceDelegate *)0x0,0);
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (param_1 - (this->AllDelegates).ArrayNum) + 1);
  }
  uVar5 = 0;
  if (param_1 < (this->AllDelegates).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  iVar4 = TArray<FPlatformInterfaceDelegate,TSizedDefaultAllocator<32>_>::Find
                    ((TArray<FPlatformInterfaceDelegate,TSizedDefaultAllocator<32>_> *)
                     ((this->AllDelegates).AllocatorInstance.Data + (longlong)param_1 * 0x10),
                     param_2);
  if (iVar4 == -1) {
    uVar5 = 0;
    if (param_1 < (this->AllDelegates).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
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
    pFVar7 = (this->AllDelegates).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    if ((*(FPlatformInterfaceDelegate **)&pFVar7->field_0x0 <= param_2) &&
       (param_2 < *(FPlatformInterfaceDelegate **)&pFVar7->field_0x0 + *(int *)(pFVar7 + 0xc))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)&pFVar7[8].field_0x0;
    if (iVar4 == *(int *)(pFVar7 + 0xc)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 0xc));
    }
    lVar6 = (longlong)iVar4;
    *(int *)&pFVar7[8].field_0x0 = iVar4 + 1;
    lVar1 = *(longlong *)&pFVar7->field_0x0;
    *(undefined8 *)(lVar1 + lVar6 * 0x18) = 0;
    *(undefined8 *)(lVar1 + lVar6 * 0x18 + 8) = 0;
    *(undefined8 *)(lVar1 + lVar6 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_38);
    *(undefined8 *)(lVar1 + lVar6 * 0x18 + 8) = *(undefined8 *)&param_2->field_0x8;
    *(undefined8 *)(lVar1 + lVar6 * 0x18 + 0x10) = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// CallDelegates @ 14851a390

void __thiscall
UPlatformInterfaceBase::CallDelegates
          (UPlatformInterfaceBase *this,int param_1,FPlatformInterfaceDelegateResult *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FPlatformInterfaceDelegate *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UObject *this_00;
  UFunction *pUVar7;
  TScriptDelegate<FNotThreadSafeDelegateMode> *this_01;
  uint uVar8;
  longlong lVar9;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FReadAccessScope local_28;
  
  if (param_1 < (this->AllDelegates).ArrayNum) {
    if ((param_1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->AllDelegates).AllocatorInstance.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    iVar1 = *(int *)(pFVar2 + (longlong)param_1 * 0x10 + 8);
    pFVar3 = *(FPlatformInterfaceDelegate **)(pFVar2 + (longlong)param_1 * 0x10);
    local_30 = iVar1;
    if (iVar1 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar1,0,&local_38,iVar1,&local_2c);
      ConstructItems<FPlatformInterfaceDelegate,FPlatformInterfaceDelegate,int>
                (local_38.Data,pFVar3,iVar1);
    }
    uVar8 = 0;
    if (0 < local_30) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < local_30) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_01 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)(local_38.Data + lVar9);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_28);
        if ((this_01->FunctionName == (FName)0x0) ||
           (this_00 = FWeakObjectPtr::Get(&this_01->Object), this_00 == (UObject *)0x0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_28);
        }
        else {
          pUVar7 = UObject::FindFunction(this_00,this_01->FunctionName);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_28);
          if (pUVar7 != (UFunction *)0x0) {
            FPlatformInterfaceDelegate_DelegateWrapper(this_01,param_2);
          }
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x18;
      } while ((int)uVar8 < local_30);
    }
    DestructItems<FPlatformInterfaceDelegate,int>
              ((FPlatformInterfaceDelegate *)local_38.Data,local_30);
    if ((FPlatformInterfaceDelegate *)local_38.Data != (FPlatformInterfaceDelegate *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return;
}

// ClearDelegate @ 14851abb0

void __thiscall
UPlatformInterfaceBase::ClearDelegate
          (UPlatformInterfaceBase *this,int param_1,FPlatformInterfaceDelegate *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  TArray<FPlatformInterfaceDelegate,TSizedDefaultAllocator<32>_> *this_00;
  
  if (param_1 < (this->AllDelegates).ArrayNum) {
    if ((param_1 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = TArray<FPlatformInterfaceDelegate,TSizedDefaultAllocator<32>_>::Find
                      ((TArray<FPlatformInterfaceDelegate,TSizedDefaultAllocator<32>_> *)
                       ((this->AllDelegates).AllocatorInstance.Data + (longlong)param_1 * 0x10),
                       param_2);
    if (uVar3 != 0xffffffff) {
      uVar4 = 0;
      if (param_1 < (this->AllDelegates).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (TArray<FPlatformInterfaceDelegate,TSizedDefaultAllocator<32>_> *)
                ((this->AllDelegates).AllocatorInstance.Data + (longlong)param_1 * 0x10);
      uVar4 = 0;
      if ((int)(uVar3 + 1) <= this_00->ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      TArray<FPlatformInterfaceDelegate,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar3,1);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(ForAnyElementType *)this_00,this_00->ArrayNum,&this_00->ArrayMax);
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// GetCloudStorageInterface @ 148529340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCloudStorageBase * __thiscall
UPlatformInterfaceBase::GetCloudStorageInterface(UPlatformInterfaceBase *this)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UCloudStorageBase *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_128 [32];
  FString FStack_f8;
  undefined8 uStack_e8;
  FScriptContainerElement *pFStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *pwStack_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> TStack_b8;
  TStringView<wchar_t> TStack_a8;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (::Singleton != (UCloudStorageBase *)0x0) {
    return ::Singleton;
  }
  FStack_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_f8.Data.ArrayNum = 0;
  FStack_f8.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"PlatformInterface",L"CloudStorageInterfaceClassName",&FStack_f8,&GEngineIni);
  pwStack_c8 = (wchar_t *)0x0;
  iStack_d0 = 0;
  iStack_c0 = 0;
  if (FStack_f8.Data.ArrayNum == 0) {
    pFStack_d8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    pFStack_d8 = FStack_f8.Data.AllocatorInstance.Data;
    if (FStack_f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1485293f6;
  }
  sVar3 = wcslen((wchar_t *)pFStack_d8);
  iStack_d0 = (int)sVar3;
LAB_1485293f6:
  pUVar4 = Z_Construct_UClass_UCloudStorageBase_NoRegister();
  TStack_b8._12_4_ = uStack_bc;
  TStack_b8.Size = iStack_c0;
  TStack_a8._12_4_ = uStack_cc;
  TStack_a8.Size = iStack_d0;
  TStack_b8.DataPtr = pwStack_c8;
  TStack_a8.DataPtr = (wchar_t *)pFStack_d8;
  pUVar4 = StaticLoadClass(pUVar4,(UObject *)0x0,&TStack_a8,&TStack_b8,0,(UPackageMap *)0x0);
  if (pUVar4 == (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UCloudStorageBase_NoRegister();
  }
  uStack_e8 = 0;
  pUVar5 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UCloudStorageBase_NoRegister();
  CheckIsClassChildOf_Internal(pUVar6,pUVar4);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)auStack_98,pUVar4);
  auStack_98._48_8_ = (FObjectInstancingGraph *)0x0;
  auStack_98._56_8_ = (UPackage *)0x0;
  auStack_98._16_4_ = 0;
  auStack_98._20_4_ = 0;
  auStack_98._24_4_ = RF_NoFlags;
  auStack_98._40_8_ = (UObject *)0x0;
  auStack_98[0x20] = false;
  auStack_98._8_8_ = pUVar5;
  pUVar7 = (UCloudStorageBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
  if (auStack_98._64_8_ != 0) {
    plVar8 = (longlong *)(auStack_98 + 0x50);
    if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)auStack_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  ::Singleton = pUVar7;
  if ((pUVar7 == (UCloudStorageBase *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ScriptPlatformInterface.cpp"
                         ,0xab,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UCloudStorageBase *)(*pcVar1)();
    return pUVar7;
  }
  (**(code **)(::Singleton->_padding_ + 0x2c0))(::Singleton);
  if (FStack_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f8.Data.AllocatorInstance.Data);
  }
  return ::Singleton;
}

// GetCloudStorageInterfaceSingleton @ 148529350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCloudStorageBase * __cdecl UPlatformInterfaceBase::GetCloudStorageInterfaceSingleton(void)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UCloudStorageBase *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_128 [32];
  FString local_f8;
  undefined8 local_e8;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (::Singleton != (UCloudStorageBase *)0x0) {
    return ::Singleton;
  }
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"PlatformInterface",L"CloudStorageInterfaceClassName",&local_f8,&GEngineIni);
  local_c8 = (wchar_t *)0x0;
  iStack_d0 = 0;
  iStack_c0 = 0;
  if (local_f8.Data.ArrayNum == 0) {
    local_d8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_d8 = local_f8.Data.AllocatorInstance.Data;
    if (local_f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1485293f6;
  }
  sVar3 = wcslen((wchar_t *)local_d8);
  iStack_d0 = (int)sVar3;
LAB_1485293f6:
  pUVar4 = Z_Construct_UClass_UCloudStorageBase_NoRegister();
  local_b8._12_4_ = uStack_bc;
  local_b8.Size = iStack_c0;
  local_a8._12_4_ = uStack_cc;
  local_a8.Size = iStack_d0;
  local_b8.DataPtr = local_c8;
  local_a8.DataPtr = (wchar_t *)local_d8;
  pUVar4 = StaticLoadClass(pUVar4,(UObject *)0x0,&local_a8,&local_b8,0,(UPackageMap *)0x0);
  if (pUVar4 == (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UCloudStorageBase_NoRegister();
  }
  local_e8 = 0;
  pUVar5 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UCloudStorageBase_NoRegister();
  CheckIsClassChildOf_Internal(pUVar6,pUVar4);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar5;
  pUVar7 = (UCloudStorageBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  ::Singleton = pUVar7;
  if ((pUVar7 == (UCloudStorageBase *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ScriptPlatformInterface.cpp"
                         ,0xab,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UCloudStorageBase *)(*pcVar1)();
    return pUVar7;
  }
  (**(code **)(::Singleton->_padding_ + 0x2c0))(::Singleton);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return ::Singleton;
}

// GetInGameAdManager @ 14852b2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInGameAdManager * __thiscall
UPlatformInterfaceBase::GetInGameAdManager(UPlatformInterfaceBase *this)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UInGameAdManager *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_128 [32];
  FString FStack_f8;
  undefined8 uStack_e8;
  FScriptContainerElement *pFStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *pwStack_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> TStack_b8;
  TStringView<wchar_t> TStack_a8;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (::Singleton != (UInGameAdManager *)0x0) {
    return ::Singleton;
  }
  FStack_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_f8.Data.ArrayNum = 0;
  FStack_f8.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"PlatformInterface",L"InGameAdManagerClassName",&FStack_f8,&GEngineIni);
  pwStack_c8 = (wchar_t *)0x0;
  iStack_d0 = 0;
  iStack_c0 = 0;
  if (FStack_f8.Data.ArrayNum == 0) {
    pFStack_d8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    pFStack_d8 = FStack_f8.Data.AllocatorInstance.Data;
    if (FStack_f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14852b366;
  }
  sVar3 = wcslen((wchar_t *)pFStack_d8);
  iStack_d0 = (int)sVar3;
LAB_14852b366:
  pUVar4 = Z_Construct_UClass_UInGameAdManager_NoRegister();
  TStack_b8._12_4_ = uStack_bc;
  TStack_b8.Size = iStack_c0;
  TStack_a8._12_4_ = uStack_cc;
  TStack_a8.Size = iStack_d0;
  TStack_b8.DataPtr = pwStack_c8;
  TStack_a8.DataPtr = (wchar_t *)pFStack_d8;
  pUVar4 = StaticLoadClass(pUVar4,(UObject *)0x0,&TStack_a8,&TStack_b8,0,(UPackageMap *)0x0);
  if (pUVar4 == (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UInGameAdManager_NoRegister();
  }
  uStack_e8 = 0;
  pUVar5 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UInGameAdManager_NoRegister();
  CheckIsClassChildOf_Internal(pUVar6,pUVar4);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)auStack_98,pUVar4);
  auStack_98._48_8_ = (FObjectInstancingGraph *)0x0;
  auStack_98._56_8_ = (UPackage *)0x0;
  auStack_98._16_4_ = 0;
  auStack_98._20_4_ = 0;
  auStack_98._24_4_ = RF_NoFlags;
  auStack_98._40_8_ = (UObject *)0x0;
  auStack_98[0x20] = false;
  auStack_98._8_8_ = pUVar5;
  pUVar7 = (UInGameAdManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
  if (auStack_98._64_8_ != 0) {
    plVar8 = (longlong *)(auStack_98 + 0x50);
    if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)auStack_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  ::Singleton = pUVar7;
  if ((pUVar7 == (UInGameAdManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ScriptPlatformInterface.cpp"
                         ,0xac,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UInGameAdManager *)(*pcVar1)();
    return pUVar7;
  }
  (**(code **)(::Singleton->_padding_ + 0x2c0))(::Singleton);
  if (FStack_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f8.Data.AllocatorInstance.Data);
  }
  return ::Singleton;
}

// GetInGameAdManagerSingleton @ 14852b2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInGameAdManager * __cdecl UPlatformInterfaceBase::GetInGameAdManagerSingleton(void)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UInGameAdManager *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_128 [32];
  FString local_f8;
  undefined8 local_e8;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (::Singleton != (UInGameAdManager *)0x0) {
    return ::Singleton;
  }
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"PlatformInterface",L"InGameAdManagerClassName",&local_f8,&GEngineIni);
  local_c8 = (wchar_t *)0x0;
  iStack_d0 = 0;
  iStack_c0 = 0;
  if (local_f8.Data.ArrayNum == 0) {
    local_d8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_d8 = local_f8.Data.AllocatorInstance.Data;
    if (local_f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14852b366;
  }
  sVar3 = wcslen((wchar_t *)local_d8);
  iStack_d0 = (int)sVar3;
LAB_14852b366:
  pUVar4 = Z_Construct_UClass_UInGameAdManager_NoRegister();
  local_b8._12_4_ = uStack_bc;
  local_b8.Size = iStack_c0;
  local_a8._12_4_ = uStack_cc;
  local_a8.Size = iStack_d0;
  local_b8.DataPtr = local_c8;
  local_a8.DataPtr = (wchar_t *)local_d8;
  pUVar4 = StaticLoadClass(pUVar4,(UObject *)0x0,&local_a8,&local_b8,0,(UPackageMap *)0x0);
  if (pUVar4 == (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UInGameAdManager_NoRegister();
  }
  local_e8 = 0;
  pUVar5 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UInGameAdManager_NoRegister();
  CheckIsClassChildOf_Internal(pUVar6,pUVar4);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar5;
  pUVar7 = (UInGameAdManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  ::Singleton = pUVar7;
  if ((pUVar7 == (UInGameAdManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ScriptPlatformInterface.cpp"
                         ,0xac,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UInGameAdManager *)(*pcVar1)();
    return pUVar7;
  }
  (**(code **)(::Singleton->_padding_ + 0x2c0))(::Singleton);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return ::Singleton;
}

// GetMicroTransactionInterface @ 14852b850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMicroTransactionBase * __thiscall
UPlatformInterfaceBase::GetMicroTransactionInterface(UPlatformInterfaceBase *this)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UMicroTransactionBase *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_128 [32];
  FString FStack_f8;
  undefined8 uStack_e8;
  FScriptContainerElement *pFStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *pwStack_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> TStack_b8;
  TStringView<wchar_t> TStack_a8;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (::Singleton != (UMicroTransactionBase *)0x0) {
    return ::Singleton;
  }
  FStack_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_f8.Data.ArrayNum = 0;
  FStack_f8.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"PlatformInterface",L"MicroTransactionInterfaceClassName",&FStack_f8,
             &GEngineIni);
  pwStack_c8 = (wchar_t *)0x0;
  iStack_d0 = 0;
  iStack_c0 = 0;
  if (FStack_f8.Data.ArrayNum == 0) {
    pFStack_d8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    pFStack_d8 = FStack_f8.Data.AllocatorInstance.Data;
    if (FStack_f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14852b906;
  }
  sVar3 = wcslen((wchar_t *)pFStack_d8);
  iStack_d0 = (int)sVar3;
LAB_14852b906:
  pUVar4 = Z_Construct_UClass_UMicroTransactionBase_NoRegister();
  TStack_b8._12_4_ = uStack_bc;
  TStack_b8.Size = iStack_c0;
  TStack_a8._12_4_ = uStack_cc;
  TStack_a8.Size = iStack_d0;
  TStack_b8.DataPtr = pwStack_c8;
  TStack_a8.DataPtr = (wchar_t *)pFStack_d8;
  pUVar4 = StaticLoadClass(pUVar4,(UObject *)0x0,&TStack_a8,&TStack_b8,0,(UPackageMap *)0x0);
  if (pUVar4 == (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UMicroTransactionBase_NoRegister();
  }
  uStack_e8 = 0;
  pUVar5 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UMicroTransactionBase_NoRegister();
  CheckIsClassChildOf_Internal(pUVar6,pUVar4);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)auStack_98,pUVar4);
  auStack_98._48_8_ = (FObjectInstancingGraph *)0x0;
  auStack_98._56_8_ = (UPackage *)0x0;
  auStack_98._16_4_ = 0;
  auStack_98._20_4_ = 0;
  auStack_98._24_4_ = RF_NoFlags;
  auStack_98._40_8_ = (UObject *)0x0;
  auStack_98[0x20] = false;
  auStack_98._8_8_ = pUVar5;
  pUVar7 = (UMicroTransactionBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
  if (auStack_98._64_8_ != 0) {
    plVar8 = (longlong *)(auStack_98 + 0x50);
    if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)auStack_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  ::Singleton = pUVar7;
  if ((pUVar7 == (UMicroTransactionBase *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ScriptPlatformInterface.cpp"
                         ,0xad,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UMicroTransactionBase *)(*pcVar1)();
    return pUVar7;
  }
  (**(code **)(::Singleton->_padding_ + 0x2c0))(::Singleton);
  if (FStack_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f8.Data.AllocatorInstance.Data);
  }
  return ::Singleton;
}

// GetMicroTransactionInterfaceSingleton @ 14852b860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMicroTransactionBase * __cdecl UPlatformInterfaceBase::GetMicroTransactionInterfaceSingleton(void)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UMicroTransactionBase *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_128 [32];
  FString local_f8;
  undefined8 local_e8;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (::Singleton != (UMicroTransactionBase *)0x0) {
    return ::Singleton;
  }
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"PlatformInterface",L"MicroTransactionInterfaceClassName",&local_f8,
             &GEngineIni);
  local_c8 = (wchar_t *)0x0;
  iStack_d0 = 0;
  iStack_c0 = 0;
  if (local_f8.Data.ArrayNum == 0) {
    local_d8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_d8 = local_f8.Data.AllocatorInstance.Data;
    if (local_f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14852b906;
  }
  sVar3 = wcslen((wchar_t *)local_d8);
  iStack_d0 = (int)sVar3;
LAB_14852b906:
  pUVar4 = Z_Construct_UClass_UMicroTransactionBase_NoRegister();
  local_b8._12_4_ = uStack_bc;
  local_b8.Size = iStack_c0;
  local_a8._12_4_ = uStack_cc;
  local_a8.Size = iStack_d0;
  local_b8.DataPtr = local_c8;
  local_a8.DataPtr = (wchar_t *)local_d8;
  pUVar4 = StaticLoadClass(pUVar4,(UObject *)0x0,&local_a8,&local_b8,0,(UPackageMap *)0x0);
  if (pUVar4 == (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UMicroTransactionBase_NoRegister();
  }
  local_e8 = 0;
  pUVar5 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UMicroTransactionBase_NoRegister();
  CheckIsClassChildOf_Internal(pUVar6,pUVar4);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar5;
  pUVar7 = (UMicroTransactionBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  ::Singleton = pUVar7;
  if ((pUVar7 == (UMicroTransactionBase *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ScriptPlatformInterface.cpp"
                         ,0xad,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UMicroTransactionBase *)(*pcVar1)();
    return pUVar7;
  }
  (**(code **)(::Singleton->_padding_ + 0x2c0))(::Singleton);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return ::Singleton;
}

// GetTwitterIntegration @ 14852f080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTwitterIntegrationBase * __thiscall
UPlatformInterfaceBase::GetTwitterIntegration(UPlatformInterfaceBase *this)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UTwitterIntegrationBase *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_128 [32];
  FString FStack_f8;
  undefined8 uStack_e8;
  FScriptContainerElement *pFStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *pwStack_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> TStack_b8;
  TStringView<wchar_t> TStack_a8;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (::Singleton != (UTwitterIntegrationBase *)0x0) {
    return ::Singleton;
  }
  FStack_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_f8.Data.ArrayNum = 0;
  FStack_f8.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"PlatformInterface",L"TwitterIntegrationClassName",&FStack_f8,&GEngineIni);
  pwStack_c8 = (wchar_t *)0x0;
  iStack_d0 = 0;
  iStack_c0 = 0;
  if (FStack_f8.Data.ArrayNum == 0) {
    pFStack_d8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    pFStack_d8 = FStack_f8.Data.AllocatorInstance.Data;
    if (FStack_f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14852f136;
  }
  sVar3 = wcslen((wchar_t *)pFStack_d8);
  iStack_d0 = (int)sVar3;
LAB_14852f136:
  pUVar4 = Z_Construct_UClass_UTwitterIntegrationBase_NoRegister();
  TStack_b8._12_4_ = uStack_bc;
  TStack_b8.Size = iStack_c0;
  TStack_a8._12_4_ = uStack_cc;
  TStack_a8.Size = iStack_d0;
  TStack_b8.DataPtr = pwStack_c8;
  TStack_a8.DataPtr = (wchar_t *)pFStack_d8;
  pUVar4 = StaticLoadClass(pUVar4,(UObject *)0x0,&TStack_a8,&TStack_b8,0,(UPackageMap *)0x0);
  if (pUVar4 == (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UTwitterIntegrationBase_NoRegister();
  }
  uStack_e8 = 0;
  pUVar5 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UTwitterIntegrationBase_NoRegister();
  CheckIsClassChildOf_Internal(pUVar6,pUVar4);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)auStack_98,pUVar4);
  auStack_98._48_8_ = (FObjectInstancingGraph *)0x0;
  auStack_98._56_8_ = (UPackage *)0x0;
  auStack_98._16_4_ = 0;
  auStack_98._20_4_ = 0;
  auStack_98._24_4_ = RF_NoFlags;
  auStack_98._40_8_ = (UObject *)0x0;
  auStack_98[0x20] = false;
  auStack_98._8_8_ = pUVar5;
  pUVar7 = (UTwitterIntegrationBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
  if (auStack_98._64_8_ != 0) {
    plVar8 = (longlong *)(auStack_98 + 0x50);
    if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)auStack_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  ::Singleton = pUVar7;
  if ((pUVar7 == (UTwitterIntegrationBase *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ScriptPlatformInterface.cpp"
                         ,0xae,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UTwitterIntegrationBase *)(*pcVar1)();
    return pUVar7;
  }
  (**(code **)(*(longlong *)::Singleton + 0x2c0))(::Singleton);
  if (FStack_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f8.Data.AllocatorInstance.Data);
  }
  return ::Singleton;
}

// GetTwitterIntegrationSingleton @ 14852f090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTwitterIntegrationBase * __cdecl UPlatformInterfaceBase::GetTwitterIntegrationSingleton(void)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  UClass *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UTwitterIntegrationBase *pUVar7;
  longlong *plVar8;
  undefined1 auStackY_128 [32];
  FString local_f8;
  undefined8 local_e8;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (::Singleton != (UTwitterIntegrationBase *)0x0) {
    return ::Singleton;
  }
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  FConfigCacheIni::GetString
            (GConfig,L"PlatformInterface",L"TwitterIntegrationClassName",&local_f8,&GEngineIni);
  local_c8 = (wchar_t *)0x0;
  iStack_d0 = 0;
  iStack_c0 = 0;
  if (local_f8.Data.ArrayNum == 0) {
    local_d8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_d8 = local_f8.Data.AllocatorInstance.Data;
    if (local_f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14852f136;
  }
  sVar3 = wcslen((wchar_t *)local_d8);
  iStack_d0 = (int)sVar3;
LAB_14852f136:
  pUVar4 = Z_Construct_UClass_UTwitterIntegrationBase_NoRegister();
  local_b8._12_4_ = uStack_bc;
  local_b8.Size = iStack_c0;
  local_a8._12_4_ = uStack_cc;
  local_a8.Size = iStack_d0;
  local_b8.DataPtr = local_c8;
  local_a8.DataPtr = (wchar_t *)local_d8;
  pUVar4 = StaticLoadClass(pUVar4,(UObject *)0x0,&local_a8,&local_b8,0,(UPackageMap *)0x0);
  if (pUVar4 == (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UTwitterIntegrationBase_NoRegister();
  }
  local_e8 = 0;
  pUVar5 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UTwitterIntegrationBase_NoRegister();
  CheckIsClassChildOf_Internal(pUVar6,pUVar4);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar5;
  pUVar7 = (UTwitterIntegrationBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar8 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  ::Singleton = pUVar7;
  if ((pUVar7 == (UTwitterIntegrationBase *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ScriptPlatformInterface.cpp"
                         ,0xae,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UTwitterIntegrationBase *)(*pcVar1)();
    return pUVar7;
  }
  (**(code **)(*(longlong *)::Singleton + 0x2c0))(::Singleton);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return ::Singleton;
}

// HasDelegates @ 14852f650

bool __thiscall UPlatformInterfaceBase::HasDelegates(UPlatformInterfaceBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->AllDelegates).ArrayNum <= param_1) {
    return false;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return 0 < *(int *)((this->AllDelegates).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8);
}

// StaticExec @ 148547050

bool __cdecl UPlatformInterfaceBase::StaticExec(wchar_t *param_1,FOutputDevice *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UInGameAdManager *pUVar4;
  wchar_t *local_res8;
  
  local_res8 = param_1;
  bVar2 = FParse::Command(&local_res8,L"Ad",true);
  if (!bVar2) {
    return false;
  }
  pUVar4 = GetInGameAdManagerSingleton();
  bVar2 = FParse::Command(&local_res8,L"Show",true);
  if (bVar2) {
    pcVar1 = *(code **)(pUVar4->_padding_ + 0x2c8);
    iVar3 = _wtoi(local_res8);
    (*pcVar1)(pUVar4,iVar3 != 0);
    return true;
  }
  bVar2 = FParse::Command(&local_res8,L"Hide",true);
  if (bVar2) {
    (**(code **)(pUVar4->_padding_ + 0x2d0))(pUVar4);
    return true;
  }
  bVar2 = FParse::Command(&local_res8,L"Close",true);
  if (bVar2) {
    (**(code **)(pUVar4->_padding_ + 0x2d8))(pUVar4);
  }
  return true;
}

