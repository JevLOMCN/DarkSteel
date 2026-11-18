// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 28

// StaticClass @ 149edd390

UClass * __cdecl UPCGGraphInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphInstance",
               &Z_Registration_Info_UClass_UPCGGraphInstance.InnerSingleton,
               StaticRegisterNativesUPCGGraphInstance,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGraphInstance>,
               InternalVTableHelperCtorCaller<UPCGGraphInstance>,local_res8,
               UPCGGraphInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphInstance.InnerSingleton;
}

// UPCGGraphInstance @ 149eeede0

UPCGGraphInstance * __thiscall
UPCGGraphInstance::UPCGGraphInstance(UPCGGraphInstance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGraphInstance__6B_;
  (this->Graph).field0_0x0.DebugPtr = (UPCGGraphInterface *)0x0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->ParametersOverrides);
  *(undefined8 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements = 0;
  *(undefined8 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements.field_0x30 =
       0xffffffff;
  (this->ParametersOverrides).PropertiesIDsOverridden.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ParametersOverrides).PropertiesIDsOverridden.HashSize = 0;
  return this;
}

// UPCGGraphInstance @ 149eeee60

UPCGGraphInstance * __thiscall
UPCGGraphInstance::UPCGGraphInstance(UPCGGraphInstance *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGraphInstance__6B_;
  (this->Graph).field0_0x0.DebugPtr = (UPCGGraphInterface *)0x0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->ParametersOverrides);
  *(undefined8 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements = 0;
  *(undefined8 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ParametersOverrides).PropertiesIDsOverridden.Elements.field_0x30 =
       0xffffffff;
  (this->ParametersOverrides).PropertiesIDsOverridden.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ParametersOverrides).PropertiesIDsOverridden.HashSize = 0;
  return this;
}

// ~UPCGGraphInstance @ 149eeffa0

void __thiscall UPCGGraphInstance::~UPCGGraphInstance(UPCGGraphInstance *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UPCGGraphInstance__6B_;
  (this->ParametersOverrides).PropertiesIDsOverridden.HashSize = 0;
  FVar1 = (this->ParametersOverrides).PropertiesIDsOverridden.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ParametersOverrides).PropertiesIDsOverridden.Elements);
  FInstancedStruct::Reset((FInstancedStruct *)&this->ParametersOverrides);
  this->_padding_ = (longlong)&___7UPCGGraphInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 149ef56e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGGraphInstance::BeginDestroy(UPCGGraphInstance *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UPCGGraphInstance **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CanGraphInterfaceBeSet @ 149ef70a0

bool __thiscall
UPCGGraphInstance::CanGraphInterfaceBeSet(UPCGGraphInstance *this,UPCGGraphInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  while( true ) {
    if ((UPCGGraphInstance *)param_1 == this) {
      return false;
    }
    if ((UPCGGraphInstance *)param_1 == (UPCGGraphInstance *)0x0) {
      return true;
    }
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (*(int *)(*(longlong *)((longlong)param_1 + 0x10) + 0x38) < iVar1) {
      return true;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_) break;
    param_1 = ((TObjectPtr<UPCGGraphInterface>_u_0 *)(param_1 + 1))->DebugPtr;
  }
  return true;
}

// CopyParameterOverrides @ 149ef9700

void __thiscall
UPCGGraphInstance::CopyParameterOverrides(UPCGGraphInstance *this,UPCGGraphInterface *param_1)

{
  longlong lVar1;
  longlong lVar2;
  FInstancedPropertyBag *pFVar3;
  TOptional<TArrayView<FGuid_const_,int>_>_u_0 local_18;
  
  if (param_1 != (UPCGGraphInterface *)0x0) {
    lVar1 = (**(code **)(this->_padding_ + 0x2b8))();
    lVar2 = (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1);
    if (lVar1 == lVar2) {
      local_18.TypedValue.DataPtr = (FGuid *)0x0;
      local_18.TypedValue.ArrayNum = -1;
      pFVar3 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2c0))(param_1);
      FInstancedPropertyBag::CopyMatchingValuesByID
                (&(this->ParametersOverrides).Parameters,pFVar3,
                 (TOptional<TArrayView<FGuid_const_,int>_> *)&local_18.TypedValue);
    }
  }
  return;
}

