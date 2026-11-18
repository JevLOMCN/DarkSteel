// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// FActorPrimitiveColorHandler @ 147378ae0

FActorPrimitiveColorHandler * __thiscall
FActorPrimitiveColorHandler::FActorPrimitiveColorHandler(FActorPrimitiveColorHandler *this)

{
  *(undefined8 *)&this->Handlers = 0;
  *(undefined8 *)&(this->Handlers).field_0x8 = 0;
  *(undefined8 *)&(this->Handlers).field_0x20 = 0;
  *(undefined4 *)&(this->Handlers).field_0x28 = 0;
  *(undefined4 *)&(this->Handlers).field_0x2c = 0x80;
  *(undefined4 *)&(this->Handlers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Handlers).field_0x34 = 0;
  *(undefined8 *)&(this->Handlers).field_0x40 = 0;
  *(undefined4 *)&(this->Handlers).field_0x48 = 0;
  (this->ActivePrimitiveColorHandlerName).ComparisonIndex = 0;
  (this->ActivePrimitiveColorHandlerName).Number = 0;
  this->ActivePrimitiveColorHandler = (FPrimitiveColorHandler *)0x0;
  return this;
}

// operator() @ 14737faf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l7::<lambda_1>::operator()
          (void *this,UPrimitiveComponent *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  UPrimitiveComponent *local_res10;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  FLinearColor_u_0 local_18;
  
  if ((param_1->field_0x98 & 1) != 0) {
    lVar1 = *(longlong *)(*(longlong *)this + 8);
    if (lVar1 == 0) {
      local_28 = FLinearColor::White.field0_0x0._0_4_;
      fStack_24 = FLinearColor::White.field0_0x0._4_4_;
      fStack_20 = FLinearColor::White.field0_0x0._8_4_;
      fStack_1c = FLinearColor::White.field0_0x0._12_4_;
    }
    else {
      local_res10 = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x30));
      pcVar2 = *(code **)(lVar1 + 0x30);
      plVar4 = (longlong *)(lVar1 + 0x40);
      if (*(longlong **)(lVar1 + 0x58) != (longlong *)0x0) {
        plVar4 = *(longlong **)(lVar1 + 0x58);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(&local_28,uVar3,&local_res10);
    }
    local_18._s_0.R = local_28;
    local_18._s_0.G = fStack_24;
    local_18._s_0.B = fStack_20;
    local_18._s_0.A = fStack_1c;
    UPrimitiveComponent::PushPrimitiveColorToProxy(param_1,(FLinearColor *)&local_18._s_0);
  }
  return;
}

// operator() @ 14737fb90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler'::__l9::<lambda_1>::operator()
          (void *this,UPrimitiveComponent *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  UPrimitiveComponent *local_res10;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  FLinearColor_u_0 local_18;
  
  if ((param_1->field_0x98 & 1) != 0) {
    lVar1 = *(longlong *)(*(longlong *)this + 8);
    if (lVar1 == 0) {
      local_28 = FLinearColor::White.field0_0x0._0_4_;
      fStack_24 = FLinearColor::White.field0_0x0._4_4_;
      fStack_20 = FLinearColor::White.field0_0x0._8_4_;
      fStack_1c = FLinearColor::White.field0_0x0._12_4_;
    }
    else {
      local_res10 = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x30));
      pcVar2 = *(code **)(lVar1 + 0x30);
      plVar4 = (longlong *)(lVar1 + 0x40);
      if (*(longlong **)(lVar1 + 0x58) != (longlong *)0x0) {
        plVar4 = *(longlong **)(lVar1 + 0x58);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      (*pcVar2)(&local_28,uVar3,&local_res10);
    }
    local_18._s_0.R = local_28;
    local_18._s_0.G = fStack_24;
    local_18._s_0.B = fStack_20;
    local_18._s_0.A = fStack_1c;
    UPrimitiveComponent::PushPrimitiveColorToProxy(param_1,(FLinearColor *)&local_18._s_0);
  }
  return;
}

