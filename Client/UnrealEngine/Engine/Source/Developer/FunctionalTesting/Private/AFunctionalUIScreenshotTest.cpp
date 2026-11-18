// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 12

// StaticClass @ 148c73210

UClass * __cdecl AFunctionalUIScreenshotTest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalUIScreenshotTest",
               &Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.InnerSingleton,
               StaticRegisterNativesAFunctionalUIScreenshotTest,0x508,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<AFunctionalUIScreenshotTest>,
               InternalVTableHelperCtorCaller<AFunctionalUIScreenshotTest>,local_res8,
               AScreenshotFunctionalTestBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.InnerSingleton;
}

// AFunctionalUIScreenshotTest @ 148c7e940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

AFunctionalUIScreenshotTest * __thiscall
AFunctionalUIScreenshotTest::AFunctionalUIScreenshotTest
          (AFunctionalUIScreenshotTest *this,FVTableHelper *param_1)

{
  AScreenshotFunctionalTestBase::AScreenshotFunctionalTestBase
            ((AScreenshotFunctionalTestBase *)this,param_1);
  this->_padding_ = (longlong)&___7AFunctionalUIScreenshotTest__6B_;
  (this->WidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SpawnedWidget).field0_0x0.DebugPtr = (UUserWidget *)0x0;
  (this->ScreenshotRT).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->PreviousDebugCanvasVisible).bIsSet = false;
  this->TestFixedDeltaTime = 0.016666666666666666;
  return this;
}

// AFunctionalUIScreenshotTest @ 148c7e9a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

AFunctionalUIScreenshotTest * __thiscall
AFunctionalUIScreenshotTest::AFunctionalUIScreenshotTest
          (AFunctionalUIScreenshotTest *this,FObjectInitializer *param_1)

{
  AScreenshotFunctionalTestBase::AScreenshotFunctionalTestBase
            ((AScreenshotFunctionalTestBase *)this,param_1);
  this->bHideDebugCanvas = true;
  this->WidgetLocation = Viewport;
  this->_padding_ = (longlong)&___7AFunctionalUIScreenshotTest__6B_;
  this->TestFixedDeltaTime = 0.016666666666666666;
  (this->WidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SpawnedWidget).field0_0x0.DebugPtr = (UUserWidget *)0x0;
  (this->ScreenshotRT).field0_0x0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  (this->PreviousDebugCanvasVisible).bIsSet = false;
  return this;
}

// ~AFunctionalUIScreenshotTest @ 148c80ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AFunctionalUIScreenshotTest::~AFunctionalUIScreenshotTest(AFunctionalUIScreenshotTest *this)

{
  this->_padding_ = (longlong)&___7AScreenshotFunctionalTestBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  AFunctionalTest::~AFunctionalTest((AFunctionalTest *)this);
  return;
}

// EndPlay @ 148c8d650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall AFunctionalUIScreenshotTest::EndPlay(AFunctionalUIScreenshotTest *this,Type param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  IConsoleVariable *this_00;
  longlong *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 local_58 [16];
  FString local_48;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((char)this->_padding_ != '\0') {
    pcVar1 = *(code **)(this->_padding_ + 0x880);
    ::FString::FString(&local_48,L"Test was aborted");
    (*pcVar1)(this,1,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  AActor::EndPlay((AActor *)this,param_1);
  if ((this->PreviousDebugCanvasVisible).bIsSet != false) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    this_00 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"Slate.GameLayer.DebugCanvasVisible",1);
    if (this_00 != (IConsoleVariable *)0x0) {
      if ((this->PreviousDebugCanvasVisible).bIsSet == false) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      IConsoleVariable::Set<bool>
                (this_00,(this->PreviousDebugCanvasVisible).TypedValue,ECVF_SetByCode,(FName)0x0);
      if ((this->PreviousDebugCanvasVisible).bIsSet != false) {
        (this->PreviousDebugCanvasVisible).bIsSet = false;
      }
    }
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  plVar4 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"Slate.UseFixedDeltaTime",1);
  if (plVar4 != (longlong *)0x0) {
    bVar3 = this->bWasPreviouslyUsingFixedDeltaTime;
    local_30 = 0;
    local_28 = 0;
    local_34 = 1;
    local_20 = 0x1000000;
    local_24 = 0xf000000;
    local_38 = (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar2 = *plVar4;
    local_38 = local_38 & 0xff000000;
    uVar5 = (**(code **)(lVar2 + 0xa8))(plVar4,local_58,&local_38);
    puVar6 = &u_0;
    if (bVar3 != false) {
      puVar6 = &u_1;
    }
    (**(code **)(lVar2 + 0xb0))(plVar4,puVar6,uVar5);
    FSlateApplication::SetFixedDeltaTime(this->PreviousFixedDeltaTime);
  }
  this->NumTickPassed = 0;
  return;
}