// CreateInstance @ 149efabf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectPtr<UPCGGraphInterface> __cdecl
UPCGGraphInstance::CreateInstance(UObject *param_1,UPCGGraphInterface *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  FName FVar3;
  UClass *pUVar4;
  UPCGGraphInstance *this;
  longlong *plVar5;
  UPCGGraphInterface *in_R8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_b8 [24];
  UPCGGraphInterface *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((param_2 == (UPCGGraphInterface *)0x0) || (in_R8 == (UPCGGraphInterface *)0x0)) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)&in_R8->field_0x18;
    FVar3 = (FName)StaticClass();
    local_c8 = 0;
    FVar3 = MakeUniqueObjectName
                      ((UObject *)local_b8,(UClass *)param_2,FVar3,(EUniqueObjectNameOptions)uVar1);
    lVar2 = *(longlong *)FVar3;
    if (lVar2 == 0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)param_2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)(local_b8 + 0x10),pUVar4);
    local_78 = 0;
    uStack_70 = 0;
    local_90 = 9;
    local_80 = 0;
    local_88 = 0;
    local_a0 = param_2;
    local_98 = lVar2;
    this = (UPCGGraphInstance *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_b8 + 0x10));
    if (local_68 != 0) {
      plVar5 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar5 = local_40;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UPCGGraphInstance *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    SetGraph(this,in_R8);
    *(UPCGGraphInstance **)param_1 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UPCGGraphInstance *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
  }
  return (TObjectPtr<UPCGGraphInterface>)(TObjectPtr<UPCGGraphInterface>_u_0)param_1;
}

// GetGraph @ 149f00640

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall UPCGGraphInstance::GetGraph(UPCGGraphInstance *this)

{
  UPCGGraphInterface *pUVar1;
  UPCGGraph *pUVar2;
  
  pUVar1 = (this->Graph).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGGraphInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149f0064c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UPCGGraph *)(**(code **)(*(longlong *)pUVar1 + 0x2b8))();
    return pUVar2;
  }
  return (UPCGGraph *)0x0;
}

// GetGraph @ 149f00660

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall UPCGGraphInstance::GetGraph(UPCGGraphInstance *this)

{
  UPCGGraphInterface *pUVar1;
  UPCGGraph *pUVar2;
  
  pUVar1 = (this->Graph).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGGraphInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149f0066c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UPCGGraph *)(**(code **)(*(longlong *)pUVar1 + 0x2b8))();
    return pUVar2;
  }
  return (UPCGGraph *)0x0;
}

// GetMutableUserParametersStruct @ 149f02410

FInstancedPropertyBag * __thiscall
UPCGGraphInstance::GetMutableUserParametersStruct(UPCGGraphInstance *this)

{
  return &(this->ParametersOverrides).Parameters;
}

// GetPrivateStaticClass @ 149f046d0

UClass * __cdecl UPCGGraphInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphInstance",
               &Z_Registration_Info_UClass_UPCGGraphInstance.InnerSingleton,
               StaticRegisterNativesUPCGGraphInstance,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGraphInstance>,
               InternalVTableHelperCtorCaller<UPCGGraphInstance>,local_res8,
               UPCGGraphInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphInstance.InnerSingleton;
}

// GetUserParametersStruct @ 149f06680

FInstancedPropertyBag * __thiscall
UPCGGraphInstance::GetUserParametersStruct(UPCGGraphInstance *this)

{
  return &(this->ParametersOverrides).Parameters;
}

// GraphAssetFilter @ 149f06730

bool __thiscall UPCGGraphInstance::GraphAssetFilter(UPCGGraphInstance *this,FAssetData *param_1)

{
  return false;
}

// IsEditorOnly @ 149f07b00

bool __thiscall UPCGGraphInstance::IsEditorOnly(UPCGGraphInstance *this)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x2b0))();
  if (lVar2 != 0) {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2b0))(this);
    cVar1 = (**(code **)(*plVar3 + 0x120))(plVar3);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// IsGraphParameterOverridden @ 149f07f60

bool __thiscall UPCGGraphInstance::IsGraphParameterOverridden(UPCGGraphInstance *this,FName param_1)

{
  FPropertyBagPropertyDesc *pFVar1;
  
  pFVar1 = FInstancedPropertyBag::FindPropertyDescByName
                     (&(this->ParametersOverrides).Parameters,param_1);
  return pFVar1 != (FPropertyBagPropertyDesc *)0x0;
}

// IsPropertyOverriddenAndNotDefault @ 149f08430

bool __thiscall
UPCGGraphInstance::IsPropertyOverriddenAndNotDefault(UPCGGraphInstance *this,FProperty *param_1)

{
  UPCGGraphInterface *pUVar1;
  bool bVar2;
  FInstancedPropertyBag *pFVar3;
  
  pUVar1 = (this->Graph).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGGraphInterface *)0x0) {
    pFVar3 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)pUVar1 + 0x2c0))();
    bVar2 = FPCGOverrideInstancedPropertyBag::IsPropertyOverriddenAndNotDefault
                      (&this->ParametersOverrides,param_1,pFVar3);
    return bVar2;
  }
  return false;
}

