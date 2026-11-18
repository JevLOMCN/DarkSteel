// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 10

// StaticClass @ 14a7385a0

UClass * __cdecl UMVVMInstancedViewModelGeneratedClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMInstancedViewModelGeneratedClass.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMInstancedViewModelGeneratedClass",
               &Z_Registration_Info_UClass_UMVVMInstancedViewModelGeneratedClass.InnerSingleton,
               StaticRegisterNativesUMVVMInstancedViewModelGeneratedClass,0x3d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMInstancedViewModelGeneratedClass>,
               InternalVTableHelperCtorCaller<UMVVMInstancedViewModelGeneratedClass>,local_res8,
               UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMInstancedViewModelGeneratedClass.InnerSingleton;
}

// UMVVMInstancedViewModelGeneratedClass @ 14a73fa30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMVVMInstancedViewModelGeneratedClass * __thiscall
UMVVMInstancedViewModelGeneratedClass::UMVVMInstancedViewModelGeneratedClass
          (UMVVMInstancedViewModelGeneratedClass *this,FVTableHelper *param_1)

{
  UBlueprintGeneratedClass::UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  (this->OnRepFunctionToLink).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnRepFunctionToLink).ArrayNum = 0;
  (this->OnRepFunctionToLink).ArrayMax = 0;
  *(undefined8 *)&this->OnRepToPropertyMap = 0;
  *(undefined8 *)&(this->OnRepToPropertyMap).field_0x8 = 0;
  *(undefined8 *)&(this->OnRepToPropertyMap).field_0x20 = 0;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x28 = 0;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x34 = 0;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OnRepToPropertyMap).field_0x40 = 0;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x48 = 0;
  return this;
}

// UMVVMInstancedViewModelGeneratedClass @ 14a73fac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMVVMInstancedViewModelGeneratedClass * __thiscall
UMVVMInstancedViewModelGeneratedClass::UMVVMInstancedViewModelGeneratedClass
          (UMVVMInstancedViewModelGeneratedClass *this,FObjectInitializer *param_1)

{
  UBlueprintGeneratedClass::UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  (this->OnRepFunctionToLink).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnRepFunctionToLink).ArrayNum = 0;
  (this->OnRepFunctionToLink).ArrayMax = 0;
  *(undefined8 *)&this->OnRepToPropertyMap = 0;
  *(undefined8 *)&(this->OnRepToPropertyMap).field_0x8 = 0;
  *(undefined8 *)&(this->OnRepToPropertyMap).field_0x20 = 0;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x28 = 0;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x34 = 0;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OnRepToPropertyMap).field_0x40 = 0;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x48 = 0;
  return this;
}

// ~UMVVMInstancedViewModelGeneratedClass @ 14a7406e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMVVMInstancedViewModelGeneratedClass::~UMVVMInstancedViewModelGeneratedClass
          (UMVVMInstancedViewModelGeneratedClass *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnRepToPropertyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UFunction>,FProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UFunction>,FProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UFunction>,FProperty_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnRepToPropertyMap);
  pFVar2 = (this->OnRepFunctionToLink).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UBlueprintGeneratedClass::~UBlueprintGeneratedClass((UBlueprintGeneratedClass *)this);
  return;
}

// BroadcastFieldValueChanged @ 14a743fd0

void __thiscall
UMVVMInstancedViewModelGeneratedClass::BroadcastFieldValueChanged
          (UMVVMInstancedViewModelGeneratedClass *this,UObject *param_1,FProperty *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_38;
  undefined4 local_30;
  undefined8 **local_28;
  longlong *local_20;
  code *local_18;
  longlong **local_10;
  
  plVar5 = (longlong *)0x0;
  plVar3 = plVar5;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    pUVar2 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
  }
  if (param_1 == (UObject *)0x0) {
    plVar3 = plVar5;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3);
  bVar1 = IsThisNotNull(param_2,"FField::GetFName");
  if (bVar1) {
    plVar5 = (longlong *)param_2->_padding_;
  }
  local_28 = &local_38;
  local_10 = (longlong **)&local_28;
  local_38 = (longlong *)0x0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
             ::Call;
  local_20 = plVar5;
  (**(code **)*puVar4)(puVar4,*(undefined8 *)&param_1->field_0x10,&local_18);
  if ((undefined8 **)local_38 != (undefined8 **)0x0) {
    local_20 = (longlong *)CONCAT44(local_20._4_4_,local_30);
    local_28 = (undefined8 **)local_38;
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_28);
  }
  return;
}

