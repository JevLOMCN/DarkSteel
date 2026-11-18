// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 18

// StaticClass @ 141f51be0

UClass * __cdecl UPropertyBag::StaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UPropertyBag.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"PropertyBag",
               &Z_Registration_Info_UClass_UPropertyBag.InnerSingleton,
               StaticRegisterNativesUPropertyBag,0xd8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPropertyBag>,
               InternalVTableHelperCtorCaller<UPropertyBag>,local_res10,UScriptStruct::StaticClass,
               UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UPropertyBag.InnerSingleton;
}

// UPropertyBag @ 141f67c30

UPropertyBag * __thiscall UPropertyBag::UPropertyBag(UPropertyBag *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPropertyBag__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PropertyDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyDescs).ArrayNum = 0;
  (this->PropertyDescs).ArrayMax = 0;
  this->RefCount = (atomic<int>)0x0;
  return this;
}

// UPropertyBag @ 141f67cb0

UPropertyBag * __thiscall UPropertyBag::UPropertyBag(UPropertyBag *this,FObjectInitializer *param_1)

{
  UScriptStruct::UScriptStruct((UScriptStruct *)this,param_1);
  this->_padding_ = (longlong)&___7UPropertyBag__6B_;
  (this->PropertyDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyDescs).ArrayNum = 0;
  (this->PropertyDescs).ArrayMax = 0;
  this->RefCount = (atomic<int>)0x0;
  return this;
}

// ~UPropertyBag @ 141f690f0

void __thiscall UPropertyBag::~UPropertyBag(UPropertyBag *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPropertyBag__6B_;
  pFVar1 = (this->PropertyDescs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UScriptStruct__6B_;
  UStruct::~UStruct((UStruct *)this);
  return;
}

// DecrementRefCount @ 141f78840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPropertyBag::DecrementRefCount(UPropertyBag *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FUObjectItem *this_00;
  
  LOCK();
  paVar1 = &this->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    return;
  }
  if (((int)aVar2 < 1) && (1 < (byte)LogCore._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    return;
  }
  return;
}

// DestroyStruct @ 141f78c50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPropertyBag::DestroyStruct(UPropertyBag *this,void *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FUObjectItem *this_00;
  
  UScriptStruct::DestroyStruct((UScriptStruct *)this,param_1,param_2);
  LOCK();
  paVar1 = &this->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    return;
  }
  if (((int)aVar2 < 1) && (1 < (byte)LogCore._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    return;
  }
  return;
}

// FindPropertyDescByID @ 141f7ca50

FPropertyBagPropertyDesc * __thiscall
UPropertyBag::FindPropertyDescByID(UPropertyBag *this,FGuid *param_1)

{
  FPropertyBagPropertyDesc *pFVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  pFVar1 = (FPropertyBagPropertyDesc *)(this->PropertyDescs).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->PropertyDescs).ArrayNum;
  if (pFVar1 != pFVar2) {
    do {
      if (((param_1->D == (pFVar1->ID).D && param_1->C == (pFVar1->ID).C) &&
          param_1->B == (pFVar1->ID).B) && param_1->A == (pFVar1->ID).A) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
    } while (pFVar1 != pFVar2);
  }
  return (FPropertyBagPropertyDesc *)0x0;
}

// FindPropertyDescByIndex @ 141f7cac0

FPropertyBagPropertyDesc * __thiscall
UPropertyBag::FindPropertyDescByIndex(UPropertyBag *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FPropertyBagPropertyDesc *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->PropertyDescs).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->PropertyDescs).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FPropertyBagPropertyDesc *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FPropertyBagPropertyDesc *)
           ((this->PropertyDescs).AllocatorInstance.Data + (longlong)param_1 * 0x40);
  }
  return (FPropertyBagPropertyDesc *)0x0;
}

// FindPropertyDescByName @ 141f7cbf0

FPropertyBagPropertyDesc * __thiscall
UPropertyBag::FindPropertyDescByName(UPropertyBag *this,FName param_1)

