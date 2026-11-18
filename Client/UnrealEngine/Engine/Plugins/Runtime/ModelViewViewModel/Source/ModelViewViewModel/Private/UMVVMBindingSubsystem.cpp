// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 20

// StaticClass @ 14a73a7e0

UClass * __cdecl UMVVMBindingSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMBindingSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMBindingSubsystem",
               &Z_Registration_Info_UClass_UMVVMBindingSubsystem.InnerSingleton,
               StaticRegisterNativesUMVVMBindingSubsystem,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMVVMBindingSubsystem>,
               InternalVTableHelperCtorCaller<UMVVMBindingSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMBindingSubsystem.InnerSingleton;
}

// UMVVMBindingSubsystem @ 14a73f7b0

UMVVMBindingSubsystem * __thiscall
UMVVMBindingSubsystem::UMVVMBindingSubsystem(UMVVMBindingSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->DelayedBindings = 0;
  *(undefined8 *)&(this->DelayedBindings).field_0x8 = 0;
  *(undefined8 *)&(this->DelayedBindings).field_0x20 = 0;
  *(undefined4 *)&(this->DelayedBindings).field_0x28 = 0;
  *(undefined4 *)&(this->DelayedBindings).field_0x2c = 0x80;
  *(undefined4 *)&(this->DelayedBindings).field_0x34 = 0;
  *(undefined4 *)&(this->DelayedBindings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DelayedBindings).field_0x40 = 0;
  *(undefined4 *)&(this->DelayedBindings).field_0x48 = 0;
  (this->ViewsWithTickBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewsWithTickBindings).ArrayNum = 0;
  (this->ViewsWithTickBindings).ArrayMax = 0;
  return this;
}

// UMVVMBindingSubsystem @ 14a73f830

UMVVMBindingSubsystem * __thiscall
UMVVMBindingSubsystem::UMVVMBindingSubsystem(UMVVMBindingSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->DelayedBindings = 0;
  *(undefined8 *)&(this->DelayedBindings).field_0x8 = 0;
  *(undefined8 *)&(this->DelayedBindings).field_0x20 = 0;
  *(undefined4 *)&(this->DelayedBindings).field_0x28 = 0;
  *(undefined4 *)&(this->DelayedBindings).field_0x2c = 0x80;
  *(undefined4 *)&(this->DelayedBindings).field_0x34 = 0;
  *(undefined4 *)&(this->DelayedBindings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DelayedBindings).field_0x40 = 0;
  *(undefined4 *)&(this->DelayedBindings).field_0x48 = 0;
  (this->ViewsWithTickBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewsWithTickBindings).ArrayNum = 0;
  (this->ViewsWithTickBindings).ArrayMax = 0;
  return this;
}

// ~UMVVMBindingSubsystem @ 14a7405e0

void __thiscall UMVVMBindingSubsystem::~UMVVMBindingSubsystem(UMVVMBindingSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->ViewsWithTickBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DelayedBindings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DelayedBindings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DelayedBindings);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// AddDelayedBinding @ 14a741c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMVVMBindingSubsystem::AddDelayedBinding
          (UMVVMBindingSubsystem *this,UMVVMView *param_1,FMVVMViewClass_BindingKey param_2)

{
  uint *puVar1;
  TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FMVVMViewClass_BindingKey local_res18 [2];
  UMVVMView *local_res20;
  
  local_res18[0].Index = param_2.Index;
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    `UMVVMBindingSubsystem::AddDelayedBinding'::__l2::<lambda_1>::operator()(&local_res8);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  uVar5 = 0;
  uVar6 = uVar5;
  if (param_1 != (UMVVMView *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    uVar5 = local_res8.ObjectIndex;
    local_res10 = local_res8;
    uVar6 = local_res8.ObjectSerialNumber;
  }
  uVar3 = uVar5 - uVar6 ^ uVar6 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar6 ^ uVar3 << 8;
  uVar7 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 0x10;
  uVar7 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar7) - uVar2 ^ uVar7 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 10;
  uVar2 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  if (*(int *)&(this->DelayedBindings).field_0x8 != *(int *)&(this->DelayedBindings).field_0x34) {
    puVar4 = *(undefined1 **)&(this->DelayedBindings).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->DelayedBindings).field_0x38;
    }
    uVar3 = *(uint *)(puVar4 + (ulonglong)(*(int *)&(this->DelayedBindings).field_0x48 - 1U & uVar2)
                               * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)((longlong)(int)uVar3 * 0x40 + *(longlong *)&this->DelayedBindings);
        if ((*puVar1 == uVar5) && (puVar1[1] == uVar6)) {
          if ((uVar3 != 0xffffffff) && (puVar1 != (uint *)0x0)) {
            TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FMVVMViewClass_BindingKey_const_&>
                      ((TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        *)(puVar1 + 2),local_res18);
            return;
          }
          break;
        }
        uVar3 = puVar1[0xe];
      } while (uVar3 != 0xffffffff);
    }
  }
  this_00 = TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
            ::EmplaceByHash<TObjectKey<UMVVMView_const_>_>
                      ((TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
                        *)&this->DelayedBindings,uVar2,(TObjectKey<UMVVMView_const_> *)&local_res10)
  ;
  TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FMVVMViewClass_BindingKey_const_&>(this_00,local_res18);
  return;
}

// AddViewWithTickBinding @ 14a7425e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMVVMBindingSubsystem::AddViewWithTickBinding(UMVVMBindingSubsystem *this,UMVVMView *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UMVVMView_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FWeakObjectPtr *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *this_00;
  undefined1 local_res8 [8];
  UMVVMView *local_res10;
  FWeakObjectPtr local_28 [2];
  
  pTVar2 = &this->ViewsWithTickBindings;
  this_00 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = this_00 + (longlong)(this->ViewsWithTickBindings).ArrayNum * 8;
  do {
    if (this_00 == pFVar3) {
LAB_14a742650:
      if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
        local_res8[0] = 0;
        `UMVVMBindingSubsystem::AddViewWithTickBinding'::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMVVMView *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_28[0].ObjectIndex = 0;
      local_28[0].ObjectSerialNumber = 0;
      local_res10 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMVVMView *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(local_28,(FObjectPtr)&local_res10);
      pFVar4 = (FWeakObjectPtr *)(pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= local_28) && (local_28 < pFVar4 + (this->ViewsWithTickBindings).ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->ViewsWithTickBindings).ArrayNum;
      piVar1 = &(this->ViewsWithTickBindings).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ViewsWithTickBindings).ArrayNum = iVar7 + 1;
      *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
      return;
    }
    bVar6 = TWeakObjectPtr<UMVVMView_const_,FWeakObjectPtr>::UEOpEquals<UMVVMView,bool>
                      ((TWeakObjectPtr<UMVVMView_const_,FWeakObjectPtr> *)this_00,param_1);
    if (bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ViewsWithTickBindings.Contains(InView)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMBindingSubsystem.cpp"
                         ,0x85,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_14a742650;
    }
    this_00 = this_00 + 8;
  } while( true );
}