// GetPrivateStaticClass @ 14a7538f0

UClass * __cdecl UMVVMInstancedViewModelGeneratedClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMInstancedViewModelGeneratedClass.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMInstancedViewModelGeneratedClass",
               &Z_Registration_Info_UClass_UMVVMInstancedViewModelGeneratedClass.InnerSingleton,
               StaticRegisterNativesUMVVMInstancedViewModelGeneratedClass,0x3d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMInstancedViewModelGeneratedClass>,
               InternalVTableHelperCtorCaller<UMVVMInstancedViewModelGeneratedClass>,local_res8,
               UBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMInstancedViewModelGeneratedClass.InnerSingleton;
}

// K2_CallNativeOnRep @ 14a75a670

void __cdecl
UMVVMInstancedViewModelGeneratedClass::K2_CallNativeOnRep
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  UFunction *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  FWeakObjectPtr local_res8;
  UFunction *local_res20;
  
  if (param_1 != (UObject *)0x0) {
    pUVar7 = *(UClass **)&param_1->field_0x10;
    pUVar6 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    bVar5 = UClass::ImplementsInterface(pUVar7,pUVar6);
    if (bVar5) {
      plVar1 = *(longlong **)&param_1->field_0x10;
      if (plVar1 != (longlong *)0x0) {
        pUVar7 = StaticClass();
        iVar12 = (int)pUVar7->_padding_;
        if ((iVar12 <= *(int *)(plVar1[2] + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar1[2] + 0x30) + (longlong)iVar12 * 8) ==
            &pUVar7->_padding_)) {
          pUVar2 = param_2->CurrentNativeFunction;
          uVar13 = 0;
          iVar12 = 0;
          if (pUVar2 != (UFunction *)0x0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            local_res8.ObjectIndex = 0;
            local_res8.ObjectSerialNumber = 0;
            local_res20 = pUVar2;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
            uVar13 = (ulonglong)local_res8 >> 0x20;
            iVar12 = local_res8.ObjectIndex;
          }
          iVar16 = (int)uVar13;
          uVar10 = iVar12 - iVar16 ^ (uint)(uVar13 >> 0xd);
          uVar9 = (-0x61c88647 - uVar10) - iVar16 ^ uVar10 << 8;
          uVar17 = (iVar16 - uVar9) - uVar10 ^ uVar9 >> 0xd;
          uVar10 = (uVar10 - uVar17) - uVar9 ^ uVar17 >> 0xc;
          uVar9 = (uVar9 - uVar17) - uVar10 ^ uVar10 << 0x10;
          uVar17 = (uVar17 - uVar9) - uVar10 ^ uVar9 >> 5;
          uVar10 = (uVar10 - uVar17) - uVar9 ^ uVar17 >> 3;
          uVar9 = (uVar9 - uVar10) - uVar17 ^ uVar10 << 10;
          if ((int)plVar1[0x71] == *(int *)((longlong)plVar1 + 0x3b4)) {
            return;
          }
          plVar11 = (longlong *)plVar1[0x78];
          if ((longlong *)plVar1[0x78] == (longlong *)0x0) {
            plVar11 = plVar1 + 0x77;
          }
          iVar14 = *(int *)((longlong)plVar11 +
                           (ulonglong)
                           ((int)plVar1[0x79] - 1U & ((uVar17 - uVar9) - uVar10 ^ uVar9 >> 0xf)) * 4
                           );
          if (iVar14 == -1) {
            return;
          }
          lVar3 = plVar1[0x70];
          while ((lVar8 = (longlong)iVar14, *(int *)(lVar3 + lVar8 * 0x18) != iVar12 ||
                 (*(int *)(lVar3 + 4 + lVar8 * 0x18) != iVar16))) {
            iVar14 = *(int *)(lVar3 + 0x10 + lVar8 * 0x18);
            if (iVar14 == -1) {
              return;
            }
          }
          if (iVar14 == -1) {
            return;
          }
          lVar3 = plVar1[0x70] + (longlong)iVar14 * 0x18;
          if (lVar3 == 0) {
            return;
          }
          puVar15 = (undefined8 *)(lVar3 + 8);
          if (puVar15 == (undefined8 *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00014a75a86e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x410))(plVar1,param_1,*puVar15);
          return;
        }
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7100980098899116105>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\ViewModel\\MVVMInstancedViewModelGeneratedClass.cpp"
                         ,0x49,"GeneratedClass");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

// Link @ 14a75ae10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMVVMInstancedViewModelGeneratedClass::Link
          (UMVVMInstancedViewModelGeneratedClass *this,FArchive *param_1,bool param_2)

{
  undefined1 *puVar1;
  TArray<TObjectPtr<UFunction>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar2;
  TMap<TObjectKey<UFunction>,FProperty_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UFunction>,FProperty_const_*,0>_>
  *this_01;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  UObject *pUVar7;
  bool bVar8;
  FField *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  <lambda_1> local_res8 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  UObject *local_70;
  FField *local_68;
  FWeakObjectPtr *local_60;
  FField **local_58;
  TFieldIterator<FProperty> local_50;
  
  UBlueprintGeneratedClass::Link((UBlueprintGeneratedClass *)this,param_1,param_2);
  this_00 = &this->OnRepFunctionToLink;
  TArray<TObjectPtr<UFunction>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_UMVVMInstancedViewModelGeneratedClass::Link_::__l2::<lambda_1>_>
            (this_00,local_res8,Default);
  pFVar11 = (this_00->AllocatorInstance).Data;
  iVar4 = (this->OnRepFunctionToLink).ArrayNum;
  pFVar3 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->OnRepFunctionToLink).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UFunction>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar3) break;
    piVar2 = (int *)((longlong)&this->_padding_ + 4);
    iVar10 = (int)this->_padding_;
    uVar5 = *(undefined8 *)(*(longlong *)pFVar11 + 0x18);
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)&this->_padding_,piVar2);
    }
    *(int *)&this->_padding_ = iVar10 + 1;
    lVar6 = this->_padding_;
    pFVar11 = pFVar11 + 8;
    *(undefined8 *)(lVar6 + (longlong)iVar10 * 0x10) = uVar5;
    *(code **)(lVar6 + 8 + (longlong)iVar10 * 0x10) = K2_CallNativeOnRep;
  }
  this_01 = &this->OnRepToPropertyMap;
  bVar8 = 1 < *(int *)&(this->OnRepToPropertyMap).field_0x48;
  if (!bVar8) {
    TSet<TTuple<TObjectKey<UFunction>,FProperty_const_*>,TDefaultMapHashableKeyFuncs<TObjectKey<UFunction>,FProperty_const_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TObjectKey<UFunction>,FProperty_const_*>,TDefaultMapHashableKeyFuncs<TObjectKey<UFunction>,FProperty_const_*,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar1 = &(this->OnRepToPropertyMap).field_0xc;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->OnRepToPropertyMap).field_0x2c;
  *(undefined4 *)&(this->OnRepToPropertyMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->OnRepToPropertyMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->OnRepToPropertyMap).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->OnRepToPropertyMap).field_0x48 = 1;
    TSet<TTuple<TObjectKey<UFunction>,FProperty_const_*>,TDefaultMapHashableKeyFuncs<TObjectKey<UFunction>,FProperty_const_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TObjectKey<UFunction>,FProperty_const_*>,TDefaultMapHashableKeyFuncs<TObjectKey<UFunction>,FProperty_const_*,0>,FDefaultSetAllocator>
              *)this_01);
  }
  if (this == (UMVVMInstancedViewModelGeneratedClass *)0x0) {
    local_50.Field = (FField *)0x0;
  }
  else {
    local_50.Field = (FField *)this->_padding_;
  }
  local_50.InterfaceIndex = -1;
  local_50.bIncludeSuper = false;
  local_50.bIncludeDeprecated = true;
  local_50.bIncludeInterface = false;
  local_50.Struct = (UStruct *)this;
  TFieldIterator<FProperty>::IterateToNext(&local_50);
  pFVar9 = local_50.Field;
  do {
    if (pFVar9 == (FField *)0x0) {
      return;
    }
    if (pFVar9[2].ClassPrivate != (FFieldClass *)0x0) {
      pFVar11 = (this_00->AllocatorInstance).Data;
      pFVar3 = pFVar11 + (longlong)(this->OnRepFunctionToLink).ArrayNum * 8;
      for (; pFVar11 != pFVar3; pFVar11 = pFVar11 + 8) {
        pUVar7 = *(UObject **)pFVar11;
        if (*(FFieldClass **)&pUVar7->field_0x18 == pFVar9[2].ClassPrivate) {
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            local_78.ObjectIndex = 0;
            local_78.ObjectSerialNumber = 0;
            local_68 = pFVar9;
            local_50.Field = pFVar9;
            if (pUVar7 != (UObject *)0x0) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar7);
              }
              local_res20.ObjectIndex = 0;
              local_res20.ObjectSerialNumber = 0;
              local_70 = pUVar7;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar7);
              }
              FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_70);
              local_78 = local_res20;
            }
            local_60 = &local_78;
            local_58 = &local_68;
            TSet<TTuple<TObjectKey<UFunction>,FProperty_const_*>,TDefaultMapHashableKeyFuncs<TObjectKey<UFunction>,FProperty_const_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<TObjectKey<UFunction>_&&,FProperty_const_*_&&>_>
                      ((TSet<TTuple<TObjectKey<UFunction>,FProperty_const_*>,TDefaultMapHashableKeyFuncs<TObjectKey<UFunction>,FProperty_const_*,0>,FDefaultSetAllocator>
                        *)this_01,
                       (TPairInitializer<TObjectKey<UFunction>_&&,FProperty_const_*_&&> *)local_res8
                       ,(bool *)&local_60);
          }
          break;
        }
      }
    }
    local_50.Field = pFVar9->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_50);
    pFVar9 = local_50.Field;
  } while( true );
}