// Get @ 147396de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FActorPrimitiveColorHandler * __cdecl FActorPrimitiveColorHandler::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FActorPrimitiveColorHandler *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_FActorPrimitiveColorHandler>&___ptr64___cdecl_TLazySingleton<FActorPrimitiveColorHandler>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_FActorPrimitiveColorHandler>&___ptr64___cdecl_TLazySingleton<FActorPrimitiveColorHandler>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_FActorPrimitiveColorHandler>&___ptr64___cdecl_TLazySingleton<FActorPrimitiveColorHandler>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _DAT_1551e9480 = 0;
    _DAT_1551e9488 = 0;
    DAT_1551e94d0 =
         &`private:_static_class_TLazySingleton<class_FActorPrimitiveColorHandler>&___ptr64___cdecl_TLazySingleton<FActorPrimitiveColorHandler>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    _DAT_1551e94a0 = 0;
    _DAT_1551e94a8 = ___xmm_00000000ffffffff0000008000000000;
    uRam00000001551e94b0 = _UNK_150631d98;
    _DAT_1551e94c0 = 0;
    _DAT_1551e94c8 = 0;
    _Singleton = 0;
    _DAT_1551e9478 = 0;
    atexit(`TLazySingleton<FActorPrimitiveColorHandler>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FActorPrimitiveColorHandler>&___ptr64___cdecl_TLazySingleton<FActorPrimitiveColorHandler>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FActorPrimitiveColorHandler *)DAT_1551e94d0 == (FActorPrimitiveColorHandler *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FActorPrimitiveColorHandler *)(*pcVar1)();
    return pFVar3;
  }
  return (FActorPrimitiveColorHandler *)DAT_1551e94d0;
}

// GetActivePrimitiveColorHandler @ 147397280

FName __thiscall
FActorPrimitiveColorHandler::GetActivePrimitiveColorHandler(FActorPrimitiveColorHandler *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->ActivePrimitiveColorHandlerName;
  return in_RDX;
}

// GetActivePrimitiveColorHandlerDisplayName @ 147397290

FText * __thiscall
FActorPrimitiveColorHandler::GetActivePrimitiveColorHandlerDisplayName
          (FActorPrimitiveColorHandler *this,FText *__return_storage_ptr__)

{
  FPrimitiveColorHandler *pFVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  FText local_28;
  FText local_18;
  
  pFVar1 = this->ActivePrimitiveColorHandler;
  if (pFVar1 == (FPrimitiveColorHandler *)0x0) {
    pFVar2 = FText::FText(&local_18);
    FText::FText(__return_storage_ptr__,pFVar2);
  }
  else {
    local_28.TextData.Reference = (pFVar1->HandlerText).TextData.Reference;
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 8))
                (local_28.TextData.Reference,local_res8);
    }
    local_28.Flags = (pFVar1->HandlerText).Flags;
    FText::FText(__return_storage_ptr__,&local_28);
    local_18.TextData.Reference = local_28.TextData.Reference;
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrimitiveColor @ 1473a05b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLinearColor * __thiscall
FActorPrimitiveColorHandler::GetPrimitiveColor
          (FActorPrimitiveColorHandler *this,FLinearColor *__return_storage_ptr__,
          UPrimitiveComponent *param_1)

{
  FPrimitiveColorHandler *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  UPrimitiveComponent *local_res8;
  FLinearColor_u_0 local_18;
  
  pFVar1 = this->ActivePrimitiveColorHandler;
  if (pFVar1 == (FPrimitiveColorHandler *)0x0) {
    local_18 = FLinearColor::White.field0_0x0;
  }
  else {
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&pFVar1->GetColorFunc);
    plVar2 = *(longlong **)&(pFVar1->GetColorFunc).field_0x28;
    pcVar3 = *(code **)&pFVar1->GetColorFunc;
    plVar5 = (longlong *)&(pFVar1->GetColorFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar3)(&local_18,uVar4,&local_res8);
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_18._0_8_;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_18._8_8_;
  return __return_storage_ptr__;
}

// GetRegisteredPrimitiveColorHandlers @ 1473a0ea0

void __thiscall
FActorPrimitiveColorHandler::GetRegisteredPrimitiveColorHandlers
          (FActorPrimitiveColorHandler *this,
          TArray<FActorPrimitiveColorHandler::FPrimitiveColorHandler,TSizedDefaultAllocator<32>_>
          *param_1)

{
  TMapBase<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler,0>_>
              *)&this->Handlers,param_1);
  return;
}

