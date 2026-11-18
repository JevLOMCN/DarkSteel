// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 49

// StaticClass @ 14b50b890

UClass * __cdecl UDS_M_Filter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Filter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Filter",
               &Z_Registration_Info_UClass_UDS_M_Filter.InnerSingleton,
               StaticRegisterNativesUDS_M_Filter,0x2f0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_Filter>,InternalVTableHelperCtorCaller<UDS_M_Filter>,
               local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Filter.InnerSingleton;
}

// UDS_M_Filter @ 14b510c80

UDS_M_Filter * __thiscall UDS_M_Filter::UDS_M_Filter(UDS_M_Filter *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_Filter__6B_;
  *(undefined8 *)&this->MapFilter = 0;
  *(undefined8 *)&(this->MapFilter).field_0x8 = 0;
  *(undefined8 *)&(this->MapFilter).field_0x20 = 0;
  *(undefined4 *)&(this->MapFilter).field_0x28 = 0;
  *(undefined4 *)&(this->MapFilter).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapFilter).field_0x34 = 0;
  *(undefined4 *)&(this->MapFilter).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MapFilter).field_0x40 = 0;
  *(undefined4 *)&(this->MapFilter).field_0x48 = 0;
  *(undefined8 *)&this->MapFilterCached = 0;
  *(undefined8 *)&(this->MapFilterCached).field_0x8 = 0;
  *(undefined8 *)&(this->MapFilterCached).field_0x20 = 0;
  *(undefined4 *)&(this->MapFilterCached).field_0x28 = 0;
  *(undefined4 *)&(this->MapFilterCached).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapFilterCached).field_0x34 = 0;
  *(undefined4 *)&(this->MapFilterCached).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MapFilterCached).field_0x40 = 0;
  *(undefined4 *)&(this->MapFilterCached).field_0x48 = 0;
  this->FilterType = None;
  *(undefined8 *)&this->FilterDelegateList = 0;
  *(undefined8 *)&(this->FilterDelegateList).field_0x8 = 0;
  *(undefined8 *)&(this->FilterDelegateList).field_0x20 = 0;
  *(undefined4 *)&(this->FilterDelegateList).field_0x28 = 0;
  *(undefined4 *)&(this->FilterDelegateList).field_0x2c = 0x80;
  *(undefined4 *)&(this->FilterDelegateList).field_0x34 = 0;
  *(undefined4 *)&(this->FilterDelegateList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FilterDelegateList).field_0x40 = 0;
  *(undefined4 *)&(this->FilterDelegateList).field_0x48 = 0;
  *(undefined8 *)&this->ItemTableFilterDelegateList = 0;
  *(undefined8 *)&(this->ItemTableFilterDelegateList).field_0x8 = 0;
  *(undefined8 *)&(this->ItemTableFilterDelegateList).field_0x20 = 0;
  *(undefined4 *)&(this->ItemTableFilterDelegateList).field_0x28 = 0;
  *(undefined4 *)&(this->ItemTableFilterDelegateList).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemTableFilterDelegateList).field_0x34 = 0;
  *(undefined4 *)&(this->ItemTableFilterDelegateList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ItemTableFilterDelegateList).field_0x40 = 0;
  *(undefined4 *)&(this->ItemTableFilterDelegateList).field_0x48 = 0;
  return this;
}

// ~UDS_M_Filter @ 14b512d70

void __thiscall UDS_M_Filter::~UDS_M_Filter(UDS_M_Filter *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_M_Filter__6B_;
  *(undefined4 *)&(this->ItemTableFilterDelegateList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ItemTableFilterDelegateList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ItemTableFilterDelegateList);
  *(undefined4 *)&(this->FilterDelegateList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FilterDelegateList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->FilterDelegateList);
  *(undefined4 *)&(this->MapFilterCached).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MapFilterCached).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MapFilterCached);
  *(undefined4 *)&(this->MapFilter).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MapFilter).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MapFilter);
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515900

UClass * __cdecl UDS_M_Filter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_Filter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_Filter",
               &Z_Registration_Info_UClass_UDS_M_Filter.InnerSingleton,
               StaticRegisterNativesUDS_M_Filter,0x2f0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_Filter>,InternalVTableHelperCtorCaller<UDS_M_Filter>,
               local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_Filter.InnerSingleton;
}

// StaticRegisterNativesUDS_M_Filter @ 14b516c50

void __cdecl UDS_M_Filter::StaticRegisterNativesUDS_M_Filter(void)

{
  return;
}