// GetPrivateStaticClass @ 14a753530

UClass * __cdecl UMVVMBindingSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMBindingSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMBindingSubsystem",
               &Z_Registration_Info_UClass_UMVVMBindingSubsystem.InnerSingleton,
               StaticRegisterNativesUMVVMBindingSubsystem,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMVVMBindingSubsystem>,
               InternalVTableHelperCtorCaller<UMVVMBindingSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMBindingSubsystem.InnerSingleton;
}

// GetStatId @ 14a7546c0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UMVVMBindingSubsystem::GetStatId(UMVVMBindingSubsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UMVVMBindingSubsystem::GetStatId(void)const_::_2_::FStat_UMVVMBindingSubsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UMVVMBindingSubsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UMVVMBindingSubsystem::GetStatId(void)const_::_2_::FStat_UMVVMBindingSubsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UMVVMBindingSubsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UMVVMBindingSubsystem,*pFVar1,
                   L"UMVVMBindingSubsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UMVVMBindingSubsystem;
  if (StatPtr_UMVVMBindingSubsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UMVVMBindingSubsystem::GetStatId(void)const_::_2_::FStat_UMVVMBindingSubsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UMVVMBindingSubsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UMVVMBindingSubsystem::GetStatId(void)const_::_2_::FStat_UMVVMBindingSubsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UMVVMBindingSubsystem,*pFVar1,
                         L"UMVVMBindingSubsystem","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableTickType @ 14a754820

ETickableTickType __thiscall UMVVMBindingSubsystem::GetTickableTickType(UMVVMBindingSubsystem *this)

{
  bool bVar1;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)&this[-1].DelayedBindings.field_0x30,
                     RF_ArchetypeObject|RF_ClassDefaultObject);
  return bVar1 + Always;
}

// IsTickableInEditor @ 14a759e90

bool __thiscall UMVVMBindingSubsystem::IsTickableInEditor(UMVVMBindingSubsystem *this)

{
  return true;
}

// IsTickableWhenPaused @ 14a759ea0

bool __thiscall UMVVMBindingSubsystem::IsTickableWhenPaused(UMVVMBindingSubsystem *this)

{
  return true;
}

// RemoveDelayedBindings @ 14a75d340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMVVMBindingSubsystem::RemoveDelayedBindings(UMVVMBindingSubsystem *this,UMVVMView *param_1)