// InitActivePrimitiveColorHandler @ 1473a4870

void __thiscall
FActorPrimitiveColorHandler::InitActivePrimitiveColorHandler(FActorPrimitiveColorHandler *this)

{
  (this->ActivePrimitiveColorHandlerName).ComparisonIndex = 0;
  (this->ActivePrimitiveColorHandlerName).Number = 0;
  this->ActivePrimitiveColorHandler = (FPrimitiveColorHandler *)0x0;
  return;
}

// RefreshPrimitiveColorHandler @ 1473aedd0

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
FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler
          (FActorPrimitiveColorHandler *this,FName param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  AActor *this_00;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  UClass *local_res8;
  
  if (this->ActivePrimitiveColorHandlerName == param_1) {
    pFVar8 = (param_2->AllocatorInstance).Data;
    iVar2 = param_2->ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar2) {
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar8 == pFVar1) break;
      this_00 = *(AActor **)pFVar8;
      pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar5 != (UClass *)0x0) goto LAB_1473aee51;
LAB_1473aee84:
        pUVar6 = (UClass *)0x0;
      }
      else {
        if (pUVar5 == (UClass *)0x0) goto LAB_1473aee84;
        UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_1473aee51:
        pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar6 == (UClass *)0x0) goto LAB_1473aee84;
        iVar3 = (int)pUVar6->_padding_;
        if (((int)pUVar5->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pUVar6 = pUVar5;
        if (!bVar4) goto LAB_1473aee84;
      }
      pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
      local_res8 = pUVar5;
      if (pUVar6 == pUVar7) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        AActor::
        ForEachComponent_Internal<UPrimitiveComponent,1,0,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l9::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_res8,(<lambda_1>)this);
        pFVar8 = pFVar8 + 8;
      }
      else {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        AActor::
        ForEachComponent_Internal<UPrimitiveComponent,0,0,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l9::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_res8,(<lambda_1>)this);
        pFVar8 = pFVar8 + 8;
      }
    }
  }
  return;
}

// RefreshPrimitiveColorHandler @ 1473aef20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler
          (FActorPrimitiveColorHandler *this,FName param_1,
          TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPrimitiveComponent *this_00;
  FPrimitiveColorHandler *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  UPrimitiveComponent *local_res8;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  FLinearColor_u_0 local_38;
  
  if (this->ActivePrimitiveColorHandlerName == param_1) {
    pFVar8 = (param_2->AllocatorInstance).Data;
    iVar2 = param_2->ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UPrimitiveComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar8 == pFVar1) break;
      this_00 = *(UPrimitiveComponent **)pFVar8;
      if ((this_00 != (UPrimitiveComponent *)0x0) && ((this_00->field_0x98 & 1) != 0)) {
        pFVar3 = this->ActivePrimitiveColorHandler;
        if (pFVar3 == (FPrimitiveColorHandler *)0x0) {
          local_38._s_0.R = (float)FLinearColor::White.field0_0x0._0_4_;
          local_38._s_0.G = (float)FLinearColor::White.field0_0x0._4_4_;
          local_38._s_0.B = (float)FLinearColor::White.field0_0x0._8_4_;
          local_38._s_0.A = (float)FLinearColor::White.field0_0x0._12_4_;
        }
        else {
          local_res8 = this_00;
          UE::Core::Private::Function::CheckCallable(*(void **)&pFVar3->GetColorFunc);
          plVar4 = *(longlong **)&(pFVar3->GetColorFunc).field_0x28;
          pcVar5 = *(code **)&pFVar3->GetColorFunc;
          plVar7 = (longlong *)&(pFVar3->GetColorFunc).field_0x10;
          if (plVar4 != (longlong *)0x0) {
            plVar7 = plVar4;
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          (*pcVar5)(&local_48,uVar6,&local_res8);
          local_38._s_0.R = local_48;
          local_38._s_0.G = fStack_44;
          local_38._s_0.B = fStack_40;
          local_38._s_0.A = fStack_3c;
        }
        UPrimitiveComponent::PushPrimitiveColorToProxy(this_00,(FLinearColor *)&local_38._s_0);
      }
      pFVar8 = pFVar8 + 8;
    }
  }
  return;
}

