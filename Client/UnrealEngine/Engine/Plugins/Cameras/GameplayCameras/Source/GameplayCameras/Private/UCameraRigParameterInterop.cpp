// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// StaticClass @ 14d576960

UClass * __cdecl UCameraRigParameterInterop::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigParameterInterop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigParameterInterop",
               &Z_Registration_Info_UClass_UCameraRigParameterInterop.InnerSingleton,
               StaticRegisterNativesUCameraRigParameterInterop,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCameraRigParameterInterop>,
               InternalVTableHelperCtorCaller<UCameraRigParameterInterop>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigParameterInterop.InnerSingleton;
}

// UCameraRigParameterInterop @ 14d58f600

UCameraRigParameterInterop * __thiscall
UCameraRigParameterInterop::UCameraRigParameterInterop
          (UCameraRigParameterInterop *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UCameraRigParameterInterop__6B_;
  return this;
}

// UCameraRigParameterInterop @ 14d58f630

UCameraRigParameterInterop * __thiscall
UCameraRigParameterInterop::UCameraRigParameterInterop
          (UCameraRigParameterInterop *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UCameraRigParameterInterop__6B_;
  return this;
}

// ~UCameraRigParameterInterop @ 14d591c10

void __thiscall
UCameraRigParameterInterop::~UCameraRigParameterInterop(UCameraRigParameterInterop *this)