// CreateFilterSlot<enum_EDS_FilterStateCharEquipType> @ 14bcd2fb0

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_FilterStateCharEquipType>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_FilterStateCharEquipType,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + iVar1;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterStateCharEquipType,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = (uint)(byte)*pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 1;
      *(uint *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CreateFilterSlot<enum_EDS_FilterStateCharId> @ 14bcd31f0

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_FilterStateCharId>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_FilterStateCharId,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + iVar1;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterStateCharId,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = (uint)(byte)*pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 1;
      *(uint *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CreateFilterSlot<enum_EDS_FilterStateDismantle> @ 14bcd3430

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_FilterStateDismantle>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_FilterStateDismantle,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + iVar1;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterStateDismantle,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = (uint)(byte)*pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 1;
      *(uint *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CreateFilterSlot<enum_EDS_FilterStateDurability> @ 14bcd3670

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_FilterStateDurability>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_FilterStateDurability,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + iVar1;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterStateDurability,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = (uint)(byte)*pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 1;
      *(uint *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CreateFilterSlot<enum_EDS_FilterStateEnchant> @ 14bcd38b0

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_FilterStateEnchant>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_FilterStateEnchant,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + iVar1;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterStateEnchant,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = (uint)(byte)*pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 1;
      *(uint *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CreateFilterSlot<enum_EDS_FilterStateEnchantScroll> @ 14bcd3af0

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_FilterStateEnchantScroll>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_FilterStateEnchantScroll,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + iVar1;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterStateEnchantScroll,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = (uint)(byte)*pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 1;
      *(uint *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CreateFilterSlot<enum_EDS_FilterStateEquip> @ 14bcd3d30

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_FilterStateEquip>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_FilterStateEquip,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + iVar1;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterStateEquip,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = (uint)(byte)*pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 1;
      *(uint *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CreateFilterSlot<enum_EDS_FilterStateGrade> @ 14bcd3f70

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_FilterStateGrade>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_FilterStateGrade,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + iVar1;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterStateGrade,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = (uint)(byte)*pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 1;
      *(uint *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CreateFilterSlot<enum_EDS_FilterStateLock> @ 14bcd41b0

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_FilterStateLock>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_FilterStateLock,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + iVar1;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterStateLock,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = (uint)(byte)*pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 1;
      *(uint *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CreateFilterSlot<enum_EDS_FilterStateRepair> @ 14bcd43f0

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_FilterStateRepair>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_FilterStateRepair,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + iVar1;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterStateRepair,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = (uint)(byte)*pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 1;
      *(uint *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CreateFilterSlot<enum_EDS_FilterStateRingCmd> @ 14bcd4630

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_FilterStateRingCmd>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_FilterStateRingCmd,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + iVar1;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterStateRingCmd,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = (uint)(byte)*pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 1;
      *(uint *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CreateFilterSlot<enum_EDS_FilterStateSeasonGroup> @ 14bcd4870

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_FilterStateSeasonGroup>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_FilterStateSeasonGroup,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + iVar1;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_FilterStateSeasonGroup,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = (uint)(byte)*pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 1;
      *(uint *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// CreateFilterSlot<enum_EDS_ItemType> @ 14bcd4ab0

void __thiscall
UDS_M_Filter::CreateFilterSlot<enum_EDS_ItemType>
          (UDS_M_Filter *this,EDS_FilterType param_1,EDS_FilterState param_2,
          TArray<EDS_ItemType,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 this_00;
  ForAnyElementType _Src;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  EDS_FilterState local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_78;
  undefined1 local_74 [12];
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  EDS_FilterState *local_48;
  undefined1 *local_40;
  
  iVar1 = param_3->ArrayNum;
  local_res18[0] = param_2;
  if (iVar1 == 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  else {
    pFVar5 = (param_3->AllocatorInstance).Data;
    local_60 = 0;
    pFVar4 = pFVar5 + (longlong)iVar1 * 4;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_5c = 0;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<enum_EDS_ItemType,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_78 = *(undefined4 *)pFVar5;
      if (((local_68.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_68.Data + (longlong)local_5c * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_60 == local_5c) {
        local_60 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_68,&local_5c);
      }
      pFVar5 = pFVar5 + 4;
      *(undefined4 *)(local_68.Data + (longlong)local_60 * 4) = local_78;
      local_60 = local_60 + 1;
    }
    local_74._4_8_ = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UDS_M_FilterSlot *)local_74._4_8_ != (UDS_M_FilterSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_74._4_8_);
    }
    _Src.Data = local_68.Data;
    this_00 = local_74._4_8_;
    lVar6 = (longlong)local_60;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = local_60;
    if (local_60 == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_58.AllocatorInstance,local_60,&local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src.Data,lVar6 << 2);
    }
    UDS_M_FilterSlot::Init((UDS_M_FilterSlot *)this_00,param_1,local_res18[0],&local_58,param_4);
    local_48 = local_res18;
    local_40 = local_74 + 4;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (&this->MapFilter,
               (TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> *)
               local_74,(bool *)&local_48);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
  }
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// UDS_M_Filter @ 14bce5250

UDS_M_Filter * __thiscall UDS_M_Filter::UDS_M_Filter(UDS_M_Filter *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,pFVar1);
  this->_padding_ = (longlong)&___7UDS_M_Filter__6B_;
  *(undefined8 *)&this->MapFilter = 0;
  *(undefined8 *)&(this->MapFilter).field_0x8 = 0;
  *(undefined8 *)&(this->MapFilter).field_0x20 = 0;
  *(undefined4 *)&(this->MapFilter).field_0x28 = 0;
  *(undefined4 *)&(this->MapFilter).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapFilter).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapFilter).field_0x34 = 0;
  *(undefined8 *)&(this->MapFilter).field_0x40 = 0;
  *(undefined4 *)&(this->MapFilter).field_0x48 = 0;
  *(undefined8 *)&this->MapFilterCached = 0;
  *(undefined8 *)&(this->MapFilterCached).field_0x8 = 0;
  *(undefined8 *)&(this->MapFilterCached).field_0x20 = 0;
  *(undefined4 *)&(this->MapFilterCached).field_0x28 = 0;
  *(undefined4 *)&(this->MapFilterCached).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapFilterCached).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapFilterCached).field_0x34 = 0;
  *(undefined8 *)&(this->MapFilterCached).field_0x40 = 0;
  *(undefined4 *)&(this->MapFilterCached).field_0x48 = 0;
  this->FilterType = None;
  *(undefined8 *)&this->FilterDelegateList = 0;
  *(undefined8 *)&(this->FilterDelegateList).field_0x8 = 0;
  *(undefined8 *)&(this->FilterDelegateList).field_0x20 = 0;
  *(undefined4 *)&(this->FilterDelegateList).field_0x28 = 0;
  *(undefined4 *)&(this->FilterDelegateList).field_0x2c = 0x80;
  *(undefined4 *)&(this->FilterDelegateList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilterDelegateList).field_0x34 = 0;
  *(undefined8 *)&(this->FilterDelegateList).field_0x40 = 0;
  *(undefined4 *)&(this->FilterDelegateList).field_0x48 = 0;
  *(undefined8 *)&this->ItemTableFilterDelegateList = 0;
  *(undefined8 *)&(this->ItemTableFilterDelegateList).field_0x8 = 0;
  *(undefined8 *)&(this->ItemTableFilterDelegateList).field_0x20 = 0;
  *(undefined4 *)&(this->ItemTableFilterDelegateList).field_0x28 = 0;
  *(undefined4 *)&(this->ItemTableFilterDelegateList).field_0x2c = 0x80;
  *(undefined4 *)&(this->ItemTableFilterDelegateList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ItemTableFilterDelegateList).field_0x34 = 0;
  *(undefined8 *)&(this->ItemTableFilterDelegateList).field_0x40 = 0;
  *(undefined4 *)&(this->ItemTableFilterDelegateList).field_0x48 = 0;
  CreateMappingData();
  return this;
}

// operator() @ 14bce6470

bool __thiscall
`UDS_M_Filter::Filter'::__l2::<lambda_1>::operator()(void *this,FDS_ItemBaseTableRow *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  ulonglong uVar3;
  EDS_FilterState EVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  FDS_ItemBaseTableRow *pFVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 local_res8 [8];
  FDS_ItemBaseTableRow *local_res10;
  int local_res18;
  undefined1 local_b0 [24];
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar13 = *(longlong *)this;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x2b0);
  iVar5 = *(int *)(lVar13 + 0x2c8);
  plVar2 = (longlong *)(lVar13 + 0x2a0);
  iStack_7c = 0;
  if (iVar5 != 0) {
    pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x2c0);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x2c0) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar16 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14bce651d;
      uVar16 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uStack_8c = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iStack_7c = local_res18 + -1 + local_78;
    if (iVar5 < iStack_7c) {
      iStack_7c = iVar5;
    }
  }
LAB_14bce651d:
  iStack_70 = *(int *)(lVar13 + 0x2a8) - *(int *)(lVar13 + 0x2d4);
  uVar16 = *(uint *)(lVar13 + 0x2c8);
  uStack_80 = 0xffffffff;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_res10 = param_1;
  local_98 = plVar2;
  local_88 = pTVar1;
  iStack_74 = iStack_7c;
  local_68 = plVar2;
  TStack_60.Array = pTVar1;
  if ((((int)uVar16 < 0) || (iVar5 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  pFVar8 = local_res10;
  uVar6 = *(uint *)(lVar13 + 0x2c8);
  if (uVar16 != uVar6) {
    pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x2c0);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x2c0) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) &
             *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14bce6620;
      uVar16 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = (int)lVar13 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar16) {
      uVar16 = uVar6;
    }
  }
LAB_14bce6620:
  while( true ) {
    plVar9 = local_68;
    if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar16) && (TStack_60.Array == pTVar1)) && (plVar9 == plVar2)
       ) break;
    lVar13 = *plVar9;
    EVar4 = *(EDS_FilterState *)(lVar13 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
    ::
    TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
              (local_b0,(TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                         *)(lVar13 + (longlong)TStack_60.CurrentBitIndex * 0x28 + 8));
    bVar10 = UDS_M_Filter::FilterEntry
                       (*(UDS_M_Filter **)this,EVar4,pFVar8,
                        (TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                         *)local_b0);
    if (bVar10) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
      if ((void *)local_b0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b0);
      return true;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
    if ((void *)local_b0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// operator() @ 14bce6700

bool __thiscall
`UDS_M_Filter::Filter'::__l2::<lambda_1>::operator()
          (void *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  ulonglong uVar3;
  EDS_FilterState EVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint uVar16;
  undefined1 local_res18 [8];
  int local_res20;
  undefined1 local_b0 [24];
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar12 = *(longlong *)this;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar12 + 0x260);
  iVar5 = *(int *)(lVar12 + 0x278);
  plVar2 = (longlong *)(lVar12 + 0x250);
  iStack_7c = 0;
  if (iVar5 != 0) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x270);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x270) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar13 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14bce67ae;
      uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uStack_8c = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar5 < iStack_7c) {
      iStack_7c = iVar5;
    }
  }
LAB_14bce67ae:
  iStack_70 = *(int *)(lVar12 + 600) - *(int *)(lVar12 + 0x284);
  uVar13 = *(uint *)(lVar12 + 0x278);
  uStack_80 = 0xffffffff;
  uVar16 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = plVar2;
  local_88 = pTVar1;
  iStack_74 = iStack_7c;
  local_68 = plVar2;
  TStack_60.Array = pTVar1;
  if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  uVar6 = *(uint *)(lVar12 + 0x278);
  if (uVar13 != uVar6) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x270);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x270) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14bce68b0;
      uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_14bce68b0:
  while( true ) {
    plVar8 = local_68;
    if ((int)local_68[1] - *(int *)((longlong)local_68 + 0x34) != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar13) && (TStack_60.Array == pTVar1)) && (plVar8 == plVar2)
       ) break;
    lVar12 = *plVar8;
    EVar4 = *(EDS_FilterState *)(lVar12 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
    ::
    TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
              (local_b0,(TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                         *)(lVar12 + (longlong)TStack_60.CurrentBitIndex * 0x28 + 8));
    bVar9 = UDS_M_Filter::FilterEntry
                      (*(UDS_M_Filter **)this,EVar4,param_1,
                       (TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                        *)local_b0);
    if (bVar9) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
      if ((void *)local_b0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b0);
      return true;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
    if ((void *)local_b0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return false;
}

// Caching @ 14bce9e50

void __thiscall UDS_M_Filter::Caching(UDS_M_Filter *this)

{
  TMap<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  UDS_M_FilterSlot *pUVar6;
  UDS_M_FilterSlot *pUVar7;
  longlong *plVar8;
  TMap<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
  *pTVar9;
  bool bVar10;
  UObject *pUVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  uint *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FWeakObjectPtr local_188;
  UDS_M_FilterSlot *local_180;
  TMap<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
  *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  TPairInitializer<EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&> local_138;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined1 local_120 [8];
  UObject *local_118;
  undefined1 *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  TMap<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined1 *local_80;
  UDS_M_FilterSlot **local_78;
  undefined4 local_54;
  
  this_00 = &this->MapFilterCached;
  bVar10 = 1 < *(int *)&(this->MapFilterCached).field_0x48;
  if (!bVar10) {
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar18 = &(this->MapFilterCached).field_0xc;
  *(undefined4 *)&(this->MapFilterCached).field_0x8 = 0;
  if (*(int *)puVar18 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar18);
  }
  *(undefined4 *)&(this->MapFilterCached).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapFilterCached).field_0x34 = 0;
  iVar16 = *(int *)&(this->MapFilterCached).field_0x2c;
  *(undefined4 *)&(this->MapFilterCached).field_0x28 = 0;
  if ((iVar16 < 0) || (0x80 < iVar16)) {
    *(undefined4 *)&(this->MapFilterCached).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MapFilterCached).field_0x10,0);
  }
  if (bVar10) {
    *(undefined4 *)&(this->MapFilterCached).field_0x48 = 1;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->MapFilter).field_0x10;
  iStack_170 = 0;
  iVar16 = *(int *)&(this->MapFilter).field_0x28;
  local_178 = &this->MapFilter;
  uStack_16c = 1;
  local_158 = 0;
  iStack_15c = 0;
  if (iVar16 != 0) {
    puVar20 = *(uint **)&(this->MapFilter).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)pTVar21;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_170;
      local_158 = local_158 + 0x20;
      iStack_170 = iStack_170 + 1;
      iStack_15c = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170) goto LAB_14bce9f8e;
      uVar17 = puVar20[lVar12 + 1];
    }
    uStack_16c = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_16c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_148 = (int)lVar12;
    iStack_15c = local_158 + -1 + local_148;
    if (iVar16 < iStack_15c) {
      iStack_15c = iVar16;
    }
  }
LAB_14bce9f8e:
  uVar17 = *(uint *)&(this->MapFilter).field_0x28;
  uStack_154 = local_54;
  iStack_150 = *(int *)&(this->MapFilter).field_0x8 - *(int *)&(this->MapFilter).field_0x34;
  uVar15 = uVar17 & 0xffffffe0;
  TStack_a8._padding_ = CONCAT44(uStack_16c,iStack_170);
  uStack_160 = 0xffffffff;
  TStack_a8.CurrentBitIndex = iStack_15c;
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar17 >> 5;
  TStack_a8._28_4_ = local_54;
  TStack_a8.BaseBitIndex = local_158;
  uStack_88 = CONCAT44(uStack_14c,iStack_150);
  local_res20 = uVar17;
  local_168 = (undefined1 *)pTVar21;
  local_128 = pTVar21;
  local_b0 = local_178;
  TStack_a8.Array = pTVar21;
  if ((((int)uVar17 < 0) || (iVar16 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(this->MapFilter).field_0x28;
  if (uVar17 != uVar3) {
    puVar18 = *(undefined1 **)&(this->MapFilter).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar21;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar17 = uVar3;
      local_res20 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14bcea0c0;
      uVar17 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_144 = (int)lVar12;
    uVar17 = local_144 + -1 + uVar15;
    local_res20 = uVar17;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
      local_res20 = uVar3;
    }
  }
LAB_14bcea0c0:
  do {
    pTVar9 = local_b0;
    if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_a8.CurrentBitIndex == uVar17) && (TStack_a8.Array == pTVar21)) &&
       (pTVar9 == &this->MapFilter)) {
      return;
    }
    lVar12 = *(longlong *)pTVar9;
    local_120[0] = *(undefined1 *)(lVar12 + (longlong)TStack_a8.CurrentBitIndex * 0x18);
    local_118 = *(UObject **)(lVar12 + (longlong)TStack_a8.CurrentBitIndex * 0x18 + 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_118 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_118);
    }
    local_180 = NewObject<UDS_M_FilterSlot>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (local_180 != (UDS_M_FilterSlot *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_180);
        goto LAB_14bcea164;
      }
LAB_14bcea4bd:
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_123149266565725938>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                          ,0x10e,"false");
      if (!bVar10) {
        return;
      }