// RefreshPrimitiveColorHandler @ 1473af030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler
          (FActorPrimitiveColorHandler *this,FName param_1,UWorld *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  AActor *this_00;
  UClass *pUVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  UClass *local_res8;
  UClass *local_res10;
  UClass *local_res20;
  FString local_88;
  TActorIteratorBase<TActorIterator<AActor>_> local_78;
  
  if (this->ActivePrimitiveColorHandlerName == param_1) {
    pUVar4 = AActor::StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
    }
    local_78.Flags = OnlyActiveLevels|SkipPendingKill;
    local_78.State.bIsSet = false;
    local_res8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FActorIteratorState::FActorIteratorState
              (&local_78.State.TypedValue,param_2,(TSubclassOf<AActor>)&local_res8);
    local_78.State.bIsSet = true;
    TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_78);
    while( true ) {
      if ((local_78.State.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_78.State.TypedValue.ReachedEnd != false) break;
      if ((local_78.State.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = FActorIteratorState::GetActorChecked(&local_78.State.TypedValue);
      if (this_00 == (AActor *)0x0) {
        pFVar7 = GetTypeName<AActor>(&local_88);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar8);
      }
      pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 != (UClass *)0x0) goto LAB_1473af196;
LAB_1473af1c9:
        pUVar5 = (UClass *)0x0;
      }
      else {
        if (pUVar4 == (UClass *)0x0) goto LAB_1473af1c9;
        UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_1473af196:
        pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar5 == (UClass *)0x0) goto LAB_1473af1c9;
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        pUVar5 = pUVar4;
        if (!bVar3) goto LAB_1473af1c9;
      }
      pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar5 == pUVar6) {
        local_res10 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        AActor::
        ForEachComponent_Internal<UPrimitiveComponent,1,0,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l7::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_res10,(<lambda_1>)this);
        TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_78);
      }
      else {
        local_res20 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        AActor::
        ForEachComponent_Internal<UPrimitiveComponent,0,0,_FActorPrimitiveColorHandler::RefreshPrimitiveColorHandler_::__l7::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_res20,(<lambda_1>)this);
        TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_78);
      }
    }
    if (local_78.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_78.State.TypedValue.CurrentWorld,
                 local_78.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_78.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// RegisterPrimitiveColorHandler @ 1473afd70

void __thiscall
FActorPrimitiveColorHandler::RegisterPrimitiveColorHandler
          (FActorPrimitiveColorHandler *this,FPrimitiveColorHandler *param_1)

{
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  FPrimitiveColorHandler *local_18;
  FPrimitiveColorHandler *local_10;
  
  FVar1 = param_1->HandlerName;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Handlers).field_0x8 != *(int *)&(this->Handlers).field_0x34) {
    puVar7 = *(undefined1 **)&(this->Handlers).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Handlers).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->Handlers).field_0x48 - 1U & FVar1.Number + uVar5) * 4
                    );
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Handlers).field_0x0;
      do {
        if (*(FName *)((longlong)iVar6 * 0xe0 + lVar2) == FVar1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Handlers.Contains(PrimitiveColorHandler.HandlerName)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActorPrimitiveColorHandler.cpp"
                             ,0x21,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0xe0 + 0xd0 + lVar2);
      } while (iVar6 != -1);
    }
  }
  local_18 = param_1;
  local_10 = param_1;
  TSet<TTuple<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler>,TDefaultMapHashableKeyFuncs<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,FActorPrimitiveColorHandler::FPrimitiveColorHandler_const_&>_>
            ((TSet<TTuple<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler>,TDefaultMapHashableKeyFuncs<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler,0>,FDefaultSetAllocator>
              *)&this->Handlers,
             (TPairInitializer<FName_const_&,FActorPrimitiveColorHandler::FPrimitiveColorHandler_const_&>
              *)&stack0x00000008,(bool *)&local_18);
  return;
}

