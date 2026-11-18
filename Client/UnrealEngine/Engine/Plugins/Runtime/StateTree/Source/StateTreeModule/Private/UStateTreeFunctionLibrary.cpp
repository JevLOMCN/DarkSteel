// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 14

// StaticClass @ 14d4da020

UClass * __cdecl UStateTreeFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeFunctionLibrary",
               &Z_Registration_Info_UClass_UStateTreeFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUStateTreeFunctionLibrary,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UStateTreeFunctionLibrary>,
               InternalVTableHelperCtorCaller<UStateTreeFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeFunctionLibrary.InnerSingleton;
}

// UStateTreeFunctionLibrary @ 14d4ec300

UStateTreeFunctionLibrary * __thiscall
UStateTreeFunctionLibrary::UStateTreeFunctionLibrary
          (UStateTreeFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UStateTreeFunctionLibrary__6B_;
  return this;
}

// UStateTreeFunctionLibrary @ 14d4ec330

UStateTreeFunctionLibrary * __thiscall
UStateTreeFunctionLibrary::UStateTreeFunctionLibrary
          (UStateTreeFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UStateTreeFunctionLibrary__6B_;
  return this;
}

// ~UStateTreeFunctionLibrary @ 14d4ecaa0

void __thiscall
UStateTreeFunctionLibrary::~UStateTreeFunctionLibrary(UStateTreeFunctionLibrary *this)

{
  *(undefined ***)this = &___7UStateTreeFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14d4ff350

UClass * __cdecl UStateTreeFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeFunctionLibrary",
               &Z_Registration_Info_UClass_UStateTreeFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUStateTreeFunctionLibrary,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UStateTreeFunctionLibrary>,
               InternalVTableHelperCtorCaller<UStateTreeFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeFunctionLibrary.InnerSingleton;
}

// K2_GetParametersProperty @ 14d501aa0