code_r0x00014bcea4e9:
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_14bcea164:
    pUVar11 = local_118;
    if (local_180 == (UDS_M_FilterSlot *)0x0) goto LAB_14bcea4bd;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (local_118 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_118);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar11);
      }
    }
    iVar16 = 0;
    local_138.Value = (TObjectPtr<UDS_M_FilterSlot> *)pUVar11;
    local_188.ObjectIndex = 0;
    local_188.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_138.Value);
    bVar10 = FWeakObjectPtr::IsValid(&local_188);
    pUVar6 = local_180;
    if (!bVar10) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_123149266565725935>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                          ,0x111,"false");
      if (!bVar10) {
        return;
      }
      goto code_r0x00014bcea4e9;
    }
    pUVar11 = FWeakObjectPtr::Get(&local_188);
    pUVar7 = local_180;
    pUVar6->FilterType = pUVar11[10].field_0x18;
    pUVar11 = FWeakObjectPtr::Get(&local_188);
    pUVar6 = local_180;
    pUVar7->FilterState = pUVar11[10].field_0x19;
    pUVar11 = FWeakObjectPtr::Get(&local_188);
    pUVar6->Checkable = (bool)pUVar11[0xc].field_0x20;
    pUVar11 = FWeakObjectPtr::Get(&local_188);
    uStack_104 = 1;
    puVar18 = &pUVar11[0xb].field_0x8;
    iVar13 = *(int *)&pUVar11[0xb].field_0x20;
    puVar1 = &pUVar11[10].field_0x20;
    iStack_f4 = iVar16;
    local_f0 = iVar16;
    if (iVar13 != 0) {
      puVar20 = (uint *)puVar18;
      if (*(uint **)&pUVar11[0xb].field_0x18 != (uint *)0x0) {
        puVar20 = *(uint **)&pUVar11[0xb].field_0x18;
      }
      uVar17 = *puVar20;
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar16;
        local_f0 = local_f0 + 0x20;
        iVar16 = iVar16 + 1;
        iStack_f4 = iVar13;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14bcea2ce;
        uVar17 = puVar20[lVar12 + 1];
      }
      uStack_104 = -uVar17 & uVar17;
      uVar2 = (ulonglong)uStack_104 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_140 = (int)lVar12;
      iStack_f4 = local_f0 + -1 + local_140;
      if (iVar13 < iStack_f4) {
        iStack_f4 = iVar13;
      }
    }
LAB_14bcea2ce:
    iStack_ec = iStack_15c;
    iStack_e8 = *(int *)(pUVar11 + 0xb) - *(int *)&pUVar11[0xc].field_0x4;
    uVar17 = *(uint *)&pUVar11[0xb].field_0x20;
    uVar15 = uVar17 & 0xffffffe0;
    TStack_d8._padding_ = CONCAT44(uStack_104,iVar16);
    uStack_f8 = 0xffffffff;
    TStack_d8.CurrentBitIndex = iStack_f4;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar17 >> 5;
    TStack_d8._28_4_ = iStack_15c;
    TStack_d8.BaseBitIndex = local_f0;
    uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
    local_110 = puVar1;
    iStack_108 = iVar16;
    local_100 = puVar18;
    local_e0 = (longlong *)puVar1;
    TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar18;
    if ((((int)uVar17 < 0) || (iVar13 < (int)uVar17)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar3 = *(uint *)&pUVar11[0xb].field_0x20;
    if (uVar17 != uVar3) {
      puVar19 = puVar18;
      if (*(undefined1 **)&pUVar11[0xb].field_0x18 != (undefined1 *)0x0) {
        puVar19 = *(undefined1 **)&pUVar11[0xb].field_0x18;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar14;
        uVar15 = uVar15 + 0x20;
        iVar14 = iVar14 + 1;
        uVar17 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14bcea3e0;
        uVar17 = *(uint *)(puVar19 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_13c = (int)lVar12;
      uVar17 = local_13c + -1 + uVar15;
      if ((int)uVar3 < (int)uVar17) {
        uVar17 = uVar3;
      }
    }
LAB_14bcea3e0:
    while( true ) {
      plVar8 = local_e0;
      if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,enum_EDS_ItemFilterState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_d8.CurrentBitIndex == uVar17) &&
          (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) &&
         (plVar8 == (longlong *)puVar1)) break;
      uVar4 = *(undefined8 *)(*plVar8 + (longlong)TStack_d8.CurrentBitIndex * 0x10);
      UDS_M_FilterSlot::SetValue
                (local_180,(uint)uVar4,(EDS_ItemFilterState)((ulonglong)uVar4 >> 0x20));
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
    local_80 = local_120;
    local_78 = &local_180;
    TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_FilterState_const_&,TObjectPtr<UDS_M_FilterSlot>_const_&>_>
              (this_00,&local_138,(bool *)&local_80);
    TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    pTVar21 = local_128;
    uVar17 = local_res20;
  } while( true );
}

// CreateMappingData @ 14bceee60

void __cdecl UDS_M_Filter::CreateMappingData(void)

{
  bool bVar1;
  undefined1 local_res8 [8];
  TPairInitializer<EDS_FilterState_&&,UEnum_*_&&> local_res10;
  undefined1 *local_28;
  UEnum ***local_20;
  
  bVar1 = 1 < (int)MappingFilterStateToEnum._72_4_;
  if (!bVar1) {
    TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
    ::UnhashElements(&MappingFilterStateToEnum);
  }
  MappingFilterStateToEnum._8_4_ = 0;
  if (MappingFilterStateToEnum._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&MappingFilterStateToEnum,0,
               (int *)&MappingFilterStateToEnum.field_0xc);
  }
  MappingFilterStateToEnum._48_4_ = 0xffffffff;
  MappingFilterStateToEnum._52_4_ = 0;
  MappingFilterStateToEnum._40_4_ = 0;
  if (0x80 < (uint)MappingFilterStateToEnum._44_4_) {
    MappingFilterStateToEnum._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&MappingFilterStateToEnum.field_0x10,0);
  }
  if (bVar1) {
    MappingFilterStateToEnum._72_4_ = 1;
    TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
    ::Rehash(&MappingFilterStateToEnum);
  }
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateEquip>();
  local_28 = local_res8;
  local_res8[0] = 1;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateGrade>();
  local_28 = local_res8;
  local_res8[0] = 3;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_ItemType>();
  local_28 = local_res8;
  local_res8[0] = 4;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateLock>();
  local_28 = local_res8;
  local_res8[0] = 2;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateLevelUp>();
  local_28 = local_res8;
  local_res8[0] = 5;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateDismantle>();
  local_28 = local_res8;
  local_res8[0] = 7;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateRingCmd>();
  local_28 = local_res8;
  local_res8[0] = 8;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateCharEquipType>();
  local_28 = local_res8;
  local_res8[0] = 10;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateCharId>();
  local_28 = local_res8;
  local_res8[0] = 9;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateSeasonGroup>();
  local_28 = local_res8;
  local_res8[0] = 0xd;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateRepair>();
  local_28 = local_res8;
  local_res8[0] = 0xe;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateDurability>();
  local_28 = local_res8;
  local_res8[0] = 0xf;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateEnchant>();
  local_28 = local_res8;
  local_res8[0] = 0x10;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  local_res10.Value = (UEnum **)StaticEnum<enum_EDS_FilterStateEnchantScroll>();
  local_28 = local_res8;
  local_20 = &local_res10.Value;
  local_res8[0] = 0x11;
  TSet<TTuple<enum_EDS_FilterState,UEnum_*>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_FilterState_&&,UEnum_*_&&>_>
            (&MappingFilterStateToEnum,&local_res10,(bool *)&local_28);
  return;
}

// Filter @ 14bcf1cc0

void __thiscall
UDS_M_Filter::Filter
          (UDS_M_Filter *this,
          TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UDS_M_Filter *local_res8;
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *local_res10;
  
  if ((*(int *)&(this->MapFilter).field_0x8 != *(int *)&(this->MapFilter).field_0x34) &&
     (iVar1 = param_1->ArrayNum, iVar1 != 0)) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar8 = 0;
    local_res8 = this;
    local_res10 = param_1;
    bVar3 = `UDS_M_Filter::Filter'::__l2::<lambda_1>::operator()
                      (&local_res8,*(FDS_ItemBaseTableRow **)pFVar2);
    bVar3 = !bVar3;
    lVar5 = 0;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar7 = iVar7 + 1;
        if (iVar1 <= lVar5) break;
        bVar4 = `UDS_M_Filter::Filter'::__l2::<lambda_1>::operator()
                          (&local_res8,*(FDS_ItemBaseTableRow **)(pFVar2 + lVar5 * 8));
      } while (bVar3 == !bVar4);
      if (bVar3 != false) {
        if (iVar8 != iVar6) {
          memmove(pFVar2 + (longlong)iVar8 * 8,pFVar2 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
        }
        iVar8 = iVar8 + (iVar7 - iVar6);
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar6 = iVar7;
    } while (lVar5 < iVar1);
    local_res10->ArrayNum = iVar8;
  }
  return;
}

// Filter @ 14bcf1dd0

void __thiscall
UDS_M_Filter::Filter
          (UDS_M_Filter *this,
          TArray<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FWeakObjectPtr *pFVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UDS_M_Filter *local_res8;
  
  if ((*(int *)&(this->MapFilter).field_0x8 != *(int *)&(this->MapFilter).field_0x34) &&
     (iVar1 = param_1->ArrayNum, iVar1 != 0)) {
    iVar7 = 0;
    pFVar2 = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
    local_res8 = this;
    bVar4 = `UDS_M_Filter::Filter'::__l2::<lambda_1>::operator()
                      (&local_res8,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)*pFVar2);
    bVar4 = !bVar4;
    iVar6 = 0;
    do {
      iVar3 = iVar6;
      do {
        iVar3 = iVar3 + 1;
        if (iVar1 <= iVar3) break;
        bVar5 = `UDS_M_Filter::Filter'::__l2::<lambda_1>::operator()
                          (&local_res8,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)pFVar2[iVar3]);
      } while (bVar4 == !bVar5);
      if (bVar4 != false) {
        if (iVar7 != iVar6) {
          memmove(pFVar2 + iVar7,pFVar2 + iVar6,(longlong)(iVar3 - iVar6) << 3);
        }
        iVar7 = iVar7 + (iVar3 - iVar6);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar6 = iVar3;
    } while (iVar3 < iVar1);
    param_1->ArrayNum = iVar7;
  }
  return;
}

// FilterEntry @ 14bcf1ed0

bool __thiscall
UDS_M_Filter::FilterEntry
          (UDS_M_Filter *this,EDS_FilterState param_1,FDS_ItemBaseTableRow *param_2,
          TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
          *param_3)

{
  uint uVar1;
  EDS_ItemFilterState EVar2;
  longlong lVar3;
  TObjectPtr<UDS_M_FilterSlot> TVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  UEnum *this_00;
  TObjectPtr<UDS_M_FilterSlot>_u_0 *pTVar11;
  TTuple<FName,__int64> *pTVar12;
  EDS_ItemFilterState *pEVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  int iVar16;
  bool bVar17;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  TTuple<FName,__int64> local_50;
  FReadAccessScope local_40;
  
  bVar6 = false;
  bVar7 = false;
  this_00 = GetMappingEnum(param_1);
  if (this_00 == (UEnum *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_123149266565726029>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                       ,0xb3,"false");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else if (*(int *)&(this->MapFilter).field_0x8 != *(int *)&(this->MapFilter).field_0x34) {
    puVar15 = *(undefined1 **)&(this->MapFilter).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->MapFilter).field_0x38;
    }
    iVar16 = *(int *)(puVar15 +
                     ((ulonglong)(*(int *)&(this->MapFilter).field_0x48 - 1) & (ulonglong)param_1) *
                     4);
    if (iVar16 != -1) {
      lVar3 = *(longlong *)&this->MapFilter;
      do {
        if (*(EDS_FilterState *)(lVar3 + (longlong)iVar16 * 0x18) == param_1) {
          pTVar11 = &TMapBase<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
                     ::FindChecked(&this->MapFilter,param_1)->field0_0x0;
          TVar4.field0_0x0 = (TObjectPtr<UDS_M_FilterSlot>_u_0)pTVar11->DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (TVar4.field0_0x0 == (UDS_M_FilterSlot *)0x0) {
              return false;
            }
          }
          else {
            if (TVar4.field0_0x0 == (UDS_M_FilterSlot *)0x0) {
              return false;
            }
            UE::GC::MarkAsReachable((UObject *)TVar4.field0_0x0);
          }
          iVar16 = 0;
          if ((this_00->Names).NumValues < 1) {
            return true;
          }
          goto LAB_14bcf2000;
        }
        iVar16 = *(int *)(lVar3 + 0x10 + (longlong)iVar16 * 0x18);
      } while (iVar16 != -1);
    }
  }
  return false;
