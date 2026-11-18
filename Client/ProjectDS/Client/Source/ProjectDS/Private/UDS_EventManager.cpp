// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 42

// StaticClass @ 14b497aa0

UClass * __cdecl UDS_EventManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EventManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EventManager",
               &Z_Registration_Info_UClass_UDS_EventManager.InnerSingleton,
               StaticRegisterNativesUDS_EventManager,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_EventManager>,
               InternalVTableHelperCtorCaller<UDS_EventManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EventManager.InnerSingleton;
}

// UDS_EventManager @ 14b49a0b0

UDS_EventManager * __thiscall
UDS_EventManager::UDS_EventManager(UDS_EventManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EventManager__6B_;
  *(undefined8 *)&this->EventInstances = 0;
  *(undefined8 *)&(this->EventInstances).field_0x8 = 0;
  *(undefined8 *)&(this->EventInstances).field_0x20 = 0;
  *(undefined4 *)&(this->EventInstances).field_0x28 = 0;
  *(undefined4 *)&(this->EventInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->EventInstances).field_0x34 = 0;
  *(undefined4 *)&(this->EventInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EventInstances).field_0x40 = 0;
  *(undefined4 *)&(this->EventInstances).field_0x48 = 0;
  (this->Delegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Delegates).ArrayNum = 0;
  (this->Delegates).ArrayMax = 0;
  return this;
}

// ~UDS_EventManager @ 14b49ab20

void __thiscall UDS_EventManager::~UDS_EventManager(UDS_EventManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_EventManager__6B_;
  pFVar1 = (this->Delegates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->EventInstances).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EventInstances).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_const_*,UDS_EventBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_const_*,UDS_EventBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_const_*,UDS_EventBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EventInstances);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b49bba0

UClass * __cdecl UDS_EventManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EventManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EventManager",
               &Z_Registration_Info_UClass_UDS_EventManager.InnerSingleton,
               StaticRegisterNativesUDS_EventManager,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_EventManager>,
               InternalVTableHelperCtorCaller<UDS_EventManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EventManager.InnerSingleton;
}

// StaticRegisterNativesUDS_EventManager @ 14b49c040

void __cdecl UDS_EventManager::StaticRegisterNativesUDS_EventManager(void)

{
  return;
}

// GetEventInternal<UDS_InputEvent> @ 14b7990e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_InputEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_InputEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_InputEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_InputEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b79930f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_InputEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b79930f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_InputEvent *)*ppUVar5;
    if (pUVar1 != (UDS_InputEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_InputEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_InputEvent *)0x0;
}

// GetEventInternal<UDS_UIEvent> @ 14b799380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_UIEvent * __thiscall UDS_EventManager::GetEventInternal<UDS_UIEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_UIEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_UIEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b7995af;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_UIEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b7995af:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_UIEvent *)*ppUVar5;
    if (pUVar1 != (UDS_UIEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_UIEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_UIEvent *)0x0;
}

// GetEventInternal<UDS_InteractionEvent> @ 14b7d44c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_InteractionEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_InteractionEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_InteractionEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_InteractionEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b7d46ef;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_InteractionEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b7d46ef:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_InteractionEvent *)*ppUVar5;
    if (pUVar1 != (UDS_InteractionEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_InteractionEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_InteractionEvent *)0x0;
}

// GetEventInternal<UDS_LevelSequenceEvent> @ 14b7d4760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_LevelSequenceEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_LevelSequenceEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_LevelSequenceEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_LevelSequenceEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b7d498f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_LevelSequenceEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b7d498f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_LevelSequenceEvent *)*ppUVar5;
    if (pUVar1 != (UDS_LevelSequenceEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_LevelSequenceEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_LevelSequenceEvent *)0x0;
}

// GetEventInternal<UDS_LoadingEvent> @ 14b7d4a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_LoadingEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_LoadingEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_LoadingEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_LoadingEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b7d4c2f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_LoadingEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b7d4c2f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_LoadingEvent *)*ppUVar5;
    if (pUVar1 != (UDS_LoadingEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_LoadingEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_LoadingEvent *)0x0;
}

// GetEventInternal<UDS_MountEvent> @ 14b81f9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_MountEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_MountEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_MountEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_MountEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b81fbff;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_MountEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b81fbff:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_MountEvent *)*ppUVar5;
    if (pUVar1 != (UDS_MountEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_MountEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_MountEvent *)0x0;
}