{
  FPropertyBagPropertyDesc *pFVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  pFVar1 = (FPropertyBagPropertyDesc *)(this->PropertyDescs).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->PropertyDescs).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FPropertyBagPropertyDesc *)0x0;
    }
    if (pFVar1->Name == param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// FindPropertyDescByProperty @ 141f7cc30

FPropertyBagPropertyDesc * __thiscall
UPropertyBag::FindPropertyDescByProperty(UPropertyBag *this,FProperty *param_1)

{
  FPropertyBagPropertyDesc *pFVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  if (param_1 != (FProperty *)0x0) {
    pFVar1 = (FPropertyBagPropertyDesc *)(this->PropertyDescs).AllocatorInstance.Data;
    pFVar2 = pFVar1 + (this->PropertyDescs).ArrayNum;
    for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 1) {
      if ((pFVar1->CachedProperty != (FProperty *)0x0) && (pFVar1->CachedProperty == param_1)) {
        return pFVar1;
      }
    }
  }
  return (FPropertyBagPropertyDesc *)0x0;
}

// FindPropertyDescByPropertyName @ 141f7cc70

FPropertyBagPropertyDesc * __thiscall
UPropertyBag::FindPropertyDescByPropertyName(UPropertyBag *this,FName param_1)

{
  FPropertyBagPropertyDesc *pFVar1;
  FName local_res10;
  
  local_res10 = param_1;
  pFVar1 = TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UPropertyBag::FindPropertyDescByPropertyName_::__l2::<lambda_1>_>
                     (&this->PropertyDescs,&local_res10);
  return pFVar1;
}

// FinishDestroy @ 141f7df40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPropertyBag::FinishDestroy(UPropertyBag *this)

