// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 10

// StaticClass @ 1496c2720

UClass * __cdecl UInteractiveToolPropertySet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolPropertySet.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolPropertySet",
               &Z_Registration_Info_UClass_UInteractiveToolPropertySet.InnerSingleton,
               StaticRegisterNativesUInteractiveToolPropertySet,0xb0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolPropertySet>,
               InternalVTableHelperCtorCaller<UInteractiveToolPropertySet>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolPropertySet.InnerSingleton;
}

// UInteractiveToolPropertySet @ 1496d3030

UInteractiveToolPropertySet * __thiscall
UInteractiveToolPropertySet::UInteractiveToolPropertySet
          (UInteractiveToolPropertySet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInteractiveToolPropertySet__6B_;
  *(undefined8 *)&this->CachedPropertiesMap = 0;
  *(undefined8 *)&(this->CachedPropertiesMap).field_0x8 = 0;
  *(undefined8 *)&(this->CachedPropertiesMap).field_0x20 = 0;
  *(undefined4 *)&(this->CachedPropertiesMap).field_0x28 = 0;
  *(undefined4 *)&(this->CachedPropertiesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedPropertiesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedPropertiesMap).field_0x34 = 0;
  *(undefined8 *)&(this->CachedPropertiesMap).field_0x40 = 0;
  *(undefined4 *)&(this->CachedPropertiesMap).field_0x48 = 0;
  this->bIsPropertySetEnabled = true;
  *(undefined8 *)&this->OnModified = 0;
  *(undefined8 *)&(this->OnModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnModified).field_0x10 = 0;
  *(undefined8 *)&(this->OnModified).field_0x18 = 2;
  return this;
}

// UInteractiveToolPropertySet @ 1496d30c0

UInteractiveToolPropertySet * __thiscall
UInteractiveToolPropertySet::UInteractiveToolPropertySet
          (UInteractiveToolPropertySet *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInteractiveToolPropertySet__6B_;
  *(undefined8 *)&this->CachedPropertiesMap = 0;
  *(undefined8 *)&(this->CachedPropertiesMap).field_0x8 = 0;
  *(undefined8 *)&(this->CachedPropertiesMap).field_0x20 = 0;
  *(undefined4 *)&(this->CachedPropertiesMap).field_0x28 = 0;
  *(undefined4 *)&(this->CachedPropertiesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedPropertiesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedPropertiesMap).field_0x34 = 0;
  *(undefined8 *)&(this->CachedPropertiesMap).field_0x40 = 0;
  *(undefined4 *)&(this->CachedPropertiesMap).field_0x48 = 0;
  this->bIsPropertySetEnabled = true;
  *(undefined8 *)&this->OnModified = 0;
  *(undefined8 *)&(this->OnModified).field_0x8 = 0;
  *(undefined8 *)&(this->OnModified).field_0x10 = 0;
  *(undefined8 *)&(this->OnModified).field_0x18 = 2;
  return this;
}

// ~UInteractiveToolPropertySet @ 1496d46c0

