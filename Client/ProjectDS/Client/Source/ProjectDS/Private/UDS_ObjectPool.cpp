// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b546f00

UClass * __cdecl UDS_ObjectPool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ObjectPool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ObjectPool",
               &Z_Registration_Info_UClass_UDS_ObjectPool.InnerSingleton,
               StaticRegisterNativesUDS_ObjectPool,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ObjectPool>,InternalVTableHelperCtorCaller<UDS_ObjectPool>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ObjectPool.InnerSingleton;
}

// UDS_ObjectPool @ 14b54b020

UDS_ObjectPool * __thiscall
UDS_ObjectPool::UDS_ObjectPool(UDS_ObjectPool *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ObjectPool__6B_;
  (this->ItemClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->UsedItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedItems).ArrayNum = 0;
  (this->UsedItems).ArrayMax = 0;
  (this->PoolItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoolItems).ArrayNum = 0;
  (this->PoolItems).ArrayMax = 0;
  return this;
}

// UDS_ObjectPool @ 14b54b060

UDS_ObjectPool * __thiscall
UDS_ObjectPool::UDS_ObjectPool(UDS_ObjectPool *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ObjectPool__6B_;
  (this->ItemClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->UsedItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedItems).ArrayNum = 0;
  (this->UsedItems).ArrayMax = 0;
  (this->PoolItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoolItems).ArrayNum = 0;
  (this->PoolItems).ArrayMax = 0;
  return this;
}

// ~UDS_ObjectPool @ 14b54b960