// RegisterPrimitiveColorHandler @ 1473afe50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FActorPrimitiveColorHandler::RegisterPrimitiveColorHandler
          (FActorPrimitiveColorHandler *this,FName param_1,FText *param_2,
          TFunction<FLinearColor___cdecl(UPrimitiveComponent_const_*)> *param_3,
          TFunction<void___cdecl(void)> *param_4,FText *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8 [88];
  longlong *local_90;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_e8._8_8_ = (param_2->TextData).Reference;
  local_e8._0_8_ = param_1;
  if ((ITextData *)local_e8._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_e8._8_8_ + 8))(local_e8._8_8_,local_f8);
  }
  local_e8._16_4_ = param_2->Flags;
  local_e8._24_8_ = (param_5->TextData).Reference;
  if ((ITextData *)local_e8._24_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_e8._24_8_ + 8))(local_e8._24_8_,local_f8);
  }
  local_e8._32_4_ = param_5->Flags;
  local_e8._48_8_ = *(undefined8 *)param_3;
  local_e8[0x28] = true;
  local_90 = (longlong *)0x0;
  if (local_e8._48_8_ != 0) {
    puVar1 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,local_e8 + 0x40);
  }
  local_88 = *(longlong *)param_4;
  local_60 = (longlong *)0x0;
  if (local_88 != 0) {
    puVar1 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,local_78);
  }
  local_58 = 0;
  local_30 = (longlong *)0x0;
  RegisterPrimitiveColorHandler(this,(FPrimitiveColorHandler *)local_e8);
  if (local_58 != 0) {
    plVar2 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar2 = local_30;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_88 != 0) {
    plVar2 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar2 = local_60;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_e8._48_8_ != 0) {
    plVar2 = (longlong *)(local_e8 + 0x40);
    if (local_90 != (longlong *)0x0) {
      plVar2 = local_90;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((ITextData *)local_e8._24_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_e8._24_8_ + 0x10))();
  }
  if ((ITextData *)local_e8._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_e8._8_8_ + 0x10))();
  }
  return;
}

// RegisterPrimitiveColorHandler @ 1473affe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FActorPrimitiveColorHandler::RegisterPrimitiveColorHandler
          (FActorPrimitiveColorHandler *this,FName param_1,FText *param_2,bool param_3,
          TFunction<FLinearColor___cdecl(UPrimitiveComponent_const_*)> *param_4,
          TFunction<void___cdecl(void)> *param_5,FText *param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  undefined1 local_f8 [88];
  longlong *local_a0;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_f8._8_8_ = (param_2->TextData).Reference;
  local_f8._0_8_ = param_1;
  if ((ITextData *)local_f8._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_f8._8_8_ + 8))(local_f8._8_8_,local_108);
  }
  local_f8._16_4_ = param_2->Flags;
  local_f8._24_8_ = (param_6->TextData).Reference;
  if ((ITextData *)local_f8._24_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_f8._24_8_ + 8))(local_f8._24_8_,local_108);
  }
  local_f8._32_4_ = param_6->Flags;
  local_f8._48_8_ = *(undefined8 *)param_4;
  local_a0 = (longlong *)0x0;
  local_f8[0x28] = param_3;
  if (local_f8._48_8_ != 0) {
    puVar1 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,local_f8 + 0x40);
  }
  local_98 = *(longlong *)param_5;
  local_70 = (longlong *)0x0;
  if (local_98 != 0) {
    puVar1 = (undefined8 *)&param_5->field_0x10;
    if (*(undefined8 **)&param_5->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_5->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,local_88);
  }
  local_68 = 0;
  local_40 = (longlong *)0x0;
  RegisterPrimitiveColorHandler(this,(FPrimitiveColorHandler *)local_f8);
  if (local_68 != 0) {
    plVar2 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar2 = local_40;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_70 != (longlong *)0x0) {
      plVar2 = local_70;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_f8._48_8_ != 0) {
    plVar2 = (longlong *)(local_f8 + 0x40);
    if (local_a0 != (longlong *)0x0) {
      plVar2 = local_a0;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((ITextData *)local_f8._24_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_f8._24_8_ + 0x10))();
  }
  if ((ITextData *)local_f8._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_f8._8_8_ + 0x10))();
  }
  return;
}

// SetActivePrimitiveColorHandler @ 1473b44a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FActorPrimitiveColorHandler::SetActivePrimitiveColorHandler
          (FActorPrimitiveColorHandler *this,FName param_1,UWorld *param_2)