LAB_14bcf2000:
  UEnum::GetNameStringByIndex(this_00,&local_90,iVar16);
  ::FString::FString(&local_60,"None");
  iVar10 = local_90.Data.ArrayNum;
  if (iVar10 == local_60.Data.ArrayNum) {
    if (1 < iVar10) {
      iVar10 = wcscmp((wchar_t *)local_90.Data.AllocatorInstance.Data,
                      (wchar_t *)local_60.Data.AllocatorInstance.Data);
      bVar17 = iVar10 == 0;
      goto LAB_14bcf204d;
    }
LAB_14bcf20de:
    bVar17 = true;
  }
  else {
    bVar17 = iVar10 + local_60.Data.ArrayNum == 1;
LAB_14bcf204d:
    if (bVar17) goto LAB_14bcf20de;
    ::FString::FString(&local_70,"Max");
    bVar6 = true;
    iVar10 = local_90.Data.ArrayNum;
    if (iVar10 == local_70.Data.ArrayNum) {
      if (iVar10 < 2) goto LAB_14bcf20de;
      iVar10 = wcscmp((wchar_t *)local_90.Data.AllocatorInstance.Data,
                      (wchar_t *)local_70.Data.AllocatorInstance.Data);
      bVar17 = iVar10 == 0;
    }
    else {
      bVar17 = iVar10 + local_70.Data.ArrayNum == 1;
    }
    if (bVar17) goto LAB_14bcf20de;
    ::FString::FString(&local_80,"EDS_MAX");
    bVar6 = true;
    bVar7 = true;
    iVar10 = local_90.Data.ArrayNum;
    if (iVar10 == local_80.Data.ArrayNum) {
      if (iVar10 < 2) goto LAB_14bcf20de;
      iVar10 = wcscmp((wchar_t *)local_90.Data.AllocatorInstance.Data,
                      (wchar_t *)local_80.Data.AllocatorInstance.Data);
      bVar17 = iVar10 == 0;
    }
    else {
      bVar17 = iVar10 + local_80.Data.ArrayNum == 1;
    }
    if (bVar17) goto LAB_14bcf20de;
    bVar17 = false;
  }
  if ((bVar7) &&
     (bVar7 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((bVar6) &&
     (bVar6 = false, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (!bVar17) {
    if (((iVar16 < 0) || ((this_00->Names).NumValues <= iVar16)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Names.IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                            ,0xb2d,L""), bVar17)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pTVar12 = UEnum::FNameData::operator[](&this_00->Names,&local_50,iVar16);
    uVar1 = *(uint *)&pTVar12->field_0x8;
    if (*(int *)((longlong)TVar4.field0_0x0 + 0x1b8) != *(int *)((longlong)TVar4.field0_0x0 + 0x1e4)
       ) {
      puVar15 = (undefined1 *)((longlong)TVar4.field0_0x0 + 0x1e8);
      if (*(undefined1 **)((longlong)TVar4.field0_0x0 + 0x1f0) != (undefined1 *)0x0) {
        puVar15 = *(undefined1 **)((longlong)TVar4.field0_0x0 + 0x1f0);
      }
      iVar10 = *(int *)(puVar15 +
                       (ulonglong)(*(int *)((longlong)TVar4.field0_0x0 + 0x1f8) - 1U & uVar1) * 4);
      if (iVar10 != -1) {
        lVar3 = *(longlong *)((longlong)TVar4.field0_0x0 + 0x1b0);
        do {
          if (*(uint *)(lVar3 + (longlong)iVar10 * 0x10) == uVar1) {
            pEVar13 = TMapBase<int,enum_EDS_ItemFilterState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_EDS_ItemFilterState,0>_>
                      ::FindChecked((longlong *)((longlong)TVar4.field0_0x0 + 0x1b0),uVar1);
            EVar2 = *pEVar13;
            if (EVar2 != Uncheck) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_40
                        );
              if (*(int *)&param_3->field_0x10 == 0) {
                plVar14 = (longlong *)0x0;
              }
              else {
                plVar14 = *(longlong **)&param_3->field_0x8;
              }
              cVar9 = (**(code **)(*plVar14 + 0x60))(plVar14,param_2,uVar1,EVar2);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_40);
              if (cVar9 == '\0') {
                if (local_90.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                  return false;
                }
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
                return false;
              }
            }
            break;
          }
          iVar10 = *(int *)(lVar3 + 8 + (longlong)iVar10 * 0x10);
        } while (iVar10 != -1);
      }
    }
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  iVar16 = iVar16 + 1;
  if ((this_00->Names).NumValues <= iVar16) {
    return true;
  }
  goto LAB_14bcf2000;
}

// FilterEntry @ 14bcf2240

bool __thiscall
UDS_M_Filter::FilterEntry
          (UDS_M_Filter *this,EDS_FilterState param_1,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2,
          TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
          *param_3)

{
  uint uVar1;
  EDS_ItemFilterState EVar2;
  longlong lVar3;
  TObjectPtr<UDS_M_FilterSlot> TVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  UEnum *this_00;
  TObjectPtr<UDS_M_FilterSlot>_u_0 *pTVar11;
  TTuple<FName,__int64> *pTVar12;
  EDS_ItemFilterState *pEVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  int iVar16;
  bool bVar17;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  TTuple<FName,__int64> local_50;
  FReadAccessScope local_40;
  
  bVar6 = false;
  bVar7 = false;
  this_00 = GetMappingEnum(param_1);
  if (this_00 == (UEnum *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_123149266565726103>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                       ,0x69,"false");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  else if (*(int *)&(this->MapFilter).field_0x8 != *(int *)&(this->MapFilter).field_0x34) {
    puVar15 = *(undefined1 **)&(this->MapFilter).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->MapFilter).field_0x38;
    }
    iVar16 = *(int *)(puVar15 +
                     ((ulonglong)(*(int *)&(this->MapFilter).field_0x48 - 1) & (ulonglong)param_1) *
                     4);
    if (iVar16 != -1) {
      lVar3 = *(longlong *)&this->MapFilter;
      do {
        if (*(EDS_FilterState *)(lVar3 + (longlong)iVar16 * 0x18) == param_1) {
          pTVar11 = &TMapBase<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
                     ::FindChecked(&this->MapFilter,param_1)->field0_0x0;
          TVar4.field0_0x0 = (TObjectPtr<UDS_M_FilterSlot>_u_0)pTVar11->DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (TVar4.field0_0x0 == (UDS_M_FilterSlot *)0x0) {
              return false;
            }
          }
          else {
            if (TVar4.field0_0x0 == (UDS_M_FilterSlot *)0x0) {
              return false;
            }
            UE::GC::MarkAsReachable((UObject *)TVar4.field0_0x0);
          }
          iVar16 = 0;
          if ((this_00->Names).NumValues < 1) {
            return true;
          }
          goto LAB_14bcf2370;
        }
        iVar16 = *(int *)(lVar3 + 0x10 + (longlong)iVar16 * 0x18);
      } while (iVar16 != -1);
    }
  }
  return false;
LAB_14bcf2370:
  UEnum::GetNameStringByIndex(this_00,&local_90,iVar16);
  ::FString::FString(&local_60,"None");
  iVar10 = local_90.Data.ArrayNum;
  if (iVar10 == local_60.Data.ArrayNum) {
    if (1 < iVar10) {
      iVar10 = wcscmp((wchar_t *)local_90.Data.AllocatorInstance.Data,
                      (wchar_t *)local_60.Data.AllocatorInstance.Data);
      bVar17 = iVar10 == 0;
      goto LAB_14bcf23bd;
    }
LAB_14bcf244e:
    bVar17 = true;
  }
  else {
    bVar17 = iVar10 + local_60.Data.ArrayNum == 1;
LAB_14bcf23bd:
    if (bVar17) goto LAB_14bcf244e;
    ::FString::FString(&local_70,"Max");
    bVar6 = true;
    iVar10 = local_90.Data.ArrayNum;
    if (iVar10 == local_70.Data.ArrayNum) {
      if (iVar10 < 2) goto LAB_14bcf244e;
      iVar10 = wcscmp((wchar_t *)local_90.Data.AllocatorInstance.Data,
                      (wchar_t *)local_70.Data.AllocatorInstance.Data);
      bVar17 = iVar10 == 0;
    }
    else {
      bVar17 = iVar10 + local_70.Data.ArrayNum == 1;
    }
    if (bVar17) goto LAB_14bcf244e;
    ::FString::FString(&local_80,"EDS_MAX");
    bVar6 = true;
    bVar7 = true;
    iVar10 = local_90.Data.ArrayNum;
    if (iVar10 == local_80.Data.ArrayNum) {
      if (iVar10 < 2) goto LAB_14bcf244e;
      iVar10 = wcscmp((wchar_t *)local_90.Data.AllocatorInstance.Data,
                      (wchar_t *)local_80.Data.AllocatorInstance.Data);
      bVar17 = iVar10 == 0;
    }
    else {
      bVar17 = iVar10 + local_80.Data.ArrayNum == 1;
    }
    if (bVar17) goto LAB_14bcf244e;
    bVar17 = false;
  }
  if ((bVar7) &&
     (bVar7 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((bVar6) &&
     (bVar6 = false, local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (!bVar17) {
    if (((iVar16 < 0) || ((this_00->Names).NumValues <= iVar16)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Names.IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                            ,0xb2d,L""), bVar17)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pTVar12 = UEnum::FNameData::operator[](&this_00->Names,&local_50,iVar16);
    uVar1 = *(uint *)&pTVar12->field_0x8;
    if (*(int *)((longlong)TVar4.field0_0x0 + 0x1b8) != *(int *)((longlong)TVar4.field0_0x0 + 0x1e4)
       ) {
      puVar15 = (undefined1 *)((longlong)TVar4.field0_0x0 + 0x1e8);
      if (*(undefined1 **)((longlong)TVar4.field0_0x0 + 0x1f0) != (undefined1 *)0x0) {
        puVar15 = *(undefined1 **)((longlong)TVar4.field0_0x0 + 0x1f0);
      }
      iVar10 = *(int *)(puVar15 +
                       (ulonglong)(*(int *)((longlong)TVar4.field0_0x0 + 0x1f8) - 1U & uVar1) * 4);
      if (iVar10 != -1) {
        lVar3 = *(longlong *)((longlong)TVar4.field0_0x0 + 0x1b0);
        do {
          if (*(uint *)(lVar3 + (longlong)iVar10 * 0x10) == uVar1) {
            pEVar13 = TMapBase<int,enum_EDS_ItemFilterState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_EDS_ItemFilterState,0>_>
                      ::FindChecked((longlong *)((longlong)TVar4.field0_0x0 + 0x1b0),uVar1);
            EVar2 = *pEVar13;
            if (EVar2 != Uncheck) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_40
                        );
              if (*(int *)&param_3->field_0x10 == 0) {
                plVar14 = (longlong *)0x0;
              }
              else {
                plVar14 = *(longlong **)&param_3->field_0x8;
              }
              cVar9 = (**(code **)(*plVar14 + 0x60))(plVar14,param_2.WeakPtr,uVar1,EVar2);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_40);
              if (cVar9 == '\0') {
                if (local_90.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                  return false;
                }
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
                return false;
              }
            }
            break;
          }
          iVar10 = *(int *)(lVar3 + 8 + (longlong)iVar10 * 0x10);
        } while (iVar10 != -1);
      }
    }
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  iVar16 = iVar16 + 1;
  if ((this_00->Names).NumValues <= iVar16) {
    return true;
  }
  goto LAB_14bcf2370;
}

// GetEntryEventFieldFilterSlot @ 14bcf6cb0

/* WARNING: Type propagation algorithm not settling */

FDS_EntryBindingEventField * __thiscall
UDS_M_Filter::GetEntryEventFieldFilterSlot
          (UDS_M_Filter *this,FDS_EntryBindingEventField *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UObject *pUVar4;
  FName FVar5;
  code *pcVar6;
  TMap<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FDS_EntryBindingEventField *pFVar11;
  UDS_UserObjectListItem *this_00;
  FName *pFVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  TMap<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
  *pTVar21;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_bc;
  UDS_UserObjectListItem *local_b8;
  TMap<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
  *local_b0;
  TMap<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FName local_68;
  FName local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  puVar1 = &(this->MapFilter).field_0x10;
  (__return_storage_ptr__->UserObjectList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar21 = &this->MapFilter;
  (__return_storage_ptr__->UserObjectList).ArrayNum = 0;
  (__return_storage_ptr__->UserObjectList).ArrayMax = 0;
  iVar3 = *(int *)&(this->MapFilter).field_0x28;
  uVar9 = 1;
  iVar17 = 0;
  iVar19 = 0;
  iVar10 = iVar17;
  if (iVar3 != 0) {
    puVar20 = *(uint **)&(this->MapFilter).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iVar19 = 0;
    iVar17 = 0;
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14bcf6d6d;
      uVar16 = puVar20[lVar14 + 1];
    }
    uVar9 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    iVar10 = iVar19 + -1 + local_res18;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_14bcf6d6d:
  uVar16 = *(uint *)&(this->MapFilter).field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uVar9,iVar17);
  TStack_a0.CurrentBitIndex = iVar10;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_a0._28_4_ = iVar10;
  TStack_a0.BaseBitIndex = iVar19;
  uStack_80 = CONCAT44(uStack_bc,
                       *(int *)&(this->MapFilter).field_0x8 - *(int *)&(this->MapFilter).field_0x34)
  ;
  local_b0 = pTVar21;
  local_a8 = pTVar21;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FDS_EntryBindingEventField *)(*pcVar6)();
    return pFVar11;
  }
  uVar9 = *(uint *)&(this->MapFilter).field_0x28;
  if (uVar16 != uVar9) {
    puVar18 = *(undefined1 **)&(this->MapFilter).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar17;
      uVar15 = uVar15 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14bcf6e70;
      uVar16 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    uVar16 = local_res20 + -1 + uVar15;
    if ((int)uVar9 < (int)uVar16) {
      uVar16 = uVar9;
    }
  }