{
  *(undefined ***)this = &___7UCameraRigParameterInterop__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetCameraParameter @ 14d5a6b90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UCameraRigParameterInterop::GetCameraParameter
          (FBlueprintCameraEvaluationDataRef *param_1,UCameraRigAsset *param_2,FName param_3,
          int *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\CameraRigParameterInterop.cpp"
                     ,0x17,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetPrivateStaticClass @ 14d5a96c0

UClass * __cdecl UCameraRigParameterInterop::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigParameterInterop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigParameterInterop",
               &Z_Registration_Info_UClass_UCameraRigParameterInterop.InnerSingleton,
               StaticRegisterNativesUCameraRigParameterInterop,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCameraRigParameterInterop>,
               InternalVTableHelperCtorCaller<UCameraRigParameterInterop>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigParameterInterop.InnerSingleton;
}

// SetCameraParameter @ 14d5ce3b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UCameraRigParameterInterop::SetCameraParameter
          (FBlueprintCameraEvaluationDataRef *param_1,UCameraRigAsset *param_2,FName param_3,
          int *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\CameraRigParameterInterop.cpp"
                     ,0x1c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// StaticRegisterNativesUCameraRigParameterInterop @ 14d5d0d40

void __cdecl UCameraRigParameterInterop::StaticRegisterNativesUCameraRigParameterInterop(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UCameraRigParameterInterop_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCameraParameter @ 14d5d8c70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UCameraRigParameterInterop::execGetCameraParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FName *pFVar2;
  char cVar3;
  int iVar4;
  FProperty *pFVar5;
  uchar *_Dst;
  longlong lVar6;
  FProperty *pFVar7;
  ITextData *pIVar8;
  code *pcVar9;
  bool bVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  uchar *puVar14;
  UPropertyBag *this;
  FPropertyBagPropertyDesc *pFVar15;
  FText *pFVar16;
  undefined8 uVar17;
  FName *pFVar18;
  longlong *plVar19;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  FName local_1f8;
  longlong local_1f0;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1e8;
  FText local_1d8;
  undefined1 local_1c8 [4];
  undefined1 local_1c4 [4];
  FName local_1c0;
  FBlueprintExceptionInfo local_1b8;
  FBlueprintExceptionInfo local_1a0;
  FBlueprintExceptionInfo local_188;
  FBlueprintExceptionInfo local_170;
  longlong local_158 [2];
  TReferenceControllerBase<1> *local_148;
  FTextFormat local_140;
  FFormatArgumentValue local_128;
  undefined4 local_108;
  FText local_f8;
  FText local_e8;
  FName local_d8;
  FName FStack_d0;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  FText local_58;
  FTextFormat local_48;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_148 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_158[0] = 0;
  local_158[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  local_1f0 = 0;
  plVar19 = local_158;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar19 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  local_1f8.ComparisonIndex.Value = 0;
  local_1f8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar5 = param_2->MostRecentProperty;
  _Dst = param_2->MostRecentPropertyAddress;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((pFVar5 == (FProperty *)0x0) || (_Dst == (uchar *)0x0)) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_98,L"CameraRigParameterInterop",
                         L"InvalidGetCameraParameterReturnValue",
                         L"Failed to resolve ReturnValue for GetCameraParameter");
    local_170.EventType = AbortExecution;
    local_170.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar11->TextData).Reference;
    if (local_170.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_170.Description.field0_0x0.TypedValue.TextData.Reference + 8)
      )(local_170.Description.field0_0x0.TypedValue.TextData.Reference,local_1c4);
    }
    local_170.Description.field0_0x0.TypedValue.Flags = pFVar11->Flags;
    if ((local_170.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0xbd,
                            L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_170);
    uVar17 = local_170.Description.field0_0x0.TypedValue.TextData.Reference;
  }
  else {
    iVar4 = *(int *)(local_1f0 + 0xa0);
    pFVar18 = *(FName **)(local_1f0 + 0x98);
    if ((iVar4 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar2 = pFVar18 + (longlong)iVar4 * 9;
    for (; pFVar18 != pFVar2; pFVar18 = pFVar18 + 9) {
      if (*pFVar18 == local_1f8) {
        lVar6 = *plVar19;
        if (lVar6 == 0) {
          pFVar11 = FText::AsLocalizable_Advanced_LocText
                              (&local_e8,L"CameraRigParameterInterop",L"InvalidCameraData",
                               L"CameraData is an invalid reference");
          local_1b8.EventType = NonFatalError;
          local_1b8.Description.field0_0x0.TypedValue.TextData.Reference =
               (TRefCountPtr<ITextData>)(pFVar11->TextData).Reference;
          if (local_1b8.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)
                          local_1b8.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                      (local_1b8.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
          }
          local_1b8.Description.field0_0x0.TypedValue.Flags = pFVar11->Flags;
          if ((local_1b8.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0xbd,
                                     L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                    ), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (local_e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
          }
          FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_1b8);
          uVar17 = local_1b8.Description.field0_0x0.TypedValue.TextData.Reference;
          goto LAB_14d5d9417;
        }
        cVar3 = (char)pFVar18[3].ComparisonIndex.Value;
        if (cVar3 == '\0') {
          puVar14 = UE::Cameras::FCameraVariableTable::TryGetValue
                              ((FCameraVariableTable *)(lVar6 + 0x88),
                               (FCameraVariableID)pFVar18[3].Number,pFVar18[4].ComparisonIndex.Value
                               ,(UScriptStruct *)pFVar18[5],true);
LAB_14d5d8fe3:
          if (puVar14 != (uchar *)0x0) {
            FProperty::CopyCompleteValue(pFVar5,_Dst,puVar14);
            goto LAB_14d5d9422;
          }
        }
        else if (cVar3 == '\x01') {
          puVar14 = UE::Cameras::FCameraContextDataTable::TryGetRawDataPtr
                              ((FCameraContextDataTable *)(lVar6 + 0xf8),
                               (FCameraContextDataID)pFVar18[6].ComparisonIndex.Value,
                               pFVar18[6].Number,(UObject *)pFVar18[8],true);
          goto LAB_14d5d8fe3;
        }
        lVar6 = local_1f0;
        this = FInstancedPropertyBag::GetPropertyBagStruct
                         ((FInstancedPropertyBag *)(local_1f0 + 0x88));
        local_d8 = pFVar18[1];
        FStack_d0 = pFVar18[2];
        pFVar15 = UPropertyBag::FindPropertyDescByID(this,(FGuid *)&local_d8);
        if ((pFVar15 != (FPropertyBagPropertyDesc *)0x0) &&
           (pFVar7 = pFVar15->CachedProperty, pFVar7 != (FProperty *)0x0)) {
          lVar6 = *(longlong *)(lVar6 + 0x90);
          if ((pFVar7->ArrayDim < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((lVar6 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar14 = (uchar *)(pFVar7->Offset_Internal + lVar6);
          if (_Dst != puVar14) {
            if (((uint)(int)pFVar5->PropertyFlags >> 0x1e & 1) == 0) {
              (**(code **)(pFVar5->_padding_ + 0xf0))(pFVar5,_Dst,puVar14,pFVar5->ArrayDim);
            }
            else {
              memcpy(_Dst,puVar14,(longlong)pFVar5->ElementSize * (longlong)pFVar5->ArrayDim);
            }
          }
          goto LAB_14d5d9422;
        }
        local_1c0 = *(FName *)(local_1f0 + 0x18);
        pFVar11 = FText::FromName(&local_88,&local_1c0);
        pFVar12 = FText::FromName(&local_78,&local_1f8);
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_c8,L"CameraRigParameterInterop",L"NoDefaultValueFound",
                             L"Parameter {0} does not exist on camera rig {1}");
        pFVar13 = FTextFormat::FTextFormat(&local_68,pFVar16,Default);
        local_128.Type = Text;
        FText::FText((FText *)&local_128.TextValue,pFVar12);
        if ((local_128.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_108 = 4;
        FText::FText(&local_f8,pFVar11);
        if ((local_f8.TextData.Reference == (ITextData *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_1e8.AllocatorInstance,2,&local_1e8.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_1e8.AllocatorInstance.Data,&local_128,2);
        local_140.TextFormatData.Object = (pFVar13->TextFormatData).Object;
        local_140.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar13->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_140.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_140.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_140.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_1d8,&local_140,&local_1e8);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
        if ((FFormatArgumentValue *)local_1e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_1e8.AllocatorInstance.Data);
        }
        if (local_f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
        }
        if (local_128.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_128.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar13->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar8 = (pFVar12->TextData).Reference;
        if (pIVar8 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar8 + 0x10))();
        }
        pIVar8 = (pFVar11->TextData).Reference;
        if (pIVar8 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar8 + 0x10))();
        }
        local_1a0.EventType = NonFatalError;
        local_1a0.Description.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_1d8.TextData.Reference;
        if (local_1d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1d8.TextData.Reference + 8))
                    (local_1d8.TextData.Reference,local_res20);
        }
        local_1a0.Description.field0_0x0.TypedValue.Flags = local_1d8.Flags;
        if ((local_1a0.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (local_1d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
        }
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_1a0);
        uVar17 = local_1a0.Description.field0_0x0.TypedValue.TextData.Reference;
        goto LAB_14d5d9417;
      }
    }
    pFVar11 = FText::FromName(&local_58,&local_1f8);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_a8,L"CameraRigParameterInterop",L"ParameterDefinitionNotFound",
                         L"No such camera parameter: {0}");
    pFVar13 = FTextFormat::FTextFormat(&local_48,pFVar12,Default);
    pFVar11 = FText::Format<FText>(&local_b8,pFVar13,pFVar11);
    local_188.EventType = NonFatalError;
    local_188.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar11->TextData).Reference;
    if (local_188.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_188.Description.field0_0x0.TypedValue.TextData.Reference + 8)
      )(local_188.Description.field0_0x0.TypedValue.TextData.Reference,local_1c8);
    }
    local_188.Description.field0_0x0.TypedValue.Flags = pFVar11->Flags;
    if ((local_188.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0xbd,
                            L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_188);
    uVar17 = local_188.Description.field0_0x0.TypedValue.TextData.Reference;
  }
