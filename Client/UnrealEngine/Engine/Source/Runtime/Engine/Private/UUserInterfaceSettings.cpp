// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1488edea0

UClass * __cdecl UUserInterfaceSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserInterfaceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"UserInterfaceSettings",
               &Z_Registration_Info_UClass_UUserInterfaceSettings.InnerSingleton,
               StaticRegisterNativesUUserInterfaceSettings,0x2b0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserInterfaceSettings>,
               InternalVTableHelperCtorCaller<UUserInterfaceSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserInterfaceSettings.InnerSingleton;
}

// UUserInterfaceSettings @ 14890b910

UUserInterfaceSettings * __thiscall
UUserInterfaceSettings::UUserInterfaceSettings(UUserInterfaceSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UUserInterfaceSettings__6B_;
  *(undefined8 *)&this->HardwareCursors = 0;
  *(undefined8 *)&(this->HardwareCursors).field_0x8 = 0;
  *(undefined8 *)&(this->HardwareCursors).field_0x20 = 0;
  *(undefined4 *)&(this->HardwareCursors).field_0x28 = 0;
  *(undefined4 *)&(this->HardwareCursors).field_0x2c = 0x80;
  *(undefined4 *)&(this->HardwareCursors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HardwareCursors).field_0x34 = 0;
  *(undefined8 *)&(this->HardwareCursors).field_0x40 = 0;
  *(undefined4 *)&(this->HardwareCursors).field_0x48 = 0;
  *(undefined8 *)&this->SoftwareCursors = 0;
  *(undefined8 *)&(this->SoftwareCursors).field_0x8 = 0;
  *(undefined8 *)&(this->SoftwareCursors).field_0x20 = 0;
  *(undefined4 *)&(this->SoftwareCursors).field_0x28 = 0;
  *(undefined4 *)&(this->SoftwareCursors).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoftwareCursors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoftwareCursors).field_0x34 = 0;
  *(undefined8 *)&(this->SoftwareCursors).field_0x40 = 0;
  *(undefined4 *)&(this->SoftwareCursors).field_0x48 = 0;
  *(undefined8 *)&this->DefaultCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->DefaultCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->DefaultCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->TextEditBeamCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->TextEditBeamCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->TextEditBeamCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->TextEditBeamCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->CrosshairsCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->CrosshairsCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->CrosshairsCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->CrosshairsCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->HandCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->HandCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->HandCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->HandCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->GrabHandCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->GrabHandCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->GrabHandCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->GrabHandCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->GrabHandClosedCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->GrabHandClosedCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->GrabHandClosedCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->GrabHandClosedCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->SlashedCircleCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->SlashedCircleCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->SlashedCircleCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->SlashedCircleCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->CustomScalingRuleClass = 0;
  *(undefined8 *)&(this->CustomScalingRuleClass).field_0x8 = 0;
  *(undefined8 *)&(this->CustomScalingRuleClass).field_0x10 = 0;
  *(undefined8 *)&(this->CustomScalingRuleClass).field_0x18 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->UIScaleCurve);
  (this->DesignScreenSize).field0_0x0._s_0.X = 0x780;
  (this->DesignScreenSize).field0_0x0._s_0.Y = 0x438;
  (this->CursorClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CursorClasses).ArrayNum = 0;
  (this->CursorClasses).ArrayMax = 0;
  (this->CustomScalingRuleClassInstance).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->CustomScalingRule).field0_0x0.DebugPtr = (UDPICustomScalingRule *)0x0;
  (this->LastViewportSize).bIsSet = false;
  return this;
}

// UUserInterfaceSettings @ 14890bae0

UUserInterfaceSettings * __thiscall
UUserInterfaceSettings::UUserInterfaceSettings
          (UUserInterfaceSettings *this,FObjectInitializer *param_1)