void __thiscall UDS_ObjectPool::~UDS_ObjectPool(UDS_ObjectPool *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_ObjectPool__6B_;
  pFVar1 = (this->PoolItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UsedItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b54d0f0

UClass * __cdecl UDS_ObjectPool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ObjectPool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ObjectPool",
               &Z_Registration_Info_UClass_UDS_ObjectPool.InnerSingleton,
               StaticRegisterNativesUDS_ObjectPool,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ObjectPool>,InternalVTableHelperCtorCaller<UDS_ObjectPool>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ObjectPool.InnerSingleton;
}

// StaticRegisterNativesUDS_ObjectPool @ 14b54d800

void __cdecl UDS_ObjectPool::StaticRegisterNativesUDS_ObjectPool(void)

{
  return;
}

// GetItemList<UDS_M_ItemImplBase> @ 14bcdb0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ObjectPool::GetItemList<UDS_M_ItemImplBase>
          (UDS_ObjectPool *this,
          TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  atomic<unsigned_char> *paVar10;
  UObject *pUVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2b8 [8];
  FWeakObjectPtr local_2b0;
  UObject *local_2a8;
  FName local_2a0;
  FString local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pUVar8 = (this->ItemClass).field0_0x0.DebugPtr;
  if (pUVar8 == (UClass *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_ObjectPool::GetItemList",0x1b,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Error,local_288.Ptr,0xa8,
                 L"Pool is not initialized. Call InitPool() first.");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    iVar13 = 0xa9;
    paVar10 = &bGEnsureHasExecuted<_5169983817892495191>;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    if (pUVar7 != (UClass *)0x0) {
      iVar13 = (int)pUVar7->_padding_;
      if (((int)pUVar8->_padding_ < iVar13) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar13 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        uVar2 = (this->UsedItems).ArrayNum;
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        __return_storage_ptr__->ArrayNum = 0;
        if (*piVar1 < (int)uVar2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
        }
        iVar13 = (this->UsedItems).ArrayNum;
        pFVar12 = (this->UsedItems).AllocatorInstance.Data;
        pFVar14 = pFVar12 + (longlong)iVar13 * 0x10;
        do {
          if ((this->UsedItems).ArrayNum != iVar13) {
            `TCheckedPointerIterator<TScriptInterface<IDS_ObjectPoolItem>,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_2b8);
          }
          if (pFVar12 == pFVar14) {
            return __return_storage_ptr__;
          }
          pUVar11 = *(UObject **)pFVar12;
          if (pUVar11 == (UObject *)0x0) {
LAB_14bcdb288:
            pUVar11 = (UObject *)0x0;
          }
          else {
            pUVar8 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
            iVar5 = (int)pUVar8->_padding_;
            if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar5) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
                &pUVar8->_padding_)) goto LAB_14bcdb288;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar11);
          }
          local_2b0.ObjectIndex = 0;
          local_2b0.ObjectSerialNumber = 0;
          local_2a8 = pUVar11;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar11);
          }
          FWeakObjectPtr::operator=(&local_2b0,(FObjectPtr)&local_2a8);
          bVar4 = FWeakObjectPtr::IsValid(&local_2b0);
          if (bVar4) {
            iVar5 = __return_storage_ptr__->ArrayNum;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
            }
            __return_storage_ptr__->ArrayNum = iVar5 + 1;
            *(FWeakObjectPtr *)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_2b0;
          }
          pFVar12 = pFVar12 + 0x10;
        } while( true );
      }
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_2a0 = (FName)((this->ItemClass).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_2a0,&local_298);
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_ObjectPool::GetItemList",0x1b,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Error,local_168.Ptr,0xaf,L"ItemClass(%s) is not derived from ObjectType");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
    }
    iVar13 = 0xb0;
    paVar10 = &bGEnsureHasExecuted<_5169983817892495184>;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_ObjectPool.h",
                     iVar13,"false");
  if (!bVar4) {
    return __return_storage_ptr__;
  }
  pcVar3 = (code *)swi(3);
  pTVar9 = (TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
           (*pcVar3)();
  return pTVar9;
}

// PopItem<UDS_M_ItemImplBase> @ 14bcde6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UDS_M_ItemImplBase> __thiscall
UDS_ObjectPool::PopItem<UDS_M_ItemImplBase>(UDS_ObjectPool *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  TObjectPtr<UDS_M_ItemImplBase> TVar6;
  UClass *pUVar7;
  UObject *this_00;
  UObject *pUVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  longlong *plVar11;
  TObjectPtr<UDS_M_ItemImplBase>_u_0 in_RDX;
  UObject *pUVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_388 [32];
  FWeakObjectPtr local_348;
  undefined8 local_340;
  undefined8 local_338;
  UDS_ObjectPool *local_330;
  FName local_328;
  FString local_320;
  undefined1 local_308 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  pUVar10 = (this->ItemClass).field0_0x0.DebugPtr;
  if (pUVar10 == (UClass *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_ObjectPool::PopItem",0x17,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Error,local_288.Ptr,0x47,
                 L"Pool is not initialized. Call InitPool() first.");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5169983817892495288>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_ObjectPool.h",
                       0x48,"false");
    if (!bVar3) {
      (in_RDX.DebugPtr)->_padding_ = 0;
      return (TObjectPtr<UDS_M_ItemImplBase>)in_RDX.DebugPtr;
    }
    pcVar2 = (code *)swi(3);
    TVar6.field0_0x0 = (TObjectPtr<UDS_M_ItemImplBase>_u_0)(*pcVar2)();
    return (TObjectPtr<UDS_M_ItemImplBase>)TVar6.field0_0x0;
  }
  pUVar7 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
  if (pUVar7 == (UClass *)0x0) {
LAB_14bcdea8b:
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_328 = (FName)((this->ItemClass).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_328,&local_320);
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_ObjectPool::PopItem",0x17,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Error,local_168.Ptr,0x4e,L"ItemClass(%s) is not derived from ObjectType");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5169983817892495281>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_ObjectPool.h",
                       0x4f,"false");
    if (!bVar3) {
      (in_RDX.DebugPtr)->_padding_ = 0;
      return (TObjectPtr<UDS_M_ItemImplBase>)in_RDX;
    }
    pcVar2 = (code *)swi(3);
    TVar6.field0_0x0 = (TObjectPtr<UDS_M_ItemImplBase>_u_0)(*pcVar2)();
    return (TObjectPtr<UDS_M_ItemImplBase>)TVar6.field0_0x0;
  }
  iVar4 = (int)pUVar7->_padding_;
  if (((int)pUVar10->_padding_ < iVar4) ||
     ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar4 * 8) != &pUVar7->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_14bcdea8b;
  pUVar12 = (UObject *)0x0;
  if ((this->PoolItems).ArrayNum < 1) {
    pUVar10 = (this->ItemClass).field0_0x0.DebugPtr;
    local_340 = 0;
    local_338 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UObject_NoRegister();
    CheckIsClassChildOf_Internal(pUVar7,pUVar10);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_308,pUVar10);
    local_308._48_8_ = (FObjectInstancingGraph *)0x0;
    local_308._56_8_ = (UPackage *)0x0;
    local_308._16_4_ = 0;
    local_308._20_4_ = 0;
    local_308._24_4_ = RF_NoFlags;
    local_308._40_8_ = (UObject *)0x0;
    local_308[0x20] = false;
    local_308._8_8_ = this;
    this_00 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_308);
    if (local_308._64_8_ != 0) {
      plVar11 = (longlong *)(local_308 + 0x50);
      if ((longlong *)local_308._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_308._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    pUVar8 = pUVar12;
    if (this_00 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(this_00);
      }
      pUVar10 = Z_Construct_UClass_UDS_ObjectPoolItem_NoRegister();
      pUVar8 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar10);
    }
    pUVar9 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UObject *)0x0) goto LAB_14bcde987;
    }
    else if (this_00 == (UObject *)0x0) {
LAB_14bcde987:
      pUVar9 = pUVar12;
    }
    else {
      UE::GC::MarkAsReachable(this_00);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_348.ObjectIndex = 0;
    local_348.ObjectSerialNumber = 0;
    local_330 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_348,(FObjectPtr)&local_330);
    *(int *)&pUVar9->field_0x8 = local_348.ObjectIndex;
    *(int *)&pUVar9->field_0xc = local_348.ObjectSerialNumber;
  }
  else {
    if (((this->PoolItems).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar6.field0_0x0 = (TObjectPtr<UDS_M_ItemImplBase>_u_0)(*pcVar2)();
      return (TObjectPtr<UDS_M_ItemImplBase>)TVar6.field0_0x0;
    }
    iVar4 = (this->PoolItems).ArrayNum;
    pFVar13 = (this->PoolItems).AllocatorInstance.Data;
    this_00 = *(UObject **)(pFVar13 + (longlong)iVar4 * 0x10 + -0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(this_00);
    }
    pUVar8 = *(UObject **)(pFVar13 + (longlong)iVar4 * 0x10 + -8);
    piVar1 = &(this->PoolItems).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->PoolItems).AllocatorInstance,(this->PoolItems).ArrayNum,
               &(this->PoolItems).ArrayMax);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(this_00);
    }
  }
  piVar1 = &(this->UsedItems).ArrayMax;
  pUVar9 = pUVar8;
  if (this_00 == (UObject *)0x0) {
    pUVar9 = pUVar12;
  }
  pUVar9->field_0x10 = 1;
  iVar4 = (this->UsedItems).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->UsedItems).AllocatorInstance,piVar1);
  }
  pFVar13 = (this->UsedItems).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  (this->UsedItems).ArrayNum = iVar4 + 1;
  *(UObject **)pFVar13 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (UObject *)0x0)) {
    *(UObject **)(pFVar13 + 8) = pUVar8;
    if (this_00 != (UObject *)0x0) goto LAB_14bcdea36;
  }
  else {
    UE::GC::MarkAsReachable(this_00);
    *(UObject **)(pFVar13 + 8) = pUVar8;
LAB_14bcdea36:
    pUVar10 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar4 = (int)pUVar10->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar10->_padding_)) goto LAB_14bcdea5c;
  }
  this_00 = pUVar12;
LAB_14bcdea5c:
  (in_RDX.DebugPtr)->_padding_ = (longlong)this_00;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    return (TObjectPtr<UDS_M_ItemImplBase>)in_RDX.DebugPtr;
  }
  if (this_00 == (UObject *)0x0) {
    return (TObjectPtr<UDS_M_ItemImplBase>)in_RDX.DebugPtr;
  }
  UE::GC::MarkAsReachable(this_00);
  return (TObjectPtr<UDS_M_ItemImplBase>)in_RDX.DebugPtr;
}

// PushItemList<UDS_M_ItemImplBase> @ 14bcdebb0

void __thiscall
UDS_ObjectPool::PushItemList<UDS_M_ItemImplBase>
          (UDS_ObjectPool *this,
          TArray<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_1,bool param_2)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  FWeakObjectPtr *this_00;
  undefined1 local_res10 [8];
  UObject *local_38;
  undefined1 *puStack_30;
  
  iVar2 = param_1->ArrayNum;
  this_00 = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (this_00 == pFVar1) break;
    pUVar4 = FWeakObjectPtr::Get(this_00);
    local_38 = (UObject *)0x0;
    puStack_30 = (undefined1 *)0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    puStack_30 = &pUVar4[10].field_0x18;
    if (pUVar4 == (UObject *)0x0) {
      puStack_30 = (undefined1 *)0x0;
    }
    local_38 = pUVar4;
    PushItem(this,(TScriptInterface<IDS_ObjectPoolItem> *)&local_38,param_2);
    this_00 = this_00 + 1;
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// InitPool @ 14c08c320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ObjectPool::InitPool(UDS_ObjectPool *this,UClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UClass *pUVar4;
  undefined1 auStackY_298 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if (param_1 == (UClass *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_268._padding_ = (longlong)param_1;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_ObjectPool::InitPool",0x18,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Error,local_268.Ptr,0x16,L"InItemClass is nullptr.");
      if ((UClass *)local_268._padding_ != (UClass *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3855442234375667689>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_ObjectPool.cpp"
                       ,0x17,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = Z_Construct_UClass_UDS_ObjectPoolItem_NoRegister();
  bVar2 = UClass::ImplementsInterface(param_1,pUVar4);
  if (bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->ItemClass).field0_0x0.DebugPtr = param_1;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ObjectPool::InitPool",0x18,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Error,local_148.Ptr,0x1c,
                 L"Invalid ItemClass. Must be a UObject implementing IDS_ObjectPoolItem.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3855442234375667683>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_ObjectPool.cpp"
                       ,0x1d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// PushAllItems @ 14c09f2c0

void __thiscall UDS_ObjectPool::PushAllItems(UDS_ObjectPool *this,bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObject *pUVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->UsedItems).AllocatorInstance.Data;
  iVar3 = (this->UsedItems).ArrayNum;
  pFVar9 = pFVar8 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->UsedItems).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TScriptInterface<IDS_ObjectPoolItem>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    if (*(longlong *)pFVar8 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(pFVar8 + 8);
    }
    *(undefined1 *)(lVar6 + 0x10) = 0;
    if (param_1) {
      if (*(longlong *)pFVar8 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(pFVar8 + 8);
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    iVar5 = (this->PoolItems).ArrayNum;
    piVar1 = &(this->PoolItems).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PoolItems).AllocatorInstance,piVar1);
    }
    pFVar10 = (this->PoolItems).AllocatorInstance.Data;
    (this->PoolItems).ArrayNum = iVar5 + 1;
    pFVar10 = pFVar10 + (longlong)iVar5 * 0x10;
    pUVar4 = *(UObject **)pFVar8;
    *(UObject **)pFVar10 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pFVar2 = pFVar8 + 8;
    pFVar8 = pFVar8 + 0x10;
    *(longlong *)(pFVar10 + 8) = *(longlong *)pFVar2;
  }
  (this->UsedItems).ArrayNum = 0;
  if ((this->UsedItems).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->UsedItems).AllocatorInstance,0,&(this->UsedItems).ArrayMax);
  }
  return;
}

// PushItem @ 14c09f400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ObjectPool::PushItem
          (UDS_ObjectPool *this,TScriptInterface<IDS_ObjectPoolItem> *param_1,bool param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  TScriptInterface<IDS_ObjectPoolItem> *pTVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UDS_LogManager *pUVar9;
  atomic<unsigned_char> *paVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_2b8 [32];
  TScriptInterface<IDS_ObjectPoolItem> *local_268 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  lVar2 = *(longlong *)param_1;
  if ((lVar2 != 0) && (lVar3 = *(longlong *)&param_1->field_0x8, lVar3 != 0)) {
    pFVar13 = (this->UsedItems).AllocatorInstance.Data;
    pFVar12 = pFVar13 + (longlong)(this->UsedItems).ArrayNum * 0x10;
joined_r0x00014c09f458:
    if (pFVar13 == pFVar12) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_ObjectPool::PushItem",0x18,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_138.Ptr,0x2d,L"UsedItems.Contains(InItem) == false");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      iVar8 = 0x2e;
      paVar10 = &bGEnsureHasExecuted<_3855442234375667666>;
    }
    else {
      if (((*(longlong *)pFVar13 == 0) || (*(longlong *)(pFVar13 + 8) != lVar3)) ||
         (*(longlong *)pFVar13 != lVar2)) goto LAB_14c09f477;
      pFVar13 = (this->PoolItems).AllocatorInstance.Data;
      pFVar12 = pFVar13 + (longlong)(this->PoolItems).ArrayNum * 0x10;
      while( true ) {
        if (pFVar13 == pFVar12) {
          *(undefined1 *)(lVar3 + 0x10) = 0;
          if (param_2) {
            if (*(longlong *)param_1 == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)&param_1->field_0x8;
            }
            (**(code **)(*plVar11 + 0x10))();
          }
          pTVar4 = (TScriptInterface<IDS_ObjectPoolItem> *)(this->UsedItems).AllocatorInstance.Data;
          if (((pTVar4 <= param_1) && (param_1 < pTVar4 + (this->UsedItems).ArrayMax)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_268[0] = param_1;
          TArray<TScriptInterface<IDS_ObjectPoolItem>,TSizedDefaultAllocator<32>_>::
          RemoveAll<_TArray<TScriptInterface<IDS_ObjectPoolItem>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                    (&this->UsedItems,(<lambda_1> *)local_268);
          iVar8 = (this->PoolItems).ArrayNum;
          piVar1 = &(this->PoolItems).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(this->PoolItems).AllocatorInstance,piVar1);
          }
          (this->PoolItems).ArrayNum = iVar8 + 1;
          pFVar13 = (this->PoolItems).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
          pUVar5 = *(UObject **)param_1;
          *(UObject **)pFVar13 = pUVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          *(undefined8 *)(pFVar13 + 8) = *(undefined8 *)&param_1->field_0x8;
          return;
        }
        if (((*(longlong *)pFVar13 != 0) && (*(longlong *)(pFVar13 + 8) == lVar3)) &&
           (*(longlong *)pFVar13 == lVar2)) break;
        pFVar13 = pFVar13 + 0x10;
      }
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_258._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_258,"UDS_ObjectPool::PushItem",0x18,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_258.Ptr,0x34,L"PoolItems.Contains(InItem) == true");
        if ((void *)local_258._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_258._padding_);
        }
      }
      iVar8 = 0x35;
      paVar10 = &bGEnsureHasExecuted<_3855442234375667659>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar10,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_ObjectPool.cpp"
                       ,iVar8,"false");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
LAB_14c09f477:
  pFVar13 = pFVar13 + 0x10;
  goto joined_r0x00014c09f458;
}

