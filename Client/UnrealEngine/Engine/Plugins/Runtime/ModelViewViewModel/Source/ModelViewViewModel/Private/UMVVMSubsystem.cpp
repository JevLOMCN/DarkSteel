// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 31

// StaticClass @ 14a73a250

UClass * __cdecl UMVVMSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMSubsystem",
               &Z_Registration_Info_UClass_UMVVMSubsystem.InnerSingleton,
               StaticRegisterNativesUMVVMSubsystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMSubsystem>,InternalVTableHelperCtorCaller<UMVVMSubsystem>,
               local_res8,UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMSubsystem.InnerSingleton;
}

// UMVVMSubsystem @ 14a73fc30

UMVVMSubsystem * __thiscall
UMVVMSubsystem::UMVVMSubsystem(UMVVMSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  *(undefined ***)this = &___7UMVVMSubsystem__6B_;
  return this;
}

// UMVVMSubsystem @ 14a73fc60

UMVVMSubsystem * __thiscall UMVVMSubsystem::UMVVMSubsystem(UMVVMSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  *(undefined ***)this = &___7UMVVMSubsystem__6B_;
  return this;
}

// ~UMVVMSubsystem @ 14a7407a0

void __thiscall UMVVMSubsystem::~UMVVMSubsystem(UMVVMSubsystem *this)

{
  *(undefined ***)this = &___7UMVVMSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// Deinitialize @ 14a7468a0

void __thiscall UMVVMSubsystem::Deinitialize(UMVVMSubsystem *this)

{
  return;
}

// DoesWidgetTreeContainedWidget @ 14a7470f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMVVMSubsystem::DoesWidgetTreeContainedWidget
          (UMVVMSubsystem *this,UWidgetTree *param_1,UWidget *param_2)

{
  ForAnyElementType FVar1;
  bool bVar2;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1 == (UWidgetTree *)0x0) || (param_2 == (UWidget *)0x0)) {
    return false;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  UWidgetTree::GetAllWidgets(param_1,&local_18);
  FVar1.Data = local_18.AllocatorInstance.Data;
  do {
    if (FVar1.Data == local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8) {
      bVar2 = false;
LAB_14a747145:
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return bVar2;
    }
    if (*(UWidget **)FVar1.Data == param_2) {
      bVar2 = true;
      goto LAB_14a747145;
    }
    FVar1.Data = FVar1.Data + 8;
  } while( true );
}

// GetAvailableBinding @ 14a7504c0

FMVVMAvailableBinding * __cdecl
UMVVMSubsystem::GetAvailableBinding
          (FMVVMAvailableBinding *__return_storage_ptr__,UClass *param_1,FMVVMBindingName param_2,
          UClass *param_3)

{
  UE::MVVM::Private::GetAvailableBinding(__return_storage_ptr__,param_2,param_1,param_3,false);
  return __return_storage_ptr__;
}

// GetAvailableBindingForEvent @ 14a7504f0

FMVVMAvailableBinding * __cdecl
UMVVMSubsystem::GetAvailableBindingForEvent
          (FMVVMAvailableBinding *__return_storage_ptr__,UClass *param_1,FMVVMBindingName param_2,
          UClass *param_3)

{
  UE::MVVM::Private::GetAvailableBinding(__return_storage_ptr__,param_2,param_1,param_3,true);
  return __return_storage_ptr__;
}

// GetAvailableBindingForEvent @ 14a750520

FMVVMAvailableBinding * __cdecl
UMVVMSubsystem::GetAvailableBindingForEvent
          (FMVVMAvailableBinding *__return_storage_ptr__,FMVVMConstFieldVariant *param_1,
          UClass *param_2)

{
  FMVVMConstFieldVariant local_18;
  
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  UE::MVVM::Private::GetAvailableBinding(__return_storage_ptr__,&local_18,param_2,true);
  return __return_storage_ptr__;
}

// GetAvailableBindingForField @ 14a750550

FMVVMAvailableBinding * __cdecl
UMVVMSubsystem::GetAvailableBindingForField
          (FMVVMAvailableBinding *__return_storage_ptr__,FMVVMConstFieldVariant *param_1,
          UClass *param_2)

{
  FMVVMConstFieldVariant local_18;
  
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  UE::MVVM::Private::GetAvailableBinding(__return_storage_ptr__,&local_18,param_2,false);
  return __return_storage_ptr__;
}

// GetAvailableBindings @ 14a750d70

TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> * __cdecl
UMVVMSubsystem::GetAvailableBindings
          (TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UClass *param_1,UClass *param_2)

{
  UE::MVVM::Private::GetAvailableBindings(__return_storage_ptr__,param_1,param_2,false);
  return __return_storage_ptr__;
}

// GetAvailableBindingsForEvent @ 14a750d90

TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> * __cdecl
UMVVMSubsystem::GetAvailableBindingsForEvent
          (TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UClass *param_1,UClass *param_2)

{
  UE::MVVM::Private::GetAvailableBindings(__return_storage_ptr__,param_1,param_2,true);
  return __return_storage_ptr__;
}

// GetAvailableBindingsForStruct @ 14a750db0

TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> * __cdecl
UMVVMSubsystem::GetAvailableBindingsForStruct
          (TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UScriptStruct *param_1)

{
  UE::MVVM::Private::GetAvailableBindings
            (__return_storage_ptr__,(UStruct *)param_1,(UClass *)0x0,(IClassDescriptor *)0x0,false);
  return __return_storage_ptr__;
}

// GetGlobalViewModelCollection @ 14a751e50

UMVVMViewModelCollectionObject * __thiscall
UMVVMSubsystem::GetGlobalViewModelCollection(UMVVMSubsystem *this)

{
  return (UMVVMViewModelCollectionObject *)0x0;
}

// GetPrivateStaticClass @ 14a753b30

UClass * __cdecl UMVVMSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMSubsystem",
               &Z_Registration_Info_UClass_UMVVMSubsystem.InnerSingleton,
               StaticRegisterNativesUMVVMSubsystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMVVMSubsystem>,InternalVTableHelperCtorCaller<UMVVMSubsystem>,
               local_res8,UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMSubsystem.InnerSingleton;
}

// GetViewFromUserWidget @ 14a754af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMVVMView * __cdecl UMVVMSubsystem::GetViewFromUserWidget(UUserWidget *param_1)