{
  FName local_res8;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->RenderFocusRule = NavigationOnly;
  this->_padding_ = (longlong)&___7UUserInterfaceSettings__6B_;
  *(undefined8 *)&this->HardwareCursors = 0;
  *(undefined8 *)&(this->HardwareCursors).field_0x8 = 0;
  *(undefined8 *)&(this->HardwareCursors).field_0x20 = 0;
  *(undefined4 *)&(this->HardwareCursors).field_0x28 = 0;
  *(undefined4 *)&(this->HardwareCursors).field_0x2c = 0x80;
  *(undefined4 *)&(this->HardwareCursors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HardwareCursors).field_0x34 = 0;
  *(undefined8 *)&(this->HardwareCursors).field_0x40 = 0;
  *(undefined4 *)&(this->HardwareCursors).field_0x48 = 0;
  *(undefined8 *)&this->SoftwareCursors = 0;
  *(undefined8 *)&(this->SoftwareCursors).field_0x8 = 0;
  *(undefined8 *)&(this->SoftwareCursors).field_0x20 = 0;
  *(undefined4 *)&(this->SoftwareCursors).field_0x28 = 0;
  *(undefined4 *)&(this->SoftwareCursors).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoftwareCursors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SoftwareCursors).field_0x34 = 0;
  *(undefined8 *)&(this->SoftwareCursors).field_0x40 = 0;
  *(undefined4 *)&(this->SoftwareCursors).field_0x48 = 0;
  *(undefined8 *)&this->DefaultCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->DefaultCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->DefaultCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->TextEditBeamCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->TextEditBeamCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->TextEditBeamCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->TextEditBeamCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->CrosshairsCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->CrosshairsCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->CrosshairsCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->CrosshairsCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->HandCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->HandCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->HandCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->HandCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->GrabHandCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->GrabHandCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->GrabHandCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->GrabHandCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->GrabHandClosedCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->GrabHandClosedCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->GrabHandClosedCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->GrabHandClosedCursor_DEPRECATED).field_0x18 = 0;
  *(undefined8 *)&this->SlashedCircleCursor_DEPRECATED = 0;
  *(undefined8 *)&(this->SlashedCircleCursor_DEPRECATED).field_0x8 = 0;
  *(undefined8 *)&(this->SlashedCircleCursor_DEPRECATED).field_0x10 = 0;
  *(undefined8 *)&(this->SlashedCircleCursor_DEPRECATED).field_0x18 = 0;
  this->ApplicationScale = 1.0;
  *(undefined8 *)&this->CustomScalingRuleClass = 0;
  *(undefined8 *)&(this->CustomScalingRuleClass).field_0x8 = 0;
  *(undefined8 *)&(this->CustomScalingRuleClass).field_0x10 = 0;
  *(undefined8 *)&(this->CustomScalingRuleClass).field_0x18 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->UIScaleCurve);
  (this->DesignScreenSize).field0_0x0._s_0.X = 0x780;
  (this->DesignScreenSize).field0_0x0._s_0.Y = 0x438;
  this->bLoadWidgetsOnDedicatedServer = true;
  this->bAuthorizeAutomaticWidgetVariableCreation = true;
  this->bEnableDistanceFieldFontRasterization = false;
  (this->CursorClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CursorClasses).ArrayNum = 0;
  (this->CursorClasses).ArrayMax = 0;
  (this->CustomScalingRuleClassInstance).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->CustomScalingRule).field0_0x0.DebugPtr = (UDPICustomScalingRule *)0x0;
  (this->LastViewportSize).bIsSet = false;
  ::FName::FName(&local_res8,L"UI");
  this->_padding_ = (longlong)local_res8;
  return this;
}

// ~UUserInterfaceSettings @ 14890ebb0

void __thiscall UUserInterfaceSettings::~UUserInterfaceSettings(UUserInterfaceSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UUserInterfaceSettings__6B_;
  pFVar1 = (this->CursorClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UIScaleCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->UIScaleCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->UIScaleCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->UIScaleCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->UIScaleCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->UIScaleCurve).EditorCurveData._padding_);
  pvVar2 = *(void **)&(this->CustomScalingRuleClass).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->SlashedCircleCursor_DEPRECATED).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->GrabHandClosedCursor_DEPRECATED).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->GrabHandCursor_DEPRECATED).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->HandCursor_DEPRECATED).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->CrosshairsCursor_DEPRECATED).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TextEditBeamCursor_DEPRECATED).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->DefaultCursor_DEPRECATED).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->SoftwareCursors).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SoftwareCursors).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SoftwareCursors);
  *(undefined4 *)&(this->HardwareCursors).field_0x48 = 0;
  pvVar2 = *(void **)&(this->HardwareCursors).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FHardwareCursorReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FHardwareCursorReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->HardwareCursors);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// CalculateScale @ 14891bf00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