LAB_14bcf6e70:
  do {
    pTVar7 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_a0.CurrentBitIndex == uVar16) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar21))
    {
      return __return_storage_ptr__;
    }
    pUVar4 = *(UObject **)(*(longlong *)pTVar7 + 8 + (longlong)TStack_a0.CurrentBitIndex * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    if (pUVar4[0xc].field_0x20 != '\0') {
      this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bcf6fb1;
      }
      else {
        if (this_00 == (UDS_UserObjectListItem *)0x0) {
LAB_14bcf6fb1:
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_123149266565725892>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                             ,0x13c,"false");
          if (!bVar8) {
            return __return_storage_ptr__;
          }
          pcVar6 = (code *)swi(3);
          pFVar11 = (FDS_EntryBindingEventField *)(*pcVar6)();
          return pFVar11;
        }
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pcVar6 = *(code **)(*(longlong *)pUVar4 + 0x308);
      pFVar12 = ::FName::FName(&local_68,L"");
      FVar5 = *pFVar12;
      pFVar12 = ::FName::FName(&local_60,L"");
      puVar13 = (undefined8 *)(*pcVar6)(pUVar4,local_58,0x1be,*pFVar12,FVar5);
      local_78.Object = (FDS_ViewModelContext *)*puVar13;
      local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar13[1];
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_UserObjectListItem::AddContext(this_00,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      local_b8 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (__return_storage_ptr__,(TObjectPtr<UDS_UserObjectListItem>)&local_b8);
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    pTVar21 = local_b0;
  } while( true );
}

// GetFilterData @ 14bcf7980

TMap<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
* __thiscall UDS_M_Filter::GetFilterData(UDS_M_Filter *this)

{
  return &this->MapFilter;
}

// GetMappingEnum @ 14bcf9030

UEnum * __cdecl UDS_M_Filter::GetMappingEnum(EDS_FilterState param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UEnum *pUVar4;
  UEnum **ppUVar5;
  longlong lVar6;
  
  if (MappingFilterStateToEnum._8_4_ != MappingFilterStateToEnum._52_4_) {
    lVar6 = 0x154cf82c8;
    if (MappingFilterStateToEnum._64_8_ != 0) {
      lVar6 = MappingFilterStateToEnum._64_8_;
    }
    for (iVar1 = *(int *)(lVar6 + ((ulonglong)(MappingFilterStateToEnum._72_4_ - 1) &
                                  (ulonglong)param_1) * 4); iVar1 != -1;
        iVar1 = *(int *)(MappingFilterStateToEnum._0_8_ + 0x10 + (longlong)iVar1 * 0x18)) {
      if (*(EDS_FilterState *)(MappingFilterStateToEnum._0_8_ + (longlong)iVar1 * 0x18) == param_1)
      {
        ppUVar5 = TMapBase<enum_EDS_FilterState,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>_>
                  ::FindChecked(&MappingFilterStateToEnum,param_1);
        return *ppUVar5;
      }
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_123149266565725914>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                     ,0x126,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UEnum *)(*pcVar2)();
    return pUVar4;
  }
  return (UEnum *)0x0;
}

// GetViewModelContext @ 14bcff7b0

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_Filter::GetViewModelContext
          (UDS_M_Filter *this,TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->_padding_ = 0x1bd;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Init @ 14bd00dd0

void __thiscall UDS_M_Filter::Init(UDS_M_Filter *this,EDS_FilterType param_1)

{
  if (this->FilterType != param_1) {
    this->FilterType = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014bd00de1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2d8))();
    return;
  }
  return;
}

// OnFilterCharEquipType @ 14bd0df20

bool __thiscall
UDS_M_Filter::OnFilterCharEquipType
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  longlong *this_00;
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  FString *pFVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  this_00 = &this->_padding_;
  local_res10 = param_1.WeakPtr;
  bVar2 = FDS_DataContainer::IsData<enum_EDS_ItemFilterData>((FDS_DataContainer *)this_00,CharId);
  if (bVar2) {
    FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemFilterData>
                      ((FDS_DataContainer *)this_00,(EDS_ItemFilterData)&local_res8);
    uVar1 = *(undefined8 *)FVar5;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)this_00,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      iVar4 = _wtoi(L"");
    }
    else {
      iVar4 = _wtoi((wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
    }
  }
  else {
    UDS_PlayerData::GetData((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (!bVar2) {
      return false;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_res8);
    iVar4 = *(int *)&pUVar7[8].field_0x18;
  }
  if ((param_2 & 0xffU) != 1) {
    if ((param_2 & 0xffU) != 2) {
      return false;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar2 = DS_ItemDataUtil::IsCharacterEquippableCharacterEquipType
                      (iVar4,*(int *)&pUVar7[8].field_0x10);
    return bVar2;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  bVar2 = DS_ItemDataUtil::IsCharacterEquippableCharacterEquipType
                    (iVar4,*(int *)&pUVar7[8].field_0x10);
  return !bVar2;
}

// OnFilterCharId @ 14bd0e040

bool __thiscall
UDS_M_Filter::OnFilterCharId
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  longlong *this_00;
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  FString *pFVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  this_00 = &this->_padding_;
  local_res10 = param_1.WeakPtr;
  bVar2 = FDS_DataContainer::IsData<enum_EDS_ItemFilterData>((FDS_DataContainer *)this_00,CharId);
  if (bVar2) {
    FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemFilterData>
                      ((FDS_DataContainer *)this_00,(EDS_ItemFilterData)&local_res8);
    uVar1 = *(undefined8 *)FVar5;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)this_00,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
    if ((pFVar6->Data).ArrayNum == 0) {
      iVar4 = _wtoi(L"");
    }
    else {
      iVar4 = _wtoi((wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
    }
  }
  else {
    UDS_PlayerData::GetData((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,false);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (!bVar2) {
      return false;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_res8);
    iVar4 = *(int *)&pUVar7[8].field_0x18;
  }
  if ((param_2 & 0xffU) != 1) {
    if ((param_2 & 0xffU) != 2) {
      return false;
    }
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    bVar2 = DS_ItemDataUtil::IsCharacterEquippableByCharacterExclusive
                      (iVar4,*(int *)&pUVar7[8].field_0x10);
    return bVar2;
  }
  pUVar7 = FWeakObjectPtr::Get(&local_res10);
  bVar2 = DS_ItemDataUtil::IsCharacterEquippableByCharacterExclusive
                    (iVar4,*(int *)&pUVar7[8].field_0x10);
  return !bVar2;
}

// OnFilterDismantle @ 14bd0e160

bool __thiscall
UDS_M_Filter::OnFilterDismantle
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  if ((param_2 & 0xffU) == 1) {
    pUVar1 = FWeakObjectPtr::Get(local_res10);
    return *(int *)&pUVar1[0x15].field_0x24 < 1;
  }
  if ((param_2 & 0xffU) != 2) {
    return false;
  }
  pUVar1 = FWeakObjectPtr::Get(local_res10);
  return 0 < *(int *)&pUVar1[0x15].field_0x24;
}

// OnFilterDurability @ 14bd0e1c0

bool __thiscall
UDS_M_Filter::OnFilterDurability
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  uint uVar7;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar3 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_123149266565725496>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                       ,0x2c8,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    uVar7 = param_2 & 0xff;
    if (uVar7 == 1) {
      pUVar5 = FWeakObjectPtr::Get(local_res10);
      return *(int *)&pUVar5[0x11].field_0x4 != 0;
    }
    if (uVar7 != 2) {
      if (uVar7 != 3) {
        return false;
      }
      pUVar5 = FWeakObjectPtr::Get(local_res10);
      iVar1 = *(int *)&pUVar5[0x11].field_0x4;
      pUVar5 = FWeakObjectPtr::Get(local_res10);
      return iVar1 != *(int *)&pUVar5[0x15].field_0x18;
    }
    pUVar5 = FWeakObjectPtr::Get(local_res10);
    if (*(int *)&pUVar5[0x11].field_0x4 != 0) {
      pUVar5 = FWeakObjectPtr::Get(local_res10);
      pUVar6 = FWeakObjectPtr::Get(local_res10);
      if (*(int *)&pUVar5[0x11].field_0x4 != *(int *)&pUVar6[0x15].field_0x18) {
        return false;
      }
    }
  }
  return true;
}

// OnFilterEnchant @ 14bd0e2b0

bool __thiscall
UDS_M_Filter::OnFilterEnchant
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  bool bVar1;
  UDS_ItemData *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  if ((param_2 & 0xffU) == 1) {
    pUVar2 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res10);
    bVar1 = UDS_ItemData::IsEnchantAble(pUVar2);
    return !bVar1;
  }
  if ((param_2 & 0xffU) != 2) {
    return false;
  }
  pUVar2 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res10);
  bVar1 = UDS_ItemData::IsEnchantAble(pUVar2);
  return bVar1;
}