LAB_14d5d9417:
  if ((ITextData *)uVar17 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar17 + 0x10))();
  }
LAB_14d5d9422:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_148);
  return;
}

// execSetCameraParameter @ 14d5dc970

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UCameraRigParameterInterop::execSetCameraParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FCameraVariableTable *this;
  FCameraContextDataTable *this_00;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  ECameraVariableType EVar5;
  FProperty *pFVar6;
  uchar *_Src;
  FName *pFVar7;
  longlong lVar8;
  FName FVar9;
  code *pcVar10;
  bool bVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  FEntry *pFVar15;
  uchar *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  UObject *pUVar19;
  longlong *plVar20;
  uint local_res10 [4];
  uint local_res20 [2];
  longlong local_198;
  FName *local_190;
  FName local_188;
  uint local_180 [2];
  FCameraVariableDefinition local_178;
  undefined1 local_160 [4];
  undefined1 local_15c [4];
  uint local_158;
  uint local_154;
  undefined1 local_150 [8];
  uint *local_148;
  FBlueprintExceptionInfo local_140;
  FBlueprintExceptionInfo local_128;
  FBlueprintExceptionInfo local_110;
  longlong local_f8 [2];
  TReferenceControllerBase<1> *local_e8;
  FName **local_e0;
  longlong *local_d8;
  FName **local_d0;
  longlong *local_c8;
  FCameraContextDataDefinition local_c0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e8 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_198 = 0;
  plVar20 = local_f8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar20 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar6 = param_2->MostRecentProperty;
  _Src = param_2->MostRecentPropertyAddress;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((pFVar6 == (FProperty *)0x0) || (_Src == (uchar *)0x0)) {
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_70,L"CameraRigParameterInterop",L"InvalidSetCameraParameterNewValue"
                         ,L"Failed to resolve NewValue for SetCameraParameter");
    local_110.EventType = AbortExecution;
    local_110.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar12->TextData).Reference;
    if (local_110.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_110.Description.field0_0x0.TypedValue.TextData.Reference + 8)
      )(local_110.Description.field0_0x0.TypedValue.TextData.Reference,local_150);
    }
    local_110.Description.field0_0x0.TypedValue.Flags = pFVar12->Flags;
    if ((local_110.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0xbd,
                            L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_110);
    uVar17 = local_110.Description.field0_0x0.TypedValue.TextData.Reference;
  }
  else {
    iVar4 = *(int *)(local_198 + 0xa0);
    pFVar7 = *(FName **)(local_198 + 0x98);
    if ((iVar4 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    for (local_190 = pFVar7; local_190 != pFVar7 + (longlong)iVar4 * 9; local_190 = local_190 + 9) {
      if (*local_190 == local_188) goto LAB_14d5dcb20;
    }
    local_190 = (FName *)0x0;
LAB_14d5dcb20:
    if (local_190 == (FName *)0x0) {
      pFVar12 = FText::FromName(&local_60,&local_188);
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_90,L"CameraRigParameterInterop",L"ParameterDefinitionNotFound",
                           L"No such camera parameter: {0}");
      pFVar14 = FTextFormat::FTextFormat(&local_50,pFVar13,Default);
      pFVar12 = FText::Format<FText>(&local_a0,pFVar14,pFVar12);
      local_140.EventType = NonFatalError;
      local_140.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar12->TextData).Reference;
      if (local_140.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_140.Description.field0_0x0.TypedValue.TextData.Reference +
                    8))(local_140.Description.field0_0x0.TypedValue.TextData.Reference,local_160);
      }
      local_140.Description.field0_0x0.TypedValue.Flags = pFVar12->Flags;
      if ((local_140.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
      }
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
      FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_140);
      uVar17 = local_140.Description.field0_0x0.TypedValue.TextData.Reference;
    }
    else {
      lVar8 = *plVar20;
      if (lVar8 != 0) {
        cVar3 = (char)local_190[3].ComparisonIndex.Value;
        if (cVar3 == '\0') {
          this = (FCameraVariableTable *)(lVar8 + 0x88);
          FVar9 = local_190[5];
          EVar5 = local_190[4].ComparisonIndex.Value;
          pFVar15 = UE::Cameras::FCameraVariableTable::FindEntry
                              (this,(FCameraVariableID)local_190[3].Number);
          if (pFVar15 == (FEntry *)0x0) {
            puVar18 = *(undefined8 **)(local_198 + 0x28);
            puVar2 = puVar18 + *(int *)(local_198 + 0x30);
            if (puVar18 != puVar2) {
              do {
                pUVar19 = (UObject *)*puVar18;
                if (((local_190[2].Number == *(uint *)&pUVar19[2].field_0xc &&
                     local_190[2].ComparisonIndex.Value == *(uint *)&pUVar19[2].field_0x8) &&
                    local_190[1].Number == *(uint *)&pUVar19[2].field_0x4) &&
                    local_190[1].ComparisonIndex.Value == *(uint *)(pUVar19 + 2)) {
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (pUVar19 == (UObject *)0x0) goto LAB_14d5dcdb1;
                    UE::GC::MarkAsReachable(pUVar19);
                  }
                  if (pUVar19 != (UObject *)0x0) goto LAB_14d5dcdd4;
                  goto LAB_14d5dcdb1;
                }
                puVar18 = puVar18 + 1;
              } while (puVar18 != puVar2);
            }
            pUVar19 = (UObject *)0x0;
LAB_14d5dcdb1:
            local_e0 = &local_190;
            local_d8 = &local_198;
            bVar11 = `UCameraRigParameterInterop::execSetCameraParameter'::__l24::<lambda_2>::
                     operator()(&local_e0);
            if (bVar11) {
LAB_14d5dcdd4:
              local_178.VariableID.Value = *(uint *)&pUVar19[2].field_0x24;
              local_178.VariableType = *(ECameraVariableType *)&pUVar19[2].field_0x10;
              local_178.bAutoReset = false;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (*(UObject **)&pUVar19[2].field_0x18 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(*(UObject **)&pUVar19[2].field_0x18);
              }
              local_178.BlendableStructType.field0_0x0 =
                   *(TObjectPtr<UScriptStruct_const_>_u_0 *)&pUVar19[2].field_0x18;
              local_178.bIsInput = (bool)pUVar19[2].field_0x20;
              local_178.bIsPrivate = false;
              UE::Cameras::FCameraVariableTable::AddVariable(this,&local_178);
              FVar9 = local_190[5];
              EVar5 = local_190[4].ComparisonIndex.Value;
              local_res20[0] = local_190[3].Number;
              pFVar15 = UE::Cameras::FCameraVariableTable::FindEntry
                                  (this,(FCameraVariableID)local_res20[0]);
              if (pFVar15 == (FEntry *)0x0) {
                local_148 = local_res20;
                bVar11 = `UE::Cameras::FCameraVariableTable::SetValue'::__l3::<lambda_1>::operator()
                                   (&local_148);
                if (!bVar11) goto LAB_14d5dd0eb;
              }
              if (((EVar5 != pFVar15->Type) || (FVar9 != (FName)pFVar15->StructType)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ExpectedVariableType == Entry->Type && ExpectedBlendableStructType == Entry->StructType"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                                      ,0x157,L""), bVar11)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              UE::Cameras::FCameraVariableTable::GetVariableTypeAllocationInfo
                        (pFVar15->Type,pFVar15->StructType,local_180,&local_154);
              memcpy((void *)((ulonglong)pFVar15->Offset + *(longlong *)(lVar8 + 0xe8)),_Src,
                     (ulonglong)local_180[0]);
              pFVar15->Flags = pFVar15->Flags | (WrittenThisFrame|Written);
            }
          }
          else {
            if (((EVar5 != pFVar15->Type) || (FVar9 != (FName)pFVar15->StructType)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ExpectedVariableType == Entry->Type && ExpectedBlendableStructType == Entry->StructType"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraVariableTable.cpp"
                                    ,0x16d,L""), bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            UE::Cameras::FCameraVariableTable::GetVariableTypeAllocationInfo
                      (pFVar15->Type,pFVar15->StructType,local_res10,&local_158);
            memcpy((void *)((ulonglong)pFVar15->Offset + *(longlong *)(lVar8 + 0xe8)),_Src,
                   (ulonglong)local_res10[0]);
            pFVar15->Flags = pFVar15->Flags | (WrittenThisFrame|Written);
          }
        }
        else if (cVar3 == '\x01') {
          this_00 = (FCameraContextDataTable *)(lVar8 + 0xf8);
          puVar16 = UE::Cameras::FCameraContextDataTable::TryGetMutableRawDataPtr
                              (this_00,(FCameraContextDataID)local_190[6].ComparisonIndex.Value,
                               local_190[6].Number,(UObject *)local_190[8],true);
          if (puVar16 == (uchar *)0x0) {
            puVar18 = *(undefined8 **)(local_198 + 0x38);
            puVar2 = puVar18 + *(int *)(local_198 + 0x40);
            if (puVar18 != puVar2) {
              do {
                pUVar19 = (UObject *)*puVar18;
                if (((local_190[2].Number == *(uint *)&pUVar19[2].field_0xc &&
                     local_190[2].ComparisonIndex.Value == *(uint *)&pUVar19[2].field_0x8) &&
                    local_190[1].Number == *(uint *)&pUVar19[2].field_0x4) &&
                    local_190[1].ComparisonIndex.Value == *(uint *)(pUVar19 + 2)) {
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (pUVar19 == (UObject *)0x0) goto LAB_14d5dcf81;
                    UE::GC::MarkAsReachable(pUVar19);
                  }
                  if (pUVar19 != (UObject *)0x0) goto LAB_14d5dcfa4;
                  goto LAB_14d5dcf81;
                }
                puVar18 = puVar18 + 1;
              } while (puVar18 != puVar2);
            }
            pUVar19 = (UObject *)0x0;
LAB_14d5dcf81:
            local_d0 = &local_190;
            local_c8 = &local_198;
            bVar11 = `UCameraRigParameterInterop::execSetCameraParameter'::__l34::<lambda_3>::
                     operator()(&local_d0);
            if (!bVar11) goto LAB_14d5dd0eb;
LAB_14d5dcfa4:
            local_c0.DataID.Value = *(uint *)&pUVar19[2].field_0x20;
            local_c0.DataType = *(ECameraContextDataType *)&pUVar19[2].field_0x10;
            local_c0.DataContainerType = *(ECameraContextDataContainerType *)&pUVar19[2].field_0x14;
            local_c0.bAutoReset = false;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (*(UObject **)&pUVar19[2].field_0x18 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(*(UObject **)&pUVar19[2].field_0x18);
            }
            local_c0.DataTypeObject.field0_0x0 =
                 *(TObjectPtr<UObject_const_>_u_0 *)&pUVar19[2].field_0x18;
            UE::Cameras::FCameraContextDataTable::AddData(this_00,&local_c0);
            puVar16 = UE::Cameras::FCameraContextDataTable::TryGetMutableRawDataPtr
                                (this_00,(FCameraContextDataID)local_190[6].ComparisonIndex.Value,
                                 local_190[6].Number,(UObject *)local_190[8],true);
            if (puVar16 == (uchar *)0x0) goto LAB_14d5dd0eb;
          }
          FProperty::CopyCompleteValue(pFVar6,puVar16,_Src);
        }
        goto LAB_14d5dd0eb;
      }
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_80,L"CameraRigParameterInterop",L"InvalidCameraData",
                           L"CameraData is an invalid reference");
      local_128.EventType = NonFatalError;
      local_128.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar12->TextData).Reference;
      if (local_128.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_128.Description.field0_0x0.TypedValue.TextData.Reference +
                    8))(local_128.Description.field0_0x0.TypedValue.TextData.Reference,local_15c);
      }
      local_128.Description.field0_0x0.TypedValue.Flags = pFVar12->Flags;
      if ((local_128.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_80.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
      }
      FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_128);
      uVar17 = local_128.Description.field0_0x0.TypedValue.TextData.Reference;
    }
  }
  if ((ITextData *)uVar17 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar17 + 0x10))();
  }
LAB_14d5dd0eb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
  return;
}

// operator() @ 1505838f0

bool __thiscall
`UCameraRigParameterInterop::execSetCameraParameter'::__l24::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9052093826331574073>);
  if (bVar4) {
    if (**(longlong **)((longlong)this + 8) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    ::FName::ToString((FName *)**(undefined8 **)this,&local_18);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9052093826331574073>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505839b9;
    }
  }
  bVar4 = false;
LAB_1505839b9:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150583a80

bool __thiscall
`UCameraRigParameterInterop::execSetCameraParameter'::__l34::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9052093826331574054>);
  if (bVar4) {
    if (**(longlong **)((longlong)this + 8) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    ::FName::ToString((FName *)**(undefined8 **)this,&local_18);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9052093826331574054>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150583b49;
    }
  }
  bVar4 = false;
LAB_150583b49:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