// GetEventInternal<UDS_SwimEvent> @ 14b81fc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_SwimEvent * __thiscall UDS_EventManager::GetEventInternal<UDS_SwimEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_SwimEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_SwimEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b81fe9f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_SwimEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b81fe9f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_SwimEvent *)*ppUVar5;
    if (pUVar1 != (UDS_SwimEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_SwimEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_SwimEvent *)0x0;
}

// GetEventInternal<UDS_ChatEvent> @ 14b8ae5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ChatEvent * __thiscall UDS_EventManager::GetEventInternal<UDS_ChatEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_ChatEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_ChatEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b8ae7ff;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_ChatEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b8ae7ff:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_ChatEvent *)*ppUVar5;
    if (pUVar1 != (UDS_ChatEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_ChatEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_ChatEvent *)0x0;
}

// GetEventInternal<UDS_DungeonEvent> @ 14b8ae870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_DungeonEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_DungeonEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_DungeonEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_DungeonEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b8aea9f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_DungeonEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b8aea9f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_DungeonEvent *)*ppUVar5;
    if (pUVar1 != (UDS_DungeonEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_DungeonEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_DungeonEvent *)0x0;
}

// GetEventInternal<UDS_PartyEvent> @ 14b8aeb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_PartyEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_PartyEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_PartyEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_PartyEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b8aed3f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_PartyEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b8aed3f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_PartyEvent *)*ppUVar5;
    if (pUVar1 != (UDS_PartyEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_PartyEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_PartyEvent *)0x0;
}

// GetEventInternal<UDS_PlayerEvent> @ 14b8aedb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_PlayerEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_PlayerEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_PlayerEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_PlayerEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b8aefdf;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_PlayerEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b8aefdf:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_PlayerEvent *)*ppUVar5;
    if (pUVar1 != (UDS_PlayerEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_PlayerEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_PlayerEvent *)0x0;
}

// GetEventInternal<UDS_RingCommandUIEvent> @ 14b8af050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_RingCommandUIEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_RingCommandUIEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_RingCommandUIEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_RingCommandUIEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b8af27f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_RingCommandUIEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b8af27f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_RingCommandUIEvent *)*ppUVar5;
    if (pUVar1 != (UDS_RingCommandUIEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_RingCommandUIEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_RingCommandUIEvent *)0x0;
}

// GetEventInternal<UDS_WorldMapEvent> @ 14b993d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_WorldMapEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_WorldMapEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_WorldMapEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_WorldMapEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14b993f6f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_WorldMapEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14b993f6f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_WorldMapEvent *)*ppUVar5;
    if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_WorldMapEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_WorldMapEvent *)0x0;
}

// GetEventInternal<UDS_ItemCraftEvent> @ 14ba8a490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ItemCraftEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_ItemCraftEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_ItemCraftEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_ItemCraftEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14ba8a6bf;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_ItemCraftEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14ba8a6bf:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_ItemCraftEvent *)*ppUVar5;
    if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_ItemCraftEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_ItemCraftEvent *)0x0;
}

// GetEventInternal<UDS_ItemDrop> @ 14ba8a730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ItemDrop * __thiscall UDS_EventManager::GetEventInternal<UDS_ItemDrop>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_ItemDrop *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_ItemDrop_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14ba8a95f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_ItemDrop_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14ba8a95f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_ItemDrop *)*ppUVar5;
    if (pUVar1 != (UDS_ItemDrop *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_ItemDrop_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_ItemDrop *)0x0;
}

// GetEventInternal<UDS_NPCShopEvent> @ 14ba8a9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_NPCShopEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_NPCShopEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_NPCShopEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_NPCShopEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14ba8abff;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_NPCShopEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14ba8abff:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_NPCShopEvent *)*ppUVar5;
    if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_NPCShopEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_NPCShopEvent *)0x0;
}

// GetEventInternal<UDS_QuestEvent> @ 14ba8ac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_QuestEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_QuestEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_QuestEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_QuestEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14ba8ae9f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_QuestEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14ba8ae9f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_QuestEvent *)*ppUVar5;
    if (pUVar1 != (UDS_QuestEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_QuestEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_QuestEvent *)0x0;
}