// OnFilterEnchantScroll @ 14bd0e310

bool __thiscall
UDS_M_Filter::OnFilterEnchantScroll
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  EDS_ItemUsageType EVar1;
  UDS_ItemData *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  if ((param_2 & 0xffU) == 1) {
    pUVar2 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res10);
    EVar1 = UDS_ItemData::GetUsageType(pUVar2);
    return EVar1 != EnchantScroll;
  }
  if ((param_2 & 0xffU) != 2) {
    return false;
  }
  pUVar2 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res10);
  EVar1 = UDS_ItemData::GetUsageType(pUVar2);
  return EVar1 == EnchantScroll;
}

// OnFilterEquipped @ 14bd0e370

bool __thiscall
UDS_M_Filter::OnFilterEquipped
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  bool bVar1;
  UDS_ItemData *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  if ((param_2 & 0xffU) == 1) {
    pUVar2 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res10);
    bVar1 = UDS_ItemData::IsEquipped(pUVar2);
    return !bVar1;
  }
  if ((param_2 & 0xffU) != 2) {
    return false;
  }
  pUVar2 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res10);
  bVar1 = UDS_ItemData::IsEquipped(pUVar2);
  return bVar1;
}

// OnFilterGrade @ 14bd0e3d0

bool __thiscall
UDS_M_Filter::OnFilterGrade
          (UDS_M_Filter *this,FDS_ItemBaseTableRow *param_1,int param_2,EDS_ItemFilterState param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 != (FDS_ItemBaseTableRow *)0x0) {
    switch(param_2 & 0xff) {
    case 1:
      return param_1->ID_GradeType != Normal;
    case 2:
      return param_1->ID_GradeType != High;
    case 3:
      return param_1->ID_GradeType != Rare;
    case 4:
      return param_1->ID_GradeType != Epic;
    case 5:
      return param_1->ID_GradeType != Legendary;
    case 6:
      return param_1->ID_GradeType != Myth;
    default:
      return false;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_123149266565725414>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                     ,0x31a,"false");
  if (!bVar2) {
    return true;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// OnFilterGrade @ 14bd0e4a0

bool __thiscall
UDS_M_Filter::OnFilterGrade
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  switch(param_2 & 0xff) {
  case 1:
    pUVar1 = FWeakObjectPtr::Get(local_res10);
    return *(char *)(pUVar1 + 0x14) != '\x01';
  case 2:
    pUVar1 = FWeakObjectPtr::Get(local_res10);
    return *(char *)(pUVar1 + 0x14) != '\x02';
  case 3:
    pUVar1 = FWeakObjectPtr::Get(local_res10);
    return *(char *)(pUVar1 + 0x14) != '\x03';
  case 4:
    pUVar1 = FWeakObjectPtr::Get(local_res10);
    return *(char *)(pUVar1 + 0x14) != '\x04';
  case 5:
    pUVar1 = FWeakObjectPtr::Get(local_res10);
    return *(char *)(pUVar1 + 0x14) != '\x05';
  case 6:
    pUVar1 = FWeakObjectPtr::Get(local_res10);
    return *(char *)(pUVar1 + 0x14) != '\x06';
  default:
    return false;
  }
}

// OnFilterItemType @ 14bd0e590

bool __thiscall
UDS_M_Filter::OnFilterItemType
          (UDS_M_Filter *this,FDS_ItemBaseTableRow *param_1,int param_2,EDS_ItemFilterState param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_1 != (FDS_ItemBaseTableRow *)0x0) {
    return param_1->ItemType != param_2;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_123149266565725426>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                     ,0x30e,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// OnFilterItemType @ 14bd0e5e0

bool __thiscall
UDS_M_Filter::OnFilterItemType
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  pUVar1 = FWeakObjectPtr::Get(local_res10);
  return *(int *)&pUVar1[0x13].field_0x20 != param_2;
}

// OnFilterLock @ 14bd0e610

bool __thiscall
UDS_M_Filter::OnFilterLock
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  if ((param_2 & 0xffU) == 1) {
    pUVar1 = FWeakObjectPtr::Get(local_res10);
    return pUVar1[0x11].field_0x9 == '\0';
  }
  if ((param_2 & 0xffU) != 2) {
    return false;
  }
  pUVar1 = FWeakObjectPtr::Get(local_res10);
  return pUVar1[0x11].field_0x9 != '\0';
}

// OnFilterRepair @ 14bd0e670

bool __thiscall
UDS_M_Filter::OnFilterRepair
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  uint uVar5;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_123149266565725531>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                       ,0x2a5,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return true;
  }
  uVar5 = param_2 & 0xff;
  if (uVar5 == 1) {
    pUVar4 = FWeakObjectPtr::Get(local_res10);
    return *(int *)&pUVar4[0x15].field_0x1c < 1;
  }
  if (uVar5 != 2) {
    if (uVar5 == 3) {
      pUVar4 = FWeakObjectPtr::Get(local_res10);
      return *(int *)&pUVar4[0x15].field_0x20 < 1;
    }
    if (uVar5 != 4) {
      return false;
    }
    pUVar4 = FWeakObjectPtr::Get(local_res10);
    return 0 < *(int *)&pUVar4[0x15].field_0x20;
  }
  pUVar4 = FWeakObjectPtr::Get(local_res10);
  return 0 < *(int *)&pUVar4[0x15].field_0x1c;
}

// OnFilterRingCmd @ 14bd0e750

bool __thiscall
UDS_M_Filter::OnFilterRingCmd
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  if ((param_2 & 0xffU) == 1) {
    pUVar1 = FWeakObjectPtr::Get(local_res10);
    return pUVar1[0x17].field_0x24 == '\0';
  }
  if ((param_2 & 0xffU) != 2) {
    return false;
  }
  pUVar1 = FWeakObjectPtr::Get(local_res10);
  return pUVar1[0x17].field_0x24 != '\0';
}

// OnFilterSeasonGroup @ 14bd0e7b0

bool __thiscall
UDS_M_Filter::OnFilterSeasonGroup
          (UDS_M_Filter *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2,
          EDS_ItemFilterState param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar3 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_123149266565725553>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                       ,0x28f,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return true;
  }
  if ((param_2 & 0xffU) == 1) {
    pUVar6 = FWeakObjectPtr::Get(local_res10);
    iVar1 = *(int *)&pUVar6[0x14].field_0x4;
    iVar5 = FDS_DataContainer::GetData<int,enum_EDS_ItemFilterData>
                      ((FDS_DataContainer *)&this->_padding_,SeasonGroup);
    return iVar1 != iVar5;
  }
  if ((param_2 & 0xffU) != 2) {
    return false;
  }
  pUVar6 = FWeakObjectPtr::Get(local_res10);
  iVar1 = *(int *)&pUVar6[0x14].field_0x4;
  iVar5 = FDS_DataContainer::GetData<int,enum_EDS_ItemFilterData>
                    ((FDS_DataContainer *)&this->_padding_,SeasonGroup);
  return iVar1 == iVar5;
}

// Reset @ 14bd1ad90

void __thiscall UDS_M_Filter::Reset(UDS_M_Filter *this)