{
  FName FVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  undefined1 *puVar5;
  FName FVar6;
  FName FVar7;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  FVar4 = FVar7;
  if (*(int *)&(this->Handlers).field_0x8 != *(int *)&(this->Handlers).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Handlers).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Handlers).field_0x38;
    }
    uVar3 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(this->Handlers).field_0x48 - 1U & param_1.Number + uVar3)
                               * 4);
    if (uVar3 != 0xffffffff) {
      do {
        FVar4 = (FName)((longlong)(int)uVar3 * 0xe0 + *(longlong *)&this->Handlers);
        if (*(FName *)FVar4 == param_1) break;
        uVar3 = *(uint *)((longlong)FVar4 + 0xd0);
        FVar4 = FVar7;
      } while (uVar3 != 0xffffffff);
    }
  }
  FVar1 = (FName)this->ActivePrimitiveColorHandler;
  FVar6 = (FName)((longlong)FVar4 + 0x10);
  if (FVar4 == (FName)0x0) {
    FVar6 = FVar7;
  }
  if (FVar6 == FVar1) {
    bVar2 = false;
  }
  else {
    if ((FVar1 != (FName)0x0) &&
       (((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)> *)
        ((longlong)FVar1 + 0x90))->Callable != (_func___cdecl_void_void_ptr *)0x0)) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>::
      operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>
                  *)((longlong)FVar1 + 0x90));
    }
    this->ActivePrimitiveColorHandler = (FPrimitiveColorHandler *)FVar6;
    FVar4 = param_1;
    if (FVar6 == (FName)0x0) {
      FVar4 = FVar7;
    }
    this->ActivePrimitiveColorHandlerName = FVar4;
    if ((FVar6 != (FName)0x0) && (*(longlong *)((longlong)FVar6 + 0x60) != 0)) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>::
      operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>
                  *)((longlong)FVar6 + 0x60));
    }
    RefreshPrimitiveColorHandler(this,param_1,param_2);
    bVar2 = true;
  }
  return bVar2;
}

// UnregisterPrimitiveColorHandler @ 1473bb600

void __thiscall
FActorPrimitiveColorHandler::UnregisterPrimitiveColorHandler
          (FActorPrimitiveColorHandler *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TFunction<void___cdecl(void)> *this_00;
  undefined1 *puVar5;
  FName local_res18 [2];
  
  if (param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InHandlerName.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActorPrimitiveColorHandler.cpp"
                       ,0x35,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Handlers).field_0x8 != *(int *)&(this->Handlers).field_0x34) {
    puVar5 = *(undefined1 **)&(this->Handlers).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->Handlers).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->Handlers).field_0x48 - 1U & param_1.Number + uVar3) *
                              4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)((longlong)iVar4 * 0xe0 + *(longlong *)&this->Handlers) == param_1)
        goto LAB_1473bb6c2;
        iVar4 = *(int *)((longlong)iVar4 * 0xe0 + 0xd0 + *(longlong *)&this->Handlers);
      } while (iVar4 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Handlers.Contains(InHandlerName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ActorPrimitiveColorHandler.cpp"
                     ,0x36,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1473bb6c2:
  local_res18[0] = param_1;
  if (*(int *)&(this->Handlers).field_0x8 != *(int *)&(this->Handlers).field_0x34) {
    uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler>,TDefaultMapHashableKeyFuncs<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler>,TDefaultMapHashableKeyFuncs<FName,FActorPrimitiveColorHandler::FPrimitiveColorHandler,0>,FDefaultSetAllocator>
                         *)&this->Handlers,param_1.Number + uVar3,local_res18);
  }
  if (param_1 == this->ActivePrimitiveColorHandlerName) {
    if ((this->ActivePrimitiveColorHandler != (FPrimitiveColorHandler *)0x0) &&
       (this_00 = &this->ActivePrimitiveColorHandler->DeactivateFunc,
       *(longlong *)&this_00->field_0x0 != 0)) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>::
      operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(void)>
                  *)this_00);
    }
    (this->ActivePrimitiveColorHandlerName).ComparisonIndex = 0;
    (this->ActivePrimitiveColorHandlerName).Number = 0;
    this->ActivePrimitiveColorHandler = (FPrimitiveColorHandler *)0x0;
  }
  return;
}

// <lambda_invoker_cdecl> @ 148aaafc0

void __cdecl FActorPrimitiveColorHandler::<lambda_29>::<lambda_invoker_cdecl>(void)

{
  return;
}