{
  int iVar1;
  UMVVMView *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *pUStackX_10;
  FString FStack_28;
  FString FStack_18;
  
  if (param_1 == (UUserWidget *)0x0) {
    return (UMVVMView *)0x0;
  }
  pUStackX_10 = UMVVMView::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStackX_10);
  }
  pUVar2 = (UMVVMView *)
           UUserWidget::GetExtension(param_1,(TSubclassOf<UUserWidgetExtension>)&pUStackX_10);
  if (pUVar2 == (UMVVMView *)0x0) {
    pUVar2 = (UMVVMView *)0x0;
  }
  else {
    pUVar3 = UMVVMView::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UMVVMView>(&FStack_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UUserWidgetExtension>
                         (&FStack_18,(UUserWidgetExtension *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// Initialize @ 14a755a60

void __thiscall UMVVMSubsystem::Initialize(UMVVMSubsystem *this,FSubsystemCollectionBase *param_1)

{
  return;
}

// IsBindingValid @ 14a757a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<bool,FText> * __thiscall
UMVVMSubsystem::IsBindingValid
          (UMVVMSubsystem *this,TValueOrError<bool,FText> *__return_storage_ptr__,
          FBindingArgs *param_1)

{
  FMVVMFieldVariant *pFVar1;
  code *pcVar2;
  uchar uVar3;
  char cVar4;
  bool bVar5;
  TValueOrError<bool,FText> *pTVar6;
  ulonglong uVar7;
  undefined1 auStack_1e8 [32];
  FMVVMConstFieldVariant local_1c8;
  FMVVMConstFieldVariant local_1b8;
  FMVVMConstFieldVariant local_1a8;
  FMVVMConstFieldVariant local_198;
  FMVVMConstFieldVariant local_188;
  FMVVMConstFieldVariant local_178;
  UFunction *local_168;
  FMVVMConstFieldVariant local_160;
  FMVVMConstFieldVariant local_150;
  UFunction *local_140;
  FMVVMConstFieldVariant local_138;
  undefined1 local_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined1 uStack_122;
  undefined1 uStack_121;
  char cStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  UFunction *local_118;
  FConstDirectionalBindingArgs local_108;
  FMVVMConstFieldVariant local_d8;
  undefined1 local_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  char cStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  UFunction *local_b8;
  FConstDirectionalBindingArgs local_a8;
  TValueOrError<bool,FText> local_78;
  TValueOrError<bool,FText> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (param_1->Mode < OneTimeToSource) {
    local_168 = (param_1->ForwardArgs).ConversionFunction;
    local_138._0_8_ = *(undefined8 *)&(param_1->ForwardArgs).SourceBinding;
    local_138._8_8_ = *(undefined8 *)&(param_1->ForwardArgs).SourceBinding.field_0x8;
    local_1c8._0_8_ = 0;
    local_1c8._8_1_ = '\0';
    pFVar1 = &(param_1->ForwardArgs).DestinationBinding;
    local_128 = *(undefined1 *)pFVar1;
    uStack_127 = (param_1->ForwardArgs).DestinationBinding.field_0x1;
    uStack_126 = (param_1->ForwardArgs).DestinationBinding.field_0x2;
    uStack_125 = (param_1->ForwardArgs).DestinationBinding.field_0x3;
    uStack_124 = (param_1->ForwardArgs).DestinationBinding.field_0x4;
    uStack_123 = (param_1->ForwardArgs).DestinationBinding.field_0x5;
    uStack_122 = (param_1->ForwardArgs).DestinationBinding.field_0x6;
    uStack_121 = (param_1->ForwardArgs).DestinationBinding.field_0x7;
    cStack_120 = (param_1->ForwardArgs).DestinationBinding.field_0x8;
    uStack_11f = (param_1->ForwardArgs).DestinationBinding.field_0x9;
    uStack_11e = (param_1->ForwardArgs).DestinationBinding.field_0xa;
    uStack_11d = (param_1->ForwardArgs).DestinationBinding.field_0xb;
    uStack_11c = (param_1->ForwardArgs).DestinationBinding.field_0xc;
    uStack_11b = (param_1->ForwardArgs).DestinationBinding.field_0xd;
    uStack_11a = (param_1->ForwardArgs).DestinationBinding.field_0xe;
    uStack_119 = (param_1->ForwardArgs).DestinationBinding.field_0xf;
    cVar4 = (char)*(undefined4 *)&(param_1->ForwardArgs).SourceBinding.field_0x8;
    if ((cVar4 == '\x02') || (cVar4 == '\x01')) {
      local_1c8._0_8_ = local_138._0_8_;
      local_1c8._8_1_ = cVar4;
    }
    local_188._9_7_ = local_1c8._9_7_;
    local_188._8_1_ = local_1c8._8_1_;
    local_1b8._0_8_ = 0;
    local_1b8._8_1_ = '\0';
    local_188._0_8_ = local_1c8._0_8_;
    if ((cStack_120 == '\x02') || (cStack_120 == '\x01')) {
      local_1b8._0_8_ = *(undefined8 *)pFVar1;
      local_1b8._8_1_ = cStack_120;
    }
    local_178._9_7_ = local_1b8._9_7_;
    local_178._8_1_ = local_1b8._8_1_;
    local_178._0_8_ = local_1b8._0_8_;
    local_108.DestinationBinding._0_8_ = local_1b8._0_8_;
    local_108.SourceBinding._0_8_ = local_1c8._0_8_;
    local_118 = local_168;
    local_108.SourceBinding._8_8_ = local_188._8_8_;
    local_108.DestinationBinding._8_8_ = local_178._8_8_;
    local_108.ConversionFunction = local_168;
    IsBindingValid(this,&local_78,&local_108);
    uVar7 = (ulonglong)local_78.Variant.TypeIndex;
    if ((2 < uVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TValueOrError<bool,FText> *)(*pcVar2)();
      return pTVar6;
    }
    uVar3 = local_78.Variant.TypeIndex;
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,FText>::FWrapErrorType,TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FWrapErrorType,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar7 + 4) != '\0') {
      (__return_storage_ptr__->Variant).TypeIndex = local_78.Variant.TypeIndex;
      if ((2 < local_78.Variant.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x105,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TValueOrError<bool,FText> *)(*pcVar2)();
        return pTVar6;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<bool,TValueOrError<bool,FText>::FWrapErrorType,TValueOrError<bool,class_FText>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar3])(__return_storage_ptr__,&local_78);
      if ((2 < local_78.Variant.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TValueOrError<bool,FText> *)(*pcVar2)();
        return pTVar6;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TValueOrError<bool,FText>::FWrapErrorType,TValueOrError<bool,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_78.Variant.TypeIndex])(&local_78);
      return __return_storage_ptr__;
    }
    if ((2 < local_78.Variant.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TValueOrError<bool,FText> *)(*pcVar2)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TValueOrError<bool,FText>::FWrapErrorType,TValueOrError<bool,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_78.Variant.TypeIndex])(&local_78);
  }
  if (OneWayToDestination < param_1->Mode) {
    local_140 = (param_1->BackwardArgs).ConversionFunction;
    local_d8._0_8_ = *(undefined8 *)&(param_1->BackwardArgs).SourceBinding;
    local_d8._8_8_ = *(undefined8 *)&(param_1->BackwardArgs).SourceBinding.field_0x8;
    local_1a8._0_8_ = 0;
    local_1a8._8_1_ = '\0';
    pFVar1 = &(param_1->BackwardArgs).DestinationBinding;
    local_c8 = *(undefined1 *)pFVar1;
    uStack_c7 = (param_1->BackwardArgs).DestinationBinding.field_0x1;
    uStack_c6 = (param_1->BackwardArgs).DestinationBinding.field_0x2;
    uStack_c5 = (param_1->BackwardArgs).DestinationBinding.field_0x3;
    uStack_c4 = (param_1->BackwardArgs).DestinationBinding.field_0x4;
    uStack_c3 = (param_1->BackwardArgs).DestinationBinding.field_0x5;
    uStack_c2 = (param_1->BackwardArgs).DestinationBinding.field_0x6;
    uStack_c1 = (param_1->BackwardArgs).DestinationBinding.field_0x7;
    cStack_c0 = (param_1->BackwardArgs).DestinationBinding.field_0x8;
    uStack_bf = (param_1->BackwardArgs).DestinationBinding.field_0x9;
    uStack_be = (param_1->BackwardArgs).DestinationBinding.field_0xa;
    uStack_bd = (param_1->BackwardArgs).DestinationBinding.field_0xb;
    uStack_bc = (param_1->BackwardArgs).DestinationBinding.field_0xc;
    uStack_bb = (param_1->BackwardArgs).DestinationBinding.field_0xd;
    uStack_ba = (param_1->BackwardArgs).DestinationBinding.field_0xe;
    uStack_b9 = (param_1->BackwardArgs).DestinationBinding.field_0xf;
    cVar4 = (char)*(undefined4 *)&(param_1->BackwardArgs).SourceBinding.field_0x8;
    if ((cVar4 == '\x02') || (cVar4 == '\x01')) {
      local_1a8._0_8_ = local_d8._0_8_;
      local_1a8._8_1_ = cVar4;
    }
    local_160._9_7_ = local_1a8._9_7_;
    local_160._8_1_ = local_1a8._8_1_;
    local_198._0_8_ = 0;
    local_198._8_1_ = '\0';
    local_160._0_8_ = local_1a8._0_8_;
    if ((cStack_c0 == '\x02') || (cStack_c0 == '\x01')) {
      local_198._0_8_ = *(undefined8 *)pFVar1;
      local_198._8_1_ = cStack_c0;
    }
    local_150._9_7_ = local_198._9_7_;
    local_150._8_1_ = local_198._8_1_;
    local_150._0_8_ = local_198._0_8_;
    local_a8.DestinationBinding._0_8_ = local_198._0_8_;
    local_a8.SourceBinding._0_8_ = local_1a8._0_8_;
    local_b8 = local_140;
    local_a8.SourceBinding._8_8_ = local_160._8_8_;
    local_a8.DestinationBinding._8_8_ = local_150._8_8_;
    local_a8.ConversionFunction = local_140;
    IsBindingValid(this,&local_60,&local_a8);
    uVar7 = (ulonglong)local_60.Variant.TypeIndex;
    if ((2 < uVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TValueOrError<bool,FText> *)(*pcVar2)();
      return pTVar6;
    }
    uVar3 = local_60.Variant.TypeIndex;
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,FText>::FWrapErrorType,TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FWrapErrorType,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar7 + 4) != '\0') {
      (__return_storage_ptr__->Variant).TypeIndex = local_60.Variant.TypeIndex;
      if ((2 < local_60.Variant.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x105,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TValueOrError<bool,FText> *)(*pcVar2)();
        return pTVar6;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<bool,TValueOrError<bool,FText>::FWrapErrorType,TValueOrError<bool,class_FText>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar3])(__return_storage_ptr__,&local_60);
      if ((2 < local_60.Variant.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TValueOrError<bool,FText> *)(*pcVar2)();
        return pTVar6;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TValueOrError<bool,FText>::FWrapErrorType,TValueOrError<bool,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
      return __return_storage_ptr__;
    }
    if ((2 < local_60.Variant.TypeIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TValueOrError<bool,FText> *)(*pcVar2)();
      return pTVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TValueOrError<bool,FText>::FWrapErrorType,TValueOrError<bool,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// IsBindingValid @ 14a757eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TValueOrError<bool,FText> * __thiscall
UMVVMSubsystem::IsBindingValid
          (UMVVMSubsystem *this,TValueOrError<bool,FText> *__return_storage_ptr__,
          FConstDirectionalBindingArgs *param_1)

{
  char cVar1;
  EFunctionFlags EVar2;
  UFunction *pUVar3;
  ITextData IVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FProperty *pFVar12;
  FProperty *pFVar13;
  TValueOrError<bool,FText> *pTVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  FString *pFVar18;
  FText *pFVar19;
  FText *pFVar20;
  FText *pFVar21;
  int iVar22;
  ulonglong uVar23;
  ITextData *pIVar24;
  ITextData *pIVar25;
  undefined1 auStackY_498 [32];
  undefined1 local_447;
  undefined1 local_446 [6];
  TArray<FText,TSizedDefaultAllocator<32>_> local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  wchar_t *local_3e0;
  undefined8 local_3d8;
  wchar_t *local_3d0;
  undefined8 local_3c8;
  wchar_t *local_3c0;
  undefined8 local_3b8;
  wchar_t *local_3b0;
  undefined8 local_3a8;
  wchar_t *local_3a0;
  undefined8 local_398;
  FString local_390;
  FString local_380;
  FString local_370;
  FText local_360;
  FString local_350;
  FString local_340;
  FName local_330;
  FText *local_328;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FText local_2e0;
  FText local_2d0;
  FText local_2c0;
  FText local_2b0;
  FString local_2a0;
  FText local_288;
  FText local_278;
  FText local_268;
  FText local_258;
  FText local_248;
  FText local_238;
  FText local_228;
  void *local_218 [2];
  FText local_208;
  FText local_1f8;
  FText local_1e8;
  FText local_1d8;
  FText local_1c8;
  FText local_1b8;
  FText local_1a8;
  FText local_198;
  FTextFormat local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FTextFormat local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FTextFormat local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FTextFormat local_b8;
  TValueOrError<TArray<FProperty_const_*,TSizedDefaultAllocator<32>_>,FText> local_a8;
  TValueOrError<FProperty_const_*,FText> local_90;
  TValueOrError<FProperty_const_*,FText> local_78;
  TValueOrError<FProperty_const_*,FText> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
  pUVar3 = param_1->ConversionFunction;
  local_328 = (FText *)__return_storage_ptr__;
  if (((((pUVar3 == (UFunction *)0x0) ||
        (EVar2 = pUVar3->FunctionFlags, (EVar2 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) != FUNC_None
        )) || ((EVar2 >> 0x1a & 1) == 0)) ||
      (((EVar2 >> 0xd & 1) == 0 &&
       ((EVar2 & (FUNC_Const|FUNC_BlueprintPure)) != (FUNC_Const|FUNC_BlueprintPure))))) ||
     (2 < pUVar3->NumParms)) {
LAB_14a757f45:
    bVar9 = false;
    if (pUVar3 != (UFunction *)0x0) goto LAB_14a757f4f;
LAB_14a757f9f:
    bVar6 = false;
  }
  else {
    pFVar12 = UE::MVVM::BindingHelper::GetReturnProperty(pUVar3);
    pFVar13 = UE::MVVM::BindingHelper::GetFirstArgumentProperty(pUVar3);
    if (((pFVar12 == (FProperty *)0x0) || (pFVar13 == (FProperty *)0x0)) || (pFVar12 == pFVar13))
    goto LAB_14a757f45;
    bVar9 = true;
LAB_14a757f4f:
    EVar2 = pUVar3->FunctionFlags;
    if ((((EVar2 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) != FUNC_None) ||
        ((EVar2 >> 0x1a & 1) == 0)) ||
       ((((EVar2 >> 0xd & 1) == 0 &&
         ((EVar2 & (FUNC_Const|FUNC_BlueprintPure)) != (FUNC_Const|FUNC_BlueprintPure))) ||
        (1 < pUVar3->NumParms)))) goto LAB_14a757f9f;
    pFVar12 = UE::MVVM::BindingHelper::GetReturnProperty(pUVar3);
    pFVar13 = UE::MVVM::BindingHelper::GetFirstArgumentProperty(pUVar3);
    if ((pFVar12 == (FProperty *)0x0) || (pFVar13 != (FProperty *)0x0)) goto LAB_14a757f9f;
    bVar6 = true;
  }
  if ((((pUVar3 == (UFunction *)0x0) ||
       (EVar2 = pUVar3->FunctionFlags, (EVar2 & (FUNC_EditorOnly|FUNC_Event|FUNC_Net)) != FUNC_None)
       ) || ((EVar2 >> 0x1a & 1) == 0)) ||
     ((EVar2 & (FUNC_BlueprintEvent|FUNC_Delegate)) == FUNC_None)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  pFVar12 = (FProperty *)0x0;
  if ((bVar6) || (bVar10)) goto LAB_14a75838b;
  cVar1 = (param_1->SourceBinding).field_0x8;
  if ((cVar1 == '\0') ||
     (pFVar12 = *(FProperty **)&param_1->SourceBinding, pFVar12 == (FProperty *)0x0)) {
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_288,L"MVVMBindingHelper",L"NoSourceForBinding",
                         L"No source was provided for the binding.");
    FText::FText((FText *)&local_78,pFVar15);
    local_360.TextData.Reference = local_288.TextData.Reference;
LAB_14a7580f0:
    local_78.Variant.TypeIndex = 1;
LAB_14a7580f7:
    if (local_360.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_360.TextData.Reference + 0x10))();
    }
  }
  else {
    if (cVar1 == '\x02') {
      UE::MVVM::BindingHelper::Private::TryGetPropertyTypeCommon(&local_360,pFVar12);
      bVar8 = FText::IsEmpty(&local_360);
      if (!bVar8) {
        FText::FText((FText *)&local_78,&local_360);
        goto LAB_14a7580f0;
      }
      local_78.Variant.TypeIndex = 0;
      local_78.Variant._padding_ = (longlong)pFVar12;
      goto LAB_14a7580f7;
    }
    if ((cVar1 != '\x01') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InField.IsFunction()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Bindings\\MVVMBindingHelper.cpp"
                           ,0x161,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
      return pTVar14;
    }
    if (((param_1->SourceBinding).field_0x8 != '\x01') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type == EVariantType::Function",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Types\\MVVMFieldVariant.h"
                           ,0x58,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
      return pTVar14;
    }
    UE::MVVM::BindingHelper::TryGetPropertyTypeForSourceBinding
              (&local_78,*(UFunction **)&param_1->SourceBinding);
  }
  uVar23 = (ulonglong)local_78.Variant.TypeIndex;
  if ((2 < uVar23) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
    return pTVar14;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar23 + 4) != '\0') {
    if ((local_78.Variant.TypeIndex != 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
      return pTVar14;
    }
    FText::FText(&local_2d0,(FText *)&local_78);
    uVar23 = (ulonglong)local_78.Variant.TypeIndex;
    if ((2 < local_78.Variant.TypeIndex) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
      return pTVar14;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar23] !=
        UE::Core::Private::TDestructorCaller<FProperty_const_*>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar23])(&local_78);
    }
    local_78.Variant.TypeIndex = 2;
    FText::FText((FText *)__return_storage_ptr__,&local_2d0);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_2d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2d0.TextData.Reference + 0x10))();
    }
    uVar23 = (ulonglong)local_78.Variant.TypeIndex;
    if ((2 < local_78.Variant.TypeIndex) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
      return pTVar14;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar23] ==
        UE::Core::Private::TDestructorCaller<TValueOrError<FProperty_const_*,FText>::FEmptyType>::
        Destruct) {
      return __return_storage_ptr__;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar23])(&local_78);
    return __return_storage_ptr__;
  }
  if ((local_78.Variant.TypeIndex != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
    return pTVar14;
  }
  pFVar12 = (FProperty *)local_78.Variant._padding_;
  uVar23 = (ulonglong)local_78.Variant.TypeIndex;
  if ((2 < local_78.Variant.TypeIndex) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
    return pTVar14;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar23] !=
      UE::Core::Private::TDestructorCaller<TValueOrError<FProperty_const_*,FText>::FEmptyType>::
      Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar23])(&local_78);
  }
  local_78.Variant.TypeIndex = 2;
  if (pFVar12 == (FProperty *)0x0) {
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_278,L"MVVMSubsystem",L"NoValueToBindAtSource",
                         L"There is no value to bind at the source.");
    FText::FText((FText *)__return_storage_ptr__,pFVar15);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
    uVar23 = (ulonglong)local_78.Variant.TypeIndex;
    if ((2 < local_78.Variant.TypeIndex) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
      return pTVar14;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar23] ==
        UE::Core::Private::TDestructorCaller<TValueOrError<FProperty_const_*,FText>::FEmptyType>::
        Destruct) {
      return __return_storage_ptr__;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar23])(&local_78);
    return __return_storage_ptr__;
  }