{
  undefined1 *puVar1;
  TMap<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
  *this_00;
  TMap<EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>_>
  *this_01;
  TMap<EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>_>
  *this_02;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FDS_ItemFilterTableRow *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  size_t sVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_558;
  undefined1 local_557;
  undefined1 local_556;
  undefined1 local_555 [13];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_548;
  FDelegateAllocation local_540;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_530;
  FDelegateAllocation local_528;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_518;
  FDelegateAllocation local_510;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_500;
  FDelegateAllocation local_4f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4e8;
  FDelegateAllocation local_4e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4d0;
  FDelegateAllocation local_4c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4b8;
  FDelegateAllocation local_4b0;
  TArray<EDS_FilterStateEnchantScroll,TSizedDefaultAllocator<32>_> local_4a0;
  TArray<EDS_FilterStateDismantle,TSizedDefaultAllocator<32>_> local_490;
  TArray<EDS_FilterStateRingCmd,TSizedDefaultAllocator<32>_> local_480;
  TArray<EDS_FilterStateCharEquipType,TSizedDefaultAllocator<32>_> local_470;
  TArray<EDS_FilterStateCharId,TSizedDefaultAllocator<32>_> local_460;
  TArray<EDS_FilterStateSeasonGroup,TSizedDefaultAllocator<32>_> local_450;
  TArray<EDS_FilterStateRepair,TSizedDefaultAllocator<32>_> local_440;
  TArray<EDS_FilterStateDurability,TSizedDefaultAllocator<32>_> local_430;
  TArray<EDS_FilterStateEnchant,TSizedDefaultAllocator<32>_> local_420;
  TArray<EDS_FilterStateEquip,TSizedDefaultAllocator<32>_> local_410;
  TArray<EDS_FilterStateLock,TSizedDefaultAllocator<32>_> local_400;
  TArray<EDS_FilterStateGrade,TSizedDefaultAllocator<32>_> local_3f0;
  TArray<EDS_ItemType,TSizedDefaultAllocator<32>_> local_3e0;
  undefined1 local_3d0 [8];
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  UDS_M_Filter *local_3b8;
  UDS_M_Filter *local_3b0;
  UDS_M_Filter *local_3a8;
  UDS_M_Filter *local_3a0;
  UDS_M_Filter *local_398;
  UDS_M_Filter *local_390;
  UDS_M_Filter *local_388;
  undefined1 local_380 [8];
  undefined1 local_378 [8];
  undefined1 local_370 [8];
  undefined1 local_368 [8];
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
  *local_360;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
  *local_358;
  undefined1 *local_350;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
  *local_348;
  undefined1 *local_340;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
  *local_338;
  undefined1 *local_330;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
  *local_328;
  undefined1 *local_320;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
  *local_318;
  undefined1 *local_310;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
  *local_308;
  undefined1 *local_300;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_2f8;
  undefined1 *local_2f0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_2e8;
  undefined1 *local_2e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_2d8;
  undefined1 *local_2d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_2c8;
  undefined1 *local_2c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_2b8;
  undefined1 *local_2b0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_2a8;
  undefined1 *local_2a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_298;
  undefined1 *local_290;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
  *local_288;
  FDestructionSentinel local_280;
  FDestructionSentinel local_268;
  FDestructionSentinel local_250;
  FDestructionSentinel local_238;
  FDestructionSentinel local_220;
  FDestructionSentinel local_208;
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [24];
  undefined1 local_1c0 [24];
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDelegateAllocation *local_118;
  FDestructionSentinel local_110;
  FDelegateAllocation *local_f8;
  FDestructionSentinel local_f0;
  FDelegateAllocation *local_d8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  FDestructionSentinel local_b0;
  FDelegateAllocation *local_98;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  
  if (this->FilterType != None) {
    pFVar6 = FDS_ItemFilterTableRow::Get((ulonglong)this->FilterType,true);
    if (pFVar6 == (FDS_ItemFilterTableRow *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_123149266565725981>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_Filter.cpp"
                         ,0xe3,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      this_00 = &this->MapFilter;
      bVar5 = 1 < *(int *)&(this->MapFilter).field_0x48;
      if (!bVar5) {
        TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
        ::UnhashElements(this_00);
      }
      puVar1 = &(this->MapFilter).field_0xc;
      *(undefined4 *)&(this->MapFilter).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->MapFilter).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->MapFilter).field_0x34 = 0;
      iVar2 = *(int *)&(this->MapFilter).field_0x2c;
      *(undefined4 *)&(this->MapFilter).field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->MapFilter).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MapFilter).field_0x10,0);
      }
      if (bVar5) {
        *(undefined4 *)&(this->MapFilter).field_0x48 = 1;
        TSet<TTuple<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
      local_410.ArrayNum = (pFVar6->EquipInit).ArrayNum;
      sVar9 = (size_t)local_410.ArrayNum;
      bVar5 = pFVar6->IsEquipCheckable;
      pFVar3 = (pFVar6->EquipInit).AllocatorInstance.Data;
      local_410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_410.ArrayNum == 0) {
        local_410.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_410.ArrayNum,0,&local_410.AllocatorInstance,local_410.ArrayNum,
                   &local_410.ArrayMax);
        memcpy(local_410.AllocatorInstance.Data,pFVar3,sVar9);
      }
      CreateFilterSlot<enum_EDS_FilterStateEquip>(this,this->FilterType,Equip,&local_410,bVar5);
      local_400.ArrayNum = (pFVar6->LockInit).ArrayNum;
      sVar9 = (size_t)local_400.ArrayNum;
      bVar5 = pFVar6->IsLockCheckable;
      pFVar3 = (pFVar6->LockInit).AllocatorInstance.Data;
      local_400.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_400.ArrayNum == 0) {
        local_400.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_400.ArrayNum,0,&local_400.AllocatorInstance,local_400.ArrayNum,
                   &local_400.ArrayMax);
        memcpy(local_400.AllocatorInstance.Data,pFVar3,sVar9);
      }
      CreateFilterSlot<enum_EDS_FilterStateLock>(this,this->FilterType,Lock,&local_400,bVar5);
      local_3f0.ArrayNum = (pFVar6->GradeInit).ArrayNum;
      sVar9 = (size_t)local_3f0.ArrayNum;
      bVar5 = pFVar6->IsGradeCheckable;
      pFVar3 = (pFVar6->GradeInit).AllocatorInstance.Data;
      local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_3f0.ArrayNum == 0) {
        local_3f0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_3f0.ArrayNum,0,&local_3f0.AllocatorInstance,local_3f0.ArrayNum,
                   &local_3f0.ArrayMax);
        memcpy(local_3f0.AllocatorInstance.Data,pFVar3,sVar9);
      }
      CreateFilterSlot<enum_EDS_FilterStateGrade>(this,this->FilterType,Grade,&local_3f0,bVar5);
      local_3e0.ArrayNum = (pFVar6->ItemTypeInit).ArrayNum;
      lVar10 = (longlong)local_3e0.ArrayNum;
      bVar5 = pFVar6->IsItemTypeCheckable;
      pFVar3 = (pFVar6->ItemTypeInit).AllocatorInstance.Data;
      local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_3e0.ArrayNum == 0) {
        local_3e0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_3e0.ArrayNum,0,&local_3e0.AllocatorInstance,local_3e0.ArrayNum,
                   &local_3e0.ArrayMax);
        memcpy(local_3e0.AllocatorInstance.Data,pFVar3,lVar10 << 2);
      }
      CreateFilterSlot<enum_EDS_ItemType>(this,this->FilterType,ItemType,&local_3e0,bVar5);
      local_490.ArrayNum = (pFVar6->ItemDismantleInit).ArrayNum;
      sVar9 = (size_t)local_490.ArrayNum;
      bVar5 = pFVar6->IsItemDismantleCheckable;
      pFVar3 = (pFVar6->ItemDismantleInit).AllocatorInstance.Data;
      local_490.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_490.ArrayNum == 0) {
        local_490.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_490.ArrayNum,0,&local_490.AllocatorInstance,local_490.ArrayNum,
                   &local_490.ArrayMax);
        memcpy(local_490.AllocatorInstance.Data,pFVar3,sVar9);
      }
      CreateFilterSlot<enum_EDS_FilterStateDismantle>
                (this,this->FilterType,Dismantle,&local_490,bVar5);
      local_480.ArrayNum = (pFVar6->RingCmdInit).ArrayNum;
      sVar9 = (size_t)local_480.ArrayNum;
      bVar5 = pFVar6->IsRingCmdCheckable;
      pFVar3 = (pFVar6->RingCmdInit).AllocatorInstance.Data;
      local_480.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_480.ArrayNum == 0) {
        local_480.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_480.ArrayNum,0,&local_480.AllocatorInstance,local_480.ArrayNum,
                   &local_480.ArrayMax);
        memcpy(local_480.AllocatorInstance.Data,pFVar3,sVar9);
      }
      CreateFilterSlot<enum_EDS_FilterStateRingCmd>(this,this->FilterType,RingCmd,&local_480,bVar5);
      local_470.ArrayNum = (pFVar6->CharEquipTypeInit).ArrayNum;
      sVar9 = (size_t)local_470.ArrayNum;
      bVar5 = pFVar6->IsCharEquipTypeCheckable;
      pFVar3 = (pFVar6->CharEquipTypeInit).AllocatorInstance.Data;
      local_470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_470.ArrayNum == 0) {
        local_470.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_470.ArrayNum,0,&local_470.AllocatorInstance,local_470.ArrayNum,
                   &local_470.ArrayMax);
        memcpy(local_470.AllocatorInstance.Data,pFVar3,sVar9);
      }
      CreateFilterSlot<enum_EDS_FilterStateCharEquipType>
                (this,this->FilterType,CharEquipType,&local_470,bVar5);
      local_460.ArrayNum = (pFVar6->CharIdInit).ArrayNum;
      sVar9 = (size_t)local_460.ArrayNum;
      bVar5 = pFVar6->IsCharIdCheckable;
      pFVar3 = (pFVar6->CharIdInit).AllocatorInstance.Data;
      local_460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_460.ArrayNum == 0) {
        local_460.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_460.ArrayNum,0,&local_460.AllocatorInstance,local_460.ArrayNum,
                   &local_460.ArrayMax);
        memcpy(local_460.AllocatorInstance.Data,pFVar3,sVar9);
      }
      CreateFilterSlot<enum_EDS_FilterStateCharId>(this,this->FilterType,CharId,&local_460,bVar5);
      local_450.ArrayNum = (pFVar6->SeasonGroupInit).ArrayNum;
      sVar9 = (size_t)local_450.ArrayNum;
      bVar5 = pFVar6->IsSeasonGroupCheckable;
      pFVar3 = (pFVar6->SeasonGroupInit).AllocatorInstance.Data;
      local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_450.ArrayNum == 0) {
        local_450.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_450.ArrayNum,0,&local_450.AllocatorInstance,local_450.ArrayNum,
                   &local_450.ArrayMax);
        memcpy(local_450.AllocatorInstance.Data,pFVar3,sVar9);
      }
      CreateFilterSlot<enum_EDS_FilterStateSeasonGroup>
                (this,this->FilterType,SeasonGroup,&local_450,bVar5);
      local_440.ArrayNum = (pFVar6->ItemRepairInit).ArrayNum;
      sVar9 = (size_t)local_440.ArrayNum;
      bVar5 = pFVar6->ItemRepairCheckable;
      pFVar3 = (pFVar6->ItemRepairInit).AllocatorInstance.Data;
      local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_440.ArrayNum == 0) {
        local_440.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_440.ArrayNum,0,&local_440.AllocatorInstance,local_440.ArrayNum,
                   &local_440.ArrayMax);
        memcpy(local_440.AllocatorInstance.Data,pFVar3,sVar9);
      }
      CreateFilterSlot<enum_EDS_FilterStateRepair>(this,this->FilterType,Repair,&local_440,bVar5);
      local_430.ArrayNum = (pFVar6->ItemDurabilityInit).ArrayNum;
      sVar9 = (size_t)local_430.ArrayNum;
      bVar5 = pFVar6->ItemDurabilityCheckable;
      pFVar3 = (pFVar6->ItemDurabilityInit).AllocatorInstance.Data;
      local_430.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_430.ArrayNum == 0) {
        local_430.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_430.ArrayNum,0,&local_430.AllocatorInstance,local_430.ArrayNum,
                   &local_430.ArrayMax);
        memcpy(local_430.AllocatorInstance.Data,pFVar3,sVar9);
      }
      CreateFilterSlot<enum_EDS_FilterStateDurability>
                (this,this->FilterType,Durability,&local_430,bVar5);
      local_420.ArrayNum = (pFVar6->ItemEnchantInit).ArrayNum;
      sVar9 = (size_t)local_420.ArrayNum;
      bVar5 = pFVar6->IsItemEnchantCheckable;
      pFVar3 = (pFVar6->ItemEnchantInit).AllocatorInstance.Data;
      local_420.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_420.ArrayNum == 0) {
        local_420.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_420.ArrayNum,0,&local_420.AllocatorInstance,local_420.ArrayNum,
                   &local_420.ArrayMax);
        memcpy(local_420.AllocatorInstance.Data,pFVar3,sVar9);
      }
      CreateFilterSlot<enum_EDS_FilterStateEnchant>(this,this->FilterType,Enchant,&local_420,bVar5);
      local_4a0.ArrayNum = (pFVar6->ItemEnchantScrollInit).ArrayNum;
      sVar9 = (size_t)local_4a0.ArrayNum;
      bVar5 = pFVar6->IsItemEnchantScrollCheckable;
      pFVar3 = (pFVar6->ItemEnchantScrollInit).AllocatorInstance.Data;
      local_4a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_4a0.ArrayNum == 0) {
        local_4a0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_4a0.ArrayNum,0,&local_4a0.AllocatorInstance,local_4a0.ArrayNum,
                   &local_4a0.ArrayMax);
        memcpy(local_4a0.AllocatorInstance.Data,pFVar3,sVar9);
      }
      CreateFilterSlot<enum_EDS_FilterStateEnchantScroll>
                (this,this->FilterType,EnchantScroll,&local_4a0,bVar5);
      this_01 = &this->FilterDelegateList;
      bVar5 = 1 < *(int *)&(this->FilterDelegateList).field_0x48;
      if (!bVar5) {
        TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::UnhashElements(this_01);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this_01,0,*(int *)&(this->FilterDelegateList).field_0x8);
      puVar1 = &(this->FilterDelegateList).field_0xc;
      *(undefined4 *)&(this->FilterDelegateList).field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
      }
      *(undefined4 *)&(this->FilterDelegateList).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->FilterDelegateList).field_0x34 = 0;
      iVar2 = *(int *)&(this->FilterDelegateList).field_0x2c;
      *(undefined4 *)&(this->FilterDelegateList).field_0x28 = 0;
      if ((iVar2 < 0) || (0x80 < iVar2)) {
        *(undefined4 *)&(this->FilterDelegateList).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FilterDelegateList).field_0x10,0)
        ;
      }
      if (bVar5) {
        *(undefined4 *)&(this->FilterDelegateList).field_0x48 = 1;
        TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(this_01);
      }
      local_548.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_540.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_540.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_548,(FWriteAccessScope *)&local_130);
      local_118 = &local_540;
      puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_540);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_Filter____A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_3b8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_3b8);
        puVar7[4] = OnFilterItemType;
      }
      if (local_130.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
      }
      local_2f0 = local_res8;
      local_res8[0] = 4;
      local_2e8 = &local_548;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)local_380,(bool *)&local_2f0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_548,(FWriteAccessScope *)&local_280);
      if ((local_540.DelegateSize != 0) &&
         (local_540.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_540.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_540,0,0,0x10);
        local_540.DelegateSize = 0;
      }
      if (local_280.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_280.Accessor,&local_280);
      }
      if (local_540.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_540.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_548.AccessDetector);
      local_530.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_528.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_528.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_530,(FWriteAccessScope *)&local_110);
      local_f8 = &local_528;
      puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_528);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_Filter____A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_3b0 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_3b0);
        puVar7[4] = OnFilterEquipped;
      }
      if (local_110.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
      }
      local_2e0 = local_res10;
      local_res10[0] = 1;
      local_2d8 = &local_530;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)(local_380 + 4),(bool *)&local_2e0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_530,(FWriteAccessScope *)&local_268);
      if ((local_528.DelegateSize != 0) &&
         (local_528.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_528.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_528,0,0,0x10);
        local_528.DelegateSize = 0;
      }
      if (local_268.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
      }
      if (local_528.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_528.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_530.AccessDetector);
      local_518.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_510.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_510.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_518,(FWriteAccessScope *)&local_f0);
      local_d8 = &local_510;
      puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_510);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_Filter____A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_3a8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_3a8);
        puVar7[4] = OnFilterLock;
      }
      if (local_f0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
      }
      local_2d0 = local_res18;
      local_res18[0] = 2;
      local_2c8 = &local_518;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)local_378,(bool *)&local_2d0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_518,(FWriteAccessScope *)&local_250);
      if ((local_510.DelegateSize != 0) &&
         (local_510.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_510.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_510,0,0,0x10);
        local_510.DelegateSize = 0;
      }
      if (local_250.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
      }
      if (local_510.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_510.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_518.AccessDetector);
      local_500.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_4f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_4f8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_500,(FWriteAccessScope *)&local_d0);
      local_b8 = &local_4f8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_4f8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_Filter____A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_3a0 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_3a0);
        puVar7[4] = OnFilterGrade;
      }
      if (local_d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
      }
      local_2c0 = local_res20;
      local_res20[0] = 3;
      local_2b8 = &local_500;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)(local_378 + 4),(bool *)&local_2c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_500,(FWriteAccessScope *)&local_238);
      if ((local_4f8.DelegateSize != 0) &&
         (local_4f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_4f8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_4f8,0,0,0x10);
        local_4f8.DelegateSize = 0;
      }
      if (local_238.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
      }
      if (local_4f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_4f8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_500.AccessDetector);
      local_4e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_4e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_4e0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4e8,(FWriteAccessScope *)&local_b0);
      local_98 = &local_4e0;
      puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_4e0);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_Filter____A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_398 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_398);
        puVar7[4] = OnFilterDismantle;
      }
      if (local_b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
      }
      local_2b0 = &local_558;
      local_558 = 7;
      local_2a8 = &local_4e8;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)local_370,(bool *)&local_2b0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4e8,(FWriteAccessScope *)&local_220);
      if ((local_4e0.DelegateSize != 0) &&
         (local_4e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_4e0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_4e0,0,0,0x10);
        local_4e0.DelegateSize = 0;
      }
      if (local_220.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
      }
      if (local_4e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_4e0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4e8.AccessDetector);
      local_4d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_4c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_4c8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4d0,(FWriteAccessScope *)&local_90);
      local_78 = &local_4c8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_4c8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_Filter____A6A_NU__TWeakObjectPtr_VUDS_ItemData__UFWeakObjectPtr____HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_390 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_390);
        puVar7[4] = OnFilterRingCmd;
      }
      if (local_90.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
      }
      local_2a0 = &local_557;
      local_557 = 8;
      local_298 = &local_4d0;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)(local_370 + 4),(bool *)&local_2a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4d0,(FWriteAccessScope *)&local_208);
      if ((local_4c8.DelegateSize != 0) &&
         (local_4c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_4c8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_4c8,0,0,0x10);
        local_4c8.DelegateSize = 0;
      }
      if (local_208.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
      }
      if (local_4c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_4c8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4d0.AccessDetector);
      local_288 = TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                  ::CreateUObject<UDS_M_Filter>
                            ((TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                              *)local_1f0,this,(pmf_380250b2)0x14bd0df20);
      local_290 = &local_556;
      local_556 = 10;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)local_368,(bool *)&local_290);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f0);
      if ((void *)local_1f0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1f0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1f0);
      local_358 = TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                  ::CreateUObject<UDS_M_Filter>
                            ((TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                              *)local_1d8,this,(pmf_380250b2)0x14bd0e040);
      local_360 = (TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                   *)local_555;
      local_555[0] = 9;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)(local_368 + 4),(bool *)&local_360);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d8);
      if ((void *)local_1d8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1d8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1d8);
      local_348 = TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                  ::CreateUObject<UDS_M_Filter>
                            ((TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                              *)local_1c0,this,(pmf_380250b2)0x14bd0e7b0);
      local_350 = local_555 + 1;
      local_555[1] = 0xd;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)local_3d0,(bool *)&local_350);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c0);
      if ((void *)local_1c0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1c0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1c0);
      local_338 = TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                  ::CreateUObject<UDS_M_Filter>
                            ((TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                              *)local_1a8,this,(pmf_380250b2)0x14bd0e670);
      local_340 = local_555 + 2;
      local_555[2] = 0xe;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)(local_3d0 + 4),(bool *)&local_340);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a8);
      if ((void *)local_1a8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1a8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1a8);
      local_328 = TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                  ::CreateUObject<UDS_M_Filter>
                            ((TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                              *)local_190,this,(pmf_380250b2)0x14bd0e1c0);
      local_330 = local_555 + 3;
      local_555[3] = 0xf;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)local_3c8,(bool *)&local_330);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_190);
      if ((void *)local_190._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_190._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_190);
      local_318 = TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                  ::CreateUObject<UDS_M_Filter>
                            ((TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                              *)local_178,this,(pmf_380250b2)0x14bd0e2b0);
      local_320 = local_555 + 4;
      local_555[4] = 0x10;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)(local_3c8 + 4),(bool *)&local_320);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_178);
      if ((void *)local_178._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_178._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_178);
      local_308 = TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                  ::CreateUObject<UDS_M_Filter>
                            ((TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>
                              *)local_160,this,(pmf_380250b2)0x14bd0e310);
      local_310 = local_555 + 5;
      local_555[5] = 0x11;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_01,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)local_3c0,(bool *)&local_310);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_160);
      if ((void *)local_160._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_160._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_160);
      this_02 = &this->ItemTableFilterDelegateList;
      if (*(int *)&(this->ItemTableFilterDelegateList).field_0x48 < 2) {
        TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::UnhashElements(this_02);
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this_02,0);
      }
      else {
        TSparseArray<TSparseSetElement<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this_02,0);
        *(undefined4 *)&(this->ItemTableFilterDelegateList).field_0x48 = 1;
        TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::Rehash(this_02);
      }
      local_4b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_4b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_4b0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4b8,(FWriteAccessScope *)&local_70);
      local_58 = &local_4b0;
      puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_4b0);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6A_NPEBUFDS_ItemBaseTableRow__HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_Filter____A6A_NPEBUFDS_ItemBaseTableRow__HW4EDS_ItemFilterState___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[3] = 0;
        local_388 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_388);
        puVar7[4] = OnFilterGrade;
      }
      if (local_70.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
      }
      local_300 = local_555 + 6;
      local_555[6] = 3;
      local_2f8 = &local_4b8;
      TSet<TTuple<enum_EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<enum_EDS_FilterState_&&,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,enum_EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>_>
                (this_02,(TPairInitializer<EDS_FilterState_&&,TDelegate<bool___cdecl(FDS_ItemBaseTableRow_const_*,int,EDS_ItemFilterState),FDefaultDelegateUserPolicy>_&&>
                          *)(local_3c0 + 4),(bool *)&local_300);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4b8,(FWriteAccessScope *)&local_148);
      if ((local_4b0.DelegateSize != 0) &&
         (local_4b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_4b0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_4b0,0,0,0x10);
        local_4b0.DelegateSize = 0;
      }
      if (local_148.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
      }
      if (local_4b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_4b0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4b8.AccessDetector);
    }
  }
  return;
}