// OnGraphParametersChanged @ 149f099a0

void __thiscall
UPCGGraphInstance::OnGraphParametersChanged
          (UPCGGraphInstance *this,UPCGGraphInterface *param_1,EPCGGraphParameterEvent param_2,
          FName param_3)

{
  UPCGGraphInterface *pUVar1;
  FInstancedPropertyBag *pFVar2;
  bool bVar3;
  
  pUVar1 = (this->Graph).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGGraphInterface *)0x0) {
    bVar3 = param_1 == (UPCGGraphInterface *)0x0;
  }
  else {
    bVar3 = pUVar1 == param_1;
  }
  if ((bVar3) || ((UPCGGraphInstance *)param_1 == this)) {
    if (pUVar1 == (UPCGGraphInterface *)0x0) {
      bVar3 = param_1 == (UPCGGraphInterface *)0x0;
    }
    else {
      bVar3 = pUVar1 == param_1;
    }
    if ((bVar3) && (param_2 == ValueModifiedLocally)) {
      param_2 = ValueModifiedByParent;
    }
    if (pUVar1 == (UPCGGraphInterface *)0x0) {
      FInstancedStruct::Reset((FInstancedStruct *)&this->ParametersOverrides);
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Reset
                (&(this->ParametersOverrides).PropertiesIDsOverridden);
    }
    else {
      pFVar2 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)pUVar1 + 0x2c0))();
      bVar3 = FPCGOverrideInstancedPropertyBag::RefreshParameters
                        (&this->ParametersOverrides,pFVar2,param_2,param_3);
      if (bVar3) {
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
      }
    }
  }
  return;
}

// OnGraphParametersChanged @ 149f09a60

void __thiscall
UPCGGraphInstance::OnGraphParametersChanged
          (UPCGGraphInstance *this,EPCGGraphParameterEvent param_1,FName param_2)

{
  UPCGGraphInstance *pUVar1;
  FInstancedPropertyBag *pFVar2;
  bool bVar3;
  
  pUVar1 = (UPCGGraphInstance *)(this->Graph).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGGraphInstance *)0x0) {
    bVar3 = this == (UPCGGraphInstance *)0x0;
  }
  else {
    bVar3 = pUVar1 == this;
  }
  if ((bVar3) && (param_1 == ValueModifiedLocally)) {
    param_1 = ValueModifiedByParent;
  }
  if (pUVar1 == (UPCGGraphInstance *)0x0) {
    FInstancedStruct::Reset((FInstancedStruct *)&this->ParametersOverrides);
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Reset
              (&(this->ParametersOverrides).PropertiesIDsOverridden);
  }
  else {
    pFVar2 = (FInstancedPropertyBag *)(**(code **)(pUVar1->_padding_ + 0x2c0))();
    bVar3 = FPCGOverrideInstancedPropertyBag::RefreshParameters
                      (&this->ParametersOverrides,pFVar2,param_1,param_2);
    if (bVar3) {
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    }
  }
  return;
}

// PostDuplicate @ 149f0b0a0

void __thiscall UPCGGraphInstance::PostDuplicate(UPCGGraphInstance *this,bool param_1)

{
  return;
}

// PostEditImport @ 149f0b0d0

void __thiscall UPCGGraphInstance::PostEditImport(UPCGGraphInstance *this)

{
  return;
}

// PostLoad @ 149f0cbf0

void __thiscall UPCGGraphInstance::PostLoad(UPCGGraphInstance *this)

{
  UObject *this_00;
  UPCGGraphInterface *pUVar1;
  bool bVar2;
  FInstancedPropertyBag *pFVar3;
  
  UObject::PostLoad((UObject *)this);
  this_00 = (UObject *)(this->Graph).field0_0x0.DebugPtr;
  if (this_00 != (UObject *)0x0) {
    UObject::ConditionalPostLoad(this_00);
  }
  pUVar1 = (this->Graph).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGGraphInterface *)0x0) {
    FInstancedStruct::Reset((FInstancedStruct *)&this->ParametersOverrides);
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Reset
              (&(this->ParametersOverrides).PropertiesIDsOverridden);
    return;
  }
  pFVar3 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)pUVar1 + 0x2c0))();
  bVar2 = FPCGOverrideInstancedPropertyBag::RefreshParameters
                    (&this->ParametersOverrides,pFVar3,GraphPostLoad,(FName)0x0);
  if (bVar2) {
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  }
  return;
}

// RefreshParameters @ 149f0eb50

void __thiscall
UPCGGraphInstance::RefreshParameters
          (UPCGGraphInstance *this,EPCGGraphParameterEvent param_1,FName param_2)