LAB_14a75838b:
  UE::MVVM::BindingHelper::TryGetPropertyTypeForDestinationBinding
            (&local_60,&param_1->DestinationBinding);
  uVar23 = (ulonglong)local_60.Variant.TypeIndex;
  if ((2 < uVar23) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
    return pTVar14;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar23 + 4) == '\0') {
    if ((local_60.Variant.TypeIndex != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
      return pTVar14;
    }
    if ((2 < local_60.Variant.TypeIndex) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
      return pTVar14;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_60.Variant.TypeIndex] !=
        UE::Core::Private::TDestructorCaller<TValueOrError<FProperty_const_*,FText>::FEmptyType>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
    }
    local_60.Variant.TypeIndex = 2;
    if ((FProperty *)local_60.Variant._padding_ == (FProperty *)0x0) {
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_268,L"MVVMSubsystem",L"NoValueToBindAtDestination",
                           L"There is no value to bind at the destination.");
      FText::FText((FText *)__return_storage_ptr__,pFVar15);
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
      if (local_268.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
      }
      uVar23 = (ulonglong)local_60.Variant.TypeIndex;
      if ((2 < local_60.Variant.TypeIndex) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
        return pTVar14;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar23] !=
          UE::Core::Private::TDestructorCaller<TValueOrError<FProperty_const_*,FText>::FEmptyType>::
          Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar23])(&local_60);
      }
    }
    else {
      if (!bVar10) {
        if (param_1->ConversionFunction == (UFunction *)0x0) {
          bVar9 = UE::MVVM::BindingHelper::ArePropertiesCompatible
                            (pFVar12,(FProperty *)local_60.Variant._padding_);
          if (!bVar9) {
            local_3b0 = (wchar_t *)0x0;
            local_3a8 = 0;
            (**(code **)((longlong)*(ITextData *)local_60.Variant._padding_ + 0x68))
                      (local_60.Variant._padding_,&local_400,&local_3b0,0);
            iVar22 = (int)local_3a8 + -1;
            if ((int)local_3a8 == 0) {
              iVar22 = 0;
            }
            if (iVar22 != 0) {
              ::FString::AppendChars(&local_400,local_3b0,iVar22);
            }
            local_340.Data.AllocatorInstance.Data = local_400.Data.AllocatorInstance.Data;
            local_340.Data.ArrayNum = local_400.Data.ArrayNum;
            local_340.Data.ArrayMax = local_400.Data.ArrayMax;
            local_400.Data.ArrayNum = 0;
            local_400.Data.ArrayMax = 0;
            local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_3b0 != (wchar_t *)0x0) {
              FMemory::Free(local_3b0);
            }
            pFVar15 = FText::FromString(&local_f8,&local_340);
            bVar9 = IsThisNotNull((void *)local_60.Variant._padding_,"FField::GetName");
            if (bVar9) {
              ::FName::ToString((FName *)(local_60.Variant._padding_ + 0x20),&local_2f0);
            }
            else {
              ::FString::FString(&local_2f0,L"None");
            }
            pFVar16 = FText::FromString(&local_e8,&local_2f0);
            if (pFVar12 == (FProperty *)0x0) {
              ::FString::FString(&local_370,"");
            }
            else {
              local_3a0 = (wchar_t *)0x0;
              local_398 = 0;
              (**(code **)(pFVar12->_padding_ + 0x68))(pFVar12,&local_3f0,&local_3a0,0);
              iVar22 = (int)local_398 + -1;
              if ((int)local_398 == 0) {
                iVar22 = 0;
              }
              if (iVar22 != 0) {
                ::FString::AppendChars(&local_3f0,local_3a0,iVar22);
              }
              local_370.Data.AllocatorInstance.Data = local_3f0.Data.AllocatorInstance.Data;
              local_370.Data.ArrayNum = local_3f0.Data.ArrayNum;
              local_370.Data.ArrayMax = local_3f0.Data.ArrayMax;
              local_3f0.Data.ArrayNum = 0;
              local_3f0.Data.ArrayMax = 0;
              local_3f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_3a0 != (wchar_t *)0x0) {
                FMemory::Free(local_3a0);
              }
            }
            pFVar19 = FText::FromString(&local_d8,&local_370);
            bVar9 = IsThisNotNull(pFVar12,"FField::GetName");
            if (bVar9) {
              ::FName::ToString((FName *)&pFVar12->_padding_,&local_300);
            }
            else {
              ::FString::FString(&local_300,L"None");
            }
            pFVar20 = FText::FromString(&local_c8,&local_300);
            pFVar21 = FText::AsLocalizable_Advanced_LocText
                                (&local_1a8,L"MVVMSubsystem",
                                 L"SourcePropertyDoesNotMatchDestination",
                                 L"The source property \'{0}\' ({1}) does not match the type of the destination property \'{2}\' ({3}). A conversion function is required."
                                );
            pFVar17 = FTextFormat::FTextFormat(&local_b8,pFVar21,Default);
            pFVar15 = FText::Format<FText,FText,FText,FText>
                                (&local_1b8,pFVar17,pFVar20,pFVar19,pFVar16,pFVar15);
            FText::FText((FText *)__return_storage_ptr__,pFVar15);
            (__return_storage_ptr__->Variant).TypeIndex = '\x01';
            if (local_1b8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
            }
            if (local_1a8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
            }
            if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_300.Data.AllocatorInstance.Data);
            }
            if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_370.Data.AllocatorInstance.Data);
            }
            if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
            }
            if (local_340.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return __return_storage_ptr__;
            }
            FMemory::Free(local_340.Data.AllocatorInstance.Data);
            return __return_storage_ptr__;
          }
        }
        else {
          UE::MVVM::BindingHelper::TryGetReturnTypeForConversionFunction
                    (&local_90,param_1->ConversionFunction);
          uVar23 = (ulonglong)local_90.Variant.TypeIndex;
          if ((2 < local_90.Variant.TypeIndex) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0x12f,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
            return pTVar14;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar23 + 4) != '\0') {
            if ((local_90.Variant.TypeIndex != 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
              return pTVar14;
            }
            FText::FText(&local_2b0,(FText *)&local_90);
            if ((2 < local_90.Variant.TypeIndex) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
              return pTVar14;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_90.Variant.TypeIndex])(&local_90);
            local_90.Variant.TypeIndex = 2;
            FText::FText((FText *)__return_storage_ptr__,&local_2b0);
            (__return_storage_ptr__->Variant).TypeIndex = '\x01';
            if (local_2b0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2b0.TextData.Reference + 0x10))();
            }
            uVar23 = (ulonglong)local_90.Variant.TypeIndex;
            if ((2 < local_90.Variant.TypeIndex) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
              return pTVar14;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar23] ==
                UE::Core::Private::
                TDestructorCaller<TValueOrError<FProperty_const_*,FText>::FEmptyType>::Destruct) {
              return __return_storage_ptr__;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar23])(&local_90);
            return __return_storage_ptr__;
          }
          if (bVar9) {
            UE::MVVM::BindingHelper::TryGetArgumentsForConversionFunction
                      (&local_a8,param_1->ConversionFunction);
            uVar23 = (ulonglong)local_a8.Variant.TypeIndex;
            if ((2 < uVar23) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
              return pTVar14;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,FText>::FWrapErrorType,TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FWrapErrorType,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FEmptyType>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar23) != '\0') {
              if ((local_a8.Variant.TypeIndex != 1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
                return pTVar14;
              }
              FText::FText(&local_2e0,(FText *)&local_a8);
              if ((2 < local_a8.Variant.TypeIndex) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
                return pTVar14;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,FText>::FWrapErrorType,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_a8.Variant.TypeIndex])(&local_a8);
              local_a8.Variant.TypeIndex = 2;
              FText::FText((FText *)__return_storage_ptr__,&local_2e0);
              (__return_storage_ptr__->Variant).TypeIndex = '\x01';
              if (local_2e0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_2e0.TextData.Reference + 0x10))();
              }
              uVar23 = (ulonglong)local_a8.Variant.TypeIndex;
              if ((2 < local_a8.Variant.TypeIndex) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
                return pTVar14;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,FText>::FWrapErrorType,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar23] !=
                  UE::Core::Private::
                  TDestructorCaller<TValueOrError<TArray<FProperty_const_*,TSizedDefaultAllocator<32>_>,FText>::FEmptyType>
                  ::Destruct) {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,FText>::FWrapErrorType,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar23])(&local_a8);
              }
              if ((2 < local_90.Variant.TypeIndex) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
                return pTVar14;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[local_90.Variant.TypeIndex] ==
                  UE::Core::Private::
                  TDestructorCaller<TValueOrError<FProperty_const_*,FText>::FEmptyType>::Destruct) {
                return __return_storage_ptr__;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_90.Variant.TypeIndex])(&local_90);
              return __return_storage_ptr__;
            }
            if ((local_a8.Variant.TypeIndex != 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
              return pTVar14;
            }
            if ((uint)local_a8.Variant._padding_ != 1) {
              pFVar15 = FText::AsLocalizable_Advanced_LocText
                                  (&local_208,L"MVVMSubsystem",L"NumberOfArgumentsWrong",
                                   L"Internal error. The number of arguments should be 1.");
              FText::FText((FText *)__return_storage_ptr__,pFVar15);
              (__return_storage_ptr__->Variant).TypeIndex = '\x01';
              if (local_208.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
              }
              if ((2 < local_a8.Variant.TypeIndex) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
                return pTVar14;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,FText>::FWrapErrorType,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[local_a8.Variant.TypeIndex] !=
                  UE::Core::Private::
                  TDestructorCaller<TValueOrError<TArray<FProperty_const_*,TSizedDefaultAllocator<32>_>,FText>::FEmptyType>
                  ::Destruct) {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,FText>::FWrapErrorType,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[local_a8.Variant.TypeIndex])(&local_a8);
              }
              if ((2 < local_90.Variant.TypeIndex) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
                return pTVar14;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[local_90.Variant.TypeIndex] ==
                  UE::Core::Private::
                  TDestructorCaller<TValueOrError<FProperty_const_*,FText>::FEmptyType>::Destruct) {
                return __return_storage_ptr__;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_90.Variant.TypeIndex])(&local_90);
              return __return_storage_ptr__;
            }
            if ((local_a8.Variant.TypeIndex != 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
              return pTVar14;
            }
            uVar7 = (uint)local_a8.Variant._padding_;
            pIVar25 = (ITextData *)
                      (local_a8.Variant._padding_ +
                      (longlong)(int)(uint)local_a8.Variant._padding_ * 8);
            pIVar24 = (ITextData *)local_a8.Variant._padding_;
            while( true ) {
              if ((uint)local_a8.Variant._padding_ != uVar7) {
                local_446[0] = 0;
                `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_446);
              }
              uVar23 = (ulonglong)(uint)local_a8.Variant._padding_;
              if (pIVar24 == pIVar25) {
                local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_440.ArrayNum = 0;
                local_440.ArrayMax = 0;
                if ((int)(uint)local_a8.Variant._padding_ < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum(uVar23);
                }
                if (0 < (int)(uint)local_a8.Variant._padding_) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,(uint)local_a8.Variant._padding_,&local_440.AllocatorInstance,0,
                             &local_440.ArrayMax);
                  uVar23 = (ulonglong)(uint)local_a8.Variant._padding_;
                }
                iVar22 = (int)uVar23;
                pIVar25 = (ITextData *)local_a8.Variant._padding_;
                while( true ) {
                  if ((int)uVar23 != iVar22) {
                    local_447 = 0;
                    `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_447);
                  }
                  if (pIVar25 == (ITextData *)(local_a8.Variant._padding_ + (longlong)iVar22 * 8))
                  break;
                  IVar4 = *pIVar25;
                  if (IVar4 == (ITextData)0x0) {
                    ::FString::FString(&local_390,"");
                  }
                  else {
                    local_3d0 = (wchar_t *)0x0;
                    local_3c8 = 0;
                    (**(code **)(*(longlong *)IVar4 + 0x68))(IVar4,&local_420,&local_3d0,0);
                    iVar11 = (int)local_3c8 + -1;
                    if ((int)local_3c8 == 0) {
                      iVar11 = 0;
                    }
                    if (iVar11 != 0) {
                      ::FString::AppendChars(&local_420,local_3d0,iVar11);
                    }
                    local_390.Data.AllocatorInstance.Data = local_420.Data.AllocatorInstance.Data;
                    local_390.Data.ArrayNum = local_420.Data.ArrayNum;
                    local_390.Data.ArrayMax = local_420.Data.ArrayMax;
                    local_420.Data.ArrayNum = 0;
                    local_420.Data.ArrayMax = 0;
                    local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    if (local_3d0 != (wchar_t *)0x0) {
                      FMemory::Free(local_3d0);
                    }
                  }
                  pFVar15 = FText::FromString(&local_1f8,&local_390);
                  if (((local_440.AllocatorInstance.Data <= pFVar15) &&
                      (pFVar15 < (FText *)(local_440.AllocatorInstance.Data +
                                          (longlong)local_440.ArrayMax * 0x10))) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
                    return pTVar14;
                  }
                  iVar11 = local_440.ArrayNum;
                  if (local_440.ArrayNum == local_440.ArrayMax) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_440.AllocatorInstance,&local_440.ArrayMax);
                  }
                  local_440.ArrayNum = iVar11 + 1;
                  FText::FText((FText *)(local_440.AllocatorInstance.Data + (longlong)iVar11 * 0x10)
                               ,pFVar15);
                  if (local_1f8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
                  }
                  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_390.Data.AllocatorInstance.Data);
                  }
                  uVar23 = (ulonglong)(uint)local_a8.Variant._padding_;
                  pIVar25 = pIVar25 + 1;
                }
                pFVar15 = FText::AsLocalizable_Advanced_LocText
                                    (&local_1c8,L"MVVMSubsystem",L"CommaDelim",L", ");
                pFVar15 = FText::Join(&local_138,pFVar15,&local_440);
                if (pFVar12 == (FProperty *)0x0) {
                  ::FString::FString(&local_380,"");
                }
                else {
                  local_3c0 = (wchar_t *)0x0;
                  local_3b8 = 0;
                  (**(code **)(pFVar12->_padding_ + 0x68))(pFVar12,&local_410,&local_3c0,0);
                  iVar22 = (int)local_3b8 + -1;
                  if ((int)local_3b8 == 0) {
                    iVar22 = 0;
                  }
                  if (iVar22 != 0) {
                    ::FString::AppendChars(&local_410,local_3c0,iVar22);
                  }
                  local_380.Data.AllocatorInstance.Data = local_410.Data.AllocatorInstance.Data;
                  local_380.Data.ArrayNum = local_410.Data.ArrayNum;
                  local_380.Data.ArrayMax = local_410.Data.ArrayMax;
                  local_410.Data.ArrayNum = 0;
                  local_410.Data.ArrayMax = 0;
                  local_410.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  if (local_3c0 != (wchar_t *)0x0) {
                    FMemory::Free(local_3c0);
                  }
                }
                pFVar16 = FText::FromString(&local_128,&local_380);
                bVar9 = IsThisNotNull(pFVar12,"FField::GetName");
                if (bVar9) {
                  ::FName::ToString((FName *)&pFVar12->_padding_,&local_310);
                }
                else {
                  ::FString::FString(&local_310,L"None");
                }
                pFVar19 = FText::FromString(&local_118,&local_310);
                pFVar20 = FText::AsLocalizable_Advanced_LocText
                                    (&local_1d8,L"MVVMSubsystem",
                                     L"SourcePropertyDoesNotMatchArguments",
                                     L"The source property \'{0}\' ({1}) does not match any of the argument types of the conversion function ({1})."
                                    );
                pFVar17 = FTextFormat::FTextFormat(&local_108,pFVar20,Default);
                pFVar16 = FText::Format<FText,FText,FText>
                                    (&local_1e8,pFVar17,pFVar19,pFVar16,pFVar15);
                pFVar15 = local_328;
                FText::FText(local_328,pFVar16);
                *(undefined1 *)&pFVar15[1].TextData.Reference = 1;
                if (local_1e8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
                }
                if (local_1d8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
                }
                if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_310.Data.AllocatorInstance.Data);
                }
                if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_380.Data.AllocatorInstance.Data);
                }
                if (local_1c8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
                }
                DestructItems<FText,int>
                          ((FText *)local_440.AllocatorInstance.Data,local_440.ArrayNum);
                if ((FText *)local_440.AllocatorInstance.Data != (FText *)0x0) {
                  FMemory::Free(local_440.AllocatorInstance.Data);
                }
                if ((2 < local_a8.Variant.TypeIndex) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                       ,0xd4,L""), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
                  return pTVar14;
                }
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,FText>::FWrapErrorType,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[local_a8.Variant.TypeIndex])(&local_a8);
                if ((2 < local_90.Variant.TypeIndex) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                       ,0xd4,L""), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
                  return pTVar14;
                }
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[local_90.Variant.TypeIndex])(&local_90);
                return (TValueOrError<bool,FText> *)pFVar15;
              }
              bVar9 = UE::MVVM::BindingHelper::ArePropertiesCompatible
                                (pFVar12,(FProperty *)*pIVar24);
              if (bVar9) break;
              pIVar24 = pIVar24 + 1;
            }
            if ((2 < local_a8.Variant.TypeIndex) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
              return pTVar14;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,TValueOrError<TArray<FProperty_const*___ptr64,TSizedDefaultAllocator<32>_>,FText>::FWrapErrorType,TValueOrError<class_TArray<class_FProperty_const*___ptr64,class_TSizedDefaultAllocator<32>_>,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_a8.Variant.TypeIndex])(&local_a8);
          }
          else {
            if (!bVar6) {
              local_330 = (FName)param_1->ConversionFunction->_padding_;
              ::FName::ToString(&local_330,&local_2a0);
              pFVar15 = FText::FromString(&local_198,&local_2a0);
              pFVar16 = FText::AsLocalizable_Advanced_LocText
                                  (&local_248,L"MVVMSubsystem",L"ConversionFunctionNotValid",
                                   L"The conversion function \'{0}\' is not valid as a conversion function"
                                  );
              pFVar17 = FTextFormat::FTextFormat(&local_188,pFVar16,Default);
              pFVar15 = FText::Format<FText>(&local_258,pFVar17,pFVar15);
              FText::FText((FText *)__return_storage_ptr__,pFVar15);
              (__return_storage_ptr__->Variant).TypeIndex = '\x01';
              if (local_258.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
              }
              if (local_248.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
              }
              if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
              }
              if ((2 < local_90.Variant.TypeIndex) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
                return pTVar14;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[local_90.Variant.TypeIndex] ==
                  UE::Core::Private::
                  TDestructorCaller<TValueOrError<FProperty_const_*,FText>::FEmptyType>::Destruct) {
                return __return_storage_ptr__;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_90.Variant.TypeIndex])(&local_90);
              return __return_storage_ptr__;
            }
            if ((local_90.Variant.TypeIndex != 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
              return pTVar14;
            }
            bVar9 = UE::MVVM::BindingHelper::ArePropertiesCompatible
                              ((FProperty *)local_90.Variant._padding_,
                               (FProperty *)local_60.Variant._padding_);
            if (!bVar9) {
              pFVar18 = (FString *)
                        (**(code **)((longlong)*(ITextData *)local_90.Variant._padding_ + 0x68))
                                  (local_90.Variant._padding_,local_218,0,0);
              pFVar15 = FText::FromString(&local_178,pFVar18);
              local_3e0 = (wchar_t *)0x0;
              local_3d8 = 0;
              (**(code **)((longlong)*(ITextData *)local_60.Variant._padding_ + 0x68))
                        (local_60.Variant._padding_,&local_430,&local_3e0,0);
              iVar22 = (int)local_3d8 + -1;
              if ((int)local_3d8 == 0) {
                iVar22 = 0;
              }
              if (iVar22 != 0) {
                ::FString::AppendChars(&local_430,local_3e0,iVar22);
              }
              local_350.Data.AllocatorInstance.Data = local_430.Data.AllocatorInstance.Data;
              local_350.Data.ArrayNum = local_430.Data.ArrayNum;
              local_350.Data.ArrayMax = local_430.Data.ArrayMax;
              local_430.Data.ArrayNum = 0;
              local_430.Data.ArrayMax = 0;
              local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_3e0 != (wchar_t *)0x0) {
                FMemory::Free(local_3e0);
              }
              pFVar16 = FText::FromString(&local_168,&local_350);
              bVar9 = IsThisNotNull((void *)local_60.Variant._padding_,"FField::GetName");
              if (bVar9) {
                ::FName::ToString((FName *)(local_60.Variant._padding_ + 0x20),&local_320);
              }
              else {
                ::FString::FString(&local_320,L"None");
              }
              pFVar19 = FText::FromString(&local_158,&local_320);
              pFVar20 = FText::AsLocalizable_Advanced_LocText
                                  (&local_228,L"MVVMSubsystem",
                                   L"DestinationPropertyDoesNotMatchReturn",
                                   L"The destination property \'{0}\' ({1}) does not match the return type of the conversion function ({2})."
                                  );
              pFVar17 = FTextFormat::FTextFormat(&local_148,pFVar20,Default);
              pFVar15 = FText::Format<FText,FText,FText>(&local_238,pFVar17,pFVar19,pFVar16,pFVar15)
              ;
              FText::FText((FText *)__return_storage_ptr__,pFVar15);
              (__return_storage_ptr__->Variant).TypeIndex = '\x01';
              if (local_238.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
              }
              if (local_228.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
              }
              if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_320.Data.AllocatorInstance.Data);
              }
              if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_350.Data.AllocatorInstance.Data);
              }
              if (local_218[0] != (void *)0x0) {
                FMemory::Free(local_218[0]);
              }
              if ((2 < local_90.Variant.TypeIndex) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
                return pTVar14;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[local_90.Variant.TypeIndex] ==
                  UE::Core::Private::
                  TDestructorCaller<TValueOrError<FProperty_const_*,FText>::FEmptyType>::Destruct) {
                return __return_storage_ptr__;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_90.Variant.TypeIndex])(&local_90);
              return __return_storage_ptr__;
            }
          }
          if ((2 < local_90.Variant.TypeIndex) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
            return pTVar14;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_90.Variant.TypeIndex] !=
              UE::Core::Private::
              TDestructorCaller<TValueOrError<FProperty_const_*,FText>::FEmptyType>::Destruct) {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[local_90.Variant.TypeIndex])(&local_90);
          }
        }
      }
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
    }
  }
  else {
    if ((local_60.Variant.TypeIndex != 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
      return pTVar14;
    }
    FText::FText(&local_2c0,(FText *)&local_60);
    if ((2 < local_60.Variant.TypeIndex) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
      return pTVar14;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60);
    local_60.Variant.TypeIndex = 2;
    FText::FText((FText *)__return_storage_ptr__,&local_2c0);
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (local_2c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2c0.TextData.Reference + 0x10))();
    }
    uVar23 = (ulonglong)local_60.Variant.TypeIndex;
    if ((2 < local_60.Variant.TypeIndex) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar14 = (TValueOrError<bool,FText> *)(*pcVar5)();
      return pTVar14;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar23] !=
        UE::Core::Private::TDestructorCaller<TValueOrError<FProperty_const_*,FText>::FEmptyType>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FProperty_const*___ptr64,TValueOrError<FProperty_const*___ptr64,FText>::FWrapErrorType,TValueOrError<class_FProperty_const*___ptr64,class_FText>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar23])(&local_60);
    }
  }
  return __return_storage_ptr__;
}