{
  FWeakObjectPtr local_res8;
  UMVVMView *local_res10;
  
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    `UMVVMBindingSubsystem::RemoveDelayedBindings'::__l2::<lambda_1>::operator()(&local_res8);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (UMVVMView *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
  ::Remove((TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
            *)&this->DelayedBindings,(TObjectKey<UMVVMView_const_> *)&local_res8);
  return;
}

// RemoveDelayedBindings @ 14a75d3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMVVMBindingSubsystem::RemoveDelayedBindings
          (UMVVMBindingSubsystem *this,UMVVMView *param_1,FMVVMViewClass_SourceKey param_2)

{
  UMVVMViewClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  ForElementType<FMVVMViewClass_BindingKey> FVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ForElementType<FMVVMViewClass_BindingKey> FVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined1 local_res20 [8];
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  UMVVMView *local_58;
  UMVVMView *local_50;
  FWeakObjectPtr local_48 [2];
  
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    local_res20[0] = 0;
    `UMVVMBindingSubsystem::RemoveDelayedBindings'::__l2::<lambda_1>::operator()(local_res20);
  }
  FVar11 = (ForElementType<FMVVMViewClass_BindingKey>)0x0;
  iVar5 = 0;
  if (param_1 != (UMVVMView *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_68.ObjectIndex = 0;
    local_68.ObjectSerialNumber = 0;
    local_58 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_58);
    FVar11 = (ForElementType<FMVVMViewClass_BindingKey>)((ulonglong)local_68 >> 0x20);
    iVar5 = local_68.ObjectIndex;
  }
  iVar14 = FVar11._0_4_;
  uVar8 = iVar5 - iVar14 ^ (uint)((ulonglong)FVar11 >> 0xd);
  uVar4 = (-0x61c88647 - uVar8) - iVar14 ^ uVar8 << 8;
  uVar12 = (iVar14 - uVar4) - uVar8 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar12) - uVar4 ^ uVar12 >> 0xc;
  uVar4 = (uVar4 - uVar8) - uVar12 ^ uVar8 << 0x10;
  uVar12 = (uVar12 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar12) - uVar4 ^ uVar12 >> 3;
  uVar4 = (uVar4 - uVar8) - uVar12 ^ uVar8 << 10;
  if (*(int *)&(this->DelayedBindings).field_0x8 != *(int *)&(this->DelayedBindings).field_0x34) {
    puVar9 = *(undefined1 **)&(this->DelayedBindings).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->DelayedBindings).field_0x38;
    }
    iVar13 = *(int *)(puVar9 + (ulonglong)
                               (*(int *)&(this->DelayedBindings).field_0x48 - 1U &
                               ((uVar12 - uVar4) - uVar8 ^ uVar4 >> 0xf)) * 4);
    if (iVar13 != -1) {
      while ((piVar6 = (int *)((longlong)iVar13 * 0x40 + *(longlong *)&this->DelayedBindings),
             *piVar6 != iVar5 || (piVar6[1] != iVar14))) {
        iVar13 = piVar6[0xe];
        if (iVar13 == -1) {
          return;
        }
      }
      if (iVar13 != -1) {
        FVar11 = (ForElementType<FMVVMViewClass_BindingKey>)(piVar6 + 2);
        if (piVar6 == (int *)0x0) {
          FVar11 = (ForElementType<FMVVMViewClass_BindingKey>)0x0;
        }
        if (FVar11 != (ForElementType<FMVVMViewClass_BindingKey>)0x0) {
          uVar4 = *(int *)((ForElementType<FMVVMViewClass_BindingKey> *)((longlong)FVar11 + 0x28))->
                          InlineData - 1;
          pUVar1 = (param_1->GeneratedViewClass).field0_0x0.DebugPtr;
          if (-1 < (int)uVar4) {
            lVar10 = (longlong)(int)uVar4;
            lVar15 = lVar10 * 4;
            do {
              uVar8 = 0;
              if ((int)uVar4 <
                  *(int *)((ForElementType<FMVVMViewClass_BindingKey> *)((longlong)FVar11 + 0x28))->
                          InlineData) {
                uVar8 = ~uVar4 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar7 = FVar11;
              if (*(ForElementType<FMVVMViewClass_BindingKey> *)((longlong)FVar11 + 0x20) !=
                  (ForElementType<FMVVMViewClass_BindingKey>)0x0) {
                FVar7 = *(ForElementType<FMVVMViewClass_BindingKey> *)((longlong)FVar11 + 0x20);
              }
              uVar8 = *(uint *)((longlong)FVar7 + lVar15);
              if ((((int)uVar8 < 0) || ((pUVar1->Bindings).ArrayNum <= (int)uVar8)) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Bindings.IsValidIndex(Key.GetIndex())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\View\\MVVMViewClass.h"
                                     ,0x2be,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar12 = 0;
              if ((int)uVar8 < (pUVar1->Bindings).ArrayNum) {
                uVar12 = ~uVar8 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((*(ulonglong *)
                    ((pUVar1->Bindings).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20 + 0x10)
                   >> ((ulonglong)(uint)param_2.Index & 0x3f) & 1) != 0) {
                uVar8 = 0;
                if ((int)uVar4 < *(int *)((longlong)FVar11 + 0x28)) {
                  uVar8 = ~uVar4 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                FVar7 = FVar11;
                if (*(ForElementType<FMVVMViewClass_BindingKey> *)((longlong)FVar11 + 0x20) !=
                    (ForElementType<FMVVMViewClass_BindingKey>)0x0) {
                  FVar7 = *(ForElementType<FMVVMViewClass_BindingKey> *)((longlong)FVar11 + 0x20);
                }
                iVar5 = ~uVar4 + *(int *)((longlong)FVar11 + 0x28);
                if (1 < iVar5) {
                  iVar5 = 1;
                }
                if (iVar5 != 0) {
                  memmove((void *)((longlong)FVar7 + lVar10 * 4),
                          (void *)((longlong)FVar7 +
                                  (longlong)(*(int *)((longlong)FVar11 + 0x28) - iVar5) * 4),
                          (longlong)iVar5 << 2);
                }
                *(int *)((longlong)FVar11 + 0x28) = *(int *)((longlong)FVar11 + 0x28) + -1;
                UE::Core::Private::
                ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMVVMViewClass_BindingKey>_>
                          (4,4,(ForElementType<FMVVMViewClass_BindingKey> *)FVar11,
                           *(int *)((longlong)FVar11 + 0x28),(int *)((longlong)FVar11 + 0x2c));
              }
              lVar10 = lVar10 + -1;
              lVar15 = lVar15 + -4;
              uVar4 = uVar4 - 1;
            } while (-1 < (int)uVar4);
          }
          if (*(int *)((longlong)FVar11 + 0x28) == 0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            local_60.ObjectIndex = 0;
            local_60.ObjectSerialNumber = 0;
            local_50 = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_50);
            local_48[0] = local_60;
            TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
            ::Remove((TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
                      *)&this->DelayedBindings,(TObjectKey<UMVVMView_const_> *)local_48);
          }
        }
      }
    }
  }
  return;
}

// RemoveViewWithTickBinding @ 14a75dde0

void __thiscall
UMVVMBindingSubsystem::RemoveViewWithTickBinding(UMVVMBindingSubsystem *this,UMVVMView *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UMVVMView_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *this_00;
  uint uVar9;
  FWeakObjectPtr local_res8;
  UMVVMView *local_res10;
  
  pTVar2 = &this->ViewsWithTickBindings;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMVVMView *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMVVMView *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  iVar7 = (this->ViewsWithTickBindings).ArrayNum;
  this_00 = pFVar4;
  while( true ) {
    if (this_00 == pFVar4 + (longlong)iVar7 * 8) {
      return;
    }
    bVar6 = TWeakObjectPtr<UMVVMView_const_,FWeakObjectPtr>::UEOpEquals<UMVVMView_const_,bool>
                      ((TWeakObjectPtr<UMVVMView_const_,FWeakObjectPtr> *)this_00,
                       (TWeakObjectPtr<UMVVMView_const_,FWeakObjectPtr> *)&local_res8);
    if (bVar6) break;
    this_00 = this_00 + 8;
  }
  uVar8 = (uint)((longlong)this_00 - (longlong)pFVar4 >> 3);
  if (uVar8 == 0xffffffff) {
    return;
  }
  uVar9 = 0;
  if ((int)(uVar8 + 1) <= (this->ViewsWithTickBindings).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = (this->ViewsWithTickBindings).ArrayNum;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  iVar7 = iVar3 + ~uVar8;
  if (1 < iVar7) {
    iVar7 = 1;
  }
  if (iVar7 != 0) {
    memmove(pFVar4 + (longlong)(int)uVar8 * 8,pFVar4 + (longlong)(iVar3 - iVar7) * 8,
            (longlong)iVar7 << 3);
  }
  piVar1 = &(this->ViewsWithTickBindings).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,&pTVar2->AllocatorInstance,(this->ViewsWithTickBindings).ArrayNum,
             &(this->ViewsWithTickBindings).ArrayMax);
  return;
}

// StaticRegisterNativesUMVVMBindingSubsystem @ 14a75fff0

void __cdecl UMVVMBindingSubsystem::StaticRegisterNativesUMVVMBindingSubsystem(void)

{
  return;
}

// Tick @ 14a760470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMVVMBindingSubsystem::Tick(UMVVMBindingSubsystem *this,float param_1)

{
  longlong *plVar1;
  FWeakObjectPtr *pFVar2;
  FViewAndBinding *pFVar3;
  FMVVMViewClass_BindingKey *pFVar4;
  FScriptContainerElement *pFVar5;
  FObjectKey this_00;
  code *pcVar6;
  TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  *pTVar7;
  FObjectKey *pFVar8;
  bool bVar9;
  bool bVar10;
  EMVVMExecutionMode EVar11;
  int iVar12;
  uint uVar13;
  TStatId TVar14;
  uint *puVar15;
  FTlsAutoCleanup *pFVar16;
  ulonglong uVar17;
  UMVVMView *this_01;
  TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar18;
  byte bVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ForAnyElementType FVar23;
  uint uVar24;
  FMVVMViewClass_BindingKey FVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  FWeakObjectPtr *pFVar30;
  FMVVMViewClass_BindingKey *pFVar31;
  longlong lVar32;
  ForElementType<UMVVMView_const_*> FVar33;
  FMVVMViewClass_Binding *this_02;
  int *piVar34;
  ulonglong uVar35;
  longlong lVar36;
  ForElementType<unsigned_int> FVar37;
  uint uVar38;
  undefined1 auStackY_3c8 [32];
  undefined1 local_378;
  undefined1 local_377;
  undefined1 local_376;
  undefined1 local_375;
  undefined1 local_374 [4];
  ForElementType<UMVVMView_const_*> local_370;
  undefined8 local_368;
  undefined1 local_360 [8];
  TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  *local_358;
  UMVVMBindingSubsystem *local_350;
  FObjectKey *local_348;
  FObjectKey local_340;
  FMemMark local_338;
  int local_310;
  uint uStack_30c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_308;
  undefined4 local_300;
  int iStack_2fc;
  int iStack_2f8;
  undefined4 uStack_2f4;
  FViewAndBinding local_2f0;
  FName local_2e0;
  byte local_2d8;
  FWeakObjectPtr local_2d0;
  longlong *local_2c8;
  undefined1 auStack_2c0 [16];
  uint uStack_2b0;
  uint uStack_2ac;
  longlong local_2a8;
  TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  *pTStack_2a0;
  TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  *local_298;
  undefined2 local_290;
  FWeakObjectPtr local_288;
  FMVVMViewClass_BindingKey *local_280;
  longlong local_278;
  undefined4 local_270;
  int local_26c;
  undefined8 local_268;
  int local_260;
  int local_258;
  int local_254;
  undefined1 local_250 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_240;
  longlong *local_220;
  uint uStack_218;
  uint uStack_214;
  TBitArray<FDefaultBitArrayAllocator> *local_210;
  undefined4 uStack_208;
  uint uStack_204;
  uint local_200;
  undefined4 uStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  FSourceLocation local_1b8;
  code *local_198;
  undefined1 *local_190;
  undefined1 local_180 [32];
  longlong local_160;
  TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  *pTStack_158;
  undefined4 local_134;
  undefined1 local_128 [32];
  ForElementType<unsigned_int> local_108;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  FScriptContainerElement local_f0 [8];
  ForAnyElementType local_e8;
  uint local_e0;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_350 = this;
  TVar14 = FThreadSafeStaticStatInner<FStat_STAT_MVVMBindingTick,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_MVVMBindingTick,1> *)
                      &StatPtr_STAT_MVVMBindingTick);
  local_1b8.Impl._Line = 0x2c;
  local_1b8.Impl._Function = "void __cdecl UMVVMBindingSubsystem::Tick(float)";
  local_1b8.Impl._Column = 2;
  local_1b8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMBindingSubsystem.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_2e0,*(TStatIdData **)&(TVar14.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1b8);
  if (0 < *(int *)&(this->DelayedBindings).field_0x28) {
    puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_190 = local_360;
    local_198 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar16 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_198,puVar15);
    local_370.Data = (UMVVMView **)0x0;
    local_368 = 0;
    local_338.Mem = (FMemStackBase *)(pFVar16 + 2);
    local_338.Top = (local_338.Mem)->Top;
    local_338.SavedChunk = *(FTaggedMemory **)(pFVar16 + 4);
    local_338.bPopped = false;
    local_338.NextTopmostMark = *(FMemMark **)(pFVar16 + 5);
    pFVar16[5] = (FTlsAutoCleanup)&local_338;
    *(int *)(pFVar16 + 6) = *(int *)(pFVar16 + 6) + 1;
    uVar26 = *(uint *)&(this->DelayedBindings).field_0x28;
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    if (0 < (int)uVar26) {
      UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UMVVMView_const_*>_>
                (8,8,uVar26,&local_370,0,(int *)((longlong)&local_368 + 4));
    }
    pFVar30 = *(FWeakObjectPtr **)&(this->DelayedBindings).field_0x20;
    iVar28 = *(int *)&(this->DelayedBindings).field_0x28;
    pFVar2 = pFVar30 + iVar28;
    FVar33.Data = local_370.Data;
    while( true ) {
      if (*(int *)&(this->DelayedBindings).field_0x28 != iVar28) {
        local_378 = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UMVVMView_const_,FWeakObjectPtr>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_378);
      }
      if (pFVar30 == pFVar2) break;
      local_288 = *pFVar30;
      local_340 = (FObjectKey)FWeakObjectPtr::Get(&local_288);
      if (local_340 == (FObjectKey)0x0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4985797641506914250>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMBindingSubsystem.cpp"
                           ,0x36,"ViewPtr");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        if (((FVar33.Data <= &local_340) &&
            (&local_340 < (FObjectKey *)(FVar33.Data + local_368._4_4_))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((int)local_368 == local_368._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UMVVMView_const_*>_>
                             (0x808,&local_370,(int *)((longlong)&local_368 + 4));
          local_368 = CONCAT44(local_368._4_4_,iVar12);
          FVar33.Data = local_370.Data;
        }
        lVar21 = (longlong)(int)local_368;
        local_368 = CONCAT44(local_368._4_4_,(int)local_368 + 1);
        *(FObjectKey *)(FVar33.Data + lVar21) = local_340;
      }
      pFVar30 = pFVar30 + 1;
    }
    uVar22 = (ulonglong)(int)local_368;
    local_358 = (TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                 *)CONCAT44(local_358._4_4_,(int)local_368);
    local_348 = (FObjectKey *)(FVar33.Data + uVar22);
    while( true ) {
      pFVar8 = local_348;
      if ((int)local_368 != (int)uVar22) {
        local_377 = 0;
        `TCheckedPointerIterator<UMVVMView_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_377);
      }
      if ((FObjectKey *)FVar33.Data == pFVar8) break;
      this_00 = (FObjectKey)*FVar33.Data;
      if (((TObjectPtr<UMVVMViewClass_const_>_u_0 *)((longlong)this_00 + 0x28))->DebugPtr ==
          (UMVVMViewClass *)0x0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3602267991179264807>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                           ,0x327,"GeneratedViewClass");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        if (((*(uchar *)((longlong)this_00 + 0x68) == '\0') &&
            (*(bool *)((longlong)this_00 + 0x6e) == false)) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3602267991179264809>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMView.cpp"
                               ,0x329,"NumberOfSourceWithTickBinding > 0 || bHasDefaultTickBinding")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar9 = false;
        iVar28 = *(int *)((longlong)
                          ((TObjectPtr<UMVVMViewClass_const_>_u_0 *)((longlong)this_00 + 0x28))->
                          DebugPtr + 0x40);
        lVar21 = *(longlong *)
                  ((longlong)
                   ((TObjectPtr<UMVVMViewClass_const_>_u_0 *)((longlong)this_00 + 0x28))->DebugPtr +
                  0x38);
        if ((iVar28 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar25.Index = 0;
        if (0 < iVar28) {
          do {
            if ((FVar25.Index < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_02 = (FMVVMViewClass_Binding *)((ulonglong)(uint)FVar25.Index * 0x20 + lVar21);
            EVar11 = FMVVMViewClass_Binding::GetExecuteMode(this_02);
            if (EVar11 == Tick) {
              UMVVMView::ExecuteBindingImmediately((UMVVMView *)this_00,this_02,FVar25);
              bVar9 = true;
            }
            FVar25.Index = FVar25.Index + 1;
          } while (FVar25.Index < iVar28);
          if (bVar9) goto LAB_14a76086c;
        }
        local_376 = 0;
        `UMVVMView::ExecuteTickBindings'::__l13::<lambda_1>::operator()(&local_376);
      }
LAB_14a76086c:
      uVar22 = (ulonglong)local_358 & 0xffffffff;
      FVar33.Data = FVar33.Data + 1;
    }
    this = local_350;
    if (local_338.bPopped == false) {
      if (((local_338.Mem)->TopMark != &local_338) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_338.bPopped = true;
      (local_338.Mem)->NumMarks = (local_338.Mem)->NumMarks + -1;
      if (local_338.SavedChunk != (local_338.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_338.Mem,local_338.SavedChunk);
      }
      (local_338.Mem)->Top = local_338.Top;
      (local_338.Mem)->TopMark = local_338.NextTopmostMark;
      local_338.Top = (uchar *)0x0;
      this = local_350;
    }
  }
  uVar22 = 0;
  plVar1 = &this->_padding_;
  uVar26 = (int)this->_padding_ - *(int *)&(this->DelayedBindings).field_0x4;
  local_358 = (TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
               *)plVar1;
  if ((int)uVar26 < 1) goto LAB_14a76143b;
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (ForElementType<unsigned_int>)0x0;
  local_100 = 0;
  local_fc = 0x80;
  local_f8 = -1;
  local_f4 = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_128,uVar26);
  uVar27 = 1;
  if (3 < uVar26) {
    uVar35 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar35 != 0) {
      for (; uVar35 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_270 = (undefined4)lVar21;
    uVar27 = 1 << ((byte)lVar21 & 0x1f);
  }
  if ((local_e0 == 0) || ((int)local_e0 < (int)uVar27)) {
    local_e0 = uVar27;
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,4);
    }
    if (uVar27 != 0) {
      uVar26 = uVar27;
      if (uVar27 < 2) {
        if (local_e8.Data != (FScriptContainerElement *)0x0) {
          uVar26 = 0;
          goto LAB_14a7609ee;
        }
      }
      else {
LAB_14a7609ee:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,uVar26,4);
      }
      if (0 < (int)uVar27) {
        uVar35 = (ulonglong)uVar27;
        do {
          FVar23.Data = local_f0;
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            FVar23.Data = local_e8.Data;
          }
          uVar17 = (longlong)(int)uVar27 - 1U & uVar22;
          uVar22 = uVar22 + 1;
          *(undefined4 *)(FVar23.Data + uVar17 * 4) = 0xffffffff;
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
      }
    }
    if (local_e0 != 0) {
      pTStack_308 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
      local_310 = 0;
      uStack_30c = 1;
      iStack_2fc = 0;
      iStack_2f8 = 0;
      if (local_100 != 0) {
        FVar37 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
        if (local_108 != (ForElementType<unsigned_int>)0x0) {
          FVar37 = local_108;
        }
        uVar26 = *(uint *)FVar37;
        iStack_2f8 = 0;
        local_310 = 0;
        while (uVar26 == 0) {
          iStack_2f8 = iStack_2f8 + 0x20;
          lVar21 = (longlong)local_310;
          local_310 = local_310 + 1;
          if ((int)(local_100 + -1 + (local_100 + -1 >> 0x1f & 0x1fU)) >> 5 < local_310)
          goto LAB_14a760b0b;
          uVar26 = ((uint *)((longlong)FVar37 + 4))[lVar21];
        }
        uStack_30c = -uVar26 & uVar26;
        uVar22 = (ulonglong)uStack_30c * 2 + 1;
        lVar21 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_26c = (int)lVar21;
        iStack_2fc = local_26c + -1 + iStack_2f8;
        if (local_100 < iStack_2fc) {
LAB_14a760b0b:
          iStack_2fc = local_100;
        }
      }
      local_300 = 0xffffffff;
      local_250._8_8_ = local_128;
      local_240._padding_ = CONCAT44(uStack_30c,local_310);
      local_240.CurrentBitIndex = iStack_2fc;
      local_240.UnvisitedBitMask = 0xffffffff;
      local_240._28_4_ = uStack_2f4;
      local_240.BaseBitIndex = iStack_2f8;
      iVar28 = iStack_2fc;
      local_240.Array = pTStack_308;
      if (iStack_2fc < local_100) {
        do {
          pFVar3 = (FViewAndBinding *)(*(longlong *)local_250._8_8_ + (longlong)iVar28 * 0x14);
          uVar26 = UE::MVVM::Private::GetTypeHash(pFVar3);
          uVar26 = uVar26 & local_e0 - 1;
          pFVar3[1].View.ObjectKey.ObjectSerialNumber = uVar26;
          FVar23.Data = local_f0;
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            FVar23.Data = local_e8.Data;
          }
          uVar22 = (longlong)(int)local_e0 - 1U & (longlong)(int)uVar26;
          pFVar3[1].View.ObjectKey.ObjectIndex = *(int *)(FVar23.Data + uVar22 * 4);
          *(int *)(FVar23.Data + uVar22 * 4) = iVar28;
          local_240.UnvisitedBitMask = local_240.UnvisitedBitMask & ~local_240._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_240);
          iVar28 = local_240.CurrentBitIndex;
        } while (local_240.CurrentBitIndex < (local_240.Array)->NumBits);
      }
    }
  }
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              *)local_d8,
             (TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              *)plVar1);
  local_88.Hash.InlineData[0] = '\0';
  local_88.Hash.InlineData[1] = '\0';
  local_88.Hash.InlineData[2] = '\0';
  local_88.Hash.InlineData[3] = '\0';
  local_88.Hash._padding_ = 0;
  local_88._72_8_ = 0;
  local_88.Elements._16_8_ = 0;
  local_88.Elements._24_8_ = 0;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  if ((TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
       *)plVar1 != &local_88) {
    TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                *)plVar1,&local_88);
  }
  local_88._72_8_ = local_88._72_8_ & 0xffffffff00000000;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  do {
    uVar26 = local_b0;
    uStack_218 = 0;
    local_200 = 0;
    uStack_214 = 1;
    uStack_204 = uStack_218;
    if (local_b0 != 0) {
      puVar15 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar15 = local_b8;
      }
      uStack_214 = *puVar15;
      local_200 = 0;
      uStack_218 = 0;
      while (uStack_214 == 0) {
        lVar21 = (longlong)(int)uStack_218;
        local_200 = local_200 + 0x20;
        uStack_218 = uStack_218 + 1;
        uStack_214 = 1;
        uStack_204 = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_218)
        goto LAB_14a760d60;
        uStack_214 = puVar15[lVar21 + 1];
      }
      uStack_214 = -uStack_214 & uStack_214;
      uVar22 = (ulonglong)uStack_214 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_258 = (int)lVar21;
      uStack_204 = (local_200 - 1) + local_258;
      if ((int)local_b0 < (int)uStack_204) {
        uStack_204 = local_b0;
      }
    }
