// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 35

// `dynamic_initializer_for_'FForeignIdRepTestAutomationTestInstance'' @ 140f93950

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FForeignIdRepTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FForeignIdRepTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FForeignIdRepTestAutomationTestInstance,&local_18,false);
  FForeignIdRepTestAutomationTestInstance._0_8_ = &___7FForeignIdRepTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FForeignIdRepTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreOnline_Private_Online_CoreOnlinePrivate_h__Script_CoreOnline_741426570'' @ 140f939b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreOnline_Private_Online_CoreOnlinePrivate_h__Script_CoreOnline_741426570__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreOnline",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreOnline_Private_Online_CoreOnlinePrivate_h__Script_CoreOnline_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_CoreOnline'' @ 140f93a00

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_CoreOnline__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xa23b3a0f;
  local_res8[0].DeclarationsHash = 0xf7defe25;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_CoreOnline,L"/Script/CoreOnline",
             &Z_Registration_Info_UPackage__Script_CoreOnline,local_res8);
  return;
}

// NewProp_bPublicSearchable_SetBit @ 1446109c0

void __cdecl
Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bAllowInvites_SetBit @ 1446109d0

void __cdecl
Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewProp_bJoinViaPresence_SetBit @ 1446109e0

void __cdecl
Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewProp_bJoinViaPresenceFriendsOnly_SetBit @ 1446109f0

void __cdecl
Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb) = 1;
  return;
}

// ECoreOnlineDummy_StaticEnum @ 144610a00

UEnum * __cdecl ECoreOnlineDummy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECoreOnlineDummy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreOnline();
    Z_Registration_Info_UEnum_ECoreOnlineDummy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy,(UObject *)pUVar1,
                       L"ECoreOnlineDummy");
  }
  return Z_Registration_Info_UEnum_ECoreOnlineDummy.OuterSingleton;
}

// `scalar_deleting_destructor' @ 144610f60