// IsBindingValid @ 14a759610

TValueOrError<bool,FText> * __thiscall
UMVVMSubsystem::IsBindingValid
          (UMVVMSubsystem *this,TValueOrError<bool,FText> *__return_storage_ptr__,
          FDirectionalBindingArgs *param_1)

{
  char cVar1;
  FMVVMConstFieldVariant local_78;
  FConstDirectionalBindingArgs local_68 [2];
  UFunction *local_18;
  
  cVar1 = (param_1->SourceBinding).field_0x8;
  local_78._0_8_ = 0;
  local_78._8_1_ = '\0';
  if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
    local_78._0_8_ = *(undefined8 *)&param_1->SourceBinding;
    local_78._8_1_ = cVar1;
  }
  local_68[0].SourceBinding._0_8_ = local_78._0_8_;
  local_68[0].SourceBinding._9_7_ = local_78._9_7_;
  local_68[0].SourceBinding._8_1_ = local_78._8_1_;
  cVar1 = (param_1->DestinationBinding).field_0x8;
  local_78._0_8_ = 0;
  local_78._8_1_ = '\0';
  if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
    local_78._0_8_ = *(undefined8 *)&param_1->DestinationBinding;
    local_78._8_1_ = cVar1;
  }
  local_68[0].DestinationBinding._9_7_ = local_78._9_7_;
  local_68[0].DestinationBinding._8_1_ = local_78._8_1_;
  local_68[0].ConversionFunction = param_1->ConversionFunction;
  local_68[0].DestinationBinding._0_8_ = local_78._0_8_;
  local_18 = local_68[0].ConversionFunction;
  IsBindingValid(this,__return_storage_ptr__,local_68);
  return __return_storage_ptr__;
}