// GetPrivateStaticClass @ 148c91440

UClass * __cdecl AFunctionalUIScreenshotTest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalUIScreenshotTest",
               &Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.InnerSingleton,
               StaticRegisterNativesAFunctionalUIScreenshotTest,0x508,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<AFunctionalUIScreenshotTest>,
               InternalVTableHelperCtorCaller<AFunctionalUIScreenshotTest>,local_res8,
               AScreenshotFunctionalTestBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalUIScreenshotTest.InnerSingleton;
}

// IsReady_Implementation @ 148c93f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
AFunctionalUIScreenshotTest::IsReady_Implementation(AFunctionalUIScreenshotTest *this)

{
  if ((double)*(float *)&this->_padding_ <=
      (double)this->NumTickPassed * FSlateApplication::FixedDeltaTime) {
    return *(int *)((longlong)&this->_padding_ + 4) < this->NumTickPassed;
  }
  return false;
}

// OnScreenshotTakenAndCompared @ 148c95d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
AFunctionalUIScreenshotTest::OnScreenshotTakenAndCompared(AFunctionalUIScreenshotTest *this)

{
  UUserWidget *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  IConsoleVariable *this_00;
  FString local_18;
  
  pUVar1 = (this->SpawnedWidget).field0_0x0.DebugPtr;
  if (pUVar1 != (UUserWidget *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2d0))();
  }
  lVar2 = this->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  pcVar3 = *(code **)(lVar2 + 0x880);
  ::FString::FString(&local_18,L"");
  (*pcVar3)(this,5,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((this->PreviousDebugCanvasVisible).bIsSet != false) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    this_00 = (IConsoleVariable *)
              (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                        (IConsoleManager::Singleton,L"Slate.GameLayer.DebugCanvasVisible",1);
    if (this_00 != (IConsoleVariable *)0x0) {
      if ((this->PreviousDebugCanvasVisible).bIsSet == false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      IConsoleVariable::Set<bool>
                (this_00,(this->PreviousDebugCanvasVisible).TypedValue,ECVF_SetByCode,(FName)0x0);
      if ((this->PreviousDebugCanvasVisible).bIsSet != false) {
        (this->PreviousDebugCanvasVisible).bIsSet = false;
      }
    }
  }
  return;
}

// PrepareTest @ 148c971b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall AFunctionalUIScreenshotTest::PrepareTest(AFunctionalUIScreenshotTest *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  FSceneViewport *pFVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  UClass *pUVar8;
  UTextureRenderTarget2D *pUVar9;
  UWorld *pUVar10;
  APlayerController *pAVar11;
  UUserWidget *pUVar12;
  code **ppcVar13;
  ulonglong uVar14;
  undefined1 auStack_1e8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6 [6];
  undefined8 local_1b0;
  uint local_1a8;
  uint local_1a4;
  FName local_1a0;
  undefined8 local_198;
  TSharedPtr<SViewport,1> local_190;
  UClass *local_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined8 local_170;
  undefined1 local_168;
  undefined4 local_164;
  undefined4 local_160;
  uint local_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined1 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_138 [12];
  undefined1 local_12c [20];
  undefined1 local_118 [128];
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  AScreenshotFunctionalTestBase::PrepareTest((AScreenshotFunctionalTestBase *)this);
  if (this->bHideDebugCanvas != false) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    plVar4 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,L"Slate.GameLayer.DebugCanvasVisible",1);
    if (plVar4 != (longlong *)0x0) {
      bVar3 = (bool)(**(code **)(*plVar4 + 0xc0))(plVar4);
      if ((TOptional<bool> *)local_1b6 != &this->PreviousDebugCanvasVisible) {
        (this->PreviousDebugCanvasVisible).TypedValue = bVar3;
        (this->PreviousDebugCanvasVisible).bIsSet = true;
      }
      lVar1 = *plVar4;
      local_1b0 = 0;
      local_178 = 0xe000000;
      local_174 = 0;
      local_170 = 0;
      local_168 = 0;
      local_164 = 0xf000000;
      local_160 = 0x1000000;
      uVar5 = (**(code **)(lVar1 + 0xa8))(plVar4,local_138,&local_178);
      (**(code **)(lVar1 + 0xb0))(plVar4,&u_0,uVar5);
    }
  }
  UGameViewportClient::GetGameViewportWidget((GEngine->GameViewport).field0_0x0.DebugPtr,&local_190)
  ;
  if (local_190.Object == (SViewport *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GameViewportWidget.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalUIScreenshotTest.cpp"
                       ,0x4a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_190.Object == (SViewport *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if ((local_190.Object)->bRenderDirectlyToWindow == false) {
    pFVar6 = UGameViewportClient::GetGameViewport((GEngine->GameViewport).field0_0x0.DebugPtr);
    (**(code **)(pFVar6->_padding_ + 0x28))(&pFVar6->_padding_,&local_1a8);
    local_1b7 = (code)0x12;
    local_1b8 = (code)0x0;
    plVar4 = &pFVar6->_padding_;
    if (pFVar6 == (FSceneViewport *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4[0x14] != 0) {
      local_98[0] = (code *)0x0;
      local_70 = FMemory::Malloc(0x20,8);
      *local_70 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`GetBackbufferInfo'::`2'::<lambda_1>,1,1>::
                           _vftable_;
      local_70[1] = (code *)plVar4;
      local_70[2] = (code *)&local_1b7;
      local_70[3] = (code *)&local_1b8;
      if (local_70 + 1 != (code **)0x0) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`GetBackbufferInfo'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_GetBackbufferInfo_::__l2::TSTR_GetBackbufferFormatCmd45>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_68._0_8_ = local_98[0];
        local_40 = local_70;
        local_70 = (code **)0x0;
        local_68._16_8_ = local_88[0];
        local_68._24_8_ = local_88[1];
        local_68._32_8_ = local_88[2];
        local_98[0] = (code *)0x0;
        local_38 = 2;
        pFVar7 = (FRenderCommandTag *)
                 TRenderCommandTag<`GetBackbufferInfo'::__l2::TSTR_GetBackbufferFormatCmd45>::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_68,pFVar7);
        uVar14 = (ulonglong)local_38;
        if (2 < uVar14) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_68._0_8_ != (code *)0x0) {
            ppcVar13 = (code **)(local_68 + 0x10);
            if (local_40 != (code **)0x0) {
              ppcVar13 = local_40;
            }
            (**(code **)(*ppcVar13 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14])(local_68);
        }
      }
      if (local_98[0] != (code *)0x0) {
        ppcVar13 = local_98 + 2;
        if (local_70 != (code **)0x0) {
          ppcVar13 = local_70;
        }
        (**(code **)(*ppcVar13 + 0x10))();
      }
      FlushRenderingCommands();
    }
    pUVar9 = (this->ScreenshotRT).field0_0x0.DebugPtr;
    if (pUVar9 == (UTextureRenderTarget2D *)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_118,pUVar8);
      local_118._8_8_ = this;
      pUVar9 = (UTextureRenderTarget2D *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
      if (local_118._64_8_ != 0) {
        plVar4 = (longlong *)(local_118 + 0x50);
        if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
          plVar4 = (longlong *)local_118._104_8_;
        }
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UTextureRenderTarget2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->ScreenshotRT).field0_0x0.DebugPtr = pUVar9;
    }
    (pUVar9->ClearColor).field0_0x0._s_0 =
         (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
    UTextureRenderTarget2D::InitCustomFormat
              ((this->ScreenshotRT).field0_0x0.DebugPtr,local_1a8,local_1a4,(EPixelFormat)local_1b7,
               local_1b8 == (code)0x0);
  }
  pUVar10 = AActor::GetWorld((AActor *)this);
  pAVar11 = UGameplayStatics::GetPlayerController((UObject *)pUVar10,0);
  local_180 = (this->WidgetClass).Class.field0_0x0.DebugPtr;
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_180 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_180);
  }
  pUVar12 = CreateWidget<UUserWidget,APlayerController_*>
                      (pAVar11,(TSubclassOf<UUserWidget>)&local_180,local_1a0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar12 == (UUserWidget *)0x0)) {
    (this->SpawnedWidget).field0_0x0.DebugPtr = pUVar12;
    if (pUVar12 == (UUserWidget *)0x0) goto LAB_148c97653;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
    (this->SpawnedWidget).field0_0x0.DebugPtr = pUVar12;
  }
  if (this->WidgetLocation == Viewport) {
    UUserWidget::AddToViewport(pUVar12,0);
  }
  else {
    UUserWidget::AddToPlayerScreen(pUVar12,0);
  }
  pUVar12 = (this->SpawnedWidget).field0_0x0.DebugPtr;
  (**(code **)(pUVar12->_padding_ + 0x2c0))(pUVar12,3);
