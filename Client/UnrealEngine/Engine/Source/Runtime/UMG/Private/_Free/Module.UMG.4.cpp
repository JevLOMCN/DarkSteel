// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 47

// `dynamic_initializer_for_'StatPtr_STAT_CreateWidget'' @ 1410a5c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CreateWidget__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CreateWidget == (FThreadSafeStaticStat<FStat_STAT_CreateWidget>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CreateWidget");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CreateWidget,*pFVar1,L"UserWidget Create",
               "STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetChild_h__Script_UMG_2081783860'' @ 1410a5d00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetChild_h__Script_UMG_2081783860__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetChild_h__Script_UMG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h__Script_UMG_624565573'' @ 1410a5d40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h__Script_UMG_624565573__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetLayoutLibrary_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h__Script_UMG_1752730096'' @ 1410a5d80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h__Script_UMG_1752730096__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/UMG",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h__Script_UMG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UWidgetLayoutLibrary @ 146aabfa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetLayoutLibrary(void)

{
  if (Z_Registration_Info_UClass_UWidgetLayoutLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetLayoutLibrary.OuterSingleton,
               &Z_Construct_UClass_UWidgetLayoutLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetLayoutLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform @ 146aabfe0

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnPlatform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport @ 146aac020

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionOnViewport_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 146aac060

void __cdecl
Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI @ 146aac070

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry @ 146aac0b0

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale @ 146aac0f0

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportScale_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize @ 146aac130

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry @ 146aac170

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_GetViewportWidgetGeometry_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bPlayerViewportRelative_SetBit @ 146aac1b0

void __cdecl
Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::
NewProp_bPlayerViewportRelative_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 146aac1c0

void __cdecl
Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition @ 146aac1d0

UFunction * __cdecl
Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets @ 146aac270

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_RemoveAllWidgets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot @ 146aac2b0

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsBorderSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot @ 146aac2f0

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsCanvasSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot @ 146aac330

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsGridSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot @ 146aac420

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot @ 146aac460

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsOverlaySlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot @ 146aac4a0

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot @ 146aac4e0

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot @ 146aac520

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot @ 146aac560

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsStackBoxSlot @ 146aac5a0

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsStackBoxSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsStackBoxSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot @ 146aac620

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsUniformGridSlot_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot @ 146aac660

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot @ 146aac6a0

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot @ 146aac6e0

UFunction * __cdecl Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWidgetTree @ 146aac720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWidgetTree(void)

{
  if (Z_Registration_Info_UClass_UWidgetTree.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWidgetTree.OuterSingleton,
               &Z_Construct_UClass_UWidgetTree_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWidgetTree.OuterSingleton;
}

// NewStructOps @ 146aac760

void * __cdecl Z_Construct_UScriptStruct_FWidgetChild_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetChild,&UE::CoreUObject::Private::Construct<FWidgetChild>,&UE::CoreUObject::Private::ConstructForTests<FWidgetChild>,&UE::CoreUObject::Private::Destruct<FWidgetChild>,&UE::CoreUObject::Private::Copy<FWidgetChild>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// GetDefault<UUserInterfaceSettings> @ 146aacaa0

UUserInterfaceSettings * __cdecl GetDefault<UUserInterfaceSettings>(void)

{
  UClass *this;
  
  this = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
    return (UUserInterfaceSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  return (UUserInterfaceSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr;
}

// InternalConstructor<UWidgetLayoutLibrary> @ 146aad050

void __cdecl InternalConstructor<UWidgetLayoutLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UWidgetLayoutLibrary__6B_;
  }
  return;
}

// InternalConstructor<UWidgetTree> @ 146aad080

void __cdecl InternalConstructor<UWidgetTree>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UWidgetTree::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UWidgetTree::_vftable__for__INamedSlotInterface__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x14 = 0x80;
    *(undefined4 *)&this[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x1c = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined4 *)&this[3].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UWidgetLayoutLibrary> @ 146aad0f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWidgetLayoutLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetLayoutLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWidgetLayoutLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWidgetTree> @ 146aad1a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWidgetTree>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWidgetTree::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UWidgetTree::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UWidgetTree::_vftable__for__INamedSlotInterface__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// `vector_deleting_destructor'`adjustor{40}' @ 146aad95c

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl UWidgetTree::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWidgetTree::_vector_deleting_destructor__adjustor_40__(UWidgetTree *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWidgetTree *)&this[-1].NamedSlotBindings.field_0x28,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146aad970

void * __thiscall
UWidgetLayoutLibrary::_scalar_deleting_destructor_(UWidgetLayoutLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UWidgetLayoutLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146aad9d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall UWidgetTree::_scalar_deleting_destructor_(UWidgetTree *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INamedSlotInterface__;
  *(undefined4 *)&(this->NamedSlotBindings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NamedSlotBindings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UWidget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NamedSlotBindings);
  this->_padding_ = (longlong)&___7INamedSlotInterface__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeWidgetChild @ 146aadb70

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetChild(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetLayoutLibrary @ 146aadb80

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetLayoutLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetTree @ 146aadb90

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetTree(void)

{
  return;
}

// Z_Construct_UClass_UWidgetLayoutLibrary_NoRegister @ 146ab00c0

UClass * __cdecl Z_Construct_UClass_UWidgetLayoutLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetLayoutLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetLayoutLibrary",
               &Z_Registration_Info_UClass_UWidgetLayoutLibrary.InnerSingleton,
               UWidgetLayoutLibrary::StaticRegisterNativesUWidgetLayoutLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UWidgetLayoutLibrary>,
               InternalVTableHelperCtorCaller<UWidgetLayoutLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetLayoutLibrary.InnerSingleton;
}

// Z_Construct_UClass_UWidgetTree_NoRegister @ 146ab0180

UClass * __cdecl Z_Construct_UClass_UWidgetTree_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetTree.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetTree",&Z_Registration_Info_UClass_UWidgetTree.InnerSingleton,
               UWidgetTree::StaticRegisterNativesUWidgetTree,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWidgetTree>,
               InternalVTableHelperCtorCaller<UWidgetTree>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetTree.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWidgetChild @ 146ab0230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetChild(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetChild.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetChild.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetChild_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetChild.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetChild.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