LAB_14a760d60:
    iStack_1f8 = local_d8._8_4_ - local_a4;
    local_220 = (longlong *)local_d8;
    local_210 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
    TStack_1e0._padding_ = CONCAT44(uStack_214,uStack_218);
    uStack_208 = 0xffffffff;
    uVar27 = local_b0 & 0xffffffe0;
    TStack_1e0.CurrentBitIndex = uStack_204;
    TStack_1e0.UnvisitedBitMask = 0xffffffff;
    uStack_1fc = local_134;
    TStack_1e0._28_4_ = local_134;
    TStack_1e0.BaseBitIndex = local_200;
    uStack_1c0 = CONCAT44(uStack_1f4,iStack_1f8);
    iVar28 = (int)local_b0 >> 5;
    bVar19 = (byte)local_b0;
    local_1e8 = local_220;
    TStack_1e0.Array = local_210;
    if (((int)local_b0 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar26 != local_b0) {
      puVar15 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar15 = local_b8;
      }
      uVar26 = -1 << (bVar19 & 0x1f) & puVar15[iVar28];
      while (uVar26 == 0) {
        lVar21 = (longlong)iVar28;
        uVar27 = uVar27 + 0x20;
        iVar28 = iVar28 + 1;
        uVar26 = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar28)
        goto LAB_14a760ea0;
        uVar26 = puVar15[lVar21 + 1];
      }
      uVar22 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_254 = (int)lVar21;
      uVar26 = (uVar27 - 1) + local_254;
      if ((int)local_b0 < (int)uVar26) {
        uVar26 = local_b0;
      }
    }