void __thiscall
UInteractiveToolPropertySet::~UInteractiveToolPropertySet(UInteractiveToolPropertySet *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UInteractiveToolPropertySet__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnModified).field_0x8,
             *(int *)&(this->OnModified).field_0x10);
  pvVar1 = *(void **)&(this->OnModified).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnModified);
  *(undefined4 *)&(this->CachedPropertiesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedPropertiesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInteractiveToolPropertySet>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInteractiveToolPropertySet>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<UInteractiveToolPropertySet>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedPropertiesMap);
  DestructItems<TUniquePtr<FWatchablePropertySet::FPropertyWatcher,TDefaultDelete<FWatchablePropertySet::FPropertyWatcher>_>,int>
            ((TUniquePtr<FWatchablePropertySet::FPropertyWatcher,TDefaultDelete<FWatchablePropertySet::FPropertyWatcher>_>
              *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDynamicPropertyCache @ 1496dcd20

TObjectPtr<UInteractiveToolPropertySet> __thiscall
UInteractiveToolPropertySet::GetDynamicPropertyCache
          (UInteractiveToolPropertySet *this,FString *param_1,bool *param_2)

{
  UClass *pUVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  TObjectPtr<UInteractiveToolPropertySet> TVar8;
  longlong lVar9;
  UPackage *pUVar10;
  TObjectPtr<UInteractiveToolPropertySet>_u_0 TVar11;
  TObjectPtr<UInteractiveToolPropertySet>_u_0 *pTVar12;
  wchar_t *pwVar13;
  undefined1 *this_00;
  undefined1 *in_R9;
  TPairInitializer<FString_const_&,TObjectPtr<UInteractiveToolPropertySet>_const_&> local_res8;
  TObjectPtr<UInteractiveToolPropertySet>_u_0 local_res18;
  undefined8 local_res20;
  bool *local_50;
  TObjectPtr<UInteractiveToolPropertySet>_u_0 *local_48;
  
  *in_R9 = 0;
  pUVar1 = (UClass *)this->_padding_;
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  pUVar2 = (pUVar1->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = StaticClass();
  lVar9 = *(longlong *)&pUVar2->field_0x10;
  pwVar13 = L"";
  iVar6 = (int)pUVar7->_padding_;
  if (((*(int *)(lVar9 + 0x38) < iVar6) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar6 * 8) !=
       &pUVar7->_padding_)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1479,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar8.field0_0x0 = (TObjectPtr<UInteractiveToolPropertySet>_u_0)(*pcVar3)();
    return (TObjectPtr<UInteractiveToolPropertySet>)TVar8.field0_0x0;
  }
  if ((pUVar1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar1);
  }
  this_00 = &(pUVar1->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10;
  if (*(int *)(param_2 + 8) == 0) {
    iVar6 = 0;
  }
  else {
    pwVar13 = *(wchar_t **)param_2;
    iVar6 = *(int *)(param_2 + 8) + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar13);
  iVar6 = TSet<TTuple<FString,TObjectPtr<UInteractiveToolPropertySet>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolPropertySet>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<UInteractiveToolPropertySet>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolPropertySet>,0>,FDefaultSetAllocator>
                      *)this_00,uVar5,(FString *)param_2);
  if (((iVar6 == -1) || (lVar9 = (longlong)iVar6 * 0x20 + *(longlong *)this_00, lVar9 == 0)) ||
     (pTVar12 = (TObjectPtr<UInteractiveToolPropertySet>_u_0 *)(lVar9 + 0x10),
     pTVar12 == (TObjectPtr<UInteractiveToolPropertySet>_u_0 *)0x0)) {
    pUVar1 = (UClass *)this->_padding_;
    pUVar10 = GetTransientPackage();
    local_res18.DebugPtr =
         NewObject<UInteractiveToolPropertySet>
                   ((UObject *)pUVar10,pUVar1,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                    (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1496dcf85:
      if (local_res18.DebugPtr == (UInteractiveToolPropertySet *)0x0) goto LAB_1496dcf8a;
    }
    else {
      if (local_res18.DebugPtr != (UInteractiveToolPropertySet *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
        goto LAB_1496dcf85;
      }
LAB_1496dcf8a:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1992297193876226278>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveTool.cpp"
                         ,0xe6,"NewPropCache != nullptr");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.field0_0x0 = (TObjectPtr<UInteractiveToolPropertySet>_u_0)(*pcVar3)();
        return (TObjectPtr<UInteractiveToolPropertySet>)TVar8.field0_0x0;
      }
    }
    local_48 = &local_res18;
    local_50 = param_2;
    TSet<TTuple<FString,TObjectPtr<UInteractiveToolPropertySet>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolPropertySet>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TObjectPtr<UInteractiveToolPropertySet>_const_&>_>
              ((TSet<TTuple<FString,TObjectPtr<UInteractiveToolPropertySet>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolPropertySet>,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_50);
    *in_R9 = 1;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_res18;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      return (TObjectPtr<UInteractiveToolPropertySet>)
             (TObjectPtr<UInteractiveToolPropertySet>_u_0)param_1;
    }
    bVar4 = local_res18.DebugPtr == (UInteractiveToolPropertySet *)0x0;
    TVar11 = local_res18;
  }
  else {
    TVar11 = (TObjectPtr<UInteractiveToolPropertySet>_u_0)pTVar12->DebugPtr;
    if (TVar11.DebugPtr == (UInteractiveToolPropertySet *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1992297193876226284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveTool.cpp"
                         ,0xec,"*Found != nullptr");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar8.field0_0x0 = (TObjectPtr<UInteractiveToolPropertySet>_u_0)(*pcVar3)();
        return (TObjectPtr<UInteractiveToolPropertySet>)TVar8.field0_0x0;
      }
      pUVar1 = (UClass *)this->_padding_;
      local_res20 = 0;
      pUVar10 = GetTransientPackage();
      TVar11.DebugPtr =
           NewObject<UInteractiveToolPropertySet>
                     ((UObject *)pUVar10,pUVar1,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (TVar11 == (UInteractiveToolPropertySet *)0x0) goto LAB_1496dcea4;
      }
      else if (TVar11 == (UInteractiveToolPropertySet *)0x0) {
LAB_1496dcea4:
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1992297193876226288>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InteractiveTool.cpp"
                           ,0xf0,"NewPropCache != nullptr");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          TVar8.field0_0x0 = (TObjectPtr<UInteractiveToolPropertySet>_u_0)(*pcVar3)();
          return (TObjectPtr<UInteractiveToolPropertySet>)TVar8.field0_0x0;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)TVar11);
      }
      pTVar12 = &TMapBase<FString,TObjectPtr<UInteractiveToolPropertySet>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolPropertySet>,0>_>
                 ::FindChecked((TMapBase<FString,TObjectPtr<UInteractiveToolPropertySet>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInteractiveToolPropertySet>,0>_>
                                *)this_00,(FString *)param_2)->field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar11 != (UInteractiveToolPropertySet *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar11);
      }
      *pTVar12 = TVar11;
      *in_R9 = 1;
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)TVar11;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        return (TObjectPtr<UInteractiveToolPropertySet>)
               (TObjectPtr<UInteractiveToolPropertySet>_u_0)param_1;
      }
      if (TVar11 == (UInteractiveToolPropertySet *)0x0) {
        return (TObjectPtr<UInteractiveToolPropertySet>)
               (TObjectPtr<UInteractiveToolPropertySet>_u_0)param_1;
      }
      goto LAB_1496dcffe;
    }
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)TVar11;
    bVar4 = UE::GC::GIsIncrementalReachabilityPending == false;
  }
  if (bVar4) {
    return (TObjectPtr<UInteractiveToolPropertySet>)
           (TObjectPtr<UInteractiveToolPropertySet>_u_0)param_1;
  }