// OnPropertyReplicated @ 14a75b8e0

void __thiscall
UMVVMInstancedViewModelGeneratedClass::OnPropertyReplicated
          (UMVVMInstancedViewModelGeneratedClass *this,UObject *param_1,FProperty *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_38;
  undefined4 local_30;
  undefined8 **local_28;
  longlong *local_20;
  code *local_18;
  longlong **local_10;
  
  plVar5 = (longlong *)0x0;
  plVar3 = plVar5;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    pUVar2 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
  }
  if (param_1 == (UObject *)0x0) {
    plVar3 = plVar5;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3);
  bVar1 = IsThisNotNull(param_2,"FField::GetFName");
  if (bVar1) {
    plVar5 = (longlong *)param_2->_padding_;
  }
  local_28 = &local_38;
  local_10 = (longlong **)&local_28;
  local_38 = (longlong *)0x0;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
             ::Call;
  local_20 = plVar5;
  (**(code **)*puVar4)(puVar4,*(undefined8 *)&param_1->field_0x10,&local_18);
  if ((undefined8 **)local_38 != (undefined8 **)0x0) {
    local_20 = (longlong *)CONCAT44(local_20._4_4_,local_30);
    local_28 = (undefined8 **)local_38;
    (**(code **)(*plVar3 + 0x38))(plVar3,&local_28);
  }
  return;
}

// StaticRegisterNativesUMVVMInstancedViewModelGeneratedClass @ 14a760100

void __cdecl
UMVVMInstancedViewModelGeneratedClass::StaticRegisterNativesUMVVMInstancedViewModelGeneratedClass
          (void)

{
  return;
}