float __thiscall
UUserInterfaceSettings::CalculateScale
          (UUserInterfaceSettings *this,TIntPoint<int> param_1,bool *param_2)

{
  EUIScalingRule EVar1;
  int iVar2;
  int iVar3;
  FTokenizedMessage *this_00;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FMessageLog *this_01;
  FText *pFVar7;
  TSharedRef<FTokenizedMessage,1> *pTVar8;
  FString *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TSharedRef<FTextToken,1> *pTVar12;
  FRichCurve *this_02;
  int iVar13;
  undefined4 uVar14;
  UObject *pUVar15;
  float fVar16;
  float fVar17;
  FName local_res8;
  TIntPoint<int>_u_0 local_res10;
  TSharedRef<IMessageToken,1> local_f8;
  TSharedRef<FTokenizedMessage,1> local_e8;
  TSharedRef<FTextToken,1> local_d8;
  FText local_c8;
  FText local_b8;
  FString local_a8;
  TSharedRef<FTokenizedMessage,1> local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  FMessageLog local_58;
  
  *param_2 = false;
  EVar1 = this->UIScaleRule;
  local_res10 = param_1.field0_0x0;
  if (EVar1 == Custom) {
    pUVar6 = (this->CustomScalingRuleClassInstance).field0_0x0.DebugPtr;
    if (pUVar6 == (UClass *)0x0) {
      pUVar6 = FSoftClassPath::TryLoadClass<UDPICustomScalingRule>(&this->CustomScalingRuleClass);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (this->CustomScalingRuleClassInstance).field0_0x0.DebugPtr = pUVar6;
      if (pUVar6 == (UClass *)0x0) {
        ::FName::FName(&local_res8,"MapCheck");
        this_01 = FMessageLog::FMessageLog(&local_58,&local_res8);
        pFVar7 = FText::FText(&local_88);
        pTVar8 = FMessageLog::Error(this_01,&local_98,pFVar7);
        this_00 = pTVar8->Object;
        pFVar9 = FSoftObjectPath::ToString
                           ((FSoftObjectPath *)&this->CustomScalingRuleClass,&local_a8);
        pFVar7 = FText::FromString(&local_78,pFVar9);
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_b8,L"Engine",L"CustomScalingRule_NotFound",
                             L"Project Settings - User Interface Custom Scaling Rule \'{0}\' could not be found."
                            );
        pFVar11 = FTextFormat::FTextFormat(&local_68,pFVar10,Default);
        pFVar7 = FText::Format<FText>(&local_c8,pFVar11,pFVar7);
        pTVar12 = FTextToken::Create(&local_d8,pFVar7,true);
        local_f8.Object = (IMessageToken *)pTVar12->Object;
        local_f8.SharedReferenceCount.ReferenceController =
             (pTVar12->SharedReferenceCount).ReferenceController;
        if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FTokenizedMessage::AddToken(this_00,&local_e8,&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        FMessageLog::~FMessageLog(&local_58);
        fVar16 = __real_3f800000;
        *param_2 = true;
        return fVar16;
      }
    }
    pUVar15 = (UObject *)(this->CustomScalingRule).field0_0x0.DebugPtr;
    if (pUVar15 == (UObject *)0x0) {
      if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar6);
      }
      pUVar15 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar6 = Z_Construct_UClass_UDPICustomScalingRule_NoRegister();
      iVar13 = (int)pUVar6->_padding_;
      if (((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar13) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
           &pUVar6->_padding_)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ret->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x1181,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        fVar16 = (float)(*pcVar4)();
        return fVar16;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar15);
      }
      (this->CustomScalingRule).field0_0x0.DebugPtr = (UDPICustomScalingRule *)pUVar15;
    }
    fVar16 = (float)(**(code **)(*(longlong *)pUVar15 + 0x2b0))(pUVar15,param_1.field0_0x0);
    return fVar16;
  }
  iVar13 = param_1.field0_0x0._0_4_;
  local_res10._4_4_ = param_1.field0_0x0._4_4_;
  if (EVar1 == ShortestSide) {
    bVar5 = SBORROW4(iVar13,local_res10._4_4_);
    iVar2 = iVar13 - local_res10._4_4_;
  }
  else {
    if (EVar1 != LongestSide) {
      uVar14 = iVar13;
      if (((EVar1 != Horizontal) && (uVar14 = local_res10._4_4_, EVar1 != Vertical)) &&
         (uVar14 = 0, EVar1 == ScaleToFit)) {
        iVar2 = (this->DesignScreenSize).field0_0x0._s_0.X;
        if ((0 < iVar2) && (iVar3 = (this->DesignScreenSize).field0_0x0._s_0.Y, 0 < iVar3)) {
          fVar16 = (float)iVar13 / (float)iVar2;
          fVar17 = (float)(int)local_res10._4_4_ / (float)iVar3;
          if (fVar17 <= fVar16) {
            fVar16 = fVar17;
          }
          return fVar16;
        }
        return __real_3f800000;
      }
      goto LAB_14891c215;
    }
    bVar5 = SBORROW4(local_res10._4_4_,iVar13);
    iVar2 = local_res10._4_4_ - iVar13;
  }
  uVar14 = local_res10._4_4_;
  if (bVar5 != iVar2 < 0) {
    uVar14 = iVar13;
  }