// Undo @ 14bd24ae0

void __thiscall UDS_M_Filter::Undo(UDS_M_Filter *this)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  TMap<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
  *pTVar1;
  TMap<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
  *pTVar2;
  void *pvVar3;
  
  pTVar1 = &this->MapFilterCached;
  pTVar2 = &this->MapFilter;
  if (pTVar2 != pTVar1) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    _Src = &(this->MapFilterCached).field_0x10;
    *(undefined8 *)pTVar2 = *(undefined8 *)pTVar1;
    _Dst = &(this->MapFilter).field_0x10;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->MapFilter).field_0x8 = *(undefined4 *)&(this->MapFilterCached).field_0x8;
    *(undefined4 *)&(this->MapFilter).field_0xc = *(undefined4 *)&(this->MapFilterCached).field_0xc;
    *(undefined8 *)&(this->MapFilterCached).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(this->MapFilterCached).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->MapFilter).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->MapFilter).field_0x20 =
           *(undefined8 *)&(this->MapFilterCached).field_0x20;
      *(undefined8 *)&(this->MapFilterCached).field_0x20 = 0;
      *(undefined4 *)&(this->MapFilter).field_0x28 =
           *(undefined4 *)&(this->MapFilterCached).field_0x28;
      *(undefined4 *)&(this->MapFilter).field_0x2c =
           *(undefined4 *)&(this->MapFilterCached).field_0x2c;
      *(undefined8 *)&(this->MapFilterCached).field_0x28 = 0;
    }
    *(undefined4 *)&(this->MapFilter).field_0x30 =
         *(undefined4 *)&(this->MapFilterCached).field_0x30;
    *(undefined4 *)&(this->MapFilter).field_0x34 =
         *(undefined4 *)&(this->MapFilterCached).field_0x34;
    *(undefined4 *)&(this->MapFilterCached).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->MapFilterCached).field_0x34 = 0;
    if (*(longlong *)&(this->MapFilterCached).field_0x40 == 0) {
      *(undefined4 *)&(this->MapFilter).field_0x38 =
           *(undefined4 *)&(this->MapFilterCached).field_0x38;
    }
    pvVar3 = *(void **)&(this->MapFilter).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    *(undefined8 *)&(this->MapFilter).field_0x40 =
         *(undefined8 *)&(this->MapFilterCached).field_0x40;
    *(undefined8 *)&(this->MapFilterCached).field_0x40 = 0;
    *(undefined4 *)&(this->MapFilter).field_0x48 =
         *(undefined4 *)&(this->MapFilterCached).field_0x48;
    *(undefined4 *)&(this->MapFilterCached).field_0x48 = 0;
  }
  return;
}