// GetEventInternal<UDS_GuildEvent> @ 14bae7480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_GuildEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_GuildEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_GuildEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_GuildEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14bae76af;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_GuildEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14bae76af:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_GuildEvent *)*ppUVar5;
    if (pUVar1 != (UDS_GuildEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_GuildEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_GuildEvent *)0x0;
}

// GetEventInternal<UDS_LoginEvent> @ 14bae7720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_LoginEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_LoginEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_LoginEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_LoginEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14bae794f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_LoginEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14bae794f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_LoginEvent *)*ppUVar5;
    if (pUVar1 != (UDS_LoginEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_LoginEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_LoginEvent *)0x0;
}

// GetEventInternal<UDS_MailEvent> @ 14bae79c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_MailEvent * __thiscall UDS_EventManager::GetEventInternal<UDS_MailEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_MailEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_MailEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14bae7bef;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_MailEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14bae7bef:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_MailEvent *)*ppUVar5;
    if (pUVar1 != (UDS_MailEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_MailEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_MailEvent *)0x0;
}

// Created @ 14bb014c0

void __thiscall UDS_EventManager::Created(UDS_EventManager *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  
  *(undefined1 *)&this->_padding_ = 0;
  this_00 = FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_EventManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_00,(UDS_EventManager *)&stack0x00000008,(pmf_0c03a894)this);
  return;
}

// Destroyed @ 14bb02b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_EventManager::Destroyed(UDS_EventManager *this)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  int iVar4;
  UObject *this_01;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_02;
  FUObjectItem *this_03;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this_02 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_02,this);
  iVar4 = *(int *)&(this->EventInstances).field_0x28;
  puVar3 = &(this->EventInstances).field_0x10;
  iVar11 = 0;
  this_00 = &this->EventInstances;
  iVar13 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->EventInstances).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar3;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bb02bdd;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar13;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14bb02bdd:
  uVar10 = *(uint *)&(this->EventInstances).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->EventInstances).field_0x8 -
                       *(int *)&(this->EventInstances).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar10 < 0) || (iVar4 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->EventInstances).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(this->EventInstances).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar3;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bb02ce0;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_14bb02ce0:
  while( true ) {
    if (*(int *)&(this->EventInstances).field_0x8 - *(int *)&(this->EventInstances).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UClass_const_*,UDS_EventBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) break;
    this_01 = *(UObject **)
               (*(longlong *)&this_00->field_0x0 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    this_03 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_01->field_0xc);
    FUObjectItem::ClearRootFlags(this_03,RootSet);
    UObject::ConditionalBeginDestroy(this_01);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar6 = 1 < *(int *)&(this->EventInstances).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar3 = &(this->EventInstances).field_0xc;
  *(undefined4 *)&(this->EventInstances).field_0x8 = 0;
  if (*(int *)puVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar3);
  }
  *(undefined4 *)&(this->EventInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EventInstances).field_0x34 = 0;
  iVar4 = *(int *)&(this->EventInstances).field_0x2c;
  *(undefined4 *)&(this->EventInstances).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->EventInstances).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EventInstances).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->EventInstances).field_0x48 = 1;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  piVar1 = &(this->Delegates).ArrayMax;
  (this->Delegates).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Delegates).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetInst @ 14bb0b870

UDS_EventManager * __cdecl UDS_EventManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_EventManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_EventManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_EventManager_NoRegister();
  pUVar3 = (UDS_EventManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_EventManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_EventManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_EventManager *)0x0;
}

// OnPostGC @ 14bb20bc0

void __thiscall UDS_EventManager::OnPostGC(UDS_EventManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if ((char)this->_padding_ != '\x01') {
    pFVar3 = (this->Delegates).AllocatorInstance.Data;
    iVar2 = (this->Delegates).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Delegates).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_IDelegateCleanable_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      if (*(undefined8 **)pFVar3 != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)pFVar3)();
      }
      pFVar3 = pFVar3 + 8;
    }
  }
  return;
}

// RegisterCleanableDelegate @ 14bb2d570

void __thiscall
UDS_EventManager::RegisterCleanableDelegate(UDS_EventManager *this,FDS_IDelegateCleanable *param_1)