void __cdecl
UStateTreeFunctionLibrary::K2_GetParametersProperty
          (FStateTreeReference *param_1,FGuid *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeFunctionLibrary.cpp"
                     ,0x22,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// K2_SetParametersProperty @ 14d501ae0

void __cdecl
UStateTreeFunctionLibrary::K2_SetParametersProperty
          (FStateTreeReference *param_1,FGuid *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeFunctionLibrary.cpp"
                     ,0x1d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// MakeStateTreeReference @ 14d502360

FStateTreeReference * __cdecl
UStateTreeFunctionLibrary::MakeStateTreeReference
          (FStateTreeReference *__return_storage_ptr__,UStateTree *param_1)

{
  (__return_storage_ptr__->StateTree).field0_0x0.DebugPtr = (UStateTree *)0x0;
  FInstancedStruct::FInstancedStruct(&(__return_storage_ptr__->Parameters).Value);
  (__return_storage_ptr__->PropertyOverrides).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->PropertyOverrides).ArrayNum = 0;
  (__return_storage_ptr__->PropertyOverrides).ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (__return_storage_ptr__->StateTree).field0_0x0.DebugPtr = param_1;
  FStateTreeReference::SyncParameters(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SetStateTree @ 14d5150b0

void __cdecl
UStateTreeFunctionLibrary::SetStateTree(FStateTreeReference *param_1,UStateTree *param_2)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (param_1->StateTree).field0_0x0.DebugPtr = param_2;
  FStateTreeReference::SyncParameters(param_1);
  return;
}

// StaticRegisterNativesUStateTreeFunctionLibrary @ 14d518cf0

void __cdecl UStateTreeFunctionLibrary::StaticRegisterNativesUStateTreeFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UStateTreeFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execK2_GetParametersProperty @ 14d524860

void __cdecl
UStateTreeFunctionLibrary::execK2_GetParametersProperty
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  uchar *_Dst;
  UStateTree *pUVar3;
  UStateTree *pUVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  UPropertyBag *this;
  FPropertyBagPropertyDesc *pFVar8;
  FProperty *pFVar9;
  FText *pFVar10;
  uchar *_Src;
  TObjectPtr<UStateTree>_u_0 *this_00;
  undefined1 local_res10 [8];
  FGuid local_98;
  FGuid local_88;
  FText local_78;
  FBlueprintExceptionInfo local_68;
  TObjectPtr<UStateTree>_u_0 local_50;
  FInstancedStruct local_48;
  void *local_38;
  undefined8 local_30;
  
  local_50.DebugPtr = (UStateTree *)0x0;
  FInstancedStruct::FInstancedStruct(&local_48);
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_98.A = 0;
  local_98.B = 0;
  local_98.C = 0;
  local_98.D = 0;
  this_00 = &local_50;
  if ((TObjectPtr<UStateTree>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UStateTree>_u_0 *)0x0) {
    this_00 = (TObjectPtr<UStateTree>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = param_2->MostRecentProperty;
  _Dst = param_2->MostRecentPropertyAddress;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((pFVar2 == (FProperty *)0x0) || (_Dst == (uchar *)0x0)) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_78,L"StateTreeFunctionLibrary",
                         L"GetParametersProperty_InvalidValueWarning",
                         L"Failed to resolve the Value for GetParametersProperty");
    local_68.EventType = AbortExecution;
    local_68.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar10->TextData).Reference;
    if (local_68.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_68.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_68.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_68.Description.field0_0x0.TypedValue.Flags = pFVar10->Flags;
    if (local_68.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_68);
    if (local_68.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_68.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
    }
  }
  else {
    FStateTreeReference::ConditionallySyncParameters((FStateTreeReference *)&this_00->ObjectPtr);
    pUVar3 = this_00[2].DebugPtr;
    pUVar4 = this_00[1].DebugPtr;
    this = FInstancedPropertyBag::GetPropertyBagStruct
                     ((FInstancedPropertyBag *)&this_00[1].ObjectPtr);
    if (((pUVar3 != (UStateTree *)0x0) && (pUVar4 != (UStateTree *)0x0)) &&
       (this != (UPropertyBag *)0x0)) {
      local_88.A = local_98.A;
      local_88.B = local_98.B;
      local_88.C = local_98.C;
      local_88.D = local_98.D;
      pFVar8 = UPropertyBag::FindPropertyDescByID(this,&local_88);
      if (pFVar8 != (FPropertyBagPropertyDesc *)0x0) {
        pFVar9 = UStruct::FindPropertyByName((UStruct *)this,pFVar8->Name);
        if (pFVar9 != (FProperty *)0x0) {
          cVar6 = (**(code **)(pFVar9->_padding_ + 0x1a0))(pFVar9,pFVar2);
          if (cVar6 != '\0') {
            if (pFVar9->ArrayDim < 1) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            _Src = &pUVar3->field_0x0 + pFVar9->Offset_Internal;
            if (_Dst != _Src) {
              if (((uint)(int)pFVar2->PropertyFlags >> 0x1e & 1) == 0) {
                (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,_Dst,_Src,pFVar2->ArrayDim);
              }
              else {
                memcpy(_Dst,_Src,(longlong)pFVar2->ElementSize * (longlong)pFVar2->ArrayDim);
              }
            }
          }
        }
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  FInstancedStruct::Reset(&local_48);
  return;
}

// execK2_SetParametersProperty @ 14d524b70

void __cdecl
UStateTreeFunctionLibrary::execK2_SetParametersProperty
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  uchar *_Src;
  UStateTree *pUVar3;
  UStateTree *pUVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  UPropertyBag *this;
  FPropertyBagPropertyDesc *pFVar8;
  FProperty *pFVar9;
  FText *pFVar10;
  uchar *_Dst;
  TObjectPtr<UStateTree>_u_0 *this_00;
  undefined1 local_res10 [8];
  FGuid local_a8;
  FBlueprintExceptionInfo local_98;
  TObjectPtr<UStateTree>_u_0 local_80;
  FInstancedStruct local_78;
  void *local_68;
  undefined8 local_60;
  FGuid local_58;
  FGuid local_48;
  FText local_38;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_80.DebugPtr = (UStateTree *)0x0;
  FInstancedStruct::FInstancedStruct(&local_78);
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_68 = (void *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_a8.A = 0;
  local_a8.B = 0;
  local_a8.C = 0;
  local_a8.D = 0;
  this_00 = &local_80;
  if ((TObjectPtr<UStateTree>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UStateTree>_u_0 *)0x0) {
    this_00 = (TObjectPtr<UStateTree>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar2 = param_2->MostRecentProperty;
  _Src = param_2->MostRecentPropertyAddress;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((pFVar2 == (FProperty *)0x0) || (_Src == (uchar *)0x0)) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_38,L"StateTreeFunctionLibrary",
                         L"SetParametersProperty_InvalidValueWarning",
                         L"Failed to resolve the Value for SetParametersProperty");
    local_98.EventType = AbortExecution;
    local_98.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar10->TextData).Reference;
    if (local_98.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_98.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_98.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_98.Description.field0_0x0.TypedValue.Flags = pFVar10->Flags;
    if (local_98.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_98);
    if (local_98.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_98.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
    }
  }
  else {
    FStateTreeReference::ConditionallySyncParameters((FStateTreeReference *)&this_00->ObjectPtr);
    pUVar3 = this_00[1].DebugPtr;
    pUVar4 = this_00[2].DebugPtr;
    this = FInstancedPropertyBag::GetPropertyBagStruct
                     ((FInstancedPropertyBag *)&this_00[1].ObjectPtr);
    if (((pUVar4 != (UStateTree *)0x0) && (pUVar3 != (UStateTree *)0x0)) &&
       (this != (UPropertyBag *)0x0)) {
      local_58.A = local_a8.A;
      local_58.B = local_a8.B;
      local_58.C = local_a8.C;
      local_58.D = local_a8.D;
      pFVar8 = UPropertyBag::FindPropertyDescByID(this,&local_58);
      if (pFVar8 != (FPropertyBagPropertyDesc *)0x0) {
        pFVar9 = UStruct::FindPropertyByName((UStruct *)this,pFVar8->Name);
        if (pFVar9 != (FProperty *)0x0) {
          cVar6 = (**(code **)(pFVar2->_padding_ + 0x1a0))(pFVar2,pFVar9);
          if (cVar6 != '\0') {
            if (pFVar9->ArrayDim < 1) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            _Dst = &pUVar4->field_0x0 + pFVar9->Offset_Internal;
            if (_Dst != _Src) {
              if (((uint)(int)pFVar9->PropertyFlags >> 0x1e & 1) == 0) {
                (**(code **)(pFVar9->_padding_ + 0xf0))(pFVar9,_Dst,_Src,pFVar9->ArrayDim);
              }
              else {
                memcpy(_Dst,_Src,(longlong)pFVar9->ElementSize * (longlong)pFVar9->ArrayDim);
              }
            }
            local_48.A = local_a8.A;
            local_48.B = local_a8.B;
            local_48.C = local_a8.C;
            local_48.D = local_a8.D;
            FStateTreeReference::SetPropertyOverridden
                      ((FStateTreeReference *)&this_00->ObjectPtr,&local_48,true);
          }
        }
      }
    }
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  FInstancedStruct::Reset(&local_78);
  return;
}

// execMakeStateTreeReference @ 14d524ec0

void __cdecl
UStateTreeFunctionLibrary::execMakeStateTreeReference
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ForAnyElementType *pFVar1;
  FProperty *pFVar2;
  UStateTree *pUVar3;
  UStateTree *local_res10;
  TObjectPtr<UStateTree>_u_0 local_38;
  FInstancedStruct local_30;
  ForAnyElementType local_20;
  undefined8 local_18;
  
  local_res10 = (UStateTree *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  local_38.DebugPtr = (UStateTree *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedStruct::FInstancedStruct(&local_30);
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_38.DebugPtr = pUVar3;
  FStateTreeReference::SyncParameters((FStateTreeReference *)&local_38.ObjectPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_38.DebugPtr != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
  }
  *(TObjectPtr<UStateTree>_u_0 *)param_3 = local_38;
  FInstancedStruct::operator=((FInstancedStruct *)((longlong)param_3 + 8),&local_30);
  pFVar1 = (ForAnyElementType *)((longlong)param_3 + 0x18);
  if (pFVar1 != &local_20) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_20.Data;
    *(undefined4 *)((longlong)param_3 + 0x20) = (undefined4)local_18;
    *(undefined4 *)((longlong)param_3 + 0x24) = local_18._4_4_;
    local_18 = 0;
    local_20.Data = (FScriptContainerElement *)0x0;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  FInstancedStruct::Reset(&local_30);
  return;
}

// execSetStateTree @ 14d525010

void __cdecl
UStateTreeFunctionLibrary::execSetStateTree(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  TObjectPtr<UStateTree>_u_0 *this;
  UObject *local_res10;
  TObjectPtr<UStateTree>_u_0 local_38;
  FInstancedStruct local_30;
  void *local_20;
  undefined8 local_18;
  
  local_38.DebugPtr = (UStateTree *)0x0;
  FInstancedStruct::FInstancedStruct(&local_30);
  local_20 = (void *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = (UObject *)0x0;
  this = &local_38;
  if ((TObjectPtr<UStateTree>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UStateTree>_u_0 *)0x0) {
    this = (TObjectPtr<UStateTree>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  (this->ObjectPtr).field0_0x0.Handle = pUVar2;
  FStateTreeReference::SyncParameters((FStateTreeReference *)&this->ObjectPtr);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  FInstancedStruct::Reset(&local_30);
  return;
}