LAB_14891c215:
  this_02 = FRuntimeFloatCurve::GetRichCurveConst(&this->UIScaleCurve);
  fVar16 = FRichCurve::Eval(this_02,(float)(int)uVar14,__real_3f800000);
  return fVar16;
}

// ForceLoadResources @ 14894f8d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UUserInterfaceSettings::ForceLoadResources(UUserInterfaceSettings *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,0>_>
  *pTVar3;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar4;
  ulonglong uVar5;
  uint uVar6;
  UObject *pUVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TMap<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,0>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  FUObjectItem *this_00;
  UClass *pUVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  UObject *local_c8;
  UObject *local_c0;
  TMap<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  TMap<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FScopedBootTiming local_50;
  
  if ((!PRIVATE_GIsRunningCommandlet) || (param_1)) {
    bVar20 = -1 < CpuChannel->Enabled;
    if (bVar20) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId248,"UUserInterfaceSettings::ForceLoadResources",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterfaceSettings.cpp"
                 ,0xf8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId248);
    }
    FScopedBootTiming::FScopedBootTiming(&local_50,"UUserInterfaceSettings::ForceLoadResources");
    puVar2 = &(this->SoftwareCursors).field_0x10;
    local_d8.Data = (FScriptContainerElement *)0x0;
    pTVar3 = &this->SoftwareCursors;
    local_d0 = 0;
    iStack_b0 = 0;
    iVar12 = *(int *)&(this->SoftwareCursors).field_0x28;
    uStack_ac = 1;
    local_98 = 0;
    iStack_9c = iStack_b0;
    if (iVar12 != 0) {
      puVar18 = *(uint **)&(this->SoftwareCursors).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar2;
      }
      uVar15 = *puVar18;
      local_98 = 0;
      iStack_b0 = 0;
      while (uVar15 == 0) {
        lVar14 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar12;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14894fa0e;
        uVar15 = puVar18[lVar14 + 1];
      }
      uStack_ac = -uVar15 & uVar15;
      uVar5 = (ulonglong)uStack_ac * 2 + 1;
      lVar14 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      iStack_9c = local_98 + -1 + local_res20;
      if (iVar12 < iStack_9c) {
        iStack_9c = iVar12;
      }
    }