{
  UPCGGraphInterface *pUVar1;
  bool bVar2;
  FInstancedPropertyBag *pFVar3;
  
  pUVar1 = (this->Graph).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGGraphInterface *)0x0) {
    FInstancedStruct::Reset((FInstancedStruct *)&this->ParametersOverrides);
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Reset
              (&(this->ParametersOverrides).PropertiesIDsOverridden);
  }
  else {
    pFVar3 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)pUVar1 + 0x2c0))();
    bVar2 = FPCGOverrideInstancedPropertyBag::RefreshParameters
                      (&this->ParametersOverrides,pFVar3,param_1,param_2);
    if (bVar2) {
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    }
  }
  return;
}

// ResetPropertyToDefault @ 149f11010

void __thiscall
UPCGGraphInstance::ResetPropertyToDefault(UPCGGraphInstance *this,FProperty *param_1)

{
  bool bVar1;
  int iVar2;
  FPropertyBagPropertyDesc *pFVar3;
  ulong64 uVar4;
  FInstancedPropertyBag *pFVar5;
  FName FVar6;
  
  if (param_1 != (FProperty *)0x0) {
    bVar1 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar1) {
      FVar6 = (FName)param_1->_padding_;
    }
    else {
      FVar6.ComparisonIndex.Value = 0;
      FVar6.Number = 0;
    }
    pFVar3 = FInstancedPropertyBag::FindPropertyDescByName
                       (&(this->ParametersOverrides).Parameters,FVar6);
    if (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
      uVar4 = CityHash64((char *)&pFVar3->ID,0x10);
      iVar2 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                        (&(this->ParametersOverrides).PropertiesIDsOverridden,(uint)uVar4,
                         &pFVar3->ID);
      if (iVar2 != -1) {
        pFVar5 = (FInstancedPropertyBag *)
                 (**(code **)(*(longlong *)(this->Graph).field0_0x0.DebugPtr + 0x2c0))();
        FPCGOverrideInstancedPropertyBag::ResetPropertyToDefault
                  (&this->ParametersOverrides,param_1,pFVar5);
      }
    }
  }
  return;
}

// SetGraph @ 149f11de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGGraphInstance::SetGraph(UPCGGraphInstance *this,UPCGGraphInterface *param_1)

{
  int iVar1;
  UPCGGraphInterface *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FString local_18;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
LAB_149f11e8d:
    pUVar2 = (this->Graph).field0_0x0.DebugPtr;
    if (pUVar2 == (UPCGGraphInterface *)0x0) {
      bVar3 = param_1 == (UPCGGraphInterface *)0x0;
    }
    else {
      bVar3 = pUVar2 == param_1;
    }
    if (!bVar3) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UPCGGraphInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->Graph).field0_0x0.DebugPtr = param_1;
      RefreshParameters(this,GraphChanged,(FName)0x0);
    }
  }
  else {
    if ((UPCGGraphInstance *)param_1 != this) {
      pUVar4 = StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if (((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar4->_padding_)) ||
         (bVar3 = CanGraphInterfaceBeSet(this,*(UPCGGraphInterface **)(param_1 + 1)), bVar3))
      goto LAB_149f11e8d;
    }
    if (1 < (byte)LogPCG._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// StaticRegisterNativesUPCGGraphInstance @ 149f14070

void __cdecl UPCGGraphInstance::StaticRegisterNativesUPCGGraphInstance(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPCGGraphInstance_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdatePropertyOverride @ 149f15280

void __thiscall
UPCGGraphInstance::UpdatePropertyOverride(UPCGGraphInstance *this,FProperty *param_1,bool param_2)

{
  UPCGGraphInterface *pUVar1;
  FInstancedPropertyBag *pFVar2;
  
  pUVar1 = (this->Graph).field0_0x0.DebugPtr;
  if ((pUVar1 != (UPCGGraphInterface *)0x0) && (param_1 != (FProperty *)0x0)) {
    pFVar2 = (FInstancedPropertyBag *)(**(code **)(*(longlong *)pUVar1 + 0x2c0))();
    FPCGOverrideInstancedPropertyBag::UpdatePropertyOverride
              (&this->ParametersOverrides,param_1,param_2,pFVar2);
  }
  return;
}

// execGraphAssetFilter @ 149f199f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UPCGGraphInstance::execGraphAssetFilter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  FAssetDataTagMapSharedView_u_0 local_50;
  undefined8 uStack_48;
  TReferenceControllerBase<1> *local_40;
  void *local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_58 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_50.Loose = (FAssetDataTagMap *)0x0;
  uStack_48 = 0;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_24 = 2;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)&local_50.Fixed);
  return;
}