{
  int *piVar1;
  TArray<FDS_IDelegateCleanable_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDS_IDelegateCleanable *local_res10 [3];
  
  if (((char)this->_padding_ != '\x01') && (param_1 != (FDS_IDelegateCleanable *)0x0)) {
    pTVar2 = &this->Delegates;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_res10[0] = param_1;
    if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->Delegates).ArrayMax * 8))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->Delegates).ArrayNum;
    piVar1 = &(this->Delegates).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Delegates).ArrayNum = iVar6 + 1;
    *(FDS_IDelegateCleanable **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_res10[0];
  }
  return;
}

// UnregisterCleanableDelegate @ 14bb3ed40

void __thiscall
UDS_EventManager::UnregisterCleanableDelegate
          (UDS_EventManager *this,FDS_IDelegateCleanable *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FDS_IDelegateCleanable *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FDS_IDelegateCleanable *local_res10;
  
  if (((char)this->_padding_ != '\x01') && (param_1 != (FDS_IDelegateCleanable *)0x0)) {
    local_res10 = param_1;
    (**(code **)*param_1)(param_1);
    pFVar2 = (this->Delegates).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
       (((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)(this->Delegates).ArrayMax * 8
        && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->Delegates).ArrayNum;
    if (iVar1 != 0) {
      iVar9 = 0;
      pFVar2 = (this->Delegates).AllocatorInstance.Data;
      bVar4 = *(FDS_IDelegateCleanable **)pFVar2 != local_res10;
      lVar6 = 0;
      pFVar5 = local_res10;
      iVar7 = 0;
      do {
        iVar8 = iVar7;
        do {
          lVar6 = lVar6 + 1;
          iVar8 = iVar8 + 1;
          if (iVar1 <= lVar6) break;
        } while (bVar4 == (*(FDS_IDelegateCleanable **)(pFVar2 + lVar6 * 8) != pFVar5));
        if (bVar4 != false) {
          if (iVar9 != iVar7) {
            memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                    (longlong)(iVar8 - iVar7) << 3);
            pFVar5 = local_res10;
          }
          iVar9 = iVar9 + (iVar8 - iVar7);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < iVar1);
      (this->Delegates).ArrayNum = iVar9;
    }
  }
  return;
}

// GetEventInternal<UDS_EnvironmentEvent> @ 14bb48db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_EnvironmentEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_EnvironmentEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_EnvironmentEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_EnvironmentEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14bb48fdf;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_EnvironmentEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14bb48fdf:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_EnvironmentEvent *)*ppUVar5;
    if (pUVar1 != (UDS_EnvironmentEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_EnvironmentEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_EnvironmentEvent *)0x0;
}

// GetEventInternal<UDS_WorldBossEvent> @ 14bb49050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_WorldBossEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_WorldBossEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_WorldBossEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_WorldBossEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14bb4927f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_WorldBossEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14bb4927f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_WorldBossEvent *)*ppUVar5;
    if (pUVar1 != (UDS_WorldBossEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_WorldBossEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_WorldBossEvent *)0x0;
}

// GetEventInternal<UDS_ItemRepairEvent> @ 14bbe97c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ItemRepairEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_ItemRepairEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_ItemRepairEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_ItemRepairEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14bbe99ef;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_ItemRepairEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14bbe99ef:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_ItemRepairEvent *)*ppUVar5;
    if (pUVar1 != (UDS_ItemRepairEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_ItemRepairEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_ItemRepairEvent *)0x0;
}

// GetEventInternal<UDS_CharacterUIEvent> @ 14bc26b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_CharacterUIEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_CharacterUIEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_CharacterUIEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_CharacterUIEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14bc26d7f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_CharacterUIEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14bc26d7f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_CharacterUIEvent *)*ppUVar5;
    if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_CharacterUIEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_CharacterUIEvent *)0x0;
}

// GetEventInternal<UDS_NpcFunctionEvent> @ 14bcda5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_NpcFunctionEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_NpcFunctionEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_NpcFunctionEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_NpcFunctionEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14bcda7ff;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_NpcFunctionEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14bcda7ff:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_NpcFunctionEvent *)*ppUVar5;
    if (pUVar1 != (UDS_NpcFunctionEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_NpcFunctionEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_NpcFunctionEvent *)0x0;
}

// GetEventInternal<UDS_ContentEvent> @ 14bda0190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ContentEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_ContentEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_ContentEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_ContentEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14bda03bf;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_ContentEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14bda03bf:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_ContentEvent *)*ppUVar5;
    if (pUVar1 != (UDS_ContentEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_ContentEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_ContentEvent *)0x0;
}