LAB_14894fa0e:
    uVar15 = *(uint *)&(this->SoftwareCursors).field_0x28;
    iStack_90 = *(int *)&(this->SoftwareCursors).field_0x8 -
                *(int *)&(this->SoftwareCursors).field_0x34;
    uVar19 = uVar15 & 0xffffffe0;
    uStack_a0 = 0xffffffff;
    TStack_78._padding_ = CONCAT44(uStack_ac,iStack_b0);
    TStack_78.CurrentBitIndex = iStack_9c;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar15 >> 5;
    TStack_78._28_4_ = iStack_9c;
    TStack_78.BaseBitIndex = local_98;
    uStack_58 = CONCAT44(uStack_8c,iStack_90);
    local_b8 = pTVar3;
    local_a8 = puVar2;
    iStack_94 = iStack_9c;
    local_80 = pTVar3;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar15 < 0) || (iVar12 < (int)uVar15)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar6 = *(uint *)&(this->SoftwareCursors).field_0x28;
    if (uVar15 != uVar6) {
      puVar17 = *(undefined1 **)&(this->SoftwareCursors).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar2;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
      while (uVar15 == 0) {
        lVar14 = (longlong)iVar16;
        uVar19 = uVar19 + 0x20;
        iVar16 = iVar16 + 1;
        uVar15 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14894fb20;
        uVar15 = *(uint *)(puVar17 + lVar14 * 4 + 4);
      }
      uVar5 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_88 = (int)lVar14;
      uVar15 = local_88 + -1 + uVar19;
      if ((int)uVar6 < (int)uVar15) {
        uVar15 = uVar6;
      }
    }
LAB_14894fb20:
    while( true ) {
      pTVar10 = local_80;
      if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_78.CurrentBitIndex == uVar15) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar10 == pTVar3)) break;
      local_c0 = FSoftObjectPath::TryLoad
                           ((FSoftObjectPath *)
                            ((longlong)TStack_78.CurrentBitIndex * 0x30 + *(longlong *)pTVar10 + 8),
                            (FUObjectSerializeContext *)0x0);
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c0) &&
          ((FScriptContainerElement *)&local_c0 < local_d8.Data + (longlong)local_d0._4_4_ * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = (int)local_d0;
      if ((int)local_d0 == local_d0._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
      }
      local_d0 = CONCAT44(local_d0._4_4_,iVar12 + 1);
      *(UObject **)(local_d8.Data + (longlong)iVar12 * 8) = local_c0;
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
    uVar15 = 0;
    if (0 < (int)local_d0) {
      lVar14 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar15 < (int)local_d0) {
          uVar19 = ~uVar15 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pUVar7 = *(UObject **)(local_d8.Data + lVar14);
        if (pUVar7 == (UObject *)0x0) {
          if (2 < (byte)LogLoad._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
          }
        }
        else {
          this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar7->field_0xc);
          FUObjectItem::SetRootFlags(this_00,RootSet);
          pTVar4 = &this->CursorClasses;
          local_c8 = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          pFVar8 = (pTVar4->AllocatorInstance).Data;
          if (((pFVar8 <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 <
               pFVar8 + (longlong)(this->CursorClasses).ArrayMax * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar12 = (this->CursorClasses).ArrayNum;
          piVar1 = &(this->CursorClasses).ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar4->AllocatorInstance,piVar1);
          }
          (this->CursorClasses).ArrayNum = iVar12 + 1;
          *(UObject **)((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_c8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_c8);
          }
        }
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 8;
      } while ((int)uVar15 < (int)local_d0);
    }
    pUVar13 = FSoftClassPath::TryLoadClass<UDPICustomScalingRule>(&this->CustomScalingRuleClass);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->CustomScalingRuleClassInstance).field0_0x0.DebugPtr = pUVar13;
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    FScopedBootTiming::~FScopedBootTiming(&local_50);
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// GetDPIScaleBasedOnSize @ 148957ab0

float __thiscall
UUserInterfaceSettings::GetDPIScaleBasedOnSize(UUserInterfaceSettings *this,TIntPoint<int> param_1)

{
  TOptional<UE::Math::TIntPoint<int>_> *pTVar1;
  float fVar2;
  bool local_res8 [8];
  TIntPoint<int>_u_0 local_res10;
  
  pTVar1 = &this->LastViewportSize;
  if ((((this->LastViewportSize).bIsSet == false) ||
      (param_1.field0_0x0._0_4_ != (pTVar1->TypedValue).field0_0x0._s_0.X)) ||
     (local_res10._s_0.Y = param_1.field0_0x0._4_4_,
     local_res10._s_0.Y != (this->LastViewportSize).TypedValue.field0_0x0._s_0.Y)) {
    local_res10 = param_1.field0_0x0;
    fVar2 = CalculateScale(this,param_1,local_res8);
    if ((local_res8[0] == false) &&
       (this->CalculatedScale = fVar2, &local_res10 != (TIntPoint<int>_u_0 *)pTVar1)) {
      (pTVar1->TypedValue).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_1.field0_0x0;
      (this->LastViewportSize).bIsSet = true;
    }
  }
  else {
    fVar2 = this->CalculatedScale;
  }
  fVar2 = fVar2 * this->ApplicationScale;
  if (fVar2 <= __real_3c23d70a) {
    fVar2 = __real_3c23d70a;
  }
  return fVar2;
}