LAB_148c97653:
  this->NumTickPassed = 0;
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  plVar4 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"Slate.UseFixedDeltaTime",1);
  if (plVar4 != (longlong *)0x0) {
    bVar3 = (bool)(**(code **)(*plVar4 + 0xc0))(plVar4);
    this->bWasPreviouslyUsingFixedDeltaTime = bVar3;
    this->PreviousFixedDeltaTime = FSlateApplication::FixedDeltaTime;
    FSlateApplication::SetFixedDeltaTime(this->TestFixedDeltaTime);
    local_198 = 0;
    local_150 = 0;
    local_148 = 0;
    local_154 = 1;
    local_140 = 0x1000000;
    local_144 = 0xf000000;
    local_158 = (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar1 = *plVar4;
    local_158 = local_158 & 0xff000000;
    uVar5 = (**(code **)(lVar1 + 0xa8))(plVar4,local_12c,&local_158);
    (**(code **)(lVar1 + 0xb0))(plVar4,&u_1,uVar5);
  }
  UAutomationBlueprintFunctionLibrary::FinishLoadingBeforeScreenshot();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.SharedReferenceCount.ReferenceController);
  return;
}

// RequestScreenshot @ 148c97f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AFunctionalUIScreenshotTest::RequestScreenshot(AFunctionalUIScreenshotTest *this)