void * __thiscall
FForeignIdRepTest::_scalar_deleting_destructor_(FForeignIdRepTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UPackage__Script_CoreOnline @ 144610fa0

UPackage * __cdecl Z_Construct_UPackage__Script_CoreOnline(void)

{
  if (Z_Registration_Info_UPackage__Script_CoreOnline.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_CoreOnline.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_CoreOnline.OuterSingleton;
}

// DestructItems<TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1>,int> @ 1446124c0

void __cdecl
DestructItems<TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1>,int>
          (TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1>,int> @ 144612500

void __cdecl
DestructItems<TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1>,int>
          (TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,int> @ 144612540

void __cdecl
DestructItems<TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,int>
          (TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>
           *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    bVar1 = param_1->TypeIndex;
    if ((5 < (ulonglong)bVar1) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) break;
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar1])(param_1);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// MakeShared<FJsonSerializerPolicy_NestedVariant::StackState,1> @ 144613310

TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> * __cdecl
MakeShared<FJsonSerializerPolicy_NestedVariant::StackState,1>
          (TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *pTVar4;
  
  pTVar3 = operator_new(0x48);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (StackState *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UStackState_FJsonSerializerPolicy_NestedVariant___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    __return_storage_ptr__->Object = (StackState *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((StackState *)(pTVar3 + 1) == (StackState *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FJsonSerializerPolicy_NestedVariant::StackState,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// StaticEnum<enum_ECoreOnlineDummy> @ 144615130

UEnum * __cdecl StaticEnum<enum_ECoreOnlineDummy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ECoreOnlineDummy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreOnline();
    Z_Registration_Info_UEnum_ECoreOnlineDummy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy,(UObject *)pUVar1,
                       L"ECoreOnlineDummy");
  }
  return Z_Registration_Info_UEnum_ECoreOnlineDummy.OuterSingleton;
}

// `scalar_deleting_destructor' @ 144616350

void * __thiscall
UE::Online::FOnlineIdRegistryRegistry::
FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>::_scalar_deleting_destructor_
          (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *this,uint param_1
          )

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144616380

void * __thiscall
UE::Online::FOnlineIdRegistryRegistry::
FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>::_scalar_deleting_destructor_
          (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *this,uint param_1
          )

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446163b0

void * __thiscall
UE::Online::FOnlineIdRegistryRegistry::
FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>::
_scalar_deleting_destructor_
          (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446163e0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FJsonSerializerPolicy_NestedVariant::FElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FJsonSerializerPolicy_NestedVariant::FElement,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144616420

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FJsonSerializerPolicy_NestedVariant::StackState,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FJsonSerializerPolicy_NestedVariant::StackState,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 144616460

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TNestedVariantArray<FString,bool,__int64,double,FString>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TNestedVariantArray<FString,bool,__int64,double,FString>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1446164a0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TNestedVariantMap<FString,bool,__int64,double,FString>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TNestedVariantMap<FString,bool,__int64,double,FString>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeCoreOnline @ 144616be0

void __cdecl EmptyLinkFunctionForGeneratedCodeCoreOnline(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCoreOnlinePrivate @ 144616bf0

void __cdecl EmptyLinkFunctionForGeneratedCodeCoreOnlinePrivate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCoreOnline_init @ 144616c00

void __cdecl EmptyLinkFunctionForGeneratedCodeCoreOnline_init(void)

{
  return;
}

// LexFromString @ 144617450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
LexFromString(TNestedVariantMap<FString,bool,__int64,double,FString> *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar7;
  TNestedVariantMap<FString,bool,__int64,double,FString> *pTVar8;
  undefined1 auStack_f8 [32];
  TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1> local_d8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar6 = operator_new(0x70);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    local_d8.Object = ___xmm_00000000000000000000000000000010;
    local_d8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pTVar8 = (TNestedVariantMap<FString,bool,__int64,double,FString> *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8 = (TNestedVariantMap<FString,bool,__int64,double,FString> *)(pTVar6 + 1);
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TNestedVariantMap_VFString___N_JNV1____00_SharedPointerInternals__6B_
    ;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[4]._padding_ + 4) = 0;
    pTVar6[5]._padding_ = 0;
    pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[6].WeakReferenceCount = (atomic<int>)0x0;
    local_d8.Object = pTVar8;
    local_d8.SharedReferenceCount.ReferenceController = pTVar6;
    if (pTVar8 == (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_144617594;
    }
  }
  if (((*(longlong *)&pTVar8->field_0x50 == 0) || (*(longlong *)&pTVar8->field_0x58 == 0)) ||
     (*(int *)(*(longlong *)&pTVar8->field_0x58 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TNestedVariantMap<FString,bool,__int64,double,FString> **)&pTVar8->field_0x50 = pTVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pTVar8->field_0x58) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pTVar8->field_0x58;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar8->field_0x58 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_144617594:
  pTVar7 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
           TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                     (&local_c8,param_2);
  NestedVariantFromJson(pTVar7->Ptr,&local_d8);
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
               *)param_1,
              (TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
               *)local_d8.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  return;
}

// NestedVariantFromJson @ 144617ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
NestedVariantFromJson
          (char *param_1,
          TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  TJsonStringReader<wchar_t> *pTVar5;
  TJsonStringReader<wchar_t> *pTVar6;
  FSharedReferencer<1> FVar7;
  uint uVar8;
  undefined1 auStack_1d8 [32];
  FString local_1b8;
  StackState local_1a8;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_170;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  sVar4 = strlen(param_1);
  if (sVar4 == 0) {
    return;
  }
  pTVar6 = (TJsonStringReader<wchar_t> *)0x0;
  local_58.Data = (FScriptContainerElement *)0x0;
  sVar4 = strlen(param_1);
  local_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)param_1,(int)sVar4);
  uVar1 = local_48 + 1;
  uVar8 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar8 = 0;
      goto LAB_14461808f;
    }
  }
  else {
LAB_14461808f:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar8,2);
  }
  local_50 = local_158;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)param_1,(int)sVar4 + 1);
  FString::FString(&local_1b8,(wchar_t *)local_50);
  pTVar5 = operator_new(0x88);
  local_170.Object = pTVar6;
  if (pTVar5 != (TJsonStringReader<wchar_t> *)0x0) {
    pTVar5->_padding_ = 0;
    pTVar5->_padding_ = 0;
    *(undefined4 *)&pTVar5->_padding_ = 0;
    pTVar5->_padding_ = 0;
    pTVar5->_padding_ = 0;
    pTVar5->_padding_ = 0;
    pTVar5->_padding_ = 0;
    pTVar5->_padding_ = 0;
    pTVar5->_padding_ = 0;
    pTVar5->_padding_ = 0;
    pTVar5->_padding_ = 0;
    pTVar5->_padding_ = 1;
    *(undefined2 *)&pTVar5->_padding_ = 0;
    pTVar5->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
    (pTVar5->Content).Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar5->Content).Data.ArrayNum = local_1b8.Data.ArrayNum;
    (pTVar5->Content).Data.ArrayMax = local_1b8.Data.ArrayMax;
    local_1b8.Data.ArrayNum = 0;
    local_1b8.Data.ArrayMax = 0;
    (pTVar5->Reader).Ptr = (FBufferReader *)0x0;
    TJsonStringReader<wchar_t>::InitReader(pTVar5);
    local_170.Object = pTVar5;
  }
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&local_168,&local_170);
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  local_1a8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Identifier.Data.ArrayNum = 0;
  local_1a8.Identifier.Data.ArrayMax = 0;
  local_1a8.Array.Object = (TNestedVariantArray<FString,bool,__int64,double,FString> *)0x0;
  local_1a8.Array.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1a8.Object.Object = (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0;
  local_1a8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar3 = TJsonSerializer<FJsonSerializerPolicy_NestedVariant>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)local_168.Object,&local_1a8,None);
  FVar7.ReferenceController = local_1a8.Object.SharedReferenceCount.ReferenceController;
  pTVar5 = (TJsonStringReader<wchar_t> *)local_1a8.Object.Object;
  if (bVar3) {
    if (local_1a8.Type == Object) {
      if ((TJsonStringReader<wchar_t> *)local_1a8.Object.SharedReferenceCount.ReferenceController !=
          (TJsonStringReader<wchar_t> *)0x0) {
        LOCK();
        (local_1a8.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1a8.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar3 = true;
    }
    else {
      bVar3 = false;
      pTVar5 = pTVar6;
      FVar7.ReferenceController = (TReferenceControllerBase<1> *)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.Object.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.Array.SharedReferenceCount.ReferenceController);
    if (local_1a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Identifier.Data.AllocatorInstance.Data);
    }
    if (bVar3) goto LAB_14461827e;
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.Object.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.Array.SharedReferenceCount.ReferenceController);
    pTVar5 = pTVar6;
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)pTVar6;
    if (local_1a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Identifier.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = FDebug::CheckVerifyFailedImpl2
                    ("FJsonSerializerNestedVariant::Deserialize(Reader, MapPtr)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\NestedVariantJson.cpp"
                     ,0x2f,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14461827e:
  if (pTVar5 != (TJsonStringReader<wchar_t> *)0x0) {
    TMap<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>_>
    ::Append<FDefaultSetAllocator>
              ((TMap<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>_>
                *)param_2->Object,
               (TMap<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>_>
                *)pTVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  return;
}

// NestedVariantFromJsonObject @ 1446182e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
NestedVariantFromJsonObject
          (TSharedPtr<FJsonObject,1> *param_1,
          TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  ForAnyElementType FVar7;
  undefined1 auStack_138 [32];
  FString local_118;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_108;
  TSharedPtr<FJsonObject,1> local_f8;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_e8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create(&local_e8,&local_118,0);
  pTVar3 = operator_new(0x38);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    local_108.Object = ___xmm_00000000000000000000000000000010;
    local_108.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4 = operator_new(0x30);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar3[2]._padding_ = 0x10;
      pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      local_f8.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      local_f8.Object = param_1->Object;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar4 + 1),&local_f8);
      if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pTVar3[2]._padding_ = (longlong)(pTVar4 + 1);
      *(TReferenceControllerBase<1> **)&pTVar3[2].SharedReferenceCount = pTVar4;
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      pTVar6 = pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    local_108.Object = (FElement *)(pTVar3 + 1);
    *(undefined2 *)&pTVar3[3]._padding_ = 0;
    local_108.SharedReferenceCount.ReferenceController = pTVar3;
    if (local_108.Object == (FElement *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  bVar2 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_108,local_e8.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("FJsonSerializer::Serialize(JsonObject, Writer)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\NestedVariantJson.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar7.Data = local_118.Data.AllocatorInstance.Data;
  }
  pTVar5 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
           TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                     (&local_d8,(wchar_t *)FVar7.Data);
  NestedVariantFromJson(pTVar5->Ptr,param_2);
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

// NestedVariantToJson @ 144618560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __cdecl
NestedVariantToJson(FString *__return_storage_ptr__,
                   TSharedPtr<TNestedVariantMap<FString,bool,__int64,double,FString>,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> local_28;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1->Object != (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) {
    TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create
              (&local_18,__return_storage_ptr__,0);
    local_28.SharedReferenceCount.ReferenceController = operator_new(0x40);
    if (local_28.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_28.Object = ___xmm_00000000000000000000000000000010;
      local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_28.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_28.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_NestedVariant___00_SharedPointerInternals__6B_
      ;
      FJsonSerializerPolicy_NestedVariant::FElement::FElement
                ((FElement *)(local_28.SharedReferenceCount.ReferenceController + 1),param_1);
      local_28.Object = (FElement *)(local_28.SharedReferenceCount.ReferenceController + 1);
      if (local_28.Object == (FElement *)0x0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FString *)(*pcVar1)();
          return pFVar3;
        }
      }
    }
    bVar2 = TJsonSerializer<FJsonSerializerPolicy_NestedVariant>::
            Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_28,local_18.Object,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (!bVar2) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("FJsonSerializerNestedVariant::Serialize(Map, Writer)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\NestedVariantJson.cpp"
                         ,0x17,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// NestedVariantToJsonObject @ 144618690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<FJsonObject,1> * __cdecl
NestedVariantToJsonObject
          (TSharedRef<FJsonObject,1> *__return_storage_ptr__,
          TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1> *param_1)

{
  FString *pFVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  TSharedRef<FJsonObject,1> *pTVar5;
  TJsonStringReader<wchar_t> *this;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  TRawPtrProxy<TJsonStringReader<wchar_t>_> local_res8;
  TSharedPtr<FJsonObject,1> local_c8;
  FString local_b8;
  StackState local_a8;
  TSharedRef<FJsonSerializerPolicy_NestedVariant::FElement,1> local_70;
  TSharedPtr<TNestedVariantMap<FString,bool,__int64,double,FString>,1> local_60;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_50;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_40;
  
  local_60.Object = param_1->Object;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  local_60.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  if (local_60.Object != (TNestedVariantMap<FString,bool,__int64,double,FString> *)0x0) {
    TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create(&local_50,&local_b8,0);
    local_70.SharedReferenceCount.ReferenceController = operator_new(0x40);
    if (local_70.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_70.Object = ___xmm_00000000000000000000000000000010;
      local_70.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_70.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_70.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_NestedVariant___00_SharedPointerInternals__6B_
      ;
      FJsonSerializerPolicy_NestedVariant::FElement::FElement
                ((FElement *)(local_70.SharedReferenceCount.ReferenceController + 1),&local_60);
      local_70.Object = (FElement *)(local_70.SharedReferenceCount.ReferenceController + 1);
      if ((local_70.Object == (FElement *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TSharedRef<FJsonObject,1> *)(*pcVar3)();
        return pTVar5;
      }
    }
    bVar4 = TJsonSerializer<FJsonSerializerPolicy_NestedVariant>::
            Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_70,local_50.Object,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    if ((!bVar4) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("FJsonSerializerNestedVariant::Serialize(Map, Writer)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\NestedVariantJson.cpp"
                           ,0x17,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<FJsonObject,1> *)(*pcVar3)();
      return pTVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  this = operator_new(0x88);
  _Src.Data = local_b8.Data.AllocatorInstance.Data;
  if (this == (TJsonStringReader<wchar_t> *)0x0) {
    this = (TJsonStringReader<wchar_t> *)0x0;
  }
  else {
    this->_padding_ = 0;
    pFVar1 = &this->Content;
    this->_padding_ = 0;
    *(undefined4 *)&this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 1;
    *(undefined2 *)&this->_padding_ = 0;
    this->_padding_ = (longlong)&___7__TJsonStringReader__W__6B_;
    piVar2 = &(this->Content).Data.ArrayMax;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar7 = (longlong)local_b8.Data.ArrayNum;
    (this->Content).Data.ArrayNum = local_b8.Data.ArrayNum;
    if (local_b8.Data.ArrayNum == 0) {
      *piVar2 = 0;
      (this->Reader).Ptr = (FBufferReader *)0x0;
      TJsonStringReader<wchar_t>::InitReader(this);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_b8.Data.ArrayNum,
                 piVar2);
      memcpy((pFVar1->Data).AllocatorInstance.Data,_Src.Data,lVar7 * 2);
      (this->Reader).Ptr = (FBufferReader *)0x0;
      TJsonStringReader<wchar_t>::InitReader(this);
    }
  }
  local_res8.Object = this;
  TSharedRef<TJsonStringReader<wchar_t>,1>::
  TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>(&local_40,&local_res8);
  if (local_40.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_40.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  local_c8.SharedReferenceCount.ReferenceController = operator_new(0x60);
  if (local_c8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_c8.Object = (FJsonObject *)___xmm_00000000000000000000000000000010;
    local_c8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_c8.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_c8.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
    local_c8.SharedReferenceCount.ReferenceController[2]._padding_ = 0;
    local_c8.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    local_c8.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    local_c8.SharedReferenceCount.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
    local_c8.SharedReferenceCount.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
    local_c8.SharedReferenceCount.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
    local_c8.SharedReferenceCount.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
    local_c8.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    local_c8.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    local_c8.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    local_c8.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    local_c8.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    local_c8.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&local_c8.SharedReferenceCount.ReferenceController[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&local_c8.SharedReferenceCount.ReferenceController[4]._padding_ + 4) =
         0;
    local_c8.SharedReferenceCount.ReferenceController[5]._padding_ = 0;
    if (((FElement *)(local_c8.SharedReferenceCount.ReferenceController + 1) == (FElement *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<FJsonObject,1> *)(*pcVar3)();
      return pTVar5;
    }
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = local_c8.SharedReferenceCount.ReferenceController;
    local_c8.Object = (FJsonObject *)(local_c8.SharedReferenceCount.ReferenceController + 1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  local_a8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Identifier.Data.ArrayNum = 0;
  local_a8.Identifier.Data.ArrayMax = 0;
  local_a8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Array.ArrayNum = 0;
  local_a8.Array.ArrayMax = 0;
  local_a8.Object.Object = (FJsonObject *)0x0;
  local_a8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)local_40.Object,&local_a8,None);
  if (bVar4) {
    bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_a8,&local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data,
               local_a8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a8.Array.AllocatorInstance.Data);
    }
    if (local_a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Identifier.Data.AllocatorInstance.Data);
    }
    if (bVar4) goto LAB_144618a72;
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data,
               local_a8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_a8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_a8.Array.AllocatorInstance.Data);
    }
    if (local_a8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Identifier.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = FDebug::CheckVerifyFailedImpl2
                    ("FJsonSerializer::Deserialize(Reader, JsonObject)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Private\\Online\\NestedVariantJson.cpp"
                     ,0x21,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonObject,1> *)(*pcVar3)();
    return pTVar5;
  }
LAB_144618a72:
  if (((FElement *)local_c8.Object == (FElement *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonObject,1> *)(*pcVar3)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = local_c8.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_c8.SharedReferenceCount.ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (FJsonObject *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonObject,1> *)(*pcVar3)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy @ 14461c170

UEnum * __cdecl Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy(void)

{
  if (Z_Registration_Info_UEnum_ECoreOnlineDummy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ECoreOnlineDummy.InnerSingleton,
               &Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ECoreOnlineDummy.InnerSingleton;
}

// Z_Construct_UScriptStruct_FJoinabilitySettings @ 14461c1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FJoinabilitySettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUniqueNetIdWrapper @ 14461c230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUniqueNetIdWrapper(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// `dynamic_atexit_destructor_for_'FForeignIdRepTestAutomationTestInstance'' @ 15036e440

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FForeignIdRepTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FForeignIdRepTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15036e460

void __cdecl
`TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  if (DAT_1550810a8 != (FOnlineIdRegistryRegistry *)0x0) {
    UE::Online::FOnlineIdRegistryRegistry::~FOnlineIdRegistryRegistry(DAT_1550810a8);
    DAT_1550810a8 = (FOnlineIdRegistryRegistry *)0x0;
  }
  return;
}