// GetPrivateStaticClass @ 14895b3b0

UClass * __cdecl UUserInterfaceSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserInterfaceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"UserInterfaceSettings",
               &Z_Registration_Info_UClass_UUserInterfaceSettings.InnerSingleton,
               StaticRegisterNativesUUserInterfaceSettings,0x2b0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UUserInterfaceSettings>,
               InternalVTableHelperCtorCaller<UUserInterfaceSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserInterfaceSettings.InnerSingleton;
}

// PostInitProperties @ 14896fa90

void __thiscall UUserInterfaceSettings::PostInitProperties(UUserInterfaceSettings *this)

{
  FSoftClassPath *pFVar1;
  TMap<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TEnumAsByte<EMouseCursor::Type>,FSoftClassPath,0>_>
  *this_00;
  undefined1 local_res8 [16];
  undefined1 *local_28;
  FSoftClassPath *local_20;
  
  UObject::PostInitProperties((UObject *)this);
  pFVar1 = &this->DefaultCursor_DEPRECATED;
  this_00 = &this->SoftwareCursors;
  if (*(longlong *)pFVar1 != 0) {
    local_28 = local_res8;
    local_res8[0] = 1;
    local_20 = pFVar1;
    TSet<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>,TDefaultMapHashableKeyFuncs<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TEnumAsByte<enum_EMouseCursor::Type>_&&,FSoftClassPath_const_&>_>
              (this_00,(TPairInitializer<TEnumAsByte<EMouseCursor::Type>_&&,FSoftClassPath_const_&>
                        *)(local_res8 + 8),(bool *)&local_28);
    *(undefined8 *)&(this->DefaultCursor_DEPRECATED).field_0x8 = 0;
    *(undefined8 *)pFVar1 = 0;
    FUtf8String::Reset((FUtf8String *)&(this->DefaultCursor_DEPRECATED).field_0x10,0);
  }
  pFVar1 = &this->TextEditBeamCursor_DEPRECATED;
  if (*(longlong *)pFVar1 != 0) {
    local_28 = local_res8;
    local_res8[0] = 2;
    local_20 = pFVar1;
    TSet<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>,TDefaultMapHashableKeyFuncs<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TEnumAsByte<enum_EMouseCursor::Type>_&&,FSoftClassPath_const_&>_>
              (this_00,(TPairInitializer<TEnumAsByte<EMouseCursor::Type>_&&,FSoftClassPath_const_&>
                        *)(local_res8 + 8),(bool *)&local_28);
    *(undefined8 *)&(this->TextEditBeamCursor_DEPRECATED).field_0x8 = 0;
    *(undefined8 *)pFVar1 = 0;
    FUtf8String::Reset((FUtf8String *)&(this->TextEditBeamCursor_DEPRECATED).field_0x10,0);
  }
  pFVar1 = &this->CrosshairsCursor_DEPRECATED;
  if (*(longlong *)pFVar1 != 0) {
    local_28 = local_res8;
    local_res8[0] = 8;
    local_20 = pFVar1;
    TSet<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>,TDefaultMapHashableKeyFuncs<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TEnumAsByte<enum_EMouseCursor::Type>_&&,FSoftClassPath_const_&>_>
              (this_00,(TPairInitializer<TEnumAsByte<EMouseCursor::Type>_&&,FSoftClassPath_const_&>
                        *)(local_res8 + 8),(bool *)&local_28);
    *(undefined8 *)&(this->CrosshairsCursor_DEPRECATED).field_0x8 = 0;
    *(undefined8 *)pFVar1 = 0;
    FUtf8String::Reset((FUtf8String *)&(this->CrosshairsCursor_DEPRECATED).field_0x10,0);
  }
  pFVar1 = &this->HandCursor_DEPRECATED;
  if (*(longlong *)pFVar1 != 0) {
    local_28 = local_res8;
    local_res8[0] = 9;
    local_20 = pFVar1;
    TSet<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>,TDefaultMapHashableKeyFuncs<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TEnumAsByte<enum_EMouseCursor::Type>_&&,FSoftClassPath_const_&>_>
              (this_00,(TPairInitializer<TEnumAsByte<EMouseCursor::Type>_&&,FSoftClassPath_const_&>
                        *)(local_res8 + 8),(bool *)&local_28);
    *(undefined8 *)&(this->HandCursor_DEPRECATED).field_0x8 = 0;
    *(undefined8 *)pFVar1 = 0;
    FUtf8String::Reset((FUtf8String *)&(this->HandCursor_DEPRECATED).field_0x10,0);
  }
  pFVar1 = &this->GrabHandCursor_DEPRECATED;
  if (*(longlong *)pFVar1 != 0) {
    local_28 = local_res8;
    local_res8[0] = 10;
    local_20 = pFVar1;
    TSet<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>,TDefaultMapHashableKeyFuncs<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TEnumAsByte<enum_EMouseCursor::Type>_&&,FSoftClassPath_const_&>_>
              (this_00,(TPairInitializer<TEnumAsByte<EMouseCursor::Type>_&&,FSoftClassPath_const_&>
                        *)(local_res8 + 8),(bool *)&local_28);
    *(undefined8 *)&(this->GrabHandCursor_DEPRECATED).field_0x8 = 0;
    *(undefined8 *)pFVar1 = 0;
    FUtf8String::Reset((FUtf8String *)&(this->GrabHandCursor_DEPRECATED).field_0x10,0);
  }
  pFVar1 = &this->GrabHandClosedCursor_DEPRECATED;
  if (*(longlong *)pFVar1 != 0) {
    local_28 = local_res8;
    local_res8[0] = 0xb;
    local_20 = pFVar1;
    TSet<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>,TDefaultMapHashableKeyFuncs<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TEnumAsByte<enum_EMouseCursor::Type>_&&,FSoftClassPath_const_&>_>
              (this_00,(TPairInitializer<TEnumAsByte<EMouseCursor::Type>_&&,FSoftClassPath_const_&>
                        *)(local_res8 + 8),(bool *)&local_28);
    *(undefined8 *)&(this->GrabHandClosedCursor_DEPRECATED).field_0x8 = 0;
    *(undefined8 *)pFVar1 = 0;
    FUtf8String::Reset((FUtf8String *)&(this->GrabHandClosedCursor_DEPRECATED).field_0x10,0);
  }
  pFVar1 = &this->SlashedCircleCursor_DEPRECATED;
  if (*(longlong *)pFVar1 != 0) {
    local_28 = local_res8;
    local_res8[0] = 0xc;
    local_20 = pFVar1;
    TSet<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>,TDefaultMapHashableKeyFuncs<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TEnumAsByte<enum_EMouseCursor::Type>_&&,FSoftClassPath_const_&>_>
              (this_00,(TPairInitializer<TEnumAsByte<EMouseCursor::Type>_&&,FSoftClassPath_const_&>
                        *)(local_res8 + 8),(bool *)&local_28);
    *(undefined8 *)&(this->SlashedCircleCursor_DEPRECATED).field_0x8 = 0;
    *(undefined8 *)pFVar1 = 0;
    FUtf8String::Reset((FUtf8String *)&(this->SlashedCircleCursor_DEPRECATED).field_0x10,0);
  }
  ForceLoadResources(this,false);
  return;
}

// ShouldDisplayDistanceFieldFontSettings @ 148980750

bool __cdecl UUserInterfaceSettings::ShouldDisplayDistanceFieldFontSettings(void)

{
  return bSlateSdfTextEnable;
}

// StaticRegisterNativesUUserInterfaceSettings @ 148982b70

void __cdecl UUserInterfaceSettings::StaticRegisterNativesUUserInterfaceSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UUserInterfaceSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execShouldDisplayDistanceFieldFontSettings @ 148991f10

void __cdecl
UUserInterfaceSettings::execShouldDisplayDistanceFieldFontSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSlateSdfTextFeatureEnabled();
  *(bool *)param_3 = bVar1;
  return;
}

