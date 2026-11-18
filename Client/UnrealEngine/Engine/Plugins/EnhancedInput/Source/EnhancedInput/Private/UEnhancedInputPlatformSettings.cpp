// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 9

// StaticClass @ 14a6b3c60

UClass * __cdecl UEnhancedInputPlatformSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputPlatformSettings",
               &Z_Registration_Info_UClass_UEnhancedInputPlatformSettings.InnerSingleton,
               StaticRegisterNativesUEnhancedInputPlatformSettings,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UEnhancedInputPlatformSettings>,
               InternalVTableHelperCtorCaller<UEnhancedInputPlatformSettings>,local_res8,
               UPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputPlatformSettings.InnerSingleton;
}

// UEnhancedInputPlatformSettings @ 14a6cba30

UEnhancedInputPlatformSettings * __thiscall
UEnhancedInputPlatformSettings::UEnhancedInputPlatformSettings
          (UEnhancedInputPlatformSettings *this,FVTableHelper *param_1)

{
  UPlatformSettings::UPlatformSettings((UPlatformSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedInputPlatformSettings__6B_;
  (this->InputData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputData).ArrayNum = 0;
  (this->InputData).ArrayMax = 0;
  (this->InputDataClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputDataClasses).ArrayNum = 0;
  (this->InputDataClasses).ArrayMax = 0;
  this->bShouldLogMappingContextRedirects = false;
  return this;
}

// UEnhancedInputPlatformSettings @ 14a6cba70

UEnhancedInputPlatformSettings * __thiscall
UEnhancedInputPlatformSettings::UEnhancedInputPlatformSettings
          (UEnhancedInputPlatformSettings *this,FObjectInitializer *param_1)

{
  UPlatformSettings::UPlatformSettings((UPlatformSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedInputPlatformSettings__6B_;
  (this->InputData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputData).ArrayNum = 0;
  (this->InputData).ArrayMax = 0;
  (this->InputDataClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputDataClasses).ArrayNum = 0;
  (this->InputDataClasses).ArrayMax = 0;
  this->bShouldLogMappingContextRedirects = false;
  return this;
}

// ~UEnhancedInputPlatformSettings @ 14a6cf270

void __thiscall
UEnhancedInputPlatformSettings::~UEnhancedInputPlatformSettings
          (UEnhancedInputPlatformSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEnhancedInputPlatformSettings__6B_;
  pFVar1 = (this->InputDataClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftClassPtr<UEnhancedInputPlatformData>,int>
            ((TSoftClassPtr<UEnhancedInputPlatformData> *)(this->InputData).AllocatorInstance.Data,
             (this->InputData).ArrayNum);
  pFVar1 = (this->InputData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPlatformSettings::~UPlatformSettings((UPlatformSettings *)this);
  return;
}

// ForEachInputData @ 14a6dd950

void __thiscall
UEnhancedInputPlatformSettings::ForEachInputData
          (UEnhancedInputPlatformSettings *this,
          TFunctionRef<void___cdecl(UEnhancedInputPlatformData_const_&)> *param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FWeakObjectPtr *pFVar9;
  undefined1 local_res8 [8];
  TPersistentObjectPtr<FSoftObjectPath> local_48;
  
  iVar2 = (this->InputData).ArrayNum;
  pFVar9 = (FWeakObjectPtr *)(this->InputData).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 5;
  do {
    if ((this->InputData).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSoftClassPtr<UEnhancedInputPlatformData>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) {
      return;
    }
    local_48.WeakPtr = *pFVar9;
    FSoftObjectPath::FSoftObjectPath(&local_48.ObjectID,(FSoftObjectPath *)(pFVar9 + 1));
    pUVar7 = (UClass *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_48);
    if (pUVar7 == (UClass *)0x0) {
      if (local_48.ObjectID.AssetPath.PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad(&local_48.ObjectID,(FUObjectSerializeContext *)0x0);
        pUVar7 = (UClass *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_48);
        goto LAB_14a6dd9e6;
      }
LAB_14a6dda3c:
      pUVar7 = (UClass *)0x0;
    }
    else {
LAB_14a6dd9e6:
      if (pUVar7 == (UClass *)0x0) goto LAB_14a6dda3c;
      pUVar8 = Z_Construct_UClass_UClass_NoRegister();
      iVar3 = (int)pUVar8->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar8->_padding_)) goto LAB_14a6dda3c;
      pUVar8 = UEnhancedInputPlatformData::StaticClass();
      if (pUVar8 == (UClass *)0x0) goto LAB_14a6dda3c;
      iVar3 = (int)pUVar8->_padding_;
      if (((int)pUVar7->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar8->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_14a6dda3c;
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar7 != (UClass *)0x0) goto LAB_14a6dda63;
    }
    else if (pUVar7 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_14a6dda63:
      pUVar8 = UEnhancedInputPlatformData::StaticClass();
      if (pUVar8 != (UClass *)0x0) {
        iVar3 = (int)pUVar8->_padding_;
        if (((int)pUVar7->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
            UClass::InternalCreateDefaultObjectWrapper(pUVar7);
          }
          pUVar4 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
          if (pUVar4 == (UObject *)0x0) {
LAB_14a6ddad6:
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Result && Result->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                               ,0x93,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (pUVar4 == (UObject *)0x0) goto LAB_14a6ddb0d;
          }
          else {
            pUVar7 = UEnhancedInputPlatformData::StaticClass();
            iVar3 = (int)pUVar7->_padding_;
            if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar7->_padding_)) goto LAB_14a6ddad6;
          }
          (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pUVar4);
        }
      }
    }
LAB_14a6ddb0d:
    if (local_48.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.ObjectID.SubPathString.Data.AllocatorInstance.Data);
    }
    pFVar9 = pFVar9 + 5;
  } while( true );
}

// GetAllMappingContextRedirects @ 14a6de630

void __thiscall
UEnhancedInputPlatformSettings::GetAllMappingContextRedirects
          (UEnhancedInputPlatformSettings *this,
          TMap<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
          *param_1)

{
  TMap<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
  *local_res10 [3];
  code *local_18;
  TMap<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputMappingContext_const_>,TObjectPtr<UInputMappingContext_const_>,0>_>
  **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UEnhancedInputPlatformSettings::GetAllMappingContextRedirects'::__l2::<lambda_1>,void,UEnhancedInputPlatformData_const_&>
             ::Call;
  local_res10[0] = param_1;
  ForEachInputData(this,(TFunctionRef<void___cdecl(UEnhancedInputPlatformData_const_&)> *)&local_18)
  ;
  return;
}

// GetPrivateStaticClass @ 14a6e0ae0

UClass * __cdecl UEnhancedInputPlatformSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedInputPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedInputPlatformSettings",
               &Z_Registration_Info_UClass_UEnhancedInputPlatformSettings.InnerSingleton,
               StaticRegisterNativesUEnhancedInputPlatformSettings,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UEnhancedInputPlatformSettings>,
               InternalVTableHelperCtorCaller<UEnhancedInputPlatformSettings>,local_res8,
               UPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedInputPlatformSettings.InnerSingleton;
}

// LoadInputDataClasses @ 14a6e5fd0

void __thiscall
UEnhancedInputPlatformSettings::LoadInputDataClasses(UEnhancedInputPlatformSettings *this)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FWeakObjectPtr *pFVar10;
  undefined1 local_res8 [8];
  UObject *local_48;
  TPersistentObjectPtr<FSoftObjectPath> local_40;
  
  if ((this->InputData).ArrayNum != (this->InputDataClasses).ArrayNum) {
    iVar3 = (this->InputData).ArrayNum;
    pFVar10 = (FWeakObjectPtr *)(this->InputData).AllocatorInstance.Data;
    pFVar2 = pFVar10 + (longlong)iVar3 * 5;
    while( true ) {
      if ((this->InputData).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSoftClassPtr<UEnhancedInputPlatformData>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar2) break;
      local_40.WeakPtr = *pFVar10;
      FSoftObjectPath::FSoftObjectPath(&local_40.ObjectID,(FSoftObjectPath *)(pFVar10 + 1));
      pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_40);
      if (pUVar8 == (UObject *)0x0) {
        if (local_40.ObjectID.AssetPath.PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad(&local_40.ObjectID,(FUObjectSerializeContext *)0x0);
          pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_40);
          goto LAB_14a6e607c;
        }
LAB_14a6e60d2:
        pUVar8 = (UObject *)0x0;
      }
      else {
LAB_14a6e607c:
        if (pUVar8 == (UObject *)0x0) goto LAB_14a6e60d2;
        pUVar9 = Z_Construct_UClass_UClass_NoRegister();
        iVar7 = (int)pUVar9->_padding_;
        if (((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar7) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
             &pUVar9->_padding_)) ||
           (pUVar9 = UEnhancedInputPlatformData::StaticClass(), pUVar9 == (UClass *)0x0))
        goto LAB_14a6e60d2;
        iVar7 = (int)pUVar9->_padding_;
        if ((*(int *)&pUVar8[1].field_0x10 < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar7 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14a6e60d2;
      }
      local_48 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a6e60f8:
        pUVar8 = local_48;
        if ((local_48 != (UObject *)0x0) &&
           (pUVar9 = UEnhancedInputPlatformData::StaticClass(), pUVar9 != (UClass *)0x0)) {
          iVar7 = (int)pUVar9->_padding_;
          if ((*(int *)&pUVar8[1].field_0x10 < iVar7) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar7 * 8)
              != &pUVar9->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (local_48 != (UObject *)0x0)) {
            pFVar4 = (this->InputDataClasses).AllocatorInstance.Data;
            if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
               (((FScriptContainerElement *)&local_48 <
                 pFVar4 + (longlong)(this->InputDataClasses).ArrayMax * 8 &&
                (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)))) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar7 = (this->InputDataClasses).ArrayNum;
            piVar1 = &(this->InputDataClasses).ArrayMax;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&(this->InputDataClasses).AllocatorInstance,piVar1);
            }
            (this->InputDataClasses).ArrayNum = iVar7 + 1;
            *(UObject **)((this->InputDataClasses).AllocatorInstance.Data + (longlong)iVar7 * 8) =
                 local_48;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_48);
            }
          }
        }
      }
      else if (pUVar8 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar8);
        goto LAB_14a6e60f8;
      }
      if (local_40.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      pFVar10 = pFVar10 + 5;
    }
  }
  return;
}

// StaticRegisterNativesUEnhancedInputPlatformSettings @ 14a6fb470

void __cdecl
UEnhancedInputPlatformSettings::StaticRegisterNativesUEnhancedInputPlatformSettings(void)

{
  return;
}