LAB_14a760ea0:
    while( true ) {
      plVar1 = local_1e8;
      if ((int)local_1e8[1] - *(int *)((longlong)local_1e8 + 0x34) != (int)uStack_1c0) {
        local_375 = 0;
        `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_375);
      }
      if (((TStack_1e0.CurrentBitIndex == uVar26) &&
          (TStack_1e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
         (plVar1 == (longlong *)local_d8)) break;
      piVar34 = (int *)((longlong)TStack_1e0.CurrentBitIndex * 0x40 + *plVar1);
      local_2d0.ObjectIndex = *piVar34;
      local_2d0.ObjectSerialNumber = piVar34[1];
      this_01 = (UMVVMView *)FWeakObjectPtr::Get(&local_2d0);
      if (this_01 != (UMVVMView *)0x0) {
        if ((piVar34[0xc] < 1) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4985797641506914224>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\View\\MVVMBindingSubsystem.cpp"
                               ,0x50,"DelayedBindingsPair.Value.Num() > 0"), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar31 = (FMVVMViewClass_BindingKey *)(piVar34 + 2);
        iVar28 = piVar34[0xc];
        if (*(FMVVMViewClass_BindingKey **)(piVar34 + 10) != (FMVVMViewClass_BindingKey *)0x0) {
          pFVar31 = *(FMVVMViewClass_BindingKey **)(piVar34 + 10);
        }
        pFVar4 = pFVar31 + iVar28;
        while( true ) {
          if (piVar34[0xc] != iVar28) {
            local_374[0] = 0;
            `TCheckedPointerIterator<FMVVMViewClass_BindingKey_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_374);
          }
          if (pFVar31 == pFVar4) break;
          UMVVMView::ExecuteDelayedBinding(this_01,pFVar31);
          local_268 = *(undefined8 *)piVar34;
          local_260 = pFVar31->Index;
          TSet<UE::MVVM::Private::FViewAndBinding,DefaultKeyFuncs<UE::MVVM::Private::FViewAndBinding,0>,FDefaultSetAllocator>
          ::Emplace<UE::MVVM::Private::FViewAndBinding_const_&>
                    ((TSet<UE::MVVM::Private::FViewAndBinding,DefaultKeyFuncs<UE::MVVM::Private::FViewAndBinding,0>,FDefaultSetAllocator>
                      *)local_128,(FViewAndBinding *)local_250,(bool *)&local_268);
          pFVar31 = pFVar31 + 1;
        }
      }
      TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
    }
    TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
             *)local_d8);
    pTVar7 = local_358;
    TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_180,local_358);
    local_298 = pTVar7;
    local_290 = 0;
    stack0xfffffffffffffd48 = local_180._16_16_;
    local_2c8 = (longlong *)local_180._0_8_;
    auStack_2c0._0_8_ = local_180._8_8_;
    local_2a8 = local_160;
    pTStack_2a0 = pTStack_158;
    uVar22 = local_180._24_8_ >> 0x20;
    uVar26 = local_180._28_4_;
    if ((int)uVar26 < *(int *)(local_180._16_8_ + 0x18)) {
      do {
        plVar1 = local_2c8;
        local_350 = (UMVVMBindingSubsystem *)0x0;
        uVar27 = *(int *)((longlong)(int)uVar22 * 0x40 + 0x30 + *local_2c8) - 1;
        if (-1 < (int)uVar27) {
          lVar21 = (longlong)(int)uVar27;
          do {
            lVar32 = *plVar1 + (longlong)(int)uVar26 * 0x40 + 8;
            uVar38 = ~uVar27 >> 0x1f;
            uVar13 = 0;
            if ((int)uVar27 < *(int *)(lVar32 + 0x28)) {
              uVar13 = uVar38;
            }
            if ((uVar13 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(longlong *)(lVar32 + 0x20) != 0) {
              lVar32 = *(longlong *)(lVar32 + 0x20);
            }
            local_278 = (longlong)(int)uVar26 * 0x40;
            local_348 = (FObjectKey *)(*plVar1 + local_278);
            local_280 = (FMVVMViewClass_BindingKey *)(lVar32 + lVar21 * 4);
            iVar28 = *(int *)(lVar32 + lVar21 * 4);
            local_2f0.View.ObjectKey = *local_348;
            local_2f0.Binding.Index = iVar28;
            uVar13 = UE::MVVM::Private::GetTypeHash(&local_2f0);
            if (local_128._8_4_ != local_f4) {
              FVar23.Data = local_f0;
              if (local_e8.Data != (FScriptContainerElement *)0x0) {
                FVar23.Data = local_e8.Data;
              }
              iVar12 = *(int *)(FVar23.Data + (ulonglong)(local_e0 - 1 & uVar13) * 4);
              if (iVar12 != -1) {
                do {
                  pFVar5 = (FScriptContainerElement *)(local_128._0_8_ + (longlong)iVar12 * 0x14);
                  if (((*(int *)(local_128._0_8_ + (longlong)iVar12 * 0x14) ==
                        local_2f0.View.ObjectKey.ObjectIndex) &&
                      (*(int *)(pFVar5 + 4) == local_2f0.View.ObjectKey.ObjectSerialNumber)) &&
                     (*(int *)(pFVar5 + 8) == iVar28)) {
                    if ((iVar12 != -1) && (pFVar5 != (FScriptContainerElement *)0x0))
                    goto LAB_14a761322;
                    break;
                  }
                  iVar12 = *(int *)(pFVar5 + 0xc);
                } while (iVar12 != -1);
              }
            }
            if (local_350 == (UMVVMBindingSubsystem *)0x0) {
              uVar13 = local_348->ObjectSerialNumber;
              uVar24 = local_348->ObjectIndex - uVar13 ^ uVar13 >> 0xd;
              uVar20 = (-0x61c88647 - uVar24) - uVar13 ^ uVar24 << 8;
              uVar29 = (uVar13 - uVar20) - uVar24 ^ uVar20 >> 0xd;
              uVar24 = (uVar24 - uVar29) - uVar20 ^ uVar29 >> 0xc;
              uVar13 = (uVar20 - uVar29) - uVar24 ^ uVar24 << 0x10;
              uVar29 = (uVar29 - uVar13) - uVar24 ^ uVar13 >> 5;
              uVar20 = (uVar24 - uVar29) - uVar13 ^ uVar29 >> 3;
              uVar13 = (uVar13 - uVar20) - uVar29 ^ uVar20 << 10;
              uVar13 = (uVar29 - uVar13) - uVar20 ^ uVar13 >> 0xf;
              pTVar18 = TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                        ::FindByHash<TObjectKey<UMVVMView_const_>_>
                                  ((TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                                    *)local_d8,uVar13,(TObjectKey<UMVVMView_const_> *)local_348);
              if (pTVar18 ==
                  (TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                   *)0x0) {
                local_350 = (UMVVMBindingSubsystem *)
                            TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
                            ::EmplaceByHash<TObjectKey<UMVVMView_const_>_const_&>
                                      ((TMapBase<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                        *)local_d8,uVar13,(TObjectKey<UMVVMView_const_> *)local_348)
                ;
              }
              else {
                local_350 = (UMVVMBindingSubsystem *)&pTVar18->field_0x8;
              }
            }
            TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            ::AddUniqueImpl<FMVVMViewClass_BindingKey_const_&>
                      ((TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        *)local_350,local_280);
            lVar32 = local_278 + *plVar1;
            uVar13 = 0;
            if ((int)uVar27 < *(int *)(lVar32 + 0x30)) {
              uVar13 = uVar38;
            }
            if ((uVar13 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar36 = lVar32 + 8;
            if (*(longlong *)(lVar32 + 0x28) != 0) {
              lVar36 = *(longlong *)(lVar32 + 0x28);
            }
            iVar28 = *(int *)(lVar32 + 0x30) + ~uVar27;
            if (1 < iVar28) {
              iVar28 = 1;
            }
            if (iVar28 != 0) {
              memmove((void *)(lVar36 + lVar21 * 4),
                      (void *)(lVar36 + (longlong)(*(int *)(lVar32 + 0x30) - iVar28) * 4),
                      (longlong)iVar28 << 2);
            }
            *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + -1;
            UE::Core::Private::
            ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FMVVMViewClass_BindingKey>_>
                      (4,4,(ForElementType<FMVVMViewClass_BindingKey> *)(lVar32 + 8),
                       *(int *)(lVar32 + 0x30),(int *)(lVar32 + 0x34));
LAB_14a761322:
            if (*(int *)((longlong)(int)uVar26 * 0x40 + 0x30 + *plVar1) == 0) {
              TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_2a0,uVar26);
              local_290 = CONCAT11(local_290._1_1_,1);
            }
            lVar21 = lVar21 + -1;
            uVar27 = uVar27 - 1;
          } while (-1 < (int)uVar27);
        }
        uStack_2b0 = uStack_2b0 & ~auStack_2c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2c0);
        uVar22 = (ulonglong)uStack_2ac;
        uVar26 = uStack_2ac;
      } while ((int)uStack_2ac < *(int *)(auStack_2c0._8_8_ + 0x18));
      if (((char)local_290 != '\0') && (local_290._1_1_ != '\0')) {
        uVar26 = *(int *)&(local_298->Elements).field_0x8 -
                 *(int *)&(local_298->Elements).field_0x34;
        iVar28 = 1;
        if (3 < uVar26) {
          uVar22 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
          lVar21 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          local_1f0 = (undefined4)lVar21;
          iVar28 = 1 << ((byte)lVar21 & 0x1f);
        }
        if (((0 < (int)uVar26) && (local_298->HashSize < iVar28)) || (iVar28 < local_298->HashSize))
        {
          local_298->HashSize = iVar28;
          TSet<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_298);
        }
      }
    }
  } while (0 < local_d8._8_4_ - local_a4);
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UMVVMView_const_>,TArray<FMVVMViewClass_BindingKey,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  local_e0 = 0;
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  TSparseArray<TSparseSetElement<UE::MVVM::Private::FViewAndBinding>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::MVVM::Private::FViewAndBinding>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::MVVM::Private::FViewAndBinding>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128);
LAB_14a76143b:
  if ((local_2d8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2d8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2d8 & 4) != 0) {
    FThreadStats::AddMessage(local_2e0,CycleScopeEnd);
  }
  return;
}

// operator() @ 150553950

bool __thiscall `UMVVMBindingSubsystem::AddDelayedBinding'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4985797641506914158>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4985797641506914158>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553990

bool __thiscall
`UMVVMBindingSubsystem::AddViewWithTickBinding'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4985797641506914170>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4985797641506914170>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553b00

bool __thiscall
`UMVVMBindingSubsystem::RemoveDelayedBindings'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4985797641506914152>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4985797641506914152>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150553b40

bool __thiscall
`UMVVMBindingSubsystem::RemoveDelayedBindings'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4985797641506914146>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4985797641506914146>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

