// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 7

// StaticClass @ 1468daf60

UClass * __cdecl UWidgetAnimationDelegateBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetAnimationDelegateBinding",
               &Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.InnerSingleton,
               StaticRegisterNativesUWidgetAnimationDelegateBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetAnimationDelegateBinding>,
               InternalVTableHelperCtorCaller<UWidgetAnimationDelegateBinding>,local_res8,
               UDynamicBlueprintBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.InnerSingleton;
}

// UWidgetAnimationDelegateBinding @ 1469027b0

UWidgetAnimationDelegateBinding * __thiscall
UWidgetAnimationDelegateBinding::UWidgetAnimationDelegateBinding
          (UWidgetAnimationDelegateBinding *this,FVTableHelper *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetAnimationDelegateBinding__6B_;
  (this->WidgetAnimationDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetAnimationDelegateBindings).ArrayNum = 0;
  (this->WidgetAnimationDelegateBindings).ArrayMax = 0;
  return this;
}

// UWidgetAnimationDelegateBinding @ 1469027f0

UWidgetAnimationDelegateBinding * __thiscall
UWidgetAnimationDelegateBinding::UWidgetAnimationDelegateBinding
          (UWidgetAnimationDelegateBinding *this,FObjectInitializer *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UWidgetAnimationDelegateBinding__6B_;
  (this->WidgetAnimationDelegateBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WidgetAnimationDelegateBindings).ArrayNum = 0;
  (this->WidgetAnimationDelegateBindings).ArrayMax = 0;
  return this;
}

// ~UWidgetAnimationDelegateBinding @ 146904fb0

void __thiscall
UWidgetAnimationDelegateBinding::~UWidgetAnimationDelegateBinding
          (UWidgetAnimationDelegateBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWidgetAnimationDelegateBinding__6B_;
  pFVar1 = (this->WidgetAnimationDelegateBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDynamicBlueprintBinding::~UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this);
  return;
}

// BindDynamicDelegates @ 14690cf30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWidgetAnimationDelegateBinding::BindDynamicDelegates
          (UWidgetAnimationDelegateBinding *this,UObject *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  UStruct *pUVar3;
  FName FVar4;
  code *pcVar5;
  FField *pFVar6;
  bool bVar7;
  uint uVar8;
  UClass *pUVar9;
  UWidgetAnimation *pUVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FName local_res18;
  longlong local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FWeakObjectPtr local_e0;
  undefined8 local_d8;
  TFieldIterator<FObjectProperty> local_d0;
  UObject *local_b8;
  FName local_b0;
  FString local_a8;
  FDestructionSentinel local_98;
  undefined1 local_80 [16];
  undefined8 local_70;
  FString local_68;
  FReadAccessScope local_58;
  
  if (param_1 != (UObject *)0x0) {
    pUVar9 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if (((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar9->_padding_)) && (uVar12 = 0, 0 < (this->WidgetAnimationDelegateBindings).ArrayNum))
    {
      local_res20 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar12 < (this->WidgetAnimationDelegateBindings).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar3 = *(UStruct **)&param_1->field_0x10;
        pFVar11 = (this->WidgetAnimationDelegateBindings).AllocatorInstance.Data + local_res20;
        FVar4 = *(FName *)(pFVar11 + 4);
        if (FVar4 != (FName)0x0) {
          if (pUVar3 == (UStruct *)0x0) {
            local_d0.Field = (FField *)0x0;
          }
          else {
            local_d0.Field = pUVar3->ChildProperties;
          }
          local_d0.InterfaceIndex = -1;
          local_d0.bIncludeSuper = true;
          local_d0.bIncludeDeprecated = true;
          local_d0.bIncludeInterface = false;
          local_d0.Struct = pUVar3;
          TFieldIterator<FObjectProperty>::IterateToNext(&local_d0);
          pFVar6 = local_d0.Field;
          while (local_d0.Field = pFVar6, pFVar6 != (FField *)0x0) {
            bVar7 = IsThisNotNull(pFVar6,"FField::GetFName");
            if (bVar7) {
              local_res18 = pFVar6->NamePrivate;
            }
            else {
              local_res18.ComparisonIndex.Value = 0;
              local_res18.Number = 0;
            }
            if (local_res18 == FVar4) {
              if (pFVar6 != (FField *)0x0) {
                pUVar10 = (UWidgetAnimation *)
                          (**(code **)(pFVar6->_padding_ + 0x208))(pFVar6,param_1,0);
                if (pUVar10 != (UWidgetAnimation *)0x0) {
                  pUVar9 = UWidgetAnimation::StaticClass();
                  iVar2 = (int)pUVar9->_padding_;
                  if ((iVar2 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                      &pUVar9->_padding_)) {
                    local_e8.AccessDetector.State =
                         (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
                    local_e0.ObjectIndex = 0;
                    local_e0.ObjectSerialNumber = 0;
                    local_d8 = 0;
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                              (&local_e8,(FWriteAccessScope *)&local_98);
                    local_b8 = param_1;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable(param_1);
                    }
                    FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_b8);
                    local_d8 = *(undefined8 *)(pFVar11 + 0xc);
                    if (local_98.bDestroyed == false) {
                      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
                    }
                    FVar4 = *(FName *)(pFVar11 + 0x14);
                    FVar1 = *pFVar11;
                    local_80._0_8_ = 0;
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                              (&local_e8,&local_58);
                    local_80._8_4_ = local_e0.ObjectIndex;
                    local_80._12_4_ = local_e0.ObjectSerialNumber;
                    local_70 = local_d8;
                    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                    ~FReadAccessScope(&local_58);
                    UUserWidget::BindToAnimationEvent
                              ((UUserWidget *)param_1,pUVar10,
                               (FWidgetAnimationDynamicEvent *)local_80,(EWidgetAnimationEvent)FVar1
                               ,FVar4);
                    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                              (&local_e8.AccessDetector);
                    goto LAB_14690d26a;
                  }
                }
                bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<5310078916579295260>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimationDelegateBinding.cpp"
                                   ,0x1c,"AnimationPropData");
                if (bVar7) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                goto LAB_14690d26a;
              }
              break;
            }
            local_d0.Field = pFVar6->Next;
            TFieldIterator<FObjectProperty>::IterateToNext(&local_d0);
            pFVar6 = local_d0.Field;
          }
        }
        if (1 < (byte)LogUMG._0_1_) {
          local_b0 = *(FName *)(*(longlong *)&param_1->field_0x10 + 0x18);
          ::FName::ToString(&local_b0,&local_a8);
          ::FName::ToString((FName *)(pFVar11 + 4),&local_68);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
LAB_14690d26a:
        uVar12 = uVar12 + 1;
        local_res20 = local_res20 + 0x1c;
      } while ((int)uVar12 < (this->WidgetAnimationDelegateBindings).ArrayNum);
    }
  }
  return;
}

// GetPrivateStaticClass @ 146923330

UClass * __cdecl UWidgetAnimationDelegateBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetAnimationDelegateBinding",
               &Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.InnerSingleton,
               StaticRegisterNativesUWidgetAnimationDelegateBinding,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetAnimationDelegateBinding>,
               InternalVTableHelperCtorCaller<UWidgetAnimationDelegateBinding>,local_res8,
               UDynamicBlueprintBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.InnerSingleton;
}

// StaticRegisterNativesUWidgetAnimationDelegateBinding @ 146945bf0

void __cdecl
UWidgetAnimationDelegateBinding::StaticRegisterNativesUWidgetAnimationDelegateBinding(void)

{
  return;
}

