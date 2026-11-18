// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 14

// StaticClass @ 14d67c2e0

UClass * __cdecl ULensModel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULensModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"LensModel",
               &Z_Registration_Info_UClass_ULensModel.InnerSingleton,StaticRegisterNativesULensModel
               ,0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULensModel>,InternalVTableHelperCtorCaller<ULensModel>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULensModel.InnerSingleton;
}

// ULensModel @ 14d6ab580

ULensModel * __thiscall ULensModel::ULensModel(ULensModel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULensModel__6B_;
  return this;
}

// ULensModel @ 14d6ab5b0

ULensModel * __thiscall ULensModel::ULensModel(ULensModel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7ULensModel__6B_;
  return this;
}

// ~ULensModel @ 14d6ad130

void __thiscall ULensModel::~ULensModel(ULensModel *this)

{
  *(undefined ***)this = &___7ULensModel__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// FromArray_Internal @ 14d6cb850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULensModel::FromArray_Internal
          (ULensModel *this,UScriptStruct *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,void *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  FProperty *this_00;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UScriptStruct *pUVar6;
  uint uVar7;
  FString local_58;
  TFieldIterator<FProperty> local_48 [2];
  
  pUVar6 = (UScriptStruct *)(**(code **)(*(longlong *)this + 0x2c0))();
  if (param_1 == pUVar6) {
    iVar4 = (**(code **)(*(longlong *)this + 0x2c8))(this);
    if (param_2->ArrayNum == iVar4) {
      uVar7 = 0;
      if (param_1 == (UScriptStruct *)0x0) {
        local_48[0].Field = (FField *)0x0;
      }
      else {
        local_48[0].Field = (FField *)param_1->_padding_;
      }
      local_48[0].InterfaceIndex = -1;
      local_48[0].bIncludeSuper = true;
      local_48[0].bIncludeDeprecated = true;
      local_48[0].bIncludeInterface = false;
      local_48[0].Struct = (UStruct *)param_1;
      TFieldIterator<FProperty>::IterateToNext(local_48);
      this_00 = (FProperty *)local_48[0].Field;
      while (this_00 != (FProperty *)0x0) {
        local_48[0].Field = (FField *)this_00;
        if (((*(uint *)(this_00->_padding_ + 0x18) >> 8 & 1) == 0) || (this_00 == (FProperty *)0x0))
        {
          if (2 < (byte)LogLensModel._0_1_) {
            FProperty::GetNameCPP(this_00,&local_58);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLensModel);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          uVar5 = 0;
          if ((int)uVar7 < param_2->ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
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
          uVar1 = *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 4);
          if ((this_00->ArrayDim < 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((param_3 == (void *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar7 = uVar7 + 1;
          *(undefined4 *)((longlong)this_00->Offset_Internal + (longlong)param_3) = uVar1;
        }
        local_48[0].Field = (FField *)this_00->_padding_;
        TFieldIterator<FProperty>::IterateToNext(local_48);
        this_00 = (FProperty *)local_48[0].Field;
      }
    }
  }
  else if (1 < (byte)LogLensModel._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLensModel);
    return;
  }
  return;
}

// GetDefaultParameterArray @ 14d6d3730

void __thiscall
ULensModel::GetDefaultParameterArray
          (ULensModel *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  UStruct *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FStructOnScope local_38;
  
  pUVar2 = (UStruct *)(**(code **)(*(longlong *)this + 0x2c0))();
  FStructOnScope::FStructOnScope(&local_38,pUVar2);
  pcVar1 = *(code **)(*(longlong *)this + 0x2d0);
  uVar3 = (**(code **)(local_38._padding_ + 0x10))(&local_38);
  uVar4 = (**(code **)(local_38._padding_ + 0x20))(&local_38);
  (*pcVar1)(this,uVar4,uVar3,param_1);
  FStructOnScope::~FStructOnScope(&local_38);
  return;
}

// GetHandlerClass @ 14d6d4c60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TSubclassOf<ULensDistortionModelHandlerBase> __cdecl
ULensModel::GetHandlerClass(TSubclassOf<ULensModel> param_1)

{
  int iVar1;
  ULensDistortionModelHandlerBase *this;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  TSubclassOf<ULensDistortionModelHandlerBase> TVar9;
  int iVar10;
  TSubclassOf<ULensModel> *in_RDX;
  longlong lVar11;
  FUObjectCppClassStaticFunctions local_res10;
  TObjectIterator<UClass> local_48;
  
  pUVar8 = (in_RDX->Class).field0_0x0.DebugPtr;
  if ((pUVar8 != (UClass *)0x0) && (pUVar7 = StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar10 = (int)pUVar7->_padding_;
    if (((int)pUVar8->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar10 * 8) != &pUVar7->_padding_
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((in_RDX->Class).field0_0x0.DebugPtr != (UClass *)0x0)) {
      local_48.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ObjectArray.ArrayNum = 0;
      local_48.ObjectArray.ArrayMax = 0;
      local_48.Index = 0xffffffff;
      EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar8 = Z_Construct_UClass_UClass_NoRegister();
      GetObjectsOfClass(pUVar8,&local_48.ObjectArray,true,RF_ClassDefaultObject,
                        EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<UClass>::Advance(&local_48);
      while ((lVar11 = (longlong)local_48.Index, -1 < local_48.Index &&
             (local_48.Index < local_48.ObjectArray.ArrayNum))) {
        uVar6 = 0;
        if (local_48.Index < local_48.ObjectArray.ArrayNum) {
          uVar6 = (uint)~local_48.Index >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            TVar9.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
            return (TSubclassOf<ULensDistortionModelHandlerBase>)TVar9.Class.field0_0x0;
          }
        }
        lVar11 = *(longlong *)(local_48.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
        iVar10 = local_48.ObjectArray.ArrayNum;
        if (Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.InnerSingleton ==
            (UClass *)0x0) {
          local_res10.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/CameraCalibrationCore",L"LensDistortionModelHandlerBase",
                     &Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.InnerSingleton,
                     ULensDistortionModelHandlerBase::
                     StaticRegisterNativesULensDistortionModelHandlerBase,0xd0,8,
                     CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                     InternalConstructor<ULensDistortionModelHandlerBase>,
                     InternalVTableHelperCtorCaller<ULensDistortionModelHandlerBase>,&local_res10,
                     UObject::StaticClass,UObject::StaticClass);
          iVar10 = local_48.ObjectArray.ArrayNum;
          if (Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.InnerSingleton !=
              (UClass *)0x0) goto LAB_14d6d4e33;
        }
        else {
LAB_14d6d4e33:
          iVar1 = (int)(Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.InnerSingleton)->
                       _padding_;
          if ((*(int *)(lVar11 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar1 * 8) !=
              &(Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.InnerSingleton)->
               _padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar11 = (longlong)local_48.Index;
            uVar6 = 0;
            if (local_48.Index < iVar10) {
              uVar6 = (uint)~local_48.Index >> 0x1f;
            }
            if (uVar6 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                TVar9.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
                return (TSubclassOf<ULensDistortionModelHandlerBase>)TVar9.Class.field0_0x0;
              }
              iVar10 = local_48.ObjectArray.ArrayNum;
            }
            if ((*(uint *)(*(longlong *)(local_48.ObjectArray.AllocatorInstance.Data + lVar11 * 8) +
                          0xd4) & 0x2000001) == 0) {
              lVar11 = (longlong)local_48.Index;
              uVar6 = 0;
              if (local_48.Index < iVar10) {
                uVar6 = (uint)~local_48.Index >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                TVar9.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
                return (TSubclassOf<ULensDistortionModelHandlerBase>)TVar9.Class.field0_0x0;
              }
              pUVar8 = *(UClass **)(local_48.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
              if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar8);
              }
              this = (ULensDistortionModelHandlerBase *)
                     (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
              pUVar8 = ULensDistortionModelHandlerBase::StaticClass();
              lVar11 = this->_padding_;
              iVar10 = (int)pUVar8->_padding_;
              if (((*(int *)(lVar11 + 0x38) < iVar10) ||
                  ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar10 * 8)
                   != &pUVar8->_padding_)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Ret->IsA(T::StaticClass())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                     ,0x1181,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                TVar9.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
                return (TSubclassOf<ULensDistortionModelHandlerBase>)TVar9.Class.field0_0x0;
              }
              bVar4 = ULensDistortionModelHandlerBase::IsModelSupported(this,in_RDX);
              if (bVar4) {
                lVar11 = (longlong)local_48.Index;
                uVar6 = 0;
                if (local_48.Index < local_48.ObjectArray.ArrayNum) {
                  uVar6 = (uint)~local_48.Index >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  TVar9.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
                  return (TSubclassOf<ULensDistortionModelHandlerBase>)TVar9.Class.field0_0x0;
                }
                pUVar2 = *(UObject **)(local_48.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
                *(UObject **)param_1.Class.field0_0x0 = pUVar2;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar2 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar2);
                }
                if (local_48.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                  return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
                }
                FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
                return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
              }
            }
          }
        }
        TObjectIterator<UClass>::Advance(&local_48);
      }
      if (local_48.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  *(undefined8 *)param_1.Class.field0_0x0 = 0;
  return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
}

// GetModelName @ 14d6d5ab0

FName __thiscall ULensModel::GetModelName(ULensModel *this)

{
  FName in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Models\\LensModel.h"
             ,0x1b,L"Pure virtual not implemented (%s)");
  ::FName::FName((FName *)in_RDX,"");
  return in_RDX;
}

// GetNumParameters @ 14d6d60b0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall ULensModel::GetNumParameters(ULensModel *this)

{
  FProperty *this_00;
  uint uVar1;
  FString local_38;
  TFieldIterator<FProperty> local_28;
  
  local_28.Struct = (UStruct *)(**(code **)(*(longlong *)this + 0x2c0))();
  uVar1 = 0;
  if (local_28.Struct == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = (local_28.Struct)->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = true;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  this_00 = (FProperty *)local_28.Field;
  while (this_00 != (FProperty *)0x0) {
    if ((*(uint *)(this_00->_padding_ + 0x18) >> 8 & 1) == 0) {
      if (2 < (byte)LogLensModel._0_1_) {
        local_28.Field = (FField *)this_00;
        FProperty::GetNameCPP(this_00,&local_38);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLensModel);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      uVar1 = uVar1 + 1;
    }
    local_28.Field = (FField *)this_00->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    this_00 = (FProperty *)local_28.Field;
  }
  return uVar1;
}

// GetParameterStruct @ 14d6d6d10

UScriptStruct * __thiscall ULensModel::GetParameterStruct(ULensModel *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Models\\LensModel.h"
             ,0x21,L"Pure virtual not implemented (%s)");
  return (UScriptStruct *)0x0;
}

// GetPrivateStaticClass @ 14d6d8760

UClass * __cdecl ULensModel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULensModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"LensModel",
               &Z_Registration_Info_UClass_ULensModel.InnerSingleton,StaticRegisterNativesULensModel
               ,0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULensModel>,InternalVTableHelperCtorCaller<ULensModel>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULensModel.InnerSingleton;
}

// GetShortModelName @ 14d6d8df0

FName __thiscall ULensModel::GetShortModelName(ULensModel *this)

{
  FName in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Public\\Models\\LensModel.h"
             ,0x1e,L"Pure virtual not implemented (%s)");
  ::FName::FName((FName *)in_RDX,"");
  return in_RDX;
}

// StaticRegisterNativesULensModel @ 14d6f0240

void __cdecl ULensModel::StaticRegisterNativesULensModel(void)

{
  return;
}

// ToArray_Internal @ 14d6f29f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULensModel::ToArray_Internal
          (ULensModel *this,UScriptStruct *param_1,void *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FProperty *this_00;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  FScriptContainerElement *pFVar8;
  FString local_48;
  TFieldIterator<FProperty> local_38;
  
  pUVar7 = (UScriptStruct *)(**(code **)(*(longlong *)this + 0x2c0))();
  if (param_1 == pUVar7) {
    uVar5 = (**(code **)(*(longlong *)this + 0x2c8))(this);
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    piVar1 = &param_3->ArrayMax;
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&param_3->AllocatorInstance,0,piVar1);
    }
    if (param_1 == (UScriptStruct *)0x0) {
      local_38.Field = (FField *)0x0;
    }
    else {
      local_38.Field = (FField *)param_1->_padding_;
    }
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.bIncludeInterface = false;
    local_38.Struct = (UStruct *)param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
    this_00 = (FProperty *)local_38.Field;
    while (this_00 != (FProperty *)0x0) {
      local_38.Field = (FField *)this_00;
      if (((*(uint *)(this_00->_padding_ + 0x18) >> 8 & 1) == 0) || (this_00 == (FProperty *)0x0)) {
        if (2 < (byte)LogLensModel._0_1_) {
          FProperty::GetNameCPP(this_00,&local_48);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLensModel);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        if ((this_00->ArrayDim < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((param_2 == (void *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_3->AllocatorInstance).Data;
        pFVar8 = (FScriptContainerElement *)((longlong)this_00->Offset_Internal + (longlong)param_2)
        ;
        if (((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + (longlong)*piVar1 * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_3->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_3->AllocatorInstance,piVar1);
        }
        param_3->ArrayNum = iVar6 + 1;
        *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 4) =
             *(undefined4 *)pFVar8;
      }
      local_38.Field = (FField *)this_00->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      this_00 = (FProperty *)local_38.Field;
    }
  }
  else if (1 < (byte)LogLensModel._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLensModel);
  }
  return;
}