// K2_CompareFloatValues @ 14a75a8c0

bool __thiscall
UMVVMSubsystem::K2_CompareFloatValues
          (UMVVMSubsystem *this,EMVVMConditionOperation param_1,float param_2,float param_3,
          float param_4)

{
  float fVar1;
  
  switch(param_1) {
  case Equal:
    return (double)(float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
           __real_3eb0c6f7a0b5ed8d;
  case NotEqual:
    return __real_3eb0c6f7a0b5ed8d <
           (double)(float)((uint)(param_2 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  case MoreThan:
    return param_3 < param_2;
  case MoreThanOrEqual:
    return param_3 <= param_2;
  case LessThan:
    return param_2 < param_3;
  case LessThanOrEqual:
    return param_2 <= param_3;
  case BetweenInclusive:
  case BetweenExclusive:
    break;
  default:
    return false;
  }
  fVar1 = param_3;
  if (param_3 <= param_4) {
    fVar1 = param_4;
  }
  if (param_4 <= param_3) {
    param_3 = param_4;
  }
  if (param_1 == BetweenExclusive) {
    if (param_2 <= param_3) {
      return false;
    }
    if (fVar1 <= param_2) {
      return false;
    }
  }
  else {
    if (param_2 < param_3) {
      return false;
    }
    if (fVar1 < param_2) {
      return false;
    }
  }
  return true;
}

// K2_GetAvailableBinding @ 14a75aa60

FMVVMAvailableBinding * __thiscall
UMVVMSubsystem::K2_GetAvailableBinding
          (UMVVMSubsystem *this,FMVVMAvailableBinding *__return_storage_ptr__,UClass *param_1,
          FMVVMBindingName param_2,UClass *param_3)

{
  UE::MVVM::Private::GetAvailableBinding(__return_storage_ptr__,param_2,param_1,param_3,false);
  return __return_storage_ptr__;
}

// K2_GetAvailableBindings @ 14a75aa90

TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> * __thiscall
UMVVMSubsystem::K2_GetAvailableBindings
          (UMVVMSubsystem *this,
          TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UClass *param_1,UClass *param_2)

{
  UE::MVVM::Private::GetAvailableBindings(__return_storage_ptr__,param_1,param_2,false);
  return __return_storage_ptr__;
}

// K2_GetViewFromUserWidget @ 14a75aac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMVVMView * __thiscall
UMVVMSubsystem::K2_GetViewFromUserWidget(UMVVMSubsystem *this,UUserWidget *param_1)

{
  UMVVMView *pUVar1;
  
  if (param_1 != (UUserWidget *)0x0) {
    pUVar1 = UUserWidget::GetExtension<UMVVMView>(param_1);
    return pUVar1;
  }
  return (UMVVMView *)0x0;
}

// StaticRegisterNativesUMVVMSubsystem @ 14a760190

void __cdecl UMVVMSubsystem::StaticRegisterNativesUMVVMSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UMVVMSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDoesWidgetTreeContainedWidget @ 14a76b340

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMVVMSubsystem::execDoesWidgetTreeContainedWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  ForAnyElementType FVar3;
  undefined1 uVar4;
  longlong local_res10;
  UWidgetTree *local_res18;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18 = (UWidgetTree *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res18 == (UWidgetTree *)0x0) || (local_res10 == 0)) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  UWidgetTree::GetAllWidgets(local_res18,&local_18);
  FVar3.Data = local_18.AllocatorInstance.Data;
  do {
    if (FVar3.Data == local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8) {
      uVar4 = 0;
LAB_14a76b437:
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      *(undefined1 *)param_3 = uVar4;
      return;
    }
    if (*(longlong *)FVar3.Data == lVar2) {
      uVar4 = 1;
      goto LAB_14a76b437;
    }
    FVar3.Data = FVar3.Data + 8;
  } while( true );
}

// execGetGlobalViewModelCollection @ 14a76b710

void __cdecl
UMVVMSubsystem::execGetGlobalViewModelCollection(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  return;
}

// execK2_CompareFloatValues @ 14a76bc20

void __cdecl
UMVVMSubsystem::execK2_CompareFloatValues(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  float fVar3;
  char local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  float local_38 [4];
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_38[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  switch(local_res10[0]) {
  case '\0':
    *(bool *)param_3 =
         (double)(float)((uint)(local_res18[0] - local_res20[0]) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3eb0c6f7a0b5ed8d;
    return;
  case '\x01':
    *(bool *)param_3 =
         __real_3eb0c6f7a0b5ed8d <
         (double)CONCAT44((uint)((ulonglong)(double)(local_res18[0] - local_res20[0]) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84((double)(local_res18[0] - local_res20[0]),0) &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    return;
  case '\x02':
    *(bool *)param_3 = local_res20[0] < local_res18[0];
    return;
  case '\x03':
    *(bool *)param_3 = local_res20[0] <= local_res18[0];
    return;
  case '\x04':
    *(bool *)param_3 = local_res18[0] < local_res20[0];
    return;
  case '\x05':
    *(bool *)param_3 = local_res18[0] <= local_res20[0];
    return;
  case '\x06':
  case '\a':
    break;
  default:
switchD_14a76bd4a_default:
    *(undefined1 *)param_3 = 0;
    return;
  }
  fVar3 = local_38[0];
  if (local_38[0] <= local_res20[0]) {
    fVar3 = local_res20[0];
  }
  if (local_res20[0] <= local_38[0]) {
    local_38[0] = local_res20[0];
  }
  if (local_res10[0] == '\a') {
    if ((local_res18[0] <= local_38[0]) || (fVar3 <= local_res18[0]))
    goto switchD_14a76bd4a_default;
  }
  else if ((local_res18[0] < local_38[0]) || (fVar3 < local_res18[0]))
  goto switchD_14a76bd4a_default;
  *(undefined1 *)param_3 = 1;
  return;
}

// execK2_GetAvailableBinding @ 14a76be90

void __cdecl
UMVVMSubsystem::execK2_GetAvailableBinding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UClass *pUVar4;
  UClass *this;
  undefined4 uVar5;
  undefined4 uVar6;
  UClass *pUVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  char cVar11;
  FName local_res10;
  UClass *local_res18;
  UClass *local_res20;
  FMVVMAvailableBinding local_48;
  undefined4 uStack_3c;
  FName local_38;
  undefined8 uStack_30;
  
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  local_res20 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  this = local_res20;
  pUVar4 = local_res18;
  FVar9 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (FName)0x0) {
    local_48.bIsReadable = false;
    local_48.bIsWritable = false;
    local_48.bHasNotify = false;
    local_48._11_1_ = 0;
    local_48.BindingName.BindingName.ComparisonIndex.Value = 0;
    local_48.BindingName.BindingName.Number = 0;
    goto LAB_14a76c016;
  }
  if (local_res20 == (UClass *)0x0) {
LAB_14a76bfd7:
    cVar11 = '\0';
  }
  else {
    pUVar7 = Z_Construct_UClass_UClass_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if (((*(int *)(this->_padding_ + 0x38) < iVar2) ||
        ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8)
         != &pUVar7->_padding_)) ||
       (FVar8 = (FName)UClass::FindFunctionByName(this,FVar9,IncludeSuper), FVar8 == (FName)0x0)) {
      FVar9 = (FName)PropertyAccessUtil::FindPropertyByName(FVar9,(UStruct *)this);
      if (FVar9 == (FName)0x0) goto LAB_14a76bfd7;
      cVar11 = '\x02';
      FVar10 = FVar9;
    }
    else {
      cVar11 = '\x01';
      FVar10 = FVar8;
    }
  }
  uVar5 = local_48._8_4_;
  local_48.BindingName.BindingName.ComparisonIndex.Value = 0;
  local_48.BindingName.BindingName.Number = 0;
  local_48._8_4_ = local_48._8_4_ & 0xffffff00;
  uVar6 = local_48._8_4_;
  local_48._9_3_ = SUB43(uVar5,1);
  if ((cVar11 == '\x02') || (cVar11 == '\x01')) {
    local_48.bIsReadable = (bool)cVar11;
    local_48.BindingName.BindingName = FVar10;
    uVar6 = local_48._8_4_;
  }
  local_48._8_4_ = uVar6;
  uStack_30._4_4_ = uStack_3c;
  uStack_30._0_1_ = local_48.bIsReadable;
  uStack_30._1_1_ = local_48.bIsWritable;
  uStack_30._2_1_ = local_48.bHasNotify;
  uStack_30._3_1_ = local_48._11_1_;
  local_38 = local_48.BindingName.BindingName;
  UE::MVVM::Private::GetAvailableBinding(&local_48,(FMVVMConstFieldVariant *)&local_38,pUVar4,false)
  ;
LAB_14a76c016:
  *(FName *)param_3 = local_48.BindingName.BindingName;
  *(undefined4 *)((longlong)param_3 + 8) = local_48._8_4_;
  return;
}

// execK2_GetAvailableBindings @ 14a76c040

void __cdecl
UMVVMSubsystem::execK2_GetAvailableBindings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *this;
  UClass *pUVar2;
  UClass *this_00;
  bool bVar3;
  UClass *pUVar4;
  IClassDescriptor *pIVar5;
  IClassDescriptor *pIVar6;
  UClass *local_res10;
  UClass *local_res18 [2];
  TArray<FMVVMAvailableBinding,TSizedDefaultAllocator<32>_> local_38;
  
  pIVar6 = (IClassDescriptor *)0x0;
  local_res18[0] = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this_00 = local_res18[0];
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    bVar3 = UClass::ImplementsInterface(this_00,pUVar4);
    if (bVar3) {
      if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this_00);
      }
      this = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
      pIVar5 = pIVar6;
      if (this != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(this);
        }
        pUVar4 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
        pIVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar4);
      }
      if (this == (UObject *)0x0) {
        pIVar5 = pIVar6;
      }
      pIVar6 = (IClassDescriptor *)(**(code **)((longlong)*pIVar5 + 0x30))();
    }
  }
  UE::MVVM::Private::GetAvailableBindings(&local_38,(UStruct *)this_00,pUVar2,pIVar6,false);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.ArrayMax;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execK2_GetViewFromUserWidget @ 14a76c200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UMVVMSubsystem::execK2_GetViewFromUserWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMVVMView *pUVar2;
  UUserWidget *local_res10 [3];
  
  local_res10[0] = (UUserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (UUserWidget *)0x0) {
    pUVar2 = UUserWidget::GetExtension<UMVVMView>(local_res10[0]);
    *(UMVVMView **)param_3 = pUVar2;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