{
  float fVar1;
  UGameViewportClient *this_00;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  uint uVar5;
  FSceneViewport *pFVar6;
  FRenderCommandList *pFVar7;
  FCommandList *pFVar8;
  FRenderCommandTag *pFVar9;
  FWidgetRenderer *this_01;
  FWidgetRenderer *pFVar10;
  FGeometry *pFVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  uint uVar14;
  ulonglong uVar15;
  FWidgetRenderer *pFVar16;
  double dVar17;
  double dVar18;
  undefined1 auStackY_1c8 [32];
  int local_188;
  int iStack_184;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_180;
  TSharedPtr<SViewport,1> local_170;
  TSharedRef<SWidget,1> local_160;
  TVector2<double>_u_0 local_148;
  code *local_138 [2];
  undefined **local_128;
  FWidgetRenderer *pFStack_120;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_118;
  undefined ***local_110;
  code *local_108 [2];
  undefined **local_f8;
  TObjectPtr<UTextureRenderTarget2D>_u_0 TStack_f0;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_e8;
  undefined ***local_e0;
  undefined1 local_d8 [16];
  undefined **local_c8;
  FWidgetRenderer *pFStack_c0;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_b8;
  undefined ***local_b0;
  byte local_a8;
  undefined1 local_98 [16];
  undefined **local_88;
  TObjectPtr<UTextureRenderTarget2D>_u_0 TStack_80;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_78;
  undefined ***local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  AScreenshotFunctionalTestBase::RequestScreenshot((AScreenshotFunctionalTestBase *)this);
  this_00 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  UGameViewportClient::GetGameViewportWidget(this_00,&local_170);
  pFVar6 = UGameViewportClient::GetGameViewport(this_00);
  (**(code **)(pFVar6->_padding_ + 0x28))(&pFVar6->_padding_,&local_188);
  pFVar16 = (FWidgetRenderer *)0x0;
  local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.ArrayMax = 0;
  local_180.ArrayNum = 0;
  if (local_170.Object == (SViewport *)0x0) goto LAB_148c98489;
  if ((local_170.Object == (SViewport *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_170.Object)->bRenderDirectlyToWindow == false) {
    this_01 = ::operator_new(0x40);
    pFVar10 = pFVar16;
    if (((this_01 == (FWidgetRenderer *)0x0) ||
        (pFVar10 = FWidgetRenderer::FWidgetRenderer(this_01,true,false),
        pFVar10 == (FWidgetRenderer *)0x0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("WidgetRenderer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalUIScreenshotTest.cpp"
                           ,0xf7,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    dVar17 = (double)local_188;
    dVar18 = (double)iStack_184;
    if ((local_170.Object == (SViewport *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar11 = SWidget::GetCachedGeometry((SWidget *)local_170.Object);
    fVar1 = pFVar11->Scale;
    if ((local_170.Object == (SViewport *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar3.ReferenceController = local_170.SharedReferenceCount.ReferenceController;
    if (local_170.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_170.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_170.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_170.Object == (SViewport *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_160.Object = (SWidget *)local_170.Object;
    local_160.SharedReferenceCount.ReferenceController = FVar3.ReferenceController;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar3.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148._s_0.X = dVar17;
    local_148._s_0.Y = dVar18;
    FWidgetRenderer::DrawWidget
              (pFVar10,(this->ScreenshotRT).field0_0x0.DebugPtr,&local_160,fVar1,
               (TVector2<double> *)&local_148._s_0,0.0,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
    FlushRenderingCommands();
    BeginCleanup((FDeferredCleanupInterface *)pFVar10);
    local_e0 = (undefined ***)0x0;
    local_f8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`ReadPixelsFromRT'::`2'::<lambda_1>,1,0>::_vftable_;
    TStack_f0 = (this->ScreenshotRT).field0_0x0;
    local_e8 = &local_180;
    local_108[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`ReadPixelsFromRT'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    pFVar7 = FRenderCommandList::GetInstanceTLS();
    if (pFVar7 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_ReadPixelsFromRT_::__l2::TSTR_ReadScreenshotRTCmd195>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_108);
    }
    else {
      pFVar8 = FRenderCommandList::GetRenderThread(pFVar7);
      local_98._0_8_ = local_108[0];
      local_70 = local_e0;
      local_88 = local_f8;
      TStack_80 = TStack_f0;
      local_78 = local_e8;
      local_108[0] = (code *)0x0;
      local_68 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`ReadPixelsFromRT'::__l2::TSTR_ReadScreenshotRTCmd195>::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar8,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_98,pFVar9);
      uVar15 = (ulonglong)local_68;
      if ((2 < uVar15) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_98._0_8_ != (code *)0x0) {
          pppuVar13 = (undefined ***)(local_98 + 0x10);
          if (local_70 != (undefined ***)0x0) {
            pppuVar13 = local_70;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(local_98);
      }
    }
    if (local_108[0] != (code *)0x0) {
      pppuVar13 = &local_f8;
      pppuVar12 = local_e0;
      goto LAB_148c983fc;
    }
  }
  else {
    pFVar6 = UGameViewportClient::GetGameViewport(this_00);
    FlushRenderingCommands();
    local_110 = (undefined ***)0x0;
    local_128 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`ReadBackbuffer'::`2'::<lambda_1>,1,0>::_vftable_;
    local_118 = &local_180;
    pFStack_120 = (FWidgetRenderer *)&pFVar6->_padding_;
    if (pFVar6 == (FSceneViewport *)0x0) {
      pFStack_120 = pFVar16;
    }
    local_138[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`ReadBackbuffer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    pFVar7 = FRenderCommandList::GetInstanceTLS();
    if (pFVar7 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_ReadBackbuffer_::__l2::TSTR_CopyBackbufferCmd179>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_138);
    }
    else {
      pFVar8 = FRenderCommandList::GetRenderThread(pFVar7);
      local_d8._0_8_ = local_138[0];
      local_b0 = local_110;
      local_c8 = local_128;
      pFStack_c0 = pFStack_120;
      local_b8 = local_118;
      local_138[0] = (code *)0x0;
      local_a8 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`ReadBackbuffer'::__l2::TSTR_CopyBackbufferCmd179>::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar8,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_d8,pFVar9);
      uVar15 = (ulonglong)local_a8;
      if ((2 < uVar15) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_d8._0_8_ != (code *)0x0) {
          pppuVar13 = (undefined ***)(local_d8 + 0x10);
          if (local_b0 != (undefined ***)0x0) {
            pppuVar13 = local_b0;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(local_d8);
      }
    }
    if (local_138[0] != (code *)0x0) {
      pppuVar13 = &local_128;
      pppuVar12 = local_110;
LAB_148c983fc:
      if (pppuVar12 != (undefined ***)0x0) {
        pppuVar13 = pppuVar12;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  FlushRenderingCommands();
  pFVar10 = pFVar16;
  if (0 < local_180.ArrayNum) {
    do {
      uVar14 = (uint)pFVar16;
      uVar5 = 0;
      if ((int)uVar14 < local_180.ArrayNum) {
        uVar5 = ~uVar14 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar16 = (FWidgetRenderer *)(ulonglong)(uVar14 + 1);
      ((undefined1 *)((longlong)&pFVar10->_padding_ + 3))
      [(longlong)local_180.AllocatorInstance.Data] = 0xff;
      pFVar10 = (FWidgetRenderer *)((longlong)&pFVar10->_padding_ + 4);
    } while ((int)(uVar14 + 1) < local_180.ArrayNum);
  }
LAB_148c98489:
  if ((local_180.ArrayNum != iStack_184 * local_188) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutColorData.Num() == ScreenshotSize.X * ScreenshotSize.Y",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalUIScreenshotTest.cpp"
                         ,0x106,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TMulticastDelegate<void___cdecl(int,int,TArray<FColor,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&UGameViewportClient::ScreenshotCapturedDelegate,local_188,iStack_184,&local_180);
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_170.SharedReferenceCount.ReferenceController);
  return;
}

// StaticRegisterNativesAFunctionalUIScreenshotTest @ 148c9d3d0

void __cdecl AFunctionalUIScreenshotTest::StaticRegisterNativesAFunctionalUIScreenshotTest(void)

{
  return;
}

// Tick @ 148c9e700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AFunctionalUIScreenshotTest::Tick(AFunctionalUIScreenshotTest *this,float param_1)

{
  this->NumTickPassed = this->NumTickPassed + 1;
  AFunctionalTest::Tick((AFunctionalTest *)this,param_1);
  return;
}