// GetEventInternal<UDS_DailyQuestEvent> @ 14bda0430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_DailyQuestEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_DailyQuestEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_DailyQuestEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_DailyQuestEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14bda065f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_DailyQuestEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14bda065f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_DailyQuestEvent *)*ppUVar5;
    if (pUVar1 != (UDS_DailyQuestEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_DailyQuestEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_DailyQuestEvent *)0x0;
}

// GetEventInternal<UDS_PlayerSkillEvent> @ 14bda06d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_PlayerSkillEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_PlayerSkillEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_PlayerSkillEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_PlayerSkillEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14bda08ff;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_PlayerSkillEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14bda08ff:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_PlayerSkillEvent *)*ppUVar5;
    if (pUVar1 != (UDS_PlayerSkillEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_PlayerSkillEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_PlayerSkillEvent *)0x0;
}

// GetEventInternal<UDS_CampEvent> @ 14be68510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_CampEvent * __thiscall UDS_EventManager::GetEventInternal<UDS_CampEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_CampEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_CampEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14be6873f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_CampEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14be6873f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_CampEvent *)*ppUVar5;
    if (pUVar1 != (UDS_CampEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_CampEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_CampEvent *)0x0;
}

// GetEventInternal<UDS_TotalMenuEvent> @ 14bf33f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_TotalMenuEvent * __thiscall
UDS_EventManager::GetEventInternal<UDS_TotalMenuEvent>(UDS_EventManager *this)

{
  TMap<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
  *this_00;
  UDS_TotalMenuEvent *pUVar1;
  uint uVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FUObjectItem *this_01;
  UDS_EventBase **ppUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStackY_228 [32];
  UClass *local_1e8;
  undefined1 local_1e0 [16];
  TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&> local_1d0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e8 = Z_Construct_UClass_UDS_TotalMenuEvent_NoRegister();
  this_00 = &this->EventInstances;
  uVar2 = ((uint)((ulonglong)local_1e8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1e8 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (*(int *)&(this->EventInstances).field_0x8 != *(int *)&(this->EventInstances).field_0x34) {
    puVar7 = *(undefined1 **)&(this->EventInstances).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EventInstances).field_0x38;
    }
    iVar8 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->EventInstances).field_0x48 - 1U &
                              (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) == local_1e8) {
          if (iVar8 != -1) goto LAB_14bf3416f;
          break;
        }
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_TotalMenuEvent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar3);
  local_1b8._8_8_ = this;
  local_1d0.Value =
       (UDS_EventBase **)
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((UObject *)local_1d0.Value == (UObject *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_1d0.Key = (UClass **)local_1e8->_padding_;
      ::FName::ToString((FName *)&local_1d0,(FString *)local_1e0);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEventInternal",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Error,local_138.Ptr,0x49,L"Failed to create event instance for class : %s"
                );
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
      if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1e0._0_8_);
      }
    }
  }
  else {
    this_01 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)&((UObject *)local_1d0.Value)->field_0xc);
    FUObjectItem::SetRootFlags(this_01,RootSet);
    local_1e0._0_8_ = &local_1e8;
    local_1e0._8_8_ = &local_1d0.Value;
    TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,UDS_EventBase_*_const_&>_>
              ((TSet<TTuple<UClass_const_*,UDS_EventBase_*>,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>,FDefaultSetAllocator>
                *)this_00,&local_1d0,(bool *)local_1e0);
LAB_14bf3416f:
    ppUVar5 = TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              ::FindChecked((TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
                             *)this_00,local_1e8);
    pUVar1 = (UDS_TotalMenuEvent *)*ppUVar5;
    if (pUVar1 != (UDS_TotalMenuEvent *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_TotalMenuEvent_NoRegister();
      iVar8 = (int)pUVar3->_padding_;
      if ((iVar8 <= *(int *)(pUVar1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar1;
      }
    }
  }
  return (UDS_TotalMenuEvent *)0x0;
}

// GetEvent<UDS_RingCommandUIEvent> @ 14bf91640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_RingCommandUIEvent * __cdecl UDS_EventManager::GetEvent<UDS_RingCommandUIEvent>(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_RingCommandUIEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = GetEventInternal<UDS_RingCommandUIEvent>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_RingCommandUIEvent *)0x0;
}