{
  int *piVar1;
  
  if (((0 < (int)this->RefCount) && (!GIsRequestingExit)) && (1 < (byte)LogCore._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  LOCK();
  this->_padding_ = 0;
  UNLOCK();
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetOrCreateFromDescs @ 141f82c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPropertyBag * __cdecl
UPropertyBag::GetOrCreateFromDescs
          (TArrayView<FPropertyBagPropertyDesc_const_,int> *param_1,wchar_t *param_2)

{
  FPropertyBagPropertyDesc *pFVar1;
  FScriptContainerElement FVar2;
  FName FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  FName *pFVar9;
  UPackage *pUVar10;
  UClass *pUVar11;
  UPropertyBag *pUVar12;
  UPropertyBag *pUVar13;
  FGuid *pFVar14;
  FProperty *pFVar15;
  longlong *plVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong lVar21;
  FPropertyBagPropertyDesc *pFVar22;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *this;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  undefined1 auStackY_708 [32];
  undefined1 local_6c0 [8];
  FScriptContainerElement *local_6b8;
  UPropertyBag *local_6b0;
  undefined8 local_6a8;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *local_6a0;
  FString local_698;
  FString local_688;
  ulonglong local_678 [2];
  FName local_668;
  FName local_660;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FPropertyBagPropertyDesc *local_610;
  undefined8 uStack_608;
  FGuid local_600;
  FArchiveState local_5f0;
  undefined1 local_560 [128];
  TStringBuilderBase<wchar_t> local_4e0;
  wchar_t local_4c0 [256];
  FXxHash64Builder local_2c0;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_708;
  pFVar22 = param_1->DataPtr;
  uStack_608 = *(undefined8 *)&param_1->ArrayNum;
  uVar27 = 0;
  local_610 = pFVar22;
  FXxHash64Builder::Reset(&local_2c0);
  iVar24 = param_1->ArrayNum;
  if (pFVar22 != pFVar22 + iVar24) {
    pFVar9 = &pFVar22->Name;
    do {
      local_4e0.Base = local_4c0;
      local_4e0.bIsDynamic = false;
      local_4e0.bIsExternal = false;
      local_4e0.CurPos = local_4c0;
      local_4e0.End = (wchar_t *)&local_2c0;
      FXxHash64Builder::Update(&local_2c0,pFVar9 + -2,0x10);
      ::FName::AppendString(pFVar9,&local_4e0);
      FXxHash64Builder::Update(&local_2c0,pFVar9 + 1,1);
      FXxHash64Builder::Update
                (&local_2c0,(void *)((longlong)&pFVar9[1].ComparisonIndex.Value + 1),3);
      FXxHash64Builder::Update(&local_2c0,pFVar9 + 2,8);
      if (pFVar9[-3] != (FName)0x0) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pFVar9[-3],(UObject *)0x0,&local_4e0);
      }
      lVar8 = (longlong)local_4e0.CurPos - (longlong)local_4e0.Base;
      if (local_4e0.End < (FXxHash64Builder *)(local_4e0.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_4e0,1);
      }
      *local_4e0.CurPos = L'\0';
      FXxHash64Builder::Update(&local_2c0,local_4e0.Base,(longlong)(int)(lVar8 >> 1) * 2);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4e0);
      pFVar1 = (FPropertyBagPropertyDesc *)(pFVar9 + 5);
      pFVar9 = pFVar9 + 8;
    } while (pFVar1 != pFVar22 + iVar24);
  }
  FXxHash64Builder::Finalize(&local_2c0);
  if (param_2 == (wchar_t *)0x0) {
    ::FString::PrintfImpl(&local_698,L"PropertyBag_%llx");
    FVar17.Data = local_698.Data.AllocatorInstance.Data;
    iVar24 = local_698.Data.ArrayNum;
    local_698.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_698.Data.ArrayNum = 0;
    local_698.Data.ArrayMax = 0;
  }
  else {
    ::FString::PrintfImpl(&local_688,L"%s_%llx");
    FVar17.Data = local_688.Data.AllocatorInstance.Data;
    iVar24 = local_688.Data.ArrayNum;
    local_688.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_688.Data.ArrayNum = 0;
    local_688.Data.ArrayMax = 0;
  }
  local_6b8 = FVar17.Data;
  EnterCriticalSection((LPCRITICAL_SECTION)&UE::StructUtils::Private::GPropertyBagLock);
  pFVar19 = (FScriptContainerElement *)L"";
  if (iVar24 != 0) {
    pFVar19 = FVar17.Data;
  }
  pFVar9 = ::FName::FName(&local_668,(wchar_t *)pFVar19);
  FVar3 = *pFVar9;
  pUVar10 = GetTransientPackage();
  pUVar11 = StaticClass();
  pUVar12 = (UPropertyBag *)
            StaticFindObjectFastInternal
                      (pUVar11,(UObject *)pUVar10,FVar3,ExactClass,RF_NoFlags,Borrowed);
  if (pUVar12 != (UPropertyBag *)0x0) {
    pUVar11 = StaticClass();
    iVar26 = (int)pUVar11->_padding_;
    local_6b8 = FVar17.Data;
    if ((iVar26 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar26 * 8) ==
        &pUVar11->_padding_)) goto LAB_141f83508;
  }
  pFVar19 = (FScriptContainerElement *)L"";
  if (iVar24 != 0) {
    pFVar19 = FVar17.Data;
  }
  pFVar9 = ::FName::FName(&local_660,(wchar_t *)pFVar19);
  FVar3 = *pFVar9;
  pUVar10 = GetTransientPackage();
  local_6a8 = 0;
  if (FVar3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar11 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_560,pUVar11);
  local_560._48_8_ = (FObjectInstancingGraph *)0x0;
  local_560._56_8_ = (UPackage *)0x0;
  local_560._24_4_ = RF_Transient|RF_Standalone;
  local_560._40_8_ = (UObject *)0x0;
  local_560[0x20] = false;
  local_560._8_8_ = pUVar10;
  local_560._16_8_ = FVar3;
  pUVar13 = (UPropertyBag *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_560);
  local_6b0 = pUVar13;
  if (local_560._64_8_ != 0) {
    plVar16 = (longlong *)(local_560 + 0x50);
    if ((longlong *)local_560._104_8_ != (longlong *)0x0) {
      plVar16 = (longlong *)local_560._104_8_;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  this = &pUVar13->PropertyDescs;
  local_6a0 = this;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>::
  operator=<FPropertyBagPropertyDesc_const_,int>(this,param_1);
  iVar24 = (pUVar13->PropertyDescs).ArrayNum;
  pFVar19 = (this->AllocatorInstance).Data;
  pFVar18 = pFVar19 + (longlong)iVar24 * 0x40;
  while( true ) {
    if ((pUVar13->PropertyDescs).ArrayNum != iVar24) {
      local_6c0[0] = 0;
      `TCheckedPointerIterator<FPropertyBagPropertyDesc,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_6c0);
    }
    if (pFVar19 == pFVar18) break;
    FVar2 = pFVar19[0x20];
    if (FVar2 == (FScriptContainerElement)0xb) {
      if (*(longlong *)pFVar19 != 0) {
        lVar8 = *(longlong *)(*(longlong *)pFVar19 + 0x10);
        pUVar11 = UScriptStruct::StaticClass();
        if (pUVar11 != (UClass *)0x0) {
          iVar26 = (int)pUVar11->_padding_;
          if ((*(int *)(lVar8 + 0x38) < iVar26) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar26 * 8) !=
              &pUVar11->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) goto LAB_141f83283;
        }
      }
      if (2 < (byte)LogCore._0_1_) {
        ::FName::ToString((FName *)(pFVar19 + 0x18),&local_658);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
        if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_658.Data.AllocatorInstance.Data);
        }
      }
      pUVar11 = (UClass *)Z_Registration_Info_UScriptStruct_FPropertyBagMissingStruct.OuterSingleton
      ;
      if (Z_Registration_Info_UScriptStruct_FPropertyBagMissingStruct.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar10 = Z_Construct_UPackage__Script_CoreUObject();
        pUVar11 = (UClass *)
                  GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBagMissingStruct,
                                  (UObject *)pUVar10,L"PropertyBagMissingStruct");
        Z_Registration_Info_UScriptStruct_FPropertyBagMissingStruct.OuterSingleton =
             (UScriptStruct *)pUVar11;
      }
LAB_141f8326a:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      *(UClass **)pFVar19 = pUVar11;
    }
    else {
      if (FVar2 == (FScriptContainerElement)0xa) {
        if (*(longlong *)pFVar19 != 0) {
          lVar8 = *(longlong *)(*(longlong *)pFVar19 + 0x10);
          pUVar11 = UEnum::StaticClass();
          if (pUVar11 != (UClass *)0x0) {
            iVar26 = (int)pUVar11->_padding_;
            if ((*(int *)(lVar8 + 0x38) < iVar26) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar26 * 8) !=
                &pUVar11->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) goto LAB_141f83283;
          }
        }
        if (2 < (byte)LogCore._0_1_) {
          ::FName::ToString((FName *)(pFVar19 + 0x18),&local_648);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
          if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_648.Data.AllocatorInstance.Data);
          }
        }
        pUVar11 = (UClass *)Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton;
        if (Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton == (UEnum *)0x0) {
          pUVar10 = Z_Construct_UPackage__Script_CoreUObject();
          pUVar11 = (UClass *)
                    GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyBagMissingEnum,
                                  (UObject *)pUVar10,L"EPropertyBagMissingEnum");
          Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton = (UEnum *)pUVar11;
        }
        goto LAB_141f8326a;
      }
      if ((byte)((char)FVar2 - 0xcU) < 2) {
        if (*(longlong *)pFVar19 == 0) {
          if (2 < (byte)LogCore._0_1_) {
            ::FName::ToString((FName *)(pFVar19 + 0x18),&local_628);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
            FVar17.Data = local_628.Data.AllocatorInstance.Data;
            goto LAB_141f83258;
          }
          goto LAB_141f83262;
        }
      }
      else if ((byte)((char)FVar2 - 0xeU) < 2) {
        if (*(longlong *)pFVar19 != 0) {
          lVar8 = *(longlong *)(*(longlong *)pFVar19 + 0x10);
          pUVar11 = UClass::StaticClass();
          if (pUVar11 != (UClass *)0x0) {
            iVar26 = (int)pUVar11->_padding_;
            if ((*(int *)(lVar8 + 0x38) < iVar26) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar26 * 8) !=
                &pUVar11->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) goto LAB_141f83283;
          }
        }
        if (2 < (byte)LogCore._0_1_) {
          ::FName::ToString((FName *)(pFVar19 + 0x18),&local_638);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
          FVar17.Data = local_638.Data.AllocatorInstance.Data;
LAB_141f83258:
          if (FVar17.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar17.Data);
          }
        }
LAB_141f83262:
        pUVar11 = UPropertyBagMissingObject::StaticClass();
        goto LAB_141f8326a;
      }
    }
LAB_141f83283:
    pFVar19 = pFVar19 + 0x40;
  }
  uVar25 = uVar27;
  if (0 < (pUVar13->PropertyDescs).ArrayNum + -1) {
    do {
      uVar20 = (uint)uVar27;
      uVar7 = 0;
      if ((int)uVar20 < (pUVar13->PropertyDescs).ArrayNum) {
        uVar7 = ~uVar20 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pUVar12 = (UPropertyBag *)(*pcVar4)();
        return pUVar12;
      }
      uVar20 = uVar20 + 1;
      uVar27 = (ulonglong)uVar20;
      UE::StructUtils::Private::RemovePropertyByName
                (this,*(FName *)((this->AllocatorInstance).Data + uVar25 + 0x18),uVar20);
      uVar25 = uVar25 + 0x40;
    } while ((int)uVar20 < (pUVar13->PropertyDescs).ArrayNum + -1);
  }
  iVar24 = (pUVar13->PropertyDescs).ArrayNum;
  lVar8 = (longlong)iVar24;
  if (iVar24 != 0) {
    pFVar19 = (this->AllocatorInstance).Data;
    iVar26 = 0;
    bVar6 = pFVar19[0x20] != (FScriptContainerElement)0x0;
    lVar21 = 0;
    iVar24 = 0;
    do {
      lVar21 = lVar21 + 1;
      iVar23 = iVar24 + 1;
      if (lVar21 < lVar8) {
        pFVar18 = pFVar19 + lVar21 * 0x40 + 0x20;
        do {
          if (bVar6 != (*pFVar18 != (FScriptContainerElement)0x0)) break;
          iVar23 = iVar23 + 1;
          lVar21 = lVar21 + 1;
          pFVar18 = pFVar18 + 0x40;
        } while (lVar21 < lVar8);
      }
      if (bVar6 != false) {
        if (iVar26 != iVar24) {
          memmove(pFVar19 + (longlong)iVar26 * 0x40,pFVar19 + (longlong)iVar24 * 0x40,
                  (longlong)(iVar23 - iVar24) << 6);
        }
        iVar26 = iVar26 + (iVar23 - iVar24);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar24 = iVar23;
    } while (lVar21 < lVar8);
    local_6a0->ArrayNum = iVar26;
    this = local_6a0;
    pUVar13 = local_6b0;
  }
  iVar24 = (pUVar13->PropertyDescs).ArrayNum + -1;
  pUVar12 = pUVar13;
  if (-1 < iVar24) {
    uVar27 = (ulonglong)pUVar13 | 1;
    lVar8 = (longlong)iVar24 << 6;
    do {
      if ((this->ArrayNum <= iVar24) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pUVar12 = (UPropertyBag *)(*pcVar4)();
        return pUVar12;
      }
      pFVar22 = (FPropertyBagPropertyDesc *)((this->AllocatorInstance).Data + lVar8);
      if ((((pFVar22->ID).D == 0 && (pFVar22->ID).C == 0) && (pFVar22->ID).B == 0) &&
          (pFVar22->ID).A == 0) {
        pFVar14 = FGuid::NewGuid(&local_600);
        uVar7 = pFVar14->B;
        uVar20 = pFVar14->C;
        uVar5 = pFVar14->D;
        (pFVar22->ID).A = pFVar14->A;
        (pFVar22->ID).B = uVar7;
        (pFVar22->ID).C = uVar20;
        (pFVar22->ID).D = uVar5;
      }
      local_678[0] = uVar27;
      if (((UObject *)((ulonglong)pUVar13 & 0xfffffffffffffffe) != (UObject *)0x0) &&
         (UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)((ulonglong)pUVar13 & 0xfffffffffffffffe));
      }
      pFVar15 = UE::StructUtils::Private::CreatePropertyFromDesc(pFVar22,(FFieldVariant)local_678);
      if (pFVar15 != (FProperty *)0x0) {
        pFVar15->PropertyFlags = pFVar15->PropertyFlags | pFVar22->PropertyFlags;
        (**(code **)(local_6b0->_padding_ + 0x2b0))(local_6b0,pFVar15);
        pFVar22->CachedProperty = pFVar15;
        pFVar22->CachedIndex = iVar24;
      }
      lVar8 = lVar8 + -0x40;
      iVar24 = iVar24 + -1;
      this = local_6a0;
      pUVar12 = local_6b0;
    } while (-1 < iVar24);
  }
  (**(code **)(pUVar12->_padding_ + 800))(pUVar12,0);
  (**(code **)(pUVar12->_padding_ + 0x2b8))(pUVar12);
  FArchiveState::FArchiveState(&local_5f0);
  local_5f0._padding_ = (longlong)&___7FNullArchive__6B_;
  (**(code **)(pUVar12->_padding_ + 0x2c8))(pUVar12,&local_5f0,1);
  FArchive::~FArchive((FArchive *)&local_5f0);
  FVar17.Data = local_6b8;
LAB_141f83508:
  LeaveCriticalSection((LPCRITICAL_SECTION)&UE::StructUtils::Private::GPropertyBagLock);
  if (FVar17.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar17.Data);
  }
  return pUVar12;
}

// GetPrivateStaticClass @ 141f84eb0

UClass * __cdecl UPropertyBag::GetPrivateStaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UPropertyBag.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"PropertyBag",
               &Z_Registration_Info_UClass_UPropertyBag.InnerSingleton,
               StaticRegisterNativesUPropertyBag,0xd8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UPropertyBag>,
               InternalVTableHelperCtorCaller<UPropertyBag>,local_res10,UScriptStruct::StaticClass,
               UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UPropertyBag.InnerSingleton;
}

// IncrementRefCount @ 141f8da10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UPropertyBag::IncrementRefCount(UPropertyBag *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FUObjectItem *this_00;
  
  LOCK();
  paVar1 = &this->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
  }
  return;
}

// InitializeStruct @ 141f8e1c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UPropertyBag::InitializeStruct(UPropertyBag *this,void *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FUObjectItem *this_00;
  
  UScriptStruct::InitializeStruct((UScriptStruct *)this,param_1,param_2);
  LOCK();
  paVar1 = &this->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
  }
  return;
}

// OwnsPropertyDesc @ 141f944a0

bool __thiscall UPropertyBag::OwnsPropertyDesc(UPropertyBag *this,FPropertyBagPropertyDesc *param_1)

{
  FPropertyBagPropertyDesc *pFVar1;
  
  pFVar1 = (FPropertyBagPropertyDesc *)(this->PropertyDescs).AllocatorInstance.Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (this->PropertyDescs).ArrayNum)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUPropertyBag @ 141fade10

void __cdecl UPropertyBag::StaticRegisterNativesUPropertyBag(void)

{
  return;
}