LAB_1496dcffe:
  UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
  return (TObjectPtr<UInteractiveToolPropertySet>)
         (TObjectPtr<UInteractiveToolPropertySet>_u_0)param_1;
}

// GetPrivateStaticClass @ 1496dd740

UClass * __cdecl UInteractiveToolPropertySet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractiveToolPropertySet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractiveToolPropertySet",
               &Z_Registration_Info_UClass_UInteractiveToolPropertySet.InnerSingleton,
               StaticRegisterNativesUInteractiveToolPropertySet,0xb0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UInteractiveToolPropertySet>,
               InternalVTableHelperCtorCaller<UInteractiveToolPropertySet>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractiveToolPropertySet.InnerSingleton;
}

// RestoreProperties @ 1496e5590

void __thiscall
UInteractiveToolPropertySet::RestoreProperties
          (UInteractiveToolPropertySet *this,UInteractiveTool *param_1,FString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496e5596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))();
  return;
}

// SaveProperties @ 1496e5690

void __thiscall
UInteractiveToolPropertySet::SaveProperties
          (UInteractiveToolPropertySet *this,UInteractiveTool *param_1,FString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001496e5696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c0))();
  return;
}

// SaveRestoreProperties @ 1496e56b0

/* WARNING: Removing unreachable block (ram,0x0001496e56e5) */

void __thiscall
UInteractiveToolPropertySet::SaveRestoreProperties
          (UInteractiveToolPropertySet *this,UInteractiveTool *param_1,FString *param_2,bool param_3
          )

{
  UObject *pUVar1;
  FProperty *this_00;
  TObjectPtr<UInteractiveToolPropertySet> TVar2;
  void *_Dst;
  void *pvVar3;
  void *_Src;
  undefined1 local_40 [8];
  TFieldIterator<FProperty> local_38;
  TFieldIterator<FProperty> local_20;
  
  TVar2 = GetDynamicPropertyCache(this,(FString *)local_40,(bool *)param_2);
  pUVar1 = *(UObject **)TVar2.field0_0x0;
  if (pUVar1 != (UObject *)0x0) {
    local_38.Struct = (UStruct *)this->_padding_;
    if (local_38.Struct == (UStruct *)0x0) {
      local_38.Field = (FField *)0x0;
    }
    else {
      local_38.Field = (local_38.Struct)->ChildProperties;
    }
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
    local_20.bIncludeSuper = local_38.bIncludeSuper;
    local_20.bIncludeDeprecated = local_38.bIncludeDeprecated;
    local_20.InterfaceIndex = local_38.InterfaceIndex;
    local_20.bIncludeInterface = local_38.bIncludeInterface;
    local_20._23_1_ = local_38._23_1_;
    local_20.Struct = local_38.Struct;
    this_00 = (FProperty *)local_38.Field;
    while (this_00 != (FProperty *)0x0) {
      local_20.Field = (FField *)this_00;
      _Dst = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)this,0);
      pvVar3 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,pUVar1,0);
      _Src = pvVar3;
      if (param_3) {
        _Src = _Dst;
        _Dst = pvVar3;
      }
      if (_Dst != _Src) {
        if (((uint)(int)this_00->PropertyFlags >> 0x1e & 1) == 0) {
          (**(code **)(this_00->_padding_ + 0xf0))(this_00,_Dst,_Src,1);
        }
        else {
          memcpy(_Dst,_Src,(longlong)this_00->ElementSize);
        }
      }
      local_20.Field = (FField *)this_00->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_20);
      this_00 = (FProperty *)local_20.Field;
    }
  }
  return;
}

// StaticRegisterNativesUInteractiveToolPropertySet @ 1496e6700

void __cdecl UInteractiveToolPropertySet::StaticRegisterNativesUInteractiveToolPropertySet(void)

{
  return;
}

