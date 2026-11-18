// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 60

// StaticClass @ 14e2cfb30

UClass * __cdecl UPropertyValue::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValue",
               &Z_Registration_Info_UClass_UPropertyValue.InnerSingleton,
               StaticRegisterNativesUPropertyValue,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPropertyValue>,InternalVTableHelperCtorCaller<UPropertyValue>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValue.InnerSingleton;
}

// UPropertyValue @ 14e2d46e0

UPropertyValue * __thiscall
UPropertyValue::UPropertyValue(UPropertyValue *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->TempObjPtr).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPropertyValue__6B_;
  *(undefined8 *)&this->OnPropertyApplied = 0;
  *(undefined8 *)&(this->OnPropertyApplied).field_0x8 = 0;
  *(undefined8 *)&(this->OnPropertyApplied).field_0x10 = 0;
  *(undefined8 *)&(this->OnPropertyApplied).field_0x18 = 2;
  *(undefined8 *)&this->OnPropertyRecorded = 0;
  *(undefined8 *)&(this->OnPropertyRecorded).field_0x8 = 0;
  *(undefined8 *)&(this->OnPropertyRecorded).field_0x10 = 0;
  *(undefined8 *)&(this->OnPropertyRecorded).field_0x18 = 2;
  (this->Properties_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Properties_DEPRECATED).ArrayNum = 0;
  (this->Properties_DEPRECATED).ArrayMax = 0;
  (this->PropertyIndices_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyIndices_DEPRECATED).ArrayNum = 0;
  (this->PropertyIndices_DEPRECATED).ArrayMax = 0;
  (this->CapturedPropSegments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CapturedPropSegments).ArrayNum = 0;
  (this->CapturedPropSegments).ArrayMax = 0;
  (this->FullDisplayString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullDisplayString).Data.ArrayNum = 0;
  (this->FullDisplayString).Data.ArrayMax = 0;
  (this->PropertySetterName).ComparisonIndex = 0;
  (this->PropertySetterName).Number = 0;
  *(undefined8 *)&this->PropertySetterParameterDefaults = 0;
  *(undefined8 *)&(this->PropertySetterParameterDefaults).field_0x8 = 0;
  *(undefined8 *)&(this->PropertySetterParameterDefaults).field_0x20 = 0;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x28 = 0;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x34 = 0;
  *(undefined8 *)&(this->PropertySetterParameterDefaults).field_0x40 = 0;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x48 = 0;
  (this->LeafPropertyClass_DEPRECATED).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ValueBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueBytes).ArrayNum = 0;
  (this->ValueBytes).ArrayMax = 0;
  (this->DefaultValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultValue).ArrayNum = 0;
  (this->DefaultValue).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->TempObjPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TempObjPtr).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TempObjPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TempObjPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->TempName).ComparisonIndex = 0;
  (this->TempName).Number = 0;
  (this->TempStr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempStr).Data.ArrayNum = 0;
  (this->TempStr).Data.ArrayMax = 0;
  FText::FText(&this->TempText);
  return this;
}

// UPropertyValue @ 14e2d4830

UPropertyValue * __thiscall
UPropertyValue::UPropertyValue(UPropertyValue *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->TempObjPtr).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPropertyValue__6B_;
  *(undefined8 *)&this->OnPropertyApplied = 0;
  *(undefined8 *)&(this->OnPropertyApplied).field_0x8 = 0;
  *(undefined8 *)&(this->OnPropertyApplied).field_0x10 = 0;
  *(undefined8 *)&(this->OnPropertyApplied).field_0x18 = 2;
  *(undefined8 *)&this->OnPropertyRecorded = 0;
  *(undefined8 *)&(this->OnPropertyRecorded).field_0x8 = 0;
  *(undefined8 *)&(this->OnPropertyRecorded).field_0x10 = 0;
  *(undefined8 *)&(this->OnPropertyRecorded).field_0x18 = 2;
  (this->Properties_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Properties_DEPRECATED).ArrayNum = 0;
  (this->Properties_DEPRECATED).ArrayMax = 0;
  (this->PropertyIndices_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyIndices_DEPRECATED).ArrayNum = 0;
  (this->PropertyIndices_DEPRECATED).ArrayMax = 0;
  (this->CapturedPropSegments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CapturedPropSegments).ArrayNum = 0;
  (this->CapturedPropSegments).ArrayMax = 0;
  (this->FullDisplayString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullDisplayString).Data.ArrayNum = 0;
  (this->FullDisplayString).Data.ArrayMax = 0;
  (this->PropertySetterName).ComparisonIndex = 0;
  (this->PropertySetterName).Number = 0;
  *(undefined8 *)&this->PropertySetterParameterDefaults = 0;
  *(undefined8 *)&(this->PropertySetterParameterDefaults).field_0x8 = 0;
  *(undefined8 *)&(this->PropertySetterParameterDefaults).field_0x20 = 0;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x28 = 0;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x34 = 0;
  *(undefined8 *)&(this->PropertySetterParameterDefaults).field_0x40 = 0;
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x48 = 0;
  (this->LeafPropertyClass_DEPRECATED).field0_0x0.DebugPtr = (UClass *)0x0;
  this->LeafPropertyClass = (FFieldClass *)0x0;
  (this->ValueBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ValueBytes).ArrayNum = 0;
  (this->ValueBytes).ArrayMax = 0;
  (this->DefaultValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultValue).ArrayNum = 0;
  (this->DefaultValue).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->TempObjPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TempObjPtr).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TempObjPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TempObjPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->TempName).ComparisonIndex = 0;
  (this->TempName).Number = 0;
  (this->TempStr).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempStr).Data.ArrayNum = 0;
  (this->TempStr).Data.ArrayMax = 0;
  FText::FText(&this->TempText);
  return this;
}

// ~UPropertyValue @ 14e2d5370

void __thiscall UPropertyValue::~UPropertyValue(UPropertyValue *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7UPropertyValue__6B_;
  pIVar1 = (this->TempText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar2 = (this->TempStr).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar3 = *(void **)&(this->TempObjPtr).SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pFVar2 = (this->DefaultValue).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ValueBytes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PropertySetterParameterDefaults).field_0x48 = 0;
  pvVar3 = *(void **)&(this->PropertySetterParameterDefaults).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PropertySetterParameterDefaults);
  pFVar2 = (this->FullDisplayString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCapturedPropSegment,int>
            ((FCapturedPropSegment *)(this->CapturedPropSegments).AllocatorInstance.Data,
             (this->CapturedPropSegments).ArrayNum);
  pFVar2 = (this->CapturedPropSegments).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PropertyIndices_DEPRECATED).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFieldPath<FProperty>,int>
            ((TFieldPath<FProperty> *)(this->Properties_DEPRECATED).AllocatorInstance.Data,
             (this->Properties_DEPRECATED).ArrayNum);
  pFVar2 = (this->Properties_DEPRECATED).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPropertyRecorded).field_0x8,*(int *)&(this->OnPropertyRecorded).field_0x10);
  pvVar3 = *(void **)&(this->OnPropertyRecorded).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPropertyRecorded);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPropertyApplied).field_0x8,*(int *)&(this->OnPropertyApplied).field_0x10);
  pvVar3 = *(void **)&(this->OnPropertyApplied).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPropertyApplied);
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyDataToResolvedObject @ 14e2d8d80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UPropertyValue::ApplyDataToResolvedObject(UPropertyValue *this)

{
  FScriptContainerElement FVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  UVariantObjectBinding *this_00;
  UObject *pUVar5;
  longlong lVar6;
  FProperty *pFVar7;
  uchar *puVar8;
  FString *pFVar9;
  ITextData *pIVar10;
  longlong *plVar11;
  ITextData *pIVar12;
  code *pcVar13;
  int *piVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  UClass *pUVar18;
  UObjectBase *this_01;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  USceneComponent *this_02;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res18 [2];
  FString local_68;
  FString local_58;
  TRotator<double> local_48;
  
  if (this->bHasRecordedData == false) {
    return;
  }
  cVar15 = (**(code **)(this->_padding_ + 0x2b0))(this,0);
  if (cVar15 == '\0') {
    return;
  }
  this_00 = (UVariantObjectBinding *)this->_padding_;
  if (this_00 != (UVariantObjectBinding *)0x0) {
    pUVar18 = UVariantObjectBinding::StaticClass();
    iVar17 = (int)pUVar18->_padding_;
    if (((iVar17 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
         &pUVar18->_padding_)) &&
       (this_01 = (UObjectBase *)UVariantObjectBinding::GetObject(this_00),
       this_01 != (UObjectBase *)0x0)) {
      UObjectBase::AtomicallySetFlags(this_01,RF_Transactional);
    }
  }
  pUVar5 = this->ParentContainerObject;
  if (pUVar5 != (UObject *)0x0) {
    pUVar18 = Z_Construct_UClass_UActorComponent_NoRegister();
    lVar6 = *(longlong *)&pUVar5->field_0x10;
    iVar17 = (int)pUVar18->_padding_;
    if ((iVar17 <= *(int *)(lVar6 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar17 * 8) ==
        &pUVar18->_padding_)) {
      UObjectBase::AtomicallySetFlags((UObjectBase *)this->ParentContainerObject,RF_Transactional);
    }
  }
  if (this->PropertySetter == (UFunction *)0x0) {
    pFVar7 = this->LeafProperty;
    if (pFVar7 == (FProperty *)0x0) goto LAB_14e2d9173;
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x11 & 1) != 0) {
      puVar8 = this->PropertyValuePtr;
      FVar1 = *(this->ValueBytes).AllocatorInstance.Data;
      if (((char)pFVar7[1]._padding_ == '\0') &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("FieldSize != 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0xa61,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      bVar2 = *(byte *)((longlong)&pFVar7[1]._padding_ + 1);
      bVar3 = *(byte *)((longlong)&pFVar7[1]._padding_ + 3);
      if (FVar1 == (FScriptContainerElement)0x0) {
        puVar8[bVar2] = ~bVar3 & puVar8[bVar2];
      }
      else {
        puVar8[bVar2] = ~bVar3 & puVar8[bVar2] | *(byte *)((longlong)&pFVar7[1]._padding_ + 2);
      }
      goto LAB_14e2d91a7;
    }
    if (pFVar7 == (FProperty *)0x0) {
LAB_14e2d9173:
      pTVar19 = GetRecordedData(this);
      iVar17 = (**(code **)(this->_padding_ + 0x2f8))(this);
      pFVar21 = (pTVar19->AllocatorInstance).Data;
    }
    else {
      if ((*(byte *)(pFVar7->_padding_ + 0x1e) & 1) == 0) {
        if (pFVar7 != (FProperty *)0x0) {
          if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0xd & 1) != 0) {
            *(FName *)this->PropertyValuePtr = this->TempName;
            goto LAB_14e2d91a7;
          }
          if (pFVar7 != (FProperty *)0x0) {
            if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0xe & 1) != 0) {
              ::FString::FString(&local_68,&this->TempStr);
              FVar20.Data = local_68.Data.AllocatorInstance.Data;
              pFVar9 = (FString *)this->PropertyValuePtr;
              if (pFVar9 != &local_68) {
                piVar14 = &(pFVar9->Data).ArrayMax;
                (pFVar9->Data).ArrayNum = local_68.Data.ArrayNum;
                if ((local_68.Data.ArrayNum == 0) && (*piVar14 == 0)) {
                  *piVar14 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_68.Data.ArrayNum,*piVar14,(ForAnyElementType *)pFVar9,
                             local_68.Data.ArrayNum,piVar14);
                  if (local_68.Data.ArrayNum != 0) {
                    memcpy((pFVar9->Data).AllocatorInstance.Data,FVar20.Data,
                           (longlong)local_68.Data.ArrayNum * 2);
                  }
                }
              }
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              goto LAB_14e2d91a7;
            }
            if ((pFVar7 != (FProperty *)0x0) &&
               ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x1e & 1) != 0)) {
              pIVar10 = (this->TempText).TextData.Reference;
              if (pIVar10 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar10 + 8))(pIVar10,local_res8);
              }
              plVar11 = (longlong *)this->PropertyValuePtr;
              uVar4 = (this->TempText).Flags;
              pIVar12 = (ITextData *)*plVar11;
              if (pIVar12 != pIVar10) {
                *plVar11 = (longlong)pIVar10;
                if (pIVar10 != (ITextData *)0x0) {
                  (**(code **)((longlong)*pIVar10 + 8))(pIVar10,local_res10);
                }
                if (pIVar12 != (ITextData *)0x0) {
                  (**(code **)((longlong)*pIVar12 + 0x10))(pIVar12);
                }
              }
              *(uint *)(plVar11 + 1) = uVar4;
              if (pIVar10 != (ITextData *)0x0) {
                (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
              }
              goto LAB_14e2d91a7;
            }
          }
        }
        goto LAB_14e2d9173;
      }
      iVar17 = *(int *)(pFVar7[1]._padding_ + 0x34);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&this->ValueBytes,iVar17,Default);
      pFVar21 = (this->ValueBytes).AllocatorInstance.Data;
    }
    memcpy(this->PropertyValuePtr,pFVar21,(longlong)iVar17);
    goto LAB_14e2d91a7;
  }
  local_res18[0] = (FName)this->PropertySetter->_padding_;
  this_02 = this->ParentContainerAddress;
  ::FName::ToString(local_res18,&local_58);
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar20.Data = local_58.Data.AllocatorInstance.Data;
  }
  iVar17 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar20.Data,L"K2_SetRelativeRotation");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (iVar17 != 0) {
    (**(code **)(this->_padding_ + 0x318))(this,this_02);
    goto LAB_14e2d91a7;
  }
  pTVar19 = GetRecordedData(this);
  pFVar21 = (pTVar19->AllocatorInstance).Data;
  if (pFVar21 == (FScriptContainerElement *)0x0) goto LAB_14e2d91a7;
  if (this_02 == (USceneComponent *)0x0) {
LAB_14e2d8ee4:
    this_02 = (USceneComponent *)0x0;
  }
  else {
    pUVar18 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar17 = (int)pUVar18->_padding_;
    if ((*(int *)(this_02->_padding_ + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar18->_padding_)) goto LAB_14e2d8ee4;
  }
  if (this_02 != (USceneComponent *)0x0) {
    local_48.Pitch = *(double *)pFVar21;
    local_48.Yaw = *(double *)(pFVar21 + 8);
    local_48.Roll = *(double *)(pFVar21 + 0x10);
    USceneComponent::SetRelativeRotationExact(this_02,&local_48,false,(FHitResult *)0x0,None);
  }
LAB_14e2d91a7:
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPropertyApplied);
  return;
}

// ApplyViaFunctionSetter @ 14e2d9520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPropertyValue::ApplyViaFunctionSetter(UPropertyValue *this,UObject *param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *_Src;
  UFunction *pUVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  FProperty *this_00;
  FFeedbackContext *pFVar7;
  UObject *pUVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FFieldClass *pFVar13;
  longlong lVar14;
  FFieldClass *pFVar15;
  FName *this_01;
  ulonglong uVar16;
  FProperty *pFVar17;
  ForAnyElementType FVar18;
  ulonglong _Size;
  wchar_t *pwVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  size_t _Size_00;
  undefined1 *puVar23;
  undefined1 *_Dst;
  undefined1 auStack_138 [64];
  byte local_f8;
  FEditorScriptExecutionGuard local_f7 [3];
  int local_f4;
  TFieldIterator<FProperty> local_f0;
  FFieldClass *local_d8;
  TFieldIterator<FProperty> local_d0;
  TFieldIterator<FProperty> local_b8;
  FString local_a0;
  TFieldIterator<FProperty> local_90;
  FString local_78;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_68;
  FName local_60;
  UObject *local_58;
  FString local_50;
  FString local_40;
  ulonglong local_30;
  
  puVar22 = auStack_138;
  local_30 = __security_cookie.value ^ (ulonglong)&local_f8;
  puVar23 = (undefined1 *)0x0;
  local_58 = param_1;
  if (param_1 == (UObject *)0x0) {
    puVar22 = auStack_138;
    if (1 < (byte)LogVariantContent._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
      puVar22 = auStack_138;
    }
  }
  else {
    local_90.Struct = (UStruct *)this->PropertySetter;
    if ((UFunction *)local_90.Struct == (UFunction *)0x0) {
      puVar22 = auStack_138;
      if (1 < (byte)LogVariantContent._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
        puVar22 = auStack_138;
      }
    }
    else {
      local_90.Field = (FField *)((UFunction *)local_90.Struct)->_padding_;
      local_90.InterfaceIndex = -1;
      local_90.bIncludeSuper = true;
      local_90.bIncludeDeprecated = true;
      local_90.bIncludeInterface = false;
      TFieldIterator<FProperty>::IterateToNext(&local_90);
      while ((local_90.Field != (FField *)0x0 &&
             (((ulonglong)local_90.Field[1].ClassPrivate & 0x480) == 0x80))) {
        local_90.Field = (local_90.Field)->Next;
        TFieldIterator<FProperty>::IterateToNext(&local_90);
      }
      uVar1 = this->PropertySetter->ParmsSize;
      _Size = (ulonglong)uVar1;
      _Dst = puVar23;
      if (uVar1 != 0) {
        uVar16 = _Size + 0x1e;
        if (uVar16 <= _Size + 0xf) {
          uVar16 = 0xffffffffffffff0;
        }
        puVar22 = auStack_138 + -(uVar16 & 0xfffffffffffffff0);
        _Dst = (undefined1 *)((longlong)&local_f0 + -(uVar16 & 0xfffffffffffffff0));
      }
      *(undefined8 *)(puVar22 + -8) = 0x14e2d96b2;
      memset(_Dst,0,_Size);
      local_d0.Struct = (UStruct *)this->PropertySetter;
      if ((UFunction *)local_d0.Struct == (UFunction *)0x0) {
        local_d0.Field = (FField *)0x0;
      }
      else {
        local_d0.Field = (FField *)((UFunction *)local_d0.Struct)->_padding_;
      }
      local_d0.InterfaceIndex = -1;
      local_d0.bIncludeSuper = true;
      local_d0.bIncludeDeprecated = true;
      local_d0.bIncludeInterface = false;
      *(undefined8 *)(puVar22 + -8) = 0x14e2d96ea;
      TFieldIterator<FProperty>::IterateToNext(&local_d0);
      pFVar6 = local_d0.Field;
      while ((local_d0.Field = pFVar6, pFVar6 != (FField *)0x0 &&
             ((char)pFVar6[1].ClassPrivate < '\0'))) {
        if (((ulonglong)pFVar6[1].ClassPrivate >> 9 & 1) == 0) {
          pcVar3 = *(code **)(pFVar6->_padding_ + 0x150);
          iVar12 = (int)pFVar6[1]._padding_;
          if (iVar12 < 1) {
            *(int *)(puVar22 + 0x28) = iVar12;
            *(undefined4 *)(puVar22 + 0x20) = 0;
            *(undefined8 *)(puVar22 + -8) = 0x14e2d9760;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (_Dst == (undefined1 *)0x0) {
            *(undefined8 *)(puVar22 + -8) = 0x14e2d978b;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L"");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar12 = *(int *)((longlong)&pFVar6[1].Owner.Container + 4);
          *(undefined8 *)(puVar22 + -8) = 0x14e2d97a1;
          (*pcVar3)(pFVar6,_Dst + iVar12);
        }
        local_d0.Field = pFVar6->Next;
        *(undefined8 *)(puVar22 + -8) = 0x14e2d97b2;
        TFieldIterator<FProperty>::IterateToNext(&local_d0);
        pFVar6 = local_d0.Field;
      }
      local_f8 = 0;
      pcVar3 = *(code **)(this->_padding_ + 0x2d8);
      *(undefined8 *)(puVar22 + -8) = 0x14e2d97d6;
      pFVar13 = (FFieldClass *)(*pcVar3)(this);
      pcVar3 = *(code **)(this->_padding_ + 0x2f8);
      local_d8 = pFVar13;
      *(undefined8 *)(puVar22 + -8) = 0x14e2d97ec;
      local_f4 = (*pcVar3)(this);
      *(undefined8 *)(puVar22 + -8) = 0x14e2d97f7;
      local_68 = GetRecordedData(this);
      local_f0.Struct = (UStruct *)this->PropertySetter;
      if ((UFunction *)local_f0.Struct == (UFunction *)0x0) {
        local_f0.Field = (FField *)0x0;
      }
      else {
        local_f0.Field = (FField *)((UFunction *)local_f0.Struct)->_padding_;
      }
      local_f0.InterfaceIndex = -1;
      local_f0.bIncludeSuper = true;
      local_f0.bIncludeDeprecated = true;
      local_f0.bIncludeInterface = false;
      *(undefined8 *)(puVar22 + -8) = 0x14e2d983a;
      TFieldIterator<FProperty>::IterateToNext(&local_f0);
      this_00 = (FProperty *)local_f0.Field;
      while (((local_f0.Field = (FField *)this_00, this_00 != (FProperty *)0x0 &&
              ((char)this_00->PropertyFlags < '\0')) &&
             ((this_00->PropertyFlags & (CPF_ReturnParm|CPF_OutParm)) == CPF_None))) {
        *(undefined8 *)(puVar22 + -8) = 0x14e2d987a;
        bVar9 = IsThisNotNull(this_00,"FField::GetName");
        if (bVar9) {
          *(undefined8 *)(puVar22 + -8) = 0x14e2d988b;
          ::FName::ToString((FName *)&this_00->_padding_,&local_a0);
        }
        else {
          *(undefined8 *)(puVar22 + -8) = 0x14e2d989d;
          ::FString::FString(&local_a0,L"None");
        }
        pwVar19 = L"";
        if (local_a0.Data.ArrayNum == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = local_a0.Data.ArrayNum + -1;
          pwVar19 = (wchar_t *)local_a0.Data.AllocatorInstance.Data;
        }
        *(undefined8 *)(puVar22 + -8) = 0x14e2d98b8;
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar19);
        if (*(int *)&(this->PropertySetterParameterDefaults).field_0x8 !=
            *(int *)&(this->PropertySetterParameterDefaults).field_0x34) {
          puVar23 = *(undefined1 **)&(this->PropertySetterParameterDefaults).field_0x40;
          puVar20 = &(this->PropertySetterParameterDefaults).field_0x38;
          if (puVar23 != (undefined1 *)0x0) {
            puVar20 = puVar23;
          }
          iVar12 = *(int *)(puVar20 +
                           (ulonglong)
                           (*(int *)&(this->PropertySetterParameterDefaults).field_0x48 - 1U &
                           uVar10) * 4);
          FVar18.Data = local_a0.Data.AllocatorInstance.Data;
          iVar11 = local_a0.Data.ArrayNum;
          while (local_a0.Data.AllocatorInstance.Data = FVar18.Data, iVar12 != -1) {
            lVar14 = (longlong)iVar12 * 0x28;
            iVar2 = *(int *)(*(longlong *)&this->PropertySetterParameterDefaults + 8 + lVar14);
            if (iVar2 == iVar11) {
              if (1 < iVar2) {
                pwVar19 = *(wchar_t **)
                           (*(longlong *)&this->PropertySetterParameterDefaults + lVar14);
                *(undefined8 *)(puVar22 + -8) = 0x14e2d993b;
                iVar11 = FGenericPlatformStricmp::Stricmp(pwVar19,(wchar_t *)FVar18.Data);
                bVar9 = iVar11 == 0;
                iVar11 = local_a0.Data.ArrayNum;
                goto LAB_14e2d9940;
              }
LAB_14e2d99fb:
              if ((iVar12 != -1) &&
                 (lVar14 = *(longlong *)&this->PropertySetterParameterDefaults +
                           (longlong)iVar12 * 0x28, lVar14 != 0)) {
                puVar21 = (undefined8 *)(lVar14 + 0x10);
                goto LAB_14e2d995d;
              }
              break;
            }
            bVar9 = iVar2 + iVar11 == 1;
LAB_14e2d9940:
            if (bVar9) goto LAB_14e2d99fb;
            FVar18.Data = local_a0.Data.AllocatorInstance.Data;
            iVar12 = *(int *)(lVar14 + 0x20 + *(longlong *)&this->PropertySetterParameterDefaults);
          }
        }
        puVar21 = (undefined8 *)0x0;
LAB_14e2d995d:
        FVar18.Data = local_a0.Data.AllocatorInstance.Data;
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          *(undefined8 *)(puVar22 + -8) = 0x14e2d996b;
          FMemory::Free(FVar18.Data);
        }
        pFVar7 = GWarn;
        if (puVar21 != (undefined8 *)0x0) {
          if (this_00->ArrayDim < 1) {
            *(int *)(puVar22 + 0x28) = this_00->ArrayDim;
            *(undefined4 *)(puVar22 + 0x20) = 0;
            *(undefined8 *)(puVar22 + -8) = 0x14e2d99af;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (_Dst == (undefined1 *)0x0) {
            *(undefined8 *)(puVar22 + -8) = 0x14e2d99de;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L"");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar12 = this_00->Offset_Internal;
          if (*(int *)(puVar21 + 1) == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = (wchar_t *)*puVar21;
          }
          *(undefined8 *)(puVar22 + -8) = 0x14e2d9a3c;
          bVar9 = FProperty::ValidateImportFlags(this_00,0,(FOutputDevice *)pFVar7);
          if ((bVar9) && (pwVar19 != (wchar_t *)0x0)) {
            lVar14 = this_00->_padding_;
            *(FFeedbackContext **)(puVar22 + 0x30) = pFVar7;
            *(undefined4 *)(puVar22 + 0x28) = 0x8000000;
            *(undefined8 *)(puVar22 + 0x20) = 0;
            pcVar3 = *(code **)(lVar14 + 0xe8);
            *(undefined8 *)(puVar22 + -8) = 0x14e2d9a71;
            lVar14 = (*pcVar3)(this_00,pwVar19,_Dst + iVar12,0);
            pFVar13 = local_d8;
            if (lVar14 != 0) goto LAB_14e2d9b2c;
          }
          pFVar13 = local_d8;
          if (1 < (byte)LogVariantContent._0_1_) {
            *(undefined8 *)(puVar22 + -8) = 0x14e2d9ab3;
            bVar9 = IsThisNotNull(this_00,"FField::GetName");
            if (bVar9) {
              *(undefined8 *)(puVar22 + -8) = 0x14e2d9ac8;
              ::FName::ToString((FName *)&this_00->_padding_,&local_78);
            }
            else {
              *(undefined8 *)(puVar22 + -8) = 0x14e2d9add;
              ::FString::FString(&local_78,L"None");
            }
            *(undefined8 *)(puVar22 + -8) = 0x14e2d9b05;
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
            FVar18.Data = local_78.Data.AllocatorInstance.Data;
            pFVar13 = local_d8;
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              *(undefined8 *)(puVar22 + -8) = 0x14e2d9b16;
              FMemory::Free(FVar18.Data);
              pFVar13 = local_d8;
            }
          }
        }
LAB_14e2d9b2c:
        if ((local_f8 == 0) && ((FFieldClass *)this_00->_padding_ == pFVar13)) {
          *(undefined8 *)(puVar22 + -8) = 0x14e2d9b46;
          pFVar15 = FStructProperty::StaticClass();
          pFVar5 = pFVar13;
          if (pFVar15->Id == CASTCLASS_None) {
            for (; pFVar5 != (FFieldClass *)0x0; pFVar5 = pFVar5->SuperClass) {
              if (pFVar5 == pFVar15) {
                bVar9 = true;
                goto LAB_14e2d9b77;
              }
            }
            bVar9 = false;
          }
          else {
            bVar9 = (pFVar13->CastFlags & pFVar15->Id) != CASTCLASS_None;
          }
LAB_14e2d9b77:
          if (bVar9) {
            pcVar3 = *(code **)(this->_padding_ + 0x2e0);
            *(undefined8 *)(puVar22 + -8) = 0x14e2d9b87;
            lVar14 = (*pcVar3)(this);
            pFVar17 = (FProperty *)0x0;
            if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x14 & 1) != 0) {
              pFVar17 = this_00;
            }
            if (lVar14 != pFVar17[1]._padding_) goto LAB_14e2d9c3f;
          }
          if (this_00->ArrayDim < 1) {
            *(int *)(puVar22 + 0x28) = this_00->ArrayDim;
            *(undefined4 *)(puVar22 + 0x20) = 0;
            *(undefined8 *)(puVar22 + -8) = 0x14e2d9be0;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (_Dst == (undefined1 *)0x0) {
            *(undefined8 *)(puVar22 + -8) = 0x14e2d9c0b;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L"");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar12 = this_00->Offset_Internal;
          _Size_00 = (size_t)local_f4;
          _Src = (local_68->AllocatorInstance).Data;
          *(undefined8 *)(puVar22 + -8) = 0x14e2d9c2f;
          memcpy(_Dst + iVar12,_Src,_Size_00);
          puVar23 = &DAT_00000001;
          local_f8 = 1;
        }
        else {
LAB_14e2d9c3f:
          puVar23 = (undefined1 *)(ulonglong)local_f8;
        }
        local_f0.Field = (FField *)this_00->_padding_;
        *(undefined8 *)(puVar22 + -8) = 0x14e2d9c55;
        TFieldIterator<FProperty>::IterateToNext(&local_f0);
        this_00 = (FProperty *)local_f0.Field;
      }
      local_60 = (FName)this->PropertySetter->_padding_;
      *(undefined8 *)(puVar22 + -8) = 0x14e2d9c87;
      ::FName::ToString(&local_60,&local_50);
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        FVar18.Data = local_50.Data.AllocatorInstance.Data;
      }
      *(undefined8 *)(puVar22 + -8) = 0x14e2d9ca5;
      iVar12 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar18.Data,L"SetVisibility");
      if (((iVar12 == 0) && (this->PropertySetter->ParmsSize == 2)) && (_Dst != (undefined1 *)0x0))
      {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        *(undefined8 *)(puVar22 + -8) = 0x14e2d9cd6;
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        _Dst[1] = 1;
      }
      if ((char)puVar23 == '\0') {
        if (1 < (byte)LogVariantContent._0_1_) {
          pcVar3 = *(code **)(this->_padding_ + 0x2d8);
          *(undefined8 *)(puVar22 + -8) = 0x14e2d9d27;
          this_01 = (FName *)(*pcVar3)(this);
          *(undefined8 *)(puVar22 + -8) = 0x14e2d9d36;
          ::FName::ToString(this_01,&local_40);
          *(undefined8 *)(puVar22 + -8) = 0x14e2d9d5b;
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
          if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            *(undefined8 *)(puVar22 + -8) = 0x14e2d9d6c;
            FMemory::Free(local_40.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        *(undefined8 *)(puVar22 + -8) = 0x14e2d9ced;
        FEditorScriptExecutionGuard::FEditorScriptExecutionGuard(local_f7);
        pUVar8 = local_58;
        pUVar4 = this->PropertySetter;
        pcVar3 = *(code **)(*(longlong *)local_58 + 0x260);
        *(undefined8 *)(puVar22 + -8) = 0x14e2d9d07;
        (*pcVar3)(pUVar8,pUVar4,_Dst);
        *(undefined8 *)(puVar22 + -8) = 0x14e2d9d10;
        FEditorScriptExecutionGuard::~FEditorScriptExecutionGuard(local_f7);
      }
      local_b8.Struct = (UStruct *)this->PropertySetter;
      if ((UFunction *)local_b8.Struct == (UFunction *)0x0) {
        local_b8.Field = (FField *)0x0;
      }
      else {
        local_b8.Field = (FField *)((UFunction *)local_b8.Struct)->_padding_;
      }
      local_b8.InterfaceIndex = -1;
      local_b8.bIncludeSuper = true;
      local_b8.bIncludeDeprecated = true;
      local_b8.bIncludeInterface = false;
      *(undefined8 *)(puVar22 + -8) = 0x14e2d9da7;
      TFieldIterator<FProperty>::IterateToNext(&local_b8);
      pFVar6 = local_b8.Field;
      while ((pFVar6 != (FField *)0x0 && ((char)pFVar6[1].ClassPrivate < '\0'))) {
        if ((~(byte)((ulonglong)pFVar6[1].ClassPrivate >> 0x24) & 1) != 0) {
          pcVar3 = *(code **)(pFVar6->_padding_ + 0x138);
          iVar12 = (int)pFVar6[1]._padding_;
          local_b8.Field = pFVar6;
          if (iVar12 < 1) {
            *(int *)(puVar22 + 0x28) = iVar12;
            *(undefined4 *)(puVar22 + 0x20) = 0;
            *(undefined8 *)(puVar22 + -8) = 0x14e2d9e07;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (_Dst == (undefined1 *)0x0) {
            *(undefined8 *)(puVar22 + -8) = 0x14e2d9e36;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L"");
            if (bVar9) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar12 = *(int *)((longlong)&pFVar6[1].Owner.Container + 4);
          *(undefined8 *)(puVar22 + -8) = 0x14e2d9e4c;
          (*pcVar3)(pFVar6,_Dst + iVar12);
        }
        local_b8.Field = pFVar6->Next;
        *(undefined8 *)(puVar22 + -8) = 0x14e2d9e5d;
        TFieldIterator<FProperty>::IterateToNext(&local_b8);
        pFVar6 = local_b8.Field;
      }
    }
  }
  *(undefined8 *)(puVar22 + -8) = 0x14e2d9e79;
  return;
}

// BeginDestroy @ 14e2da9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPropertyValue::BeginDestroy(UPropertyValue *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UPropertyValue **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// ClearDefaultValue @ 14e2daae0

void __thiscall UPropertyValue::ClearDefaultValue(UPropertyValue *this)

{
  int *piVar1;
  
  piVar1 = &(this->DefaultValue).ArrayMax;
  (this->DefaultValue).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->DefaultValue).AllocatorInstance,0,piVar1);
  }
  return;
}

// ClearLastResolve @ 14e2dab20

void __thiscall UPropertyValue::ClearLastResolve(UPropertyValue *this)

{
  this->LeafProperty = (FProperty *)0x0;
  this->ParentContainerClass = (UStruct *)0x0;
  this->ParentContainerAddress = (void *)0x0;
  this->PropertyValuePtr = (uchar *)0x0;
  return;
}

// ContainsProperty @ 14e2dab40

bool __thiscall UPropertyValue::ContainsProperty(UPropertyValue *this,FProperty *param_1)

{
  if ((this->LeafProperty != (FProperty *)0x0) && (this->LeafProperty == param_1)) {
    return true;
  }
  return false;
}

// GetCapturedPropSegments @ 14e2dc470

TArray<FCapturedPropSegment,TSizedDefaultAllocator<32>_> * __thiscall
UPropertyValue::GetCapturedPropSegments(UPropertyValue *this)

{
  return &this->CapturedPropSegments;
}

// GetDataFromResolvedObject @ 14e2dc490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UPropertyValue::GetDataFromResolvedObject
          (UPropertyValue *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FBoolProperty *this_00;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  
  iVar4 = (**(code **)(this->_padding_ + 0x2f8))();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (__return_storage_ptr__,iVar4,Default);
  bVar2 = HasValidResolve(this);
  if (bVar2) {
    this_00 = (FBoolProperty *)this->LeafProperty;
    if ((this_00 == (FBoolProperty *)0x0) ||
       ((*(uint *)(this_00->_padding_ + 0x18) >> 0x11 & 1) == 0)) {
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,this->PropertyValuePtr,(longlong)iVar4
            );
    }
    else {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      FVar3 = (FScriptContainerElement)
              FBoolProperty::GetPropertyValue(this_00,this->PropertyValuePtr);
      *pFVar1 = FVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetDefaultValue @ 14e2dc8c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UPropertyValue::GetDefaultValue(UPropertyValue *this)

{
  UVariantObjectBinding *this_00;
  code *pcVar1;
  FBoolProperty *this_01;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  FScriptContainerElement FVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  UEnum *pUVar13;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar14;
  uchar *_Src;
  FProperty *pFVar15;
  undefined8 local_res8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  if (((this->DefaultValue).ArrayNum != 0) ||
     (this_00 = (UVariantObjectBinding *)this->_padding_, this_00 == (UVariantObjectBinding *)0x0))
  goto LAB_14e2dc9fe;
  pUVar11 = UVariantObjectBinding::StaticClass();
  iVar9 = (int)pUVar11->_padding_;
  if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
     (((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8)
       != &pUVar11->_padding_ ||
      (pUVar12 = UVariantObjectBinding::GetObject(this_00), pUVar12 == (UObject *)0x0))))
  goto LAB_14e2dc9fe;
  iVar9 = (**(code **)(this->_padding_ + 0x2f8))(this);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed(&this->DefaultValue,iVar9,Default)
  ;
  pUVar11 = *(UClass **)&pUVar12->field_0x10;
  pcVar1 = *(code **)(this->_padding_ + 0x2b0);
  if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar11);
  }
  cVar5 = (*pcVar1)(this,(pUVar11->ClassDefaultObject).field0_0x0.DebugPtr);
  if (cVar5 != '\0') {
    this_01 = (FBoolProperty *)this->LeafProperty;
    if (this_01 != (FBoolProperty *)0x0) {
      if ((*(uint *)(this_01->_padding_ + 0x18) >> 0x11 & 1) != 0) {
        pFVar2 = (this->DefaultValue).AllocatorInstance.Data;
        FVar6 = (FScriptContainerElement)
                FBoolProperty::GetPropertyValue(this_01,this->PropertyValuePtr);
        *pFVar2 = FVar6;
        goto LAB_14e2dc9c2;
      }
      if ((this_01 != (FBoolProperty *)0x0) && ((*(byte *)(this_01->_padding_ + 0x1e) & 1) != 0)) {
        iVar9 = *(int *)(*(longlong *)&this_01->FieldSize + 0x34);
      }
    }
    _Src = this->PropertyValuePtr;
    if (_Src != (uchar *)0x0) {
      if ((this_01 != (FBoolProperty *)0x0) &&
         ((*(uint *)(this_01->_padding_ + 0x18) >> 0x1d & 1) != 0)) {
        local_res8 = (**(code **)(this_01->_padding_ + 0x1d0))(this_01);
        _Src = (uchar *)&local_res8;
      }
      memcpy((this->DefaultValue).AllocatorInstance.Data,_Src,(longlong)iVar9);
    }
    pFVar15 = this->LeafProperty;
    if (pFVar15 != (FProperty *)0x0) {
      if ((*(byte *)(pFVar15->_padding_ + 0x1e) & 1) == 0) {
        if ((pFVar15 == (FProperty *)0x0) ||
           ((*(uint *)(pFVar15->_padding_ + 0x18) >> 0x18 & 1) == 0)) goto LAB_14e2dc9c2;
        pUVar13 = (UEnum *)(**(code **)(pFVar15->_padding_ + 0x1e0))();
      }
      else {
        pUVar13 = (UEnum *)pFVar15[1]._padding_;
      }
      if (pUVar13 != (UEnum *)0x0) {
        pFVar15 = this->LeafProperty;
        if (pFVar15 == (FProperty *)0x0) {
LAB_14e2dcb18:
          bVar8 = false;
LAB_14e2dcb1b:
          pFVar15 = this->LeafProperty;
          if (pFVar15 != (FProperty *)0x0) {
            if ((*(uint *)(pFVar15->_padding_ + 0x18) >> 0x18 & 1) == 0) {
              if ((pFVar15 != (FProperty *)0x0) && ((*(byte *)(pFVar15->_padding_ + 0x1e) & 1) != 0)
                 ) {
                plVar3 = (longlong *)pFVar15[1]._padding_;
                cVar5 = (**(code **)(*plVar3 + 0x1d8))(plVar3);
                if (cVar5 != '\0') {
                  cVar5 = (**(code **)(*plVar3 + 0x250))(plVar3,0xffffffffffffffff);
                  goto joined_r0x00014e2dcbb8;
                }
              }
            }
            else {
              cVar5 = (**(code **)(pFVar15->_padding_ + 0x1d8))(pFVar15);
              if (cVar5 != '\0') {
                cVar5 = (**(code **)(pFVar15->_padding_ + 0x250))(pFVar15,0xffffffffffffffff);
joined_r0x00014e2dcbb8:
                if (cVar5 == '\0') goto LAB_14e2dcbba;
              }
            }
          }
          if (1 < (byte)LogVariantContent._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
          }
          goto LAB_14e2dc9fe;
        }
        if ((*(uint *)(pFVar15->_padding_ + 0x18) >> 0x18 & 1) == 0) {
          if ((pFVar15 == (FProperty *)0x0) || ((*(byte *)(pFVar15->_padding_ + 0x1e) & 1) == 0))
          goto LAB_14e2dcb18;
          pFVar15 = (FProperty *)pFVar15[1]._padding_;
        }
        cVar5 = (**(code **)(pFVar15->_padding_ + 0x1d8))(pFVar15);
        if ((cVar5 == '\0') ||
           (cVar5 = (**(code **)(pFVar15->_padding_ + 0x250))(pFVar15,0xffffffffffffffff),
           cVar5 == '\0')) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8 == false) goto LAB_14e2dcb1b;
LAB_14e2dcbba:
        iVar9 = (**(code **)(this->_padding_ + 0x2f8))(this);
        iVar10 = EnumValueBytesToIndex(pUVar13,&this->DefaultValue,bVar8);
        bVar7 = IsEnumIndexValid(pUVar13,iVar10);
        if (!bVar7) {
          bVar7 = IsEnumIndexValid(pUVar13,0);
          if (bVar7) {
            EnumIndexToValueBytes(&local_28,pUVar13,0,iVar9,bVar8);
            if ((local_28.ArrayNum != iVar9) &&
               (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_7929381180359572192>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\VariantManagerContent\\Source\\VariantManagerContent\\Private\\PropertyValue.cpp"
                                   ,0x520,"SanitizedDefault.Num() == Size"), bVar8)) {
              pcVar1 = (code *)swi(3);
              pTVar14 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
              return pTVar14;
            }
            pFVar2 = (this->DefaultValue).AllocatorInstance.Data;
            uVar4._0_4_ = (this->DefaultValue).ArrayNum;
            uVar4._4_4_ = (this->DefaultValue).ArrayMax;
            (this->DefaultValue).AllocatorInstance.Data = local_28.AllocatorInstance.Data;
            (this->DefaultValue).ArrayNum = local_28.ArrayNum;
            (this->DefaultValue).ArrayMax = local_28.ArrayMax;
            local_28.AllocatorInstance.Data = pFVar2;
            local_28._8_8_ = uVar4;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
          }
          else if (1 < (byte)LogVariantContent._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
          }
        }
      }
    }
  }
LAB_14e2dc9c2:
  this->LeafProperty = (FProperty *)0x0;
  this->ParentContainerClass = (UStruct *)0x0;
  this->ParentContainerAddress = (void *)0x0;
  this->PropertyValuePtr = (uchar *)0x0;
  (**(code **)(this->_padding_ + 0x2b0))(this,0);
LAB_14e2dc9fe:
  return &this->DefaultValue;
}

// GetEnumDocumentationLink @ 14e2dd990

FString * __thiscall
UPropertyValue::GetEnumDocumentationLink(UPropertyValue *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetEnumPropertyEnum @ 14e2dd9c0

UEnum * __thiscall UPropertyValue::GetEnumPropertyEnum(UPropertyValue *this)

{
  FProperty *pFVar1;
  UEnum *pUVar2;
  
  pFVar1 = this->LeafProperty;
  if (pFVar1 != (FProperty *)0x0) {
    if ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x1000000000000) != 0) {
      return (UEnum *)pFVar1[1]._padding_;
    }
    if ((pFVar1 != (FProperty *)0x0) && ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014e2dd9fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar2 = (UEnum *)(**(code **)(pFVar1->_padding_ + 0x1e0))(pFVar1);
      return pUVar2;
    }
  }
  return (UEnum *)0x0;
}

// GetFullDisplayString @ 14e2dda10

FString * __thiscall UPropertyValue::GetFullDisplayString(UPropertyValue *this)

{
  return &this->FullDisplayString;
}

// GetLeafDisplayString @ 14e2dda50

FString * __thiscall
UPropertyValue::GetLeafDisplayString(UPropertyValue *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::FString(&local_18,L" / ");
  bVar1 = ::FString::Split(&this->FullDisplayString,&local_18,&local_28,&local_38,IgnoreCase,FromEnd
                          );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    ::FString::FString(__return_storage_ptr__,&this->FullDisplayString);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNamePropertyName @ 14e2ddcf0

FName * __thiscall UPropertyValue::GetNamePropertyName(UPropertyValue *this)

{
  return &this->TempName;
}

// GetObjectPropertyObjectClass @ 14e2ddf40

UClass * __thiscall UPropertyValue::GetObjectPropertyObjectClass(UPropertyValue *this)

{
  FProperty *pFVar1;
  
  pFVar1 = this->LeafProperty;
  if ((pFVar1 != (FProperty *)0x0) && ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x1a & 1) != 0)) {
    return (UClass *)pFVar1[1]._padding_;
  }
  return (UClass *)0x0;
}

// GetOnPropertyApplied @ 14e2ddf80

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
UPropertyValue::GetOnPropertyApplied(UPropertyValue *this)

{
  return &this->OnPropertyApplied;
}

// GetOnPropertyRecorded @ 14e2ddf90

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
UPropertyValue::GetOnPropertyRecorded(UPropertyValue *this)

{
  return &this->OnPropertyRecorded;
}

// GetParent @ 14e2de000

UVariantObjectBinding * __thiscall UPropertyValue::GetParent(UPropertyValue *this)

{
  int iVar1;
  UVariantObjectBinding *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UVariantObjectBinding *)this->_padding_;
  if (pUVar2 != (UVariantObjectBinding *)0x0) {
    pUVar3 = UVariantObjectBinding::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UVariantObjectBinding *)0x0;
}

// GetPrivateStaticClass @ 14e2de420

UClass * __cdecl UPropertyValue::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValue",
               &Z_Registration_Info_UClass_UPropertyValue.InnerSingleton,
               StaticRegisterNativesUPropertyValue,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPropertyValue>,InternalVTableHelperCtorCaller<UPropertyValue>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValue.InnerSingleton;
}

// GetPropCategory @ 14e2deb60

EPropertyValueCategory __thiscall UPropertyValue::GetPropCategory(UPropertyValue *this)

{
  return this->PropCategory;
}

// GetProperty @ 14e2deb70

FProperty * __thiscall UPropertyValue::GetProperty(UPropertyValue *this)

{
  return this->LeafProperty;
}

// GetPropertyClass @ 14e2deb80

FFieldClass * __thiscall UPropertyValue::GetPropertyClass(UPropertyValue *this)

{
  return this->LeafPropertyClass;
}

// GetPropertyName @ 14e2debb0

FName __thiscall UPropertyValue::GetPropertyName(UPropertyValue *this)

{
  FProperty *pFVar1;
  bool bVar2;
  FName in_RDX;
  
  pFVar1 = this->LeafProperty;
  if (pFVar1 == (FProperty *)0x0) {
    *(undefined8 *)in_RDX = 0;
    return in_RDX;
  }
  bVar2 = IsThisNotNull(pFVar1,"FField::GetFName");
  if (bVar2) {
    *(longlong *)in_RDX = pFVar1->_padding_;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetPropertyOffsetInBytes @ 14e2dec20

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UPropertyValue::GetPropertyOffsetInBytes(UPropertyValue *this)

{
  if (this->LeafProperty != (FProperty *)0x0) {
    return this->LeafProperty->Offset_Internal;
  }
  if (2 < (byte)LogVariantContent._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
  }
  return 0;
}

// GetPropertyParentContainerAddress @ 14e2dec80

void * __thiscall UPropertyValue::GetPropertyParentContainerAddress(UPropertyValue *this)

{
  return this->ParentContainerAddress;
}

// GetPropertyParentContainerClass @ 14e2dec90

UStruct * __thiscall UPropertyValue::GetPropertyParentContainerClass(UPropertyValue *this)

{
  return this->ParentContainerClass;
}

// GetPropertyPathHash @ 14e2decb0

uint __thiscall UPropertyValue::GetPropertyPathHash(UPropertyValue *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar2 = (this->CapturedPropSegments).ArrayNum;
  pFVar9 = (this->CapturedPropSegments).AllocatorInstance.Data;
  uVar5 = 0;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->CapturedPropSegments).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCapturedPropSegment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    iVar4 = *(int *)(pFVar9 + 8) + -1;
    if (*(int *)(pFVar9 + 8) == 0) {
      pwVar7 = L"";
      iVar4 = 0;
    }
    else {
      pwVar7 = *(wchar_t **)pFVar9;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
    uVar6 = *(uint *)(pFVar9 + 0x10);
    uVar8 = uVar5 - uVar3 ^ uVar3 >> 0xd;
    uVar5 = (-0x61c88647 - uVar8) - uVar3 ^ uVar8 << 8;
    uVar3 = (uVar3 - uVar5) - uVar8 ^ uVar5 >> 0xd;
    uVar8 = (uVar8 - uVar3) - uVar5 ^ uVar3 >> 0xc;
    uVar5 = (uVar5 - uVar8) - uVar3 ^ uVar8 << 0x10;
    uVar3 = (uVar3 - uVar5) - uVar8 ^ uVar5 >> 5;
    uVar8 = (uVar8 - uVar3) - uVar5 ^ uVar3 >> 3;
    uVar5 = (uVar5 - uVar8) - uVar3 ^ uVar8 << 10;
    uVar3 = ((uVar3 - uVar5) - uVar8 ^ uVar5 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
    uVar5 = (-0x61c88647 - uVar6) - uVar3 ^ uVar3 << 8;
    uVar8 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xd;
    uVar6 = (uVar3 - uVar8) - uVar5 ^ uVar8 >> 0xc;
    uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 << 0x10;
    uVar3 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 5;
    uVar6 = (uVar6 - uVar3) - uVar5 ^ uVar3 >> 3;
    uVar5 = (uVar5 - uVar6) - uVar3 ^ uVar6 << 10;
    iVar4 = *(int *)(pFVar9 + 0x20) + -1;
    if (*(int *)(pFVar9 + 0x20) == 0) {
      pwVar7 = L"";
      iVar4 = 0;
    }
    else {
      pwVar7 = *(wchar_t **)(pFVar9 + 0x18);
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar7);
    uVar3 = ((uVar3 - uVar5) - uVar6 ^ uVar5 >> 0xf) - uVar8 ^ uVar8 >> 0xd;
    uVar5 = (-0x61c88647 - uVar3) - uVar8 ^ uVar3 << 8;
    uVar6 = (uVar8 - uVar5) - uVar3 ^ uVar5 >> 0xd;
    uVar3 = (uVar3 - uVar6) - uVar5 ^ uVar6 >> 0xc;
    uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 << 0x10;
    uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 5;
    uVar3 = (uVar3 - uVar6) - uVar5 ^ uVar6 >> 3;
    uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 << 10;
    uVar5 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xf;
    pFVar9 = pFVar9 + 0x28;
  }
  return uVar5;
}

// GetPropertyTooltip @ 14e2deea0

FText * __thiscall
UPropertyValue::GetPropertyTooltip(UPropertyValue *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetRecordedData @ 14e2deec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UPropertyValue::GetRecordedData(UPropertyValue *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  undefined1 *this_01;
  UClass *pUVar1;
  int iVar2;
  FFieldClass *pFVar3;
  FFieldClass *pFVar4;
  UObjectBase *this_02;
  longlong lVar5;
  bool bVar6;
  FString local_18;
  
  this_00 = &this->ValueBytes;
  iVar2 = (**(code **)(this->_padding_ + 0x2f8))();
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar2,Default);
  pFVar3 = (FFieldClass *)(**(code **)(this->_padding_ + 0x2d8))(this);
  if (this->bHasRecordedData == false) {
    return this_00;
  }
  if (pFVar3 == (FFieldClass *)0x0) {
    return this_00;
  }
  pFVar4 = FObjectPropertyBase::StaticClass();
  if (pFVar4->Id == CASTCLASS_None) {
    do {
      if (pFVar3 == pFVar4) {
        bVar6 = true;
        goto LAB_14e2def44;
      }
      pFVar3 = pFVar3->SuperClass;
    } while (pFVar3 != (FFieldClass *)0x0);
    bVar6 = false;
  }
  else {
    bVar6 = (pFVar3->CastFlags & pFVar4->Id) != CASTCLASS_None;
  }
LAB_14e2def44:
  if (!bVar6) {
    return this_00;
  }
  if (*(longlong *)&(this->TempObjPtr).SoftObjectPtr.field_0x8 == 0) {
    return this_00;
  }
  this_02 = (UObjectBase *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&this->TempObjPtr);
  if (this_02 == (UObjectBase *)0x0) {
    this_01 = &(this->TempObjPtr).SoftObjectPtr.field_0x8;
    if (*(longlong *)this_01 == 0) goto LAB_14e2df000;
    FSoftObjectPath::TryLoad((FSoftObjectPath *)this_01,(FUObjectSerializeContext *)0x0);
    this_02 = (UObjectBase *)
              TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)&this->TempObjPtr);
  }
  if ((this_02 != (UObjectBase *)0x0) && (bVar6 = UObjectBase::IsValidLowLevel(this_02), bVar6)) {
    lVar5 = (**(code **)(this->_padding_ + 0x2e8))(this);
    pUVar1 = (this_02->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
    if ((*(int *)(lVar5 + 0x38) <= (int)pUVar1->_padding_) &&
       (*(longlong *)(pUVar1->_padding_ + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
      if ((this->ValueBytes).ArrayNum < 8) {
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,8,Default);
      }
      *(UObjectBase **)(this_00->AllocatorInstance).Data = this_02;
      this->bHasRecordedData = true;
      return this_00;
    }
  }
LAB_14e2df000:
  if (2 < (byte)LogVariantContent._0_1_) {
    FSoftObjectPath::ToString
              ((FSoftObjectPath *)&(this->TempObjPtr).SoftObjectPtr.field_0x8,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  iVar2 = (**(code **)(this->_padding_ + 0x2f8))(this);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,iVar2,Default);
  memset((this_00->AllocatorInstance).Data,0,(longlong)(this->ValueBytes).ArrayNum);
  this->bHasRecordedData = false;
  return this_00;
}

// GetRecordedDataAsEnumIndex @ 14e2df0c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UPropertyValue::GetRecordedDataAsEnumIndex(UPropertyValue *this)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UEnum *pUVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar8;
  FStaticBasicLogRecord *pFVar9;
  
  pFVar1 = this->LeafProperty;
  if (pFVar1 != (FProperty *)0x0) {
    if ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x1000000000000) == 0) {
      if ((pFVar1 == (FProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x18 & 1) == 0))
      goto LAB_14e2df20b;
      pUVar7 = (UEnum *)(**(code **)(pFVar1->_padding_ + 0x1e0))();
    }
    else {
      pUVar7 = (UEnum *)pFVar1[1]._padding_;
    }
    if (pUVar7 != (UEnum *)0x0) {
      if (this->bHasRecordedData != false) {
        pTVar8 = GetRecordedData(this);
        iVar6 = pTVar8->ArrayNum;
        iVar5 = (**(code **)(this->_padding_ + 0x2f8))(this);
        if ((iVar6 != iVar5) &&
           (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7929381180359572573>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\VariantManagerContent\\Source\\VariantManagerContent\\Private\\PropertyValue.cpp"
                               ,0x3a3,"RecordedData.Num() == GetValueSizeInBytes()"), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
        bVar3 = IsNumericPropertySigned(this);
        if ((!bVar3) && (bVar4 = IsNumericPropertyUnsigned(this), !bVar4)) {
          if ((byte)LogVariantContent._0_1_ < 2) {
            return -1;
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
          return -1;
        }
        iVar6 = EnumValueBytesToIndex(pUVar7,pTVar8,bVar3);
        return iVar6;
      }
      if ((byte)LogVariantContent._0_1_ < 2) {
        return -1;
      }
      if ((this->FullDisplayString).Data.ArrayNum == 0) {
        pFVar9 = &::LOG_Static;
      }
      else {
        pFVar9 = &::LOG_Static;
      }
      goto LAB_14e2df234;
    }
  }
LAB_14e2df20b:
  if ((byte)LogVariantContent._0_1_ < 2) {
    return -1;
  }
  pFVar9 = &::LOG_Static;
LAB_14e2df234:
  UE::Logging::Private::BasicLog<2>(pFVar9,(FLogCategoryBase *)&LogVariantContent);
  return -1;
}

// GetStrPropertyString @ 14e2df270

FString * __thiscall UPropertyValue::GetStrPropertyString(UPropertyValue *this)

{
  return &this->TempStr;
}

// GetStructPropertyStruct @ 14e2df280

UScriptStruct * __thiscall UPropertyValue::GetStructPropertyStruct(UPropertyValue *this)

{
  FProperty *pFVar1;
  
  pFVar1 = this->LeafProperty;
  if ((pFVar1 != (FProperty *)0x0) && ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    return (UScriptStruct *)pFVar1[1]._padding_;
  }
  return (UScriptStruct *)0x0;
}

// GetTextPropertyText @ 14e2df490

FText * __thiscall UPropertyValue::GetTextPropertyText(UPropertyValue *this)

{
  return &this->TempText;
}

// GetValidEnumsFromPropertyOverride @ 14e2dff70

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UPropertyValue::GetValidEnumsFromPropertyOverride
          (UPropertyValue *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FProperty *pFVar1;
  longlong lVar2;
  
  pFVar1 = this->LeafProperty;
  if (pFVar1 == (FProperty *)0x0) {
LAB_14e2dffcf:
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  }
  else {
    if ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x1000000000000) == 0) {
      if ((pFVar1 == (FProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x18 & 1) == 0))
      goto LAB_14e2dffcf;
      lVar2 = (**(code **)(pFVar1->_padding_ + 0x1e0))();
    }
    else {
      lVar2 = pFVar1[1]._padding_;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    if (lVar2 != 0) {
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetValueSizeInBytes @ 14e2dfff0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UPropertyValue::GetValueSizeInBytes(UPropertyValue *this)

{
  FProperty *pFVar1;
  
  pFVar1 = this->LeafProperty;
  if (pFVar1 == (FProperty *)0x0) {
    if (2 < (byte)LogVariantContent._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
    }
    return 0;
  }
  if ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x1000000000000) != 0) {
    return *(int *)(pFVar1[1]._padding_ + 0x34);
  }
  return pFVar1->ElementSize;
}

// HasRecordedData @ 14e2e0640

bool __thiscall UPropertyValue::HasRecordedData(UPropertyValue *this)

{
  return this->bHasRecordedData;
}

// HasValidResolve @ 14e2e0660

bool __thiscall UPropertyValue::HasValidResolve(UPropertyValue *this)

{
  int iVar1;
  UStruct *pUVar2;
  longlong lVar3;
  void *pvVar4;
  bool bVar5;
  UClass *pUVar6;
  FUObjectItem *pFVar7;
  
  if ((this->ParentContainerAddress != (void *)0x0) &&
     (pUVar2 = this->ParentContainerClass, pUVar2 != (UStruct *)0x0)) {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    lVar3 = pUVar2->_padding_;
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(lVar3 + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar6->_padding_)) || (pvVar4 = this->ParentContainerAddress, pvVar4 == (void *)0x0)) {
      return true;
    }
    bVar5 = FUObjectArray::IsValid(&GUObjectArray,(UObjectBase *)this);
    if ((((bVar5) && (*(longlong *)((longlong)pvVar4 + 0x10) != 0)) &&
        ((*(uint *)((longlong)pvVar4 + 8) >> 0x1e & 1) == 0)) &&
       ((pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)pvVar4 + 0xc)),
        ((ulonglong)((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) == 0 &&
        ((*(uint *)((longlong)pvVar4 + 8) & 0x18000) == 0)))) {
      return true;
    }
  }
  return false;
}

// Init @ 14e2e0720

void __thiscall
UPropertyValue::Init
          (UPropertyValue *this,TArray<FCapturedPropSegment,TSizedDefaultAllocator<32>_> *param_1,
          FFieldClass *param_2,FString *param_3,FName *param_4,EPropertyValueCategory param_5)

{
  int *piVar1;
  TArray<FCapturedPropSegment,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FCapturedPropSegment *pFVar4;
  FName FVar5;
  bool bVar6;
  FString *pFVar7;
  FName *pFVar8;
  ForAnyElementType FVar9;
  FString local_38;
  FString local_28;
  
  pTVar2 = &this->CapturedPropSegments;
  if (pTVar2 != param_1) {
    DestructItems<FCapturedPropSegment,int>
              ((FCapturedPropSegment *)(pTVar2->AllocatorInstance).Data,
               (this->CapturedPropSegments).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar1 = &(this->CapturedPropSegments).ArrayMax;
    pFVar4 = (FCapturedPropSegment *)(param_1->AllocatorInstance).Data;
    (this->CapturedPropSegments).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FCapturedPropSegment,FCapturedPropSegment,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  this->LeafPropertyClass = param_2;
  ::FString::operator=(&this->FullDisplayString,param_3);
  FVar5 = *param_4;
  this->PropCategory = param_5;
  this->PropertySetterName = FVar5;
  bVar6 = ::FName::Equals(FVar5,L"SetRelativeLocation");
  if ((bVar6) || (bVar6 = ::FName::Equals(this->PropertySetterName,L"SetRelativeRotation"), bVar6))
  {
    pFVar7 = ::FName::ToString(&this->PropertySetterName,&local_28);
    ::FString::ConcatCF(&local_38,L"K2_",pFVar7);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar9.Data = local_38.Data.AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName((FName *)&param_4,(wchar_t *)FVar9.Data);
    this->PropertySetterName = *pFVar8;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  this->LeafProperty = (FProperty *)0x0;
  piVar1 = &(this->ValueBytes).ArrayMax;
  this->ParentContainerClass = (UStruct *)0x0;
  this->ParentContainerAddress = (void *)0x0;
  this->PropertyValuePtr = (uchar *)0x0;
  (this->ValueBytes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->ValueBytes).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DefaultValue).ArrayMax;
  (this->DefaultValue).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->DefaultValue).AllocatorInstance,0,piVar1);
  }
  *(undefined8 *)&(this->TempObjPtr).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TempObjPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TempObjPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->TempObjPtr).SoftObjectPtr.field_0x18,0);
  return;
}

// IsNumericPropertyFloatingPoint @ 14e2e0af0

bool __thiscall UPropertyValue::IsNumericPropertyFloatingPoint(UPropertyValue *this)

{
  undefined1 uVar1;
  FProperty *pFVar2;
  
  pFVar2 = this->LeafProperty;
  if (pFVar2 == (FProperty *)0x0) {
    return false;
  }
  if ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x18 & 1) == 0) {
    if (pFVar2 == (FProperty *)0x0) {
      return false;
    }
    if ((*(ulonglong *)(pFVar2->_padding_ + 0x18) & 0x1000000000000) == 0) {
      return false;
    }
    pFVar2 = (FProperty *)pFVar2[1]._padding_;
  }
                    /* WARNING: Could not recover jumptable at 0x00014e2e0b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(pFVar2->_padding_ + 0x1d0))();
  return (bool)uVar1;
}

// IsNumericPropertySigned @ 14e2e0b40

bool __thiscall UPropertyValue::IsNumericPropertySigned(UPropertyValue *this)

{
  char cVar1;
  FProperty *pFVar2;
  
  pFVar2 = this->LeafProperty;
  if (pFVar2 != (FProperty *)0x0) {
    if ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x18 & 1) == 0) {
      if (pFVar2 == (FProperty *)0x0) {
        return false;
      }
      if ((*(ulonglong *)(pFVar2->_padding_ + 0x18) & 0x1000000000000) == 0) {
        return false;
      }
      pFVar2 = (FProperty *)pFVar2[1]._padding_;
    }
    cVar1 = (**(code **)(pFVar2->_padding_ + 0x1d8))(pFVar2);
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)(pFVar2->_padding_ + 0x250))(pFVar2,0xffffffffffffffff), cVar1 != '\0'))
    {
      return true;
    }
  }
  return false;
}

// IsNumericPropertyUnsigned @ 14e2e0bc0

bool __thiscall UPropertyValue::IsNumericPropertyUnsigned(UPropertyValue *this)

{
  char cVar1;
  FProperty *pFVar2;
  
  pFVar2 = this->LeafProperty;
  if (pFVar2 != (FProperty *)0x0) {
    if ((*(uint *)(pFVar2->_padding_ + 0x18) >> 0x18 & 1) == 0) {
      if (pFVar2 == (FProperty *)0x0) {
        return false;
      }
      if ((*(ulonglong *)(pFVar2->_padding_ + 0x18) & 0x1000000000000) == 0) {
        return false;
      }
      pFVar2 = (FProperty *)pFVar2[1]._padding_;
    }
    cVar1 = (**(code **)(pFVar2->_padding_ + 0x1d8))(pFVar2);
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)(pFVar2->_padding_ + 0x250))(pFVar2,0xffffffffffffffff), cVar1 == '\0'))
    {
      return true;
    }
  }
  return false;
}

// IsRecordedDataCurrent @ 14e2e0c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UPropertyValue::IsRecordedDataCurrent(UPropertyValue *this)

{
  FFieldClass **ppFVar1;
  EPropertyValueCategory EVar2;
  FScriptContainerElement *pFVar3;
  TRotator<double> *this_00;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar12;
  FFieldClass *pFVar13;
  FFieldClass *pFVar14;
  FFieldClass *pFVar15;
  TQuat<double> *pTVar16;
  uint uVar17;
  TRotator<double> *pTVar18;
  bool bVar19;
  bool bVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 local_res8 [8];
  TRotator<double> *local_78;
  int local_70;
  TQuat<double> local_68;
  TQuat<double> local_48 [2];
  
  cVar9 = (**(code **)(this->_padding_ + 0x2b0))(this,0);
  if ((cVar9 == '\0') || (this->bHasRecordedData == false)) {
    return false;
  }
  pTVar12 = GetRecordedData(this);
  (**(code **)(this->_padding_ + 0x2c0))(this,&local_78);
  pFVar13 = (FFieldClass *)(**(code **)(this->_padding_ + 0x2d8))(this);
  if (pFVar13 == (FFieldClass *)0x0) {
LAB_14e2e0eae:
    pTVar18 = local_78;
    EVar2 = this->PropCategory;
    if (EVar2 == RelativeRotation) {
      this_00 = (TRotator<double> *)(pTVar12->AllocatorInstance).Data;
      if ((this_00 != (TRotator<double> *)0x0) && (local_78 != (TRotator<double> *)0x0)) {
        UE::Math::TRotator<double>::Quaternion(this_00,local_48);
        pTVar16 = UE::Math::TRotator<double>::Quaternion(pTVar18,&local_68);
        dVar8 = (double)CONCAT44(local_68.Y._4_4_,local_68.Y._0_4_) + local_48[0].Y;
        local_48[0].Y = local_48[0].Y - (double)CONCAT44(local_68.Y._4_4_,local_68.Y._0_4_);
        auVar22._0_8_ =
             (double)CONCAT44((uint)((ulonglong)(local_48[0].Z - local_68.Z) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(local_48[0].Z - local_68.Z,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar22._8_4_ = SUB84(local_48[0].W - local_68.W,0) & _UNK_15061cc88;
        auVar22._12_4_ = (uint)((ulonglong)(local_48[0].W - local_68.W) >> 0x20) & _UNK_15061cc8c;
        lVar21 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar22._8_8_);
        auVar4._8_4_ = (int)lVar21;
        auVar4._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar22._0_8_);
        auVar4._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
        iVar10 = movmskpd((int)pTVar18,auVar4);
        lVar21 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)local_48[0].Y >> 0x20) & _UNK_15061cc8c,
                                   SUB84(local_48[0].Y,0) & _UNK_15061cc88));
        auVar5._8_4_ = (int)lVar21;
        auVar5._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)(local_48[0].X - local_68.X) >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(local_48[0].X - local_68.X,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar5._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
        uVar11 = movmskpd((int)pTVar16,auVar5);
        uVar17 = iVar10 << 2 | uVar11;
        if (uVar17 != 0) {
          lVar21 = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)(local_68.W + local_48[0].W) >> 0x20) &
                                     _UNK_15061cc8c,
                                     SUB84(local_68.W + local_48[0].W,0) & _UNK_15061cc88));
          auVar6._8_4_ = (int)lVar21;
          auVar6._0_8_ = -(ulonglong)
                          (__real_3f1a36e2e0000000 <
                          (double)CONCAT44((uint)((ulonglong)(local_68.Z + local_48[0].Z) >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(local_68.Z + local_48[0].Z,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar6._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
          uVar17 = movmskpd(uVar17,auVar6);
          lVar21 = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & _UNK_15061cc8c,
                                     SUB84(dVar8,0) & _UNK_15061cc88));
          auVar7._8_4_ = (int)lVar21;
          auVar7._0_8_ = -(ulonglong)
                          (__real_3f1a36e2e0000000 <
                          (double)CONCAT44((uint)((ulonglong)(local_68.X + local_48[0].X) >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(local_68.X + local_48[0].X,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
          auVar7._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
          iVar10 = movmskpd(uVar11,auVar7);
          if ((uVar17 & 0x3fffffff) != 0 || iVar10 != 0) {
            bVar19 = false;
            goto LAB_14e2e0d50;
          }
        }
        bVar19 = true;
        goto LAB_14e2e0d50;
      }
    }
    else if ((EVar2 == RelativeLocation) || (EVar2 == RelativeScale3D)) {
      pFVar3 = (pTVar12->AllocatorInstance).Data;
      dVar8 = *(double *)pFVar3 - local_78->Pitch;
      uVar11 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar17 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((double)CONCAT44(uVar17,uVar11) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar17,uVar11) == __real_3f1a36e2e0000000) &&
         ((dVar8 = *(double *)(pFVar3 + 8) - local_78->Yaw,
          uVar11 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar17 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar17,uVar11) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar17,uVar11) == __real_3f1a36e2e0000000 &&
          (dVar8 = *(double *)(pFVar3 + 0x10) - local_78->Roll,
          uVar11 = SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar17 = (uint)((ulonglong)dVar8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          (double)CONCAT44(uVar17,uVar11) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar17,uVar11) == __real_3f1a36e2e0000000)))) goto LAB_14e2e1029;
      goto LAB_14e2e0d4e;
    }
    iVar10 = pTVar12->ArrayNum;
    if (iVar10 == local_70) {
      if (iVar10 == 0) goto LAB_14e2e1029;
      iVar10 = memcmp((pTVar12->AllocatorInstance).Data,local_78,(longlong)iVar10);
      if (iVar10 == 0) {
        bVar19 = true;
        goto LAB_14e2e0d50;
      }
    }
  }
  else {
    pFVar14 = FNameProperty::StaticClass();
    pFVar15 = pFVar13;
    if (pFVar14->Id == CASTCLASS_None) {
      do {
        if (pFVar15 == pFVar14) {
          bVar19 = true;
          goto LAB_14e2e0d2a;
        }
        ppFVar1 = &pFVar15->SuperClass;
        pFVar15 = *ppFVar1;
      } while (*ppFVar1 != (FFieldClass *)0x0);
      bVar19 = false;
    }
    else {
      bVar19 = (pFVar13->CastFlags & pFVar14->Id) != CASTCLASS_None;
    }
LAB_14e2e0d2a:
    bVar20 = false;
    if (!bVar19) {
      pFVar14 = FStrProperty::StaticClass();
      pFVar15 = pFVar13;
      if (pFVar14->Id == CASTCLASS_None) {
        do {
          if (pFVar15 == pFVar14) {
            bVar19 = true;
            goto LAB_14e2e0db7;
          }
          ppFVar1 = &pFVar15->SuperClass;
          pFVar15 = *ppFVar1;
        } while (*ppFVar1 != (FFieldClass *)0x0);
        bVar19 = false;
      }
      else {
        bVar19 = (pFVar13->CastFlags & pFVar14->Id) != CASTCLASS_None;
      }
LAB_14e2e0db7:
      if (bVar19) {
        ::FString::FString((FString *)&local_68,(FString *)local_78);
        dVar8 = local_68.X;
        iVar10 = (this->TempStr).Data.ArrayNum;
        if (iVar10 == local_68.Y._0_4_) {
          if (iVar10 < 2) {
            bVar19 = true;
          }
          else {
            iVar10 = wcscmp((wchar_t *)(this->TempStr).Data.AllocatorInstance.Data,
                            (wchar_t *)local_68.X);
            bVar19 = iVar10 == 0;
          }
        }
        else {
          bVar19 = iVar10 + local_68.Y._0_4_ == 1;
        }
        if ((FScriptContainerElement *)dVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)dVar8);
        }
        goto LAB_14e2e0d50;
      }
      pFVar15 = FTextProperty::StaticClass();
      pTVar18 = local_78;
      if (pFVar15->Id == CASTCLASS_None) {
        do {
          if (pFVar13 == pFVar15) {
            bVar20 = true;
            break;
          }
          pFVar13 = pFVar13->SuperClass;
        } while (pFVar13 != (FFieldClass *)0x0);
      }
      else {
        bVar20 = (pFVar13->CastFlags & pFVar15->Id) != CASTCLASS_None;
      }
      if (bVar20) {
        local_68.X = (double)(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_78->Pitch)->
                             AllocatorInstance).Data;
        if ((FScriptContainerElement *)local_68.X != (FScriptContainerElement *)0x0) {
          (**(code **)(*(longlong *)local_68.X + 8))(local_68.X,local_res8);
        }
        local_68.Y._0_4_ = *(int *)&pTVar18->Yaw;
        bVar19 = FText::EqualTo(&this->TempText,(FText *)&local_68,Default);
        if ((FScriptContainerElement *)local_68.X != (FScriptContainerElement *)0x0) {
          (**(code **)(*(longlong *)local_68.X + 0x10))();
        }
        goto LAB_14e2e0d50;
      }
      goto LAB_14e2e0eae;
    }
    pFVar3 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&local_78->Pitch)->AllocatorInstance).
             Data;
    if (((this->TempName).ComparisonIndex.Value == (uint)pFVar3) &&
       ((this->TempName).Number == (uint)((ulonglong)pFVar3 >> 0x20))) {
LAB_14e2e1029:
      bVar19 = true;
      goto LAB_14e2e0d50;
    }
  }
LAB_14e2e0d4e:
  bVar19 = false;
LAB_14e2e0d50:
  if (local_78 != (TRotator<double> *)0x0) {
    FMemory::Free(local_78);
  }
  return bVar19;
}

// RecordDataFromResolvedObject @ 14e2e14d0

void __thiscall UPropertyValue::RecordDataFromResolvedObject(UPropertyValue *this)

{
  char cVar1;
  void *local_18;
  undefined4 local_10;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2b0))(this,0);
  if (cVar1 != '\0') {
    (**(code **)(this->_padding_ + 0x2c0))(this,&local_18);
    (**(code **)(this->_padding_ + 0x300))(this,local_18,local_10,0);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnPropertyRecorded);
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}

// Resolve @ 14e2e3020

/* WARNING: Removing unreachable block (ram,0x00014e2e33a4) */
/* WARNING: Removing unreachable block (ram,0x00014e2e33aa) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPropertyValue::Resolve(UPropertyValue *this,UObject *param_1)

{
  FFieldClass **ppFVar1;
  int iVar2;
  UVariantObjectBinding *this_00;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FNameEntryId FVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UFunction *pUVar11;
  FFieldClass *this_01;
  UObjectBaseUtility *this_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  ulong64 uVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TFieldIterator<FProperty> local_a8;
  uint local_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  FString local_60;
  FString local_50;
  
  if (param_1 == (UObject *)0x0) {
    this_00 = (UVariantObjectBinding *)this->_padding_;
    if (this_00 == (UVariantObjectBinding *)0x0) {
      return false;
    }
    pUVar9 = UVariantObjectBinding::StaticClass();
    iVar2 = (int)pUVar9->_padding_;
    if (*(int *)(this_00->_padding_ + 0x38) < iVar2) {
      return false;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar9->_padding_) {
      return false;
    }
    param_1 = UVariantObjectBinding::GetObject(this_00);
    if (param_1 == (UObject *)0x0) {
      return false;
    }
  }
  if ((this->CapturedPropSegments).ArrayNum == 0) {
    return false;
  }
  bVar5 = HasValidResolve(this);
  this->ParentContainerObject = param_1;
  bVar6 = ResolvePropertiesRecursive(this,*(UStruct **)&param_1->field_0x10,param_1,0);
  if (!bVar6) {
    return false;
  }
  if ((this->LeafPropertyClass == (FFieldClass *)0x0) && (this->LeafProperty != (FProperty *)0x0)) {
    this->LeafPropertyClass = (FFieldClass *)this->LeafProperty->_padding_;
  }
  pUVar9 = (UClass *)this->ParentContainerClass;
  if (pUVar9 != (UClass *)0x0) {
    pUVar10 = Z_Construct_UClass_UClass_NoRegister();
    iVar2 = (int)pUVar10->_padding_;
    if ((iVar2 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar10->_padding_)) {
      pUVar11 = UClass::FindFunctionByName(pUVar9,this->PropertySetterName,IncludeSuper);
      this->PropertySetter = pUVar11;
      if (pUVar11 != (UFunction *)0x0) {
        this_01 = (FFieldClass *)(**(code **)(this->_padding_ + 0x2d8))(this);
        local_a8.Struct = (UStruct *)this->PropertySetter;
        bVar6 = false;
        if ((UFunction *)local_a8.Struct == (UFunction *)0x0) {
          local_a8.Field = (FField *)0x0;
        }
        else {
          local_a8.Field = (FField *)((UFunction *)local_a8.Struct)->_padding_;
        }
        local_a8.InterfaceIndex = -1;
        local_a8.bIncludeSuper = true;
        local_a8.bIncludeDeprecated = true;
        local_a8.bIncludeInterface = false;
        TFieldIterator<FProperty>::IterateToNext(&local_a8);
        if (local_a8.Field != (FField *)0x0) {
          do {
            ppFVar1 = &(local_a8.Field)->ClassPrivate;
            local_a8.Field = (local_a8.Field)->Next;
            if (this_01 == *ppFVar1) {
              bVar6 = true;
            }
            TFieldIterator<FProperty>::IterateToNext(&local_a8);
          } while (local_a8.Field != (FField *)0x0);
          if (bVar6) goto LAB_14e2e323c;
        }
        if (1 < (byte)LogVariantContent._0_1_) {
          ::FName::ToString((FName *)this_01,&local_60);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
        this->PropertySetter = (UFunction *)0x0;
      }
    }
  }
LAB_14e2e323c:
  if (((!bVar5) && (bVar5 = HasValidResolve(this), bVar5)) && (this->bHasRecordedData != false)) {
    this_02 = (UObjectBaseUtility *)(**(code **)(this->_padding_ + 0x2e0))(this);
    if (this_02 != (UObjectBaseUtility *)0x0) {
      if (this_02[4].field_0x14 == '\0') {
        UObjectBaseUtility::GetPathName(this_02,&local_50,(UObject *)0x0);
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bPrepareCppStructOpsCompleted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x8f6,
                           L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                          );
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      uVar3 = *(ulonglong *)&this_02->field_0x18;
      uVar12 = (ulong64)*(int *)(*(longlong *)&this_02[4].field_0x18 + 8);
      FVar8 = FNameEntryId::FromValidEName((EName)local_res10);
      uStack_8c = 0;
      local_90 = *(uint *)CONCAT44(extraout_var,FVar8.Value);
      if (uVar3 != local_90) {
        FVar8 = FNameEntryId::FromValidEName((EName)local_res18);
        uStack_84 = 0;
        local_88 = *(uint *)CONCAT44(extraout_var_00,FVar8.Value);
        if (uVar3 != local_88) {
          FVar8 = FNameEntryId::FromValidEName((EName)local_res20);
          uStack_7c = 0;
          local_80 = *(uint *)CONCAT44(extraout_var_01,FVar8.Value);
          if (uVar3 != local_80) {
            FVar8 = FNameEntryId::FromValidEName((EName)local_68);
            uStack_74 = 0;
            local_78 = *(uint *)CONCAT44(extraout_var_02,FVar8.Value);
            if (uVar3 != local_78) {
              FVar8 = FNameEntryId::FromValidEName((EName)local_64);
              uStack_6c = 0;
              local_70 = *(uint *)CONCAT44(extraout_var_03,FVar8.Value);
              if (uVar3 != local_70) {
                return true;
              }
            }
          }
        }
      }
      if ((uVar12 != 0) && (uVar12 != (longlong)(this->ValueBytes).ArrayNum)) {
        UE::PropertyValue::Private::ConvertRecordedValueSizes<float,double>
                  (uVar12,&this->ValueBytes);
      }
    }
  }
  return true;
}

// ResolvePropertiesRecursive @ 14e2e3850

bool __thiscall
UPropertyValue::ResolvePropertiesRecursive
          (UPropertyValue *this,UStruct *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  FProperty *pFVar5;
  UStruct *pUVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  FName FVar13;
  UClass *pUVar14;
  UObject *pUVar15;
  FScriptContainerElement *pFVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  void *pvVar19;
  FWeakObjectPtr *pFVar20;
  longlong lVar21;
  FName FVar22;
  longlong *plVar23;
  uint uVar24;
  FName FVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  int iVar28;
  FName FVar29;
  byte local_res8 [8];
  UObject *local_res18;
  uint local_res20;
  int local_148;
  TFieldIterator<FProperty> local_120;
  FString local_108;
  uint local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FWeakObjectPtr local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  TPersistentObjectPtr<FSoftObjectPath> local_60;
  
  uVar26 = (ulonglong)param_3;
  lVar21 = uVar26 * 0x28;
  FVar29.ComparisonIndex.Value = 0;
  FVar29.Number = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    while( true ) {
      local_148 = 0;
      uVar10 = 0;
      if ((int)(uint)uVar26 < (this->CapturedPropSegments).ArrayNum) {
        uVar10 = ~(uint)uVar26 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pFVar16 = (this->CapturedPropSegments).AllocatorInstance.Data + lVar21;
      uVar10 = 0;
      if (*(int *)(pFVar16 + 0x10) != -1) {
        uVar10 = *(uint *)(pFVar16 + 0x10);
      }
      if (local_res20 == 0) {
        this->ParentContainerClass = param_1;
        this->ParentContainerAddress = local_res18;
      }
      if (*(int *)(pFVar16 + 8) == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = *(wchar_t **)pFVar16;
      }
      ::FName::FName(&local_d0,pwVar17,FNAME_Find);
      FVar22 = local_d0;
      if (local_d0 == (FName)0x0) goto LAB_14e2e3d86;
      if ((UClass *)param_1 == (UClass *)0x0) {
        local_120.Field = (FField *)0x0;
      }
      else {
        local_120.Field = (FField *)((UClass *)param_1)->_padding_;
      }
      local_120.InterfaceIndex = -1;
      local_120.bIncludeSuper = true;
      local_120.bIncludeDeprecated = true;
      local_120.bIncludeInterface = false;
      local_120.Struct = param_1;
      TFieldIterator<FProperty>::IterateToNext(&local_120);
      FVar25 = (FName)local_120.Field;
      while( true ) {
        if (FVar25 == (FName)0x0) goto LAB_14e2e3d86;
        local_120.Field = (FField *)FVar25;
        bVar8 = IsThisNotNull((void *)FVar25,"FField::GetFName");
        FVar13 = FVar29;
        if (bVar8) {
          FVar13 = *(FName *)((longlong)FVar25 + 0x20);
        }
        if (FVar13 == FVar22) break;
        local_120.Field = *(FField **)((longlong)FVar25 + 0x18);
        TFieldIterator<FProperty>::IterateToNext(&local_120);
        FVar25 = (FName)local_120.Field;
      }
      if (FVar25 == (FName)0x0) goto LAB_14e2e3d86;
      if ((this->CapturedPropSegments).ArrayNum + -1 <= (int)local_res20) {
        this->LeafProperty = (FProperty *)FVar25;
        if ((((int)uVar10 < 0) || (*(int *)((longlong)FVar25 + 0x30) <= (int)uVar10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        if ((local_res18 == (UObject *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        this->PropertyValuePtr =
             (uchar *)((longlong)&local_res18->field_0x0 +
                      (longlong)*(int *)((longlong)FVar25 + 0x44) +
                      (longlong)(int)uVar10 * (longlong)*(int *)((longlong)FVar25 + 0x34));
        return true;
      }
      uVar26 = *(ulonglong *)(*(longlong *)((longlong)FVar25 + 8) + 0x18);
      if ((uVar26 >> 0x10 & 1) == 0) break;
      if ((((int)uVar10 < 0) || (*(int *)((longlong)FVar25 + 0x30) <= (int)uVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if ((local_res18 == (UObject *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pUVar15 = *(UObject **)
                 ((longlong)&local_res18->field_0x0 +
                 (longlong)*(int *)((longlong)FVar25 + 0x44) +
                 (longlong)(int)uVar10 * (longlong)*(int *)((longlong)FVar25 + 0x34));
      if (pUVar15 == (UObject *)0x0) {
        if ((UClass *)param_1 == (UClass *)0x0) goto LAB_14e2e3d86;
        pUVar14 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
        iVar28 = (int)pUVar14->_padding_;
        if ((*(int *)(((UClass *)param_1)->_padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(((UClass *)param_1)->_padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar14->_padding_)) goto LAB_14e2e3d86;
        if ((((UClass *)param_1)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper((UClass *)param_1);
        }
        if ((((UClass *)param_1)->ClassDefaultObject).field0_0x0.DebugPtr != local_res18)
        goto LAB_14e2e3d86;
        lVar21 = ((UClass *)((longlong)param_1 + 0x208))->_padding_;
        ::FString::ConcatFC(&local_e0,(FString *)(pFVar16 + 0x18),L"_GEN_VARIABLE");
        plVar23 = *(longlong **)(lVar21 + 0x38);
        iVar28 = *(int *)(lVar21 + 0x40);
        plVar1 = plVar23 + iVar28;
        goto LAB_14e2e3c50;
      }
      local_res20 = local_res20 + 1;
      uVar26 = (ulonglong)local_res20;
      this->ParentContainerClass = *(UStruct **)&pUVar15->field_0x10;
      lVar21 = lVar21 + 0x28;
      this->ParentContainerAddress = pUVar15;
      this->ParentContainerObject = pUVar15;
      param_1 = *(UStruct **)&pUVar15->field_0x10;
      local_res18 = pUVar15;
    }
    if ((uVar26 >> 0x1b & 1) != 0) {
      if ((((int)uVar10 < 0) || (*(int *)((longlong)FVar25 + 0x30) <= (int)uVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if ((local_res18 == (UObject *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      local_a8 = *(FWeakObjectPtr *)
                  ((longlong)&local_res18->field_0x0 +
                  (longlong)*(int *)((longlong)FVar25 + 0x44) +
                  (longlong)(int)uVar10 * (longlong)*(int *)((longlong)FVar25 + 0x34));
      pUVar15 = FWeakObjectPtr::Get(&local_a8);
      if (pUVar15 != (UObject *)0x0) {
        this->ParentContainerClass = *(UStruct **)&pUVar15->field_0x10;
        this->ParentContainerAddress = pUVar15;
        this->ParentContainerObject = pUVar15;
        bVar8 = ResolvePropertiesRecursive
                          (this,*(UStruct **)&pUVar15->field_0x10,pUVar15,local_res20 + 1);
        return bVar8;
      }
      goto LAB_14e2e3d86;
    }
    FVar22 = FVar25;
    if ((uVar26 >> 0x1d & 1) == 0) {
      FVar22 = FVar29;
    }
    if (FVar22 != (FName)0x0) {
      if ((((int)uVar10 < 0) || (*(int *)((longlong)FVar22 + 0x30) <= (int)uVar10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if ((local_res18 == (UObject *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pFVar20 = (FWeakObjectPtr *)
                ((longlong)&local_res18->field_0x0 +
                (longlong)*(int *)((longlong)FVar22 + 0x44) +
                (longlong)*(int *)((longlong)FVar22 + 0x34) * (longlong)(int)uVar10);
      local_60.WeakPtr = *pFVar20;
      FSoftObjectPath::FSoftObjectPath(&local_60.ObjectID,(FSoftObjectPath *)(pFVar20 + 1));
      pUVar15 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_60);
      if (pUVar15 == (UObject *)0x0) {
        if (local_60.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.ObjectID.SubPathString.Data.AllocatorInstance.Data);
        }
        goto LAB_14e2e3d86;
      }
      this->ParentContainerClass = *(UStruct **)&pUVar15->field_0x10;
      this->ParentContainerAddress = pUVar15;
      this->ParentContainerObject = pUVar15;
      bVar8 = ResolvePropertiesRecursive
                        (this,*(UStruct **)&pUVar15->field_0x10,pUVar15,local_res20 + 1);
      local_108.Data.AllocatorInstance.Data =
           local_60.ObjectID.SubPathString.Data.AllocatorInstance.Data;
      goto LAB_14e2e3d66;
    }
    if ((uVar26 >> 0x14 & 1) == 0) break;
    if ((((int)uVar10 < 0) || (*(int *)((longlong)FVar25 + 0x30) <= (int)uVar10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar8)
       ) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    if ((local_res18 == (UObject *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    local_res20 = local_res20 + 1;
    uVar26 = (ulonglong)local_res20;
    local_res18 = (UObject *)
                  ((longlong)&local_res18->field_0x0 +
                  (longlong)*(int *)((longlong)FVar25 + 0x44) +
                  (longlong)(int)uVar10 * (longlong)*(int *)((longlong)FVar25 + 0x34));
    this->ParentContainerClass = (UStruct *)((FProperty *)((longlong)FVar25 + 0x70))->_padding_;
    lVar21 = lVar21 + 0x28;
    this->ParentContainerAddress = local_res18;
    param_1 = (UStruct *)((FProperty *)((longlong)FVar25 + 0x70))->_padding_;
  }
  if ((*(uint *)(*(longlong *)((longlong)FVar25 + 8) + 0x18) >> 0x15 & 1) == 0) {
    FVar25 = FVar29;
  }
  if (FVar25 == (FName)0x0) goto LAB_14e2e3d86;
  uVar10 = local_res20 + 1;
  uVar12 = 0;
  if ((int)uVar10 < (this->CapturedPropSegments).ArrayNum) {
    uVar12 = ~uVar10 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pFVar16 = (this->CapturedPropSegments).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x28;
  ::FString::FString(&local_108,(FString *)pFVar16);
  local_f8 = *(uint *)&(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar16[0x10].field_0x0)->
                       AllocatorInstance).Data;
  ::FString::FString(&local_f0,(FString *)(pFVar16 + 0x18));
  uVar10 = local_f8;
  if (local_f8 == 0xffffffff) {
    uVar10 = 0;
  }
  if ((*(int *)((longlong)FVar25 + 0x30) < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar8))
  {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if ((local_res18 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  bVar2 = (byte)((FProperty *)((longlong)FVar25 + 0x70))->_padding_;
  puVar27 = (ulonglong *)
            ((longlong)&local_res18->field_0x0 + (longlong)*(int *)((longlong)FVar25 + 0x44));
  (**(code **)(**(longlong **)((longlong)FVar25 + 0x78) + 0x168))();
  lVar21 = *(longlong *)((longlong)FVar25 + 0x78);
  uVar12 = *(uint *)(lVar21 + 0x34);
  uVar26 = (ulonglong)(int)uVar12;
  if (((int)uVar12 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if ((lVar21 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if (((int)uVar10 < 0) || (iVar28 = (int)puVar27[1], iVar28 <= (int)uVar10)) {
    bVar8 = false;
  }
  else {
    pFVar5 = *(FProperty **)((longlong)FVar25 + 0x78);
    if (local_res20 == (this->CapturedPropSegments).ArrayNum - 2U) {
      this->LeafProperty = pFVar5;
      if ((int)puVar27[1] == 0) {
        bVar8 = true;
        this->PropertyValuePtr = (uchar *)0x0;
      }
      else {
        uVar18 = *puVar27;
        if (((bVar2 & 1) != 0) && ((uVar18 & 1) != 0)) {
          uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)puVar27;
        }
        bVar8 = true;
        this->PropertyValuePtr = (uchar *)(uVar18 + (longlong)(int)uVar10 * uVar26);
      }
    }
    else {
      if (pFVar5 == (FProperty *)0x0) goto LAB_14e2e4347;
      if ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x14 & 1) == 0) {
        if ((pFVar5 == (FProperty *)0x0) || ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x10 & 1) == 0)
           ) goto LAB_14e2e4347;
        local_res8[0] = bVar2 & 1;
        if (1 < local_f0.Data.ArrayNum) {
          iVar28 = 0;
          while( true ) {
            lVar21 = 0;
            if ((int)puVar27[1] <= iVar28) break;
            if ((int)puVar27[1] != 0) {
              uVar26 = *puVar27;
              if ((local_res8[0] != 0) && ((uVar26 & 1) != 0)) {
                uVar26 = ((longlong)uVar26 >> 0x18) + (longlong)puVar27;
              }
              lVar21 = uVar26 + (longlong)iVar28 * (longlong)(int)uVar12;
            }
            pUVar15 = (UObject *)(**(code **)(pFVar5->_padding_ + 0x1f8))(pFVar5,lVar21);
            if (pUVar15 == (UObject *)0x0) {
LAB_14e2e4119:
              bVar8 = false;
            }
            else {
              pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
              iVar11 = (int)pUVar14->_padding_;
              if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar11) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar11 * 8)
                  != &pUVar14->_padding_)) goto LAB_14e2e4119;
              local_c0.ComparisonIndex.Value = *(uint *)&pUVar15->field_0x18;
              local_c0.Number = *(uint *)&pUVar15->field_0x1c;
              local_148 = 2;
              ::FName::ToString(&local_c0,&local_90);
              if (local_90.Data.ArrayNum == local_f0.Data.ArrayNum) {
                if (1 < local_90.Data.ArrayNum) {
                  iVar11 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)local_90.Data.AllocatorInstance.Data,
                                      (wchar_t *)local_f0.Data.AllocatorInstance.Data);
                  bVar8 = iVar11 == 0;
                  goto LAB_14e2e410d;
                }
              }
              else {
                bVar8 = local_90.Data.ArrayNum + local_f0.Data.ArrayNum == 1;
LAB_14e2e410d:
                if (!bVar8) goto LAB_14e2e4119;
              }
              bVar8 = true;
            }
            if ((local_148 != 0) &&
               (local_148 = 0,
               local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            if (bVar8) {
              this->ParentContainerClass = *(UStruct **)&pUVar15->field_0x10;
              this->ParentContainerAddress = pUVar15;
              this->ParentContainerObject = pUVar15;
              bVar8 = ResolvePropertiesRecursive
                                (this,*(UStruct **)&pUVar15->field_0x10,pUVar15,local_res20 + 2);
              goto LAB_14e2e4373;
            }
            iVar28 = iVar28 + 1;
          }
          goto LAB_14e2e4347;
        }
        if (iVar28 == 0) {
          lVar21 = 0;
        }
        else {
          uVar18 = *puVar27;
          if (((bVar2 & 1) != 0) && ((uVar18 & 1) != 0)) {
            uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)puVar27;
          }
          lVar21 = uVar18 + (longlong)(int)uVar10 * uVar26;
        }
        pUVar15 = (UObject *)(**(code **)(pFVar5->_padding_ + 0x1f8))(pFVar5,lVar21);
        if (pUVar15 != (UObject *)0x0) {
          pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
          pUVar6 = *(UStruct **)&pUVar15->field_0x10;
          iVar28 = (int)pUVar14->_padding_;
          if (((iVar28 <= (int)pUVar6->_padding_) &&
              ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar28 * 8) ==
               &pUVar14->_padding_)) &&
             (bVar8 = ResolvePropertiesRecursive(this,pUVar6,pUVar15,local_res20 + 2), bVar8)) {
            this->ParentContainerClass = *(UStruct **)&pUVar15->field_0x10;
            this->ParentContainerAddress = pUVar15;
            this->ParentContainerObject = pUVar15;
            local_b8.ComparisonIndex.Value = *(uint *)&pUVar15->field_0x18;
            local_b8.Number = *(uint *)&pUVar15->field_0x1c;
            ::FName::ToString(&local_b8,&local_80);
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
            bVar8 = true;
            local_f0.Data.ArrayNum = local_80.Data.ArrayNum;
            local_f0.Data.ArrayMax = local_80.Data.ArrayMax;
            local_f0.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
            goto LAB_14e2e4373;
          }
        }
        for (uVar24 = 0; (int)uVar24 < (int)puVar27[1]; uVar24 = uVar24 + 1) {
          if (uVar24 != uVar10) {
            if ((int)puVar27[1] == 0) {
              lVar21 = 0;
            }
            else {
              uVar18 = *puVar27;
              if (((bVar2 & 1) != 0) && ((uVar18 & 1) != 0)) {
                uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)puVar27;
              }
              lVar21 = uVar18 + (longlong)(int)uVar24 * (longlong)(int)uVar26;
            }
            pUVar15 = (UObject *)(**(code **)(pFVar5->_padding_ + 0x1f8))(pFVar5,lVar21);
            if (pUVar15 != (UObject *)0x0) {
              pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
              pUVar6 = *(UStruct **)&pUVar15->field_0x10;
              iVar28 = (int)pUVar14->_padding_;
              if (((iVar28 <= (int)pUVar6->_padding_) &&
                  ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar28 * 8) ==
                   &pUVar14->_padding_)) &&
                 (bVar8 = ResolvePropertiesRecursive(this,pUVar6,pUVar15,local_res20 + 2), bVar8)) {
                this->ParentContainerClass = *(UStruct **)&pUVar15->field_0x10;
                this->ParentContainerAddress = pUVar15;
                this->ParentContainerObject = pUVar15;
                local_b0.ComparisonIndex.Value = *(uint *)&pUVar15->field_0x18;
                local_b0.Number = *(uint *)&pUVar15->field_0x1c;
                ::FName::ToString(&local_b0,&local_70);
                if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                }
                bVar8 = true;
                local_f0.Data.ArrayNum = local_70.Data.ArrayNum;
                local_f0.Data.ArrayMax = local_70.Data.ArrayMax;
                local_f0.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
                goto LAB_14e2e4373;
              }
            }
            uVar26 = (ulonglong)uVar12;
          }
        }
LAB_14e2e4347:
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
LAB_14e2e3d86:
        this->LeafProperty = (FProperty *)0x0;
        this->ParentContainerClass = (UStruct *)0x0;
        this->ParentContainerAddress = (void *)0x0;
        this->PropertyValuePtr = (uchar *)0x0;
        return false;
      }
      if (iVar28 == 0) {
        pvVar19 = (void *)0x0;
      }
      else {
        uVar18 = *puVar27;
        if (((bVar2 & 1) != 0) && ((uVar18 & 1) != 0)) {
          uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)puVar27;
        }
        pvVar19 = (void *)(uVar18 + (longlong)(int)uVar10 * uVar26);
      }
      this->ParentContainerClass = (UStruct *)pFVar5[1]._padding_;
      this->ParentContainerAddress = pvVar19;
      bVar8 = ResolvePropertiesRecursive
                        (this,(UStruct *)pFVar5[1]._padding_,pvVar19,local_res20 + 2);
    }
  }
LAB_14e2e4373:
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
LAB_14e2e3d66:
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return bVar8;
LAB_14e2e3c50:
  if (*(int *)(lVar21 + 0x40) != iVar28) {
    `TCheckedPointerIterator<USCS_Node_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (plVar23 == plVar1) {
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    goto LAB_14e2e3d86;
  }
  lVar3 = ((FProperty *)((longlong)FVar25 + 0x70))->_padding_;
  lVar4 = *plVar23;
  if (lVar3 == 0) {
LAB_14e2e3cf2:
    bVar8 = false;
  }
  else {
    if ((*(int *)(*(longlong *)(lVar4 + 0x28) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_14e2e3cf2;
    local_148 = 1;
    local_c8 = *(FName *)(*(longlong *)(lVar4 + 0x30) + 0x18);
    ::FName::ToString(&local_c8,&local_a0);
    if (local_e0.Data.ArrayNum == local_a0.Data.ArrayNum) {
      if (1 < local_e0.Data.ArrayNum) {
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_e0.Data.AllocatorInstance.Data,
                            (wchar_t *)local_a0.Data.AllocatorInstance.Data);
        bVar8 = iVar11 == 0;
        goto LAB_14e2e3ce6;
      }
    }
    else {
      bVar8 = local_e0.Data.ArrayNum + local_a0.Data.ArrayNum == 1;
LAB_14e2e3ce6:
      if (!bVar8) goto LAB_14e2e3cf2;
    }
    bVar8 = true;
  }
  if ((local_148 != 0) &&
     (local_148 = 0, local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (bVar8) goto LAB_14e2e3d2a;
  plVar23 = plVar23 + 1;
  goto LAB_14e2e3c50;
LAB_14e2e3d2a:
  this->ParentContainerClass = *(UStruct **)(lVar4 + 0x28);
  this->ParentContainerAddress = *(void **)(lVar4 + 0x30);
  this->ParentContainerObject = *(UObject **)(lVar4 + 0x30);
  bVar8 = ResolvePropertiesRecursive
                    (this,*(UStruct **)(lVar4 + 0x28),*(void **)(lVar4 + 0x30),local_res20 + 1);
  local_108.Data.AllocatorInstance.Data = local_e0.Data.AllocatorInstance.Data;
  goto LAB_14e2e3d66;
}

// ResolveUSCSNodeRecursive @ 14e2e45e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPropertyValue::ResolveUSCSNodeRecursive(UPropertyValue *this,USCS_Node *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USCS_Node *pUVar3;
  UClass *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  FScriptContainerElement *pFVar12;
  undefined4 local_res18 [2];
  FName local_res20;
  FString local_58;
  FString local_48;
  
  bVar6 = false;
  local_res18[0] = 0;
  iVar2 = (this->CapturedPropSegments).ArrayNum;
  if (iVar2 + -1 <= param_2) {
    bVar6 = ResolvePropertiesRecursive
                      (this,(UStruct *)(param_1->ComponentClass).field0_0x0.DebugPtr,
                       (param_1->ComponentTemplate).field0_0x0.DebugPtr,param_2);
    return bVar6;
  }
  uVar9 = 0;
  if (param_2 < iVar2) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  ::FString::ConcatFC(&local_48,
                      (FString *)
                      ((this->CapturedPropSegments).AllocatorInstance.Data +
                      ((longlong)param_2 * 5 + 3) * 8),L"_GEN_VARIABLE");
  pFVar12 = (param_1->ChildNodes).AllocatorInstance.Data;
  iVar2 = (param_1->ChildNodes).ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  do {
    if ((param_1->ChildNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<USCS_Node_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar12 == pFVar1) {
      bVar6 = false;
      goto LAB_14e2e47b7;
    }
    pUVar3 = *(USCS_Node **)pFVar12;
    pUVar4 = (pUVar3->ComponentClass).field0_0x0.DebugPtr;
    pUVar11 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar11 == (UClass *)0x0) {
LAB_14e2e4774:
      bVar7 = false;
    }
    else {
      iVar10 = (int)pUVar11->_padding_;
      if (((int)pUVar4->_padding_ < iVar10) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar10 * 8) !=
          &pUVar11->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (!bVar7) goto LAB_14e2e4774;
      bVar6 = true;
      local_res20 = (FName)((pUVar3->ComponentTemplate).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_res20,&local_58);
      iVar10 = local_48.Data.ArrayNum;
      if (iVar10 == local_58.Data.ArrayNum) {
        if (1 < iVar10) {
          iVar10 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                              (wchar_t *)local_58.Data.AllocatorInstance.Data);
          bVar7 = iVar10 == 0;
          goto LAB_14e2e4768;
        }
      }
      else {
        bVar7 = iVar10 + local_58.Data.ArrayNum == 1;
LAB_14e2e4768:
        if (!bVar7) goto LAB_14e2e4774;
      }
      bVar7 = true;
    }
    if (bVar6) {
      bVar6 = false;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (bVar7) {
      bVar6 = ResolveUSCSNodeRecursive(this,pUVar3,param_2 + 1);
LAB_14e2e47b7:
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      return bVar6;
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// SanitizeRecordedEnumData @ 14e2e4800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPropertyValue::SanitizeRecordedEnumData(UPropertyValue *this)

{
  FProperty *pFVar1;
  bool bVar2;
  int iVar3;
  UEnum *pUVar4;
  FStaticBasicLogRecord *pFVar5;
  
  pFVar1 = this->LeafProperty;
  if (pFVar1 != (FProperty *)0x0) {
    if ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x1000000000000) == 0) {
      if ((pFVar1 == (FProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x18 & 1) == 0))
      goto LAB_14e2e48ca;
      pUVar4 = (UEnum *)(**(code **)(pFVar1->_padding_ + 0x1e0))();
    }
    else {
      pUVar4 = (UEnum *)pFVar1[1]._padding_;
    }
    if (pUVar4 != (UEnum *)0x0) {
      iVar3 = GetRecordedDataAsEnumIndex(this);
      bVar2 = IsEnumIndexValid(pUVar4,iVar3);
      if (bVar2) {
        return;
      }
      bVar2 = IsEnumIndexValid(pUVar4,0);
      if (bVar2) {
        SetRecordedDataFromEnumIndex(this,0);
        return;
      }
      if ((byte)LogVariantContent._0_1_ < 2) {
        return;
      }
      if ((this->FullDisplayString).Data.ArrayNum == 0) {
        pFVar5 = &::LOG_Static;
      }
      else {
        pFVar5 = &::LOG_Static;
      }
      goto LAB_14e2e48f3;
    }
  }
LAB_14e2e48ca:
  if ((byte)LogVariantContent._0_1_ < 2) {
    return;
  }
  pFVar5 = &::LOG_Static;
LAB_14e2e48f3:
  UE::Logging::Private::BasicLog<2>(pFVar5,(FLogCategoryBase *)&LogVariantContent);
  return;
}

// Serialize @ 14e2e4bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UPropertyValue::Serialize(UPropertyValue *this,FArchive *param_1)

{
  int *piVar1;
  FFieldClass **ppFVar2;
  byte bVar3;
  TFieldPath<FProperty> *pTVar4;
  FCapturedPropSegment *pFVar5;
  FScriptContainerElement *pFVar6;
  FProperty *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FFieldClass *pFVar15;
  FFieldClass *pFVar16;
  FString *pFVar17;
  FName *pFVar18;
  TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
  *pTVar19;
  FField *pFVar20;
  TTuple<FName,FFieldClass_*> *pTVar21;
  FFieldClass *pFVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  FFieldClass *pFVar28;
  TArray<FCapturedPropSegment,TSizedDefaultAllocator<32>_> *pTVar29;
  uint uVar30;
  FFieldPath local_e8;
  TArray<FCapturedPropSegment,TSizedDefaultAllocator<32>_> *local_c8;
  undefined1 local_c0 [56];
  FWeakObjectPtr local_88;
  void *local_80;
  int local_78;
  longlong local_70;
  FString local_68;
  FName local_58;
  FString local_50;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FVariantManagerObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FCoreObjectVersion::GUID);
  iVar12 = FArchiveState::CustomVer((FArchiveState *)param_1,&FVariantManagerObjectVersion::GUID);
  iVar13 = FArchiveState::CustomVer((FArchiveState *)param_1,&FCoreObjectVersion::GUID);
  pFVar28 = (FFieldClass *)0x0;
  if (iVar13 < 4) {
    if (((param_1->field_0x28 & 1) != 0) &&
       ((this->LeafPropertyClass_DEPRECATED).field0_0x0.DebugPtr != (UClass *)0x0)) {
      pTVar19 = (TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
                 *)FFieldClass::GetNameToFieldClassMap();
      pTVar21 = TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
                ::Find(pTVar19,(FName)((this->LeafPropertyClass_DEPRECATED).field0_0x0.DebugPtr)->
                                      _padding_);
      pFVar15 = pFVar28;
      if (pTVar21 != (TTuple<FName,FFieldClass_*> *)0x0) {
        pFVar15 = *(FFieldClass **)&pTVar21->field_0x8;
      }
      this->LeafPropertyClass = pFVar15;
    }
  }
  else {
    ::operator<<(param_1,&this->LeafPropertyClass);
  }
  bVar3 = param_1->field_0x28;
  if ((bVar3 & 4) != 0) {
    (**(code **)(*(longlong *)param_1 + 0x148))(param_1,&this->TempObjPtr);
    if (2 < iVar12) {
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->TempName);
      ::operator<<(param_1,&this->TempStr);
                    /* WARNING: Could not recover jumptable at 0x00014e2e4d1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1 + 0x170))(param_1,&this->TempText);
      return;
    }
    if (iVar12 < 1) {
      return;
    }
    local_c0._16_8_ = 0;
    pFVar15 = (FFieldClass *)(**(code **)(this->_padding_ + 0x2d8))(this);
    if (pFVar15 != (FFieldClass *)0x0) {
      pFVar16 = FNameProperty::StaticClass();
      if (pFVar16->Id == CASTCLASS_None) {
        do {
          if (pFVar15 == pFVar16) {
            pFVar28 = (FFieldClass *)&DAT_00000001;
            break;
          }
          pFVar15 = pFVar15->SuperClass;
        } while (pFVar15 != (FFieldClass *)0x0);
      }
      else {
        pFVar28 = (FFieldClass *)(ulonglong)((pFVar15->CastFlags & pFVar16->Id) != CASTCLASS_None);
      }
      if ((char)pFVar28 != '\0') {
        local_c0._16_8_ = *(undefined8 *)(this->ValueBytes).AllocatorInstance.Data;
      }
    }
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_c0 + 0x10);
    return;
  }
  if ((bVar3 & 1) == 0) {
    return;
  }
  piVar1 = &(this->DefaultValue).ArrayMax;
  uVar27 = 0;
  (this->DefaultValue).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->DefaultValue).AllocatorInstance,0,piVar1);
  }
  bVar10 = ::FName::Equals(this->PropertySetterName,L"SetRelativeLocation");
  if ((bVar10) ||
     (bVar10 = ::FName::Equals(this->PropertySetterName,L"SetRelativeRotation"), bVar10)) {
    pFVar17 = ::FName::ToString(&this->PropertySetterName,&local_50);
    ::FString::ConcatCF(&local_68,L"K2_",pFVar17);
    FVar26.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar26.Data = local_68.Data.AllocatorInstance.Data;
    }
    pFVar18 = ::FName::FName(&local_58,(wchar_t *)FVar26.Data);
    this->PropertySetterName = *pFVar18;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x148))(param_1,&this->TempObjPtr);
  bVar10 = false;
  if (iVar12 < 4) {
    if (2 < (byte)LogVariantContent._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
    }
    uVar25 = (this->Properties_DEPRECATED).ArrayNum;
    if (0 < (int)uVar25) {
      uVar14 = uVar27;
      if ((int)(uVar25 - 1) < (int)uVar25) {
        uVar14 = ~(uVar25 - 1) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      TFieldPath<FProperty>::TFieldPath<FProperty>
                ((TFieldPath<FProperty> *)(local_c0 + 0x30),
                 (TFieldPath<FProperty> *)
                 ((this->Properties_DEPRECATED).AllocatorInstance.Data +
                 (longlong)((this->Properties_DEPRECATED).ArrayNum + -1) * 0x20));
      pTVar19 = (TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
                 *)FFieldClass::GetNameToFieldClassMap();
      pFVar15 = FProperty::StaticClass();
      if ((((FField *)local_c0._48_8_ == (FField *)0x0) ||
          (bVar11 = FWeakObjectPtr::IsValid(&local_88), pFVar20 = (FField *)local_c0._48_8_, !bVar11
          )) && (pFVar20 = (FField *)local_c0._48_8_, local_78 != 0)) {
        pFVar20 = FFieldPath::TryToResolvePath
                            ((FFieldPath *)(local_c0 + 0x30),(UStruct *)0x0,UseStructIfOuterNotFound
                            );
        if (pFVar20 != (FField *)0x0) {
          if ((pFVar15 == (FFieldClass *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FieldType",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                  ,0x2dd,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar16 = pFVar20->ClassPrivate;
          if (pFVar15->Id == CASTCLASS_None) {
            for (; bVar11 = bVar10, pFVar16 != (FFieldClass *)0x0; pFVar16 = pFVar16->SuperClass) {
              if (pFVar16 == pFVar15) {
                bVar11 = true;
                break;
              }
            }
          }
          else {
            bVar11 = (pFVar16->CastFlags & pFVar15->Id) != CASTCLASS_None;
          }
          if (bVar11) goto LAB_14e2e5017;
        }
        pFVar20 = (FField *)local_c0._48_8_;
        if ((FField *)local_c0._48_8_ != (FField *)0x0) {
          local_88.ObjectIndex = 0;
          local_88.ObjectSerialNumber = 0;
          local_c0._48_8_ = (FField *)0x0;
          pFVar20 = (FField *)local_c0._48_8_;
        }
      }
LAB_14e2e5017:
      local_c0._48_8_ = pFVar20;
      pTVar21 = TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
                ::Find(pTVar19,(*(FFieldClass **)(local_c0._48_8_ + 8))->Name);
      pTVar29 = &this->CapturedPropSegments;
      pFVar15 = pFVar28;
      if (pTVar21 != (TTuple<FName,FFieldClass_*> *)0x0) {
        pFVar15 = *(FFieldClass **)&pTVar21->field_0x8;
      }
      pFVar20 = (FField *)&(this->CapturedPropSegments).ArrayMax;
      this->LeafPropertyClass = pFVar15;
      local_c8 = pTVar29;
      local_c0._40_8_ = pFVar20;
      if (*(int *)pFVar20 < (int)uVar25) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar25,&pTVar29->AllocatorInstance,(this->CapturedPropSegments).ArrayNum,
                   (int *)pFVar20);
      }
      local_70 = (longlong)(int)uVar25;
      if ((int)uVar25 < 1) {
LAB_14e2e55a3:
        if (2 < (byte)LogVariantContent._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
        }
        pFVar5 = (FCapturedPropSegment *)(pTVar29->AllocatorInstance).Data;
        if (pTVar29->ArrayMax < 0) {
          DestructItems<FCapturedPropSegment,int>(pFVar5,pTVar29->ArrayNum);
          pTVar29->ArrayNum = 0;
          if (pTVar29->ArrayMax != 0) {
            uVar25 = 8;
            uVar27 = 0x28;
            goto LAB_14e2e5616;
          }
        }
        else {
          DestructItems<FCapturedPropSegment,int>(pFVar5,pTVar29->ArrayNum);
          pTVar29->ArrayNum = 0;
        }
      }
      else {
        local_c0._32_8_ = (FFieldClass *)0x0;
        pFVar15 = pFVar28;
        do {
          uVar30 = (uint)pFVar15;
          uVar14 = uVar27;
          if ((int)uVar30 < (this->Properties_DEPRECATED).ArrayNum) {
            uVar14 = ~uVar30 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          TFieldPath<FProperty>::TFieldPath<FProperty>
                    ((TFieldPath<FProperty> *)&local_e8,
                     (TFieldPath<FProperty> *)
                     ((this->Properties_DEPRECATED).AllocatorInstance.Data +
                     (longlong)(int)uVar30 * 0x20));
          pFVar15 = FProperty::StaticClass();
          if (((local_e8.ResolvedField == (FField *)0x0) ||
              (bVar11 = FWeakObjectPtr::IsValid(&local_e8.ResolvedOwner.WeakPtr),
              pFVar20 = local_e8.ResolvedField, !bVar11)) &&
             (pFVar20 = local_e8.ResolvedField, local_e8.Path.ArrayNum != 0)) {
            pFVar20 = FFieldPath::TryToResolvePath
                                (&local_e8,(UStruct *)0x0,UseStructIfOuterNotFound);
            if (pFVar20 != (FField *)0x0) {
              if ((pFVar15 == (FFieldClass *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FieldType",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                      ,0x2dd,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar16 = pFVar20->ClassPrivate;
              if (pFVar15->Id == CASTCLASS_None) {
                for (; bVar11 = bVar10, pFVar16 != (FFieldClass *)0x0; pFVar16 = pFVar16->SuperClass
                    ) {
                  if (pFVar16 == pFVar15) {
                    bVar11 = true;
                    break;
                  }
                }
              }
              else {
                bVar11 = (pFVar16->CastFlags & pFVar15->Id) != CASTCLASS_None;
              }
              if (bVar11) goto LAB_14e2e51c7;
            }
            if (local_e8.ResolvedField != (FField *)0x0) {
              local_e8.ResolvedOwner.WeakPtr.ObjectIndex = 0;
              local_e8.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
              local_e8.ResolvedField = (FField *)0x0;
              pFVar20 = local_e8.ResolvedField;
              goto LAB_14e2e51c7;
            }
LAB_14e2e5517:
            if (local_e8.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Path.AllocatorInstance.Data);
            }
            break;
          }
LAB_14e2e51c7:
          local_e8.ResolvedField = pFVar20;
          if (local_e8.ResolvedField == (FField *)0x0) goto LAB_14e2e5517;
          pFVar15 = FProperty::StaticClass();
          if (((local_e8.ResolvedField == (FField *)0x0) ||
              (bVar11 = FWeakObjectPtr::IsValid(&local_e8.ResolvedOwner.WeakPtr),
              pFVar20 = local_e8.ResolvedField, !bVar11)) &&
             (pFVar20 = local_e8.ResolvedField, local_e8.Path.ArrayNum != 0)) {
            pFVar20 = FFieldPath::TryToResolvePath
                                (&local_e8,(UStruct *)0x0,UseStructIfOuterNotFound);
            if (pFVar20 != (FField *)0x0) {
              if ((pFVar15 == (FFieldClass *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FieldType",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                      ,0x2dd,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar16 = pFVar20->ClassPrivate;
              if (pFVar15->Id == CASTCLASS_None) {
                for (; bVar11 = bVar10, pFVar16 != (FFieldClass *)0x0; pFVar16 = pFVar16->SuperClass
                    ) {
                  if (pFVar16 == pFVar15) {
                    bVar11 = true;
                    break;
                  }
                }
              }
              else {
                bVar11 = (pFVar16->CastFlags & pFVar15->Id) != CASTCLASS_None;
              }
              if (bVar11) goto LAB_14e2e5293;
            }
            pFVar20 = local_e8.ResolvedField;
            if (local_e8.ResolvedField != (FField *)0x0) {
              local_e8.ResolvedOwner.WeakPtr.ObjectIndex = 0;
              local_e8.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
              local_e8.ResolvedField = (FField *)0x0;
              pFVar20 = local_e8.ResolvedField;
            }
          }
LAB_14e2e5293:
          local_e8.ResolvedField = pFVar20;
          bVar11 = FField::IsValidLowLevel(local_e8.ResolvedField);
          if (((!bVar11) || ((int)uVar30 < 0)) ||
             ((this->PropertyIndices_DEPRECATED).ArrayNum <= (int)uVar30)) goto LAB_14e2e5517;
          uVar14 = pTVar29->ArrayNum;
          if (uVar14 == (uint)*(longlong *)local_c0._40_8_) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&pTVar29->AllocatorInstance,(int *)local_c0._40_8_);
          }
          pTVar29->ArrayNum = uVar14 + 1;
          uVar24 = uVar27;
          if ((int)uVar14 < (int)(uVar14 + 1)) {
            uVar24 = ~uVar14 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar15 = (FFieldClass *)
                    ((pTVar29->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x28);
          pFVar16 = pFVar28;
          if (pFVar15 != (FFieldClass *)0x0) {
            (pFVar15->Name).ComparisonIndex = 0;
            (pFVar15->Name).Number = 0;
            *(undefined8 *)&pFVar15->ClassFlags = 0;
            *(undefined4 *)&pFVar15->Id = 0xffffffff;
            pFVar15->CastFlags = CASTCLASS_None;
            pFVar15->SuperClass = (FFieldClass *)0x0;
            pFVar16 = pFVar15;
          }
          pFVar15 = FProperty::StaticClass();
          if (((local_e8.ResolvedField == (FField *)0x0) ||
              (bVar11 = FWeakObjectPtr::IsValid(&local_e8.ResolvedOwner.WeakPtr),
              pFVar20 = local_e8.ResolvedField, !bVar11)) &&
             (pFVar20 = local_e8.ResolvedField, local_e8.Path.ArrayNum != 0)) {
            pFVar20 = FFieldPath::TryToResolvePath
                                (&local_e8,(UStruct *)0x0,UseStructIfOuterNotFound);
            if (pFVar20 != (FField *)0x0) {
              if ((pFVar15 == (FFieldClass *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FieldType",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                      ,0x2dd,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar22 = pFVar20->ClassPrivate;
              if (pFVar15->Id == CASTCLASS_None) {
                for (; bVar11 = bVar10, pFVar22 != (FFieldClass *)0x0; pFVar22 = pFVar22->SuperClass
                    ) {
                  if (pFVar22 == pFVar15) {
                    bVar11 = true;
                    break;
                  }
                }
              }
              else {
                bVar11 = (pFVar22->CastFlags & pFVar15->Id) != CASTCLASS_None;
              }
              pTVar29 = local_c8;
              if (bVar11) goto LAB_14e2e5417;
            }
            pTVar29 = local_c8;
            pFVar20 = local_e8.ResolvedField;
            if (local_e8.ResolvedField != (FField *)0x0) {
              local_e8.ResolvedOwner.WeakPtr.ObjectIndex = 0;
              local_e8.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
              local_e8.ResolvedField = (FField *)0x0;
              pFVar20 = local_e8.ResolvedField;
            }
          }
LAB_14e2e5417:
          local_e8.ResolvedField = pFVar20;
          pFVar20 = local_e8.ResolvedField;
          bVar11 = IsThisNotNull(local_e8.ResolvedField,"FField::GetName");
          if (bVar11) {
            ::FName::ToString(&pFVar20->NamePrivate,(FString *)local_c0);
          }
          else {
            ::FString::FString((FString *)local_c0,L"None");
          }
          if (pFVar16 != (FFieldClass *)local_c0) {
            if (pFVar16->Name != (FName)0x0) {
              FMemory::Free((void *)pFVar16->Name);
            }
            (pFVar16->Name).ComparisonIndex = (FNameEntryId)local_c0._0_4_;
            (pFVar16->Name).Number = local_c0._4_4_;
            pFVar16->ClassFlags = local_c0._8_4_;
            *(undefined4 *)&pFVar16->field_0xc = local_c0._12_4_;
            local_c0._8_8_ = 0;
            local_c0._0_4_ = 0;
            local_c0._4_4_ = 0;
          }
          if ((FName)local_c0._0_8_ != (FName)0x0) {
            FMemory::Free((void *)local_c0._0_8_);
          }
          uVar14 = 0;
          if ((int)uVar30 < (this->PropertyIndices_DEPRECATED).ArrayNum) {
            uVar14 = ~uVar30 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar9 = local_c0._32_8_;
          *(undefined4 *)&pFVar16->Id =
               *(undefined4 *)
                ((this->PropertyIndices_DEPRECATED).AllocatorInstance.Data + local_c0._32_8_ * 4);
          if (local_e8.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Path.AllocatorInstance.Data);
          }
          local_c0._32_8_ = (longlong)&(((FName *)uVar9)->ComparisonIndex).Value + 1;
          uVar30 = uVar30 + 1;
          pFVar15 = (FFieldClass *)(ulonglong)uVar30;
        } while ((longlong)local_c0._32_8_ < local_70);
        pFVar20 = (FField *)local_c0._40_8_;
        if (uVar30 != uVar25) goto LAB_14e2e55a3;
        piVar1 = &(this->Properties_DEPRECATED).ArrayMax;
        pTVar4 = (TFieldPath<FProperty> *)(this->Properties_DEPRECATED).AllocatorInstance.Data;
        iVar13 = (this->Properties_DEPRECATED).ArrayNum;
        if (*piVar1 < 0) {
          DestructItems<TFieldPath<FProperty>,int>(pTVar4,iVar13);
          (this->Properties_DEPRECATED).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,0,&(this->Properties_DEPRECATED).AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<TFieldPath<FProperty>,int>(pTVar4,iVar13);
          (this->Properties_DEPRECATED).ArrayNum = 0;
        }
        pTVar29 = (TArray<FCapturedPropSegment,TSizedDefaultAllocator<32>_> *)
                  &this->PropertyIndices_DEPRECATED;
        pFVar20 = (FField *)&(this->PropertyIndices_DEPRECATED).ArrayMax;
        (this->PropertyIndices_DEPRECATED).ArrayNum = 0;
        if ((this->PropertyIndices_DEPRECATED).ArrayMax < 0) {
          uVar25 = 4;
          uVar27 = 4;
LAB_14e2e5616:
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (uVar27,uVar25,0,&pTVar29->AllocatorInstance,0,(int *)pFVar20);
        }
      }
      if (local_80 != (void *)0x0) {
        FMemory::Free(local_80);
      }
    }
  }
  if (iVar12 < 3) {
    if (iVar12 < 1) goto LAB_14e2e5859;
    local_c0._24_8_ = CASTCLASS_None;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_c0 + 0x18);
    pFVar28 = (FFieldClass *)(**(code **)(this->_padding_ + 0x2d8))(this);
    if (pFVar28 != (FFieldClass *)0x0) {
      pFVar15 = FNameProperty::StaticClass();
      if (pFVar28 == pFVar15) {
        if ((this->ValueBytes).ArrayNum < 8) {
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&this->ValueBytes,8,Default);
        }
        *(undefined8 *)(this->ValueBytes).AllocatorInstance.Data = local_c0._24_8_;
        this->bHasRecordedData = true;
      }
      goto LAB_14e2e5859;
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->TempName);
    ::operator<<(param_1,&this->TempStr);
    (**(code **)(*(longlong *)param_1 + 0x170))(param_1,&this->TempText);
    pFVar15 = (FFieldClass *)(**(code **)(this->_padding_ + 0x2d8))(this);
    if (pFVar15 != (FFieldClass *)0x0) {
      pFVar22 = FNameProperty::StaticClass();
      pFVar16 = pFVar15;
      if (pFVar22->Id == CASTCLASS_None) {
        do {
          if (pFVar16 == pFVar22) {
            bVar11 = true;
            break;
          }
          ppFVar2 = &pFVar16->SuperClass;
          pFVar16 = *ppFVar2;
          bVar11 = bVar10;
        } while (*ppFVar2 != (FFieldClass *)0x0);
      }
      else {
        bVar11 = (pFVar15->CastFlags & pFVar22->Id) != CASTCLASS_None;
      }
      if (bVar11) {
        if ((this->ValueBytes).ArrayNum < 8) {
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&this->ValueBytes,8,Default);
        }
        *(FName *)(this->ValueBytes).AllocatorInstance.Data = this->TempName;
        this->bHasRecordedData = true;
      }
      else {
        pFVar22 = FStrProperty::StaticClass();
        pFVar16 = pFVar15;
        if (pFVar22->Id == CASTCLASS_None) {
          do {
            if (pFVar16 == pFVar22) {
              bVar10 = true;
              break;
            }
            ppFVar2 = &pFVar16->SuperClass;
            pFVar16 = *ppFVar2;
          } while (*ppFVar2 != (FFieldClass *)0x0);
        }
        else {
          bVar10 = (pFVar15->CastFlags & pFVar22->Id) != CASTCLASS_None;
        }
        if (bVar10) {
          SetRecordedDataInternal(this,(uchar *)&this->TempStr,0x10,0);
        }
        else {
          pFVar16 = FTextProperty::StaticClass();
          if (pFVar16->Id == CASTCLASS_None) {
            do {
              if (pFVar15 == pFVar16) {
                pFVar28 = (FFieldClass *)&DAT_00000001;
                break;
              }
              pFVar15 = pFVar15->SuperClass;
            } while (pFVar15 != (FFieldClass *)0x0);
          }
          else {
            pFVar28 = (FFieldClass *)
                      (ulonglong)((pFVar15->CastFlags & pFVar16->Id) != CASTCLASS_None);
          }
          if ((char)pFVar28 != '\0') {
            if ((this->ValueBytes).ArrayNum < 0x10) {
              TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                        (&this->ValueBytes,0x10,Default);
            }
            uVar9 = *(undefined8 *)&(this->TempText).Flags;
            pFVar6 = (this->ValueBytes).AllocatorInstance.Data;
            *(ITextData **)pFVar6 = (this->TempText).TextData.Reference;
            *(undefined8 *)(pFVar6 + 8) = uVar9;
            this->bHasRecordedData = true;
          }
        }
      }
      goto LAB_14e2e5859;
    }
  }
  this->bHasRecordedData = false;
LAB_14e2e5859:
  pFVar7 = this->LeafProperty;
  if (pFVar7 != (FProperty *)0x0) {
    if ((*(ulonglong *)(pFVar7->_padding_ + 0x18) & 0x1000000000000) == 0) {
      if (pFVar7 == (FProperty *)0x0) {
        return;
      }
      if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x18 & 1) == 0) {
        return;
      }
      lVar23 = (**(code **)(pFVar7->_padding_ + 0x1e0))();
    }
    else {
      lVar23 = pFVar7[1]._padding_;
    }
    if (lVar23 != 0) {
      SanitizeRecordedEnumData(this);
    }
  }
  return;
}

// Serialize @ 14e2e58d0

void __thiscall UPropertyValue::Serialize(UPropertyValue *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetRecordedData @ 14e2e6480

void __thiscall
UPropertyValue::SetRecordedData(UPropertyValue *this,uchar *param_1,int param_2,int param_3)

{
  FProperty *pFVar1;
  FFieldClass *pFVar2;
  FFieldClass *pFVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  UObject *local_28 [2];
  
  if (param_2 < 1) {
    return;
  }
  bVar7 = false;
  if (param_2 == 8) {
    pFVar2 = (FFieldClass *)(**(code **)(this->_padding_ + 0x2d8))();
    pFVar3 = FNameProperty::StaticClass();
    if (pFVar3->Id == CASTCLASS_None) {
      for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
        if (pFVar2 == pFVar3) {
          bVar6 = true;
          goto LAB_14e2e64f0;
        }
      }
      bVar6 = false;
    }
    else {
      bVar6 = (pFVar2->CastFlags & pFVar3->Id) != CASTCLASS_None;
    }
LAB_14e2e64f0:
    if (bVar6) {
      this->TempName = *(FName *)param_1;
      SetRecordedDataInternal(this,(uchar *)&this->TempName,8,param_3);
      return;
    }
  }
  else if (param_2 == 0x10) {
    pFVar2 = (FFieldClass *)(**(code **)(this->_padding_ + 0x2d8))();
    pFVar3 = FStrProperty::StaticClass();
    if (pFVar3->Id == CASTCLASS_None) {
      for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
        if (pFVar2 == pFVar3) {
          bVar6 = true;
          goto LAB_14e2e6563;
        }
      }
      bVar6 = false;
    }
    else {
      bVar6 = (pFVar2->CastFlags & pFVar3->Id) != CASTCLASS_None;
    }
LAB_14e2e6563:
    if (bVar6) {
      iVar5 = *(int *)(param_1 + 8) + -1;
      if (*(int *)(param_1 + 8) == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange(&this->TempStr,*(wchar_t **)param_1,iVar5);
      SetRecordedDataInternal(this,(uchar *)&this->TempStr,0x10,param_3);
      return;
    }
    pFVar2 = (FFieldClass *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pFVar3 = FTextProperty::StaticClass();
    if (pFVar3->Id == CASTCLASS_None) {
      for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
        if (pFVar2 == pFVar3) {
          bVar6 = true;
          goto LAB_14e2e65e3;
        }
      }
      bVar6 = false;
    }
    else {
      bVar6 = (pFVar2->CastFlags & pFVar3->Id) != CASTCLASS_None;
    }
LAB_14e2e65e3:
    if (bVar6) {
      FText::operator=(&this->TempText,(FText *)param_1);
      SetRecordedDataInternal(this,(uchar *)&this->TempText,0x10,param_3);
      return;
    }
  }
  SetRecordedDataInternal(this,param_1,param_2,param_3);
  pFVar2 = (FFieldClass *)(**(code **)(this->_padding_ + 0x2d8))(this);
  if (pFVar2 != (FFieldClass *)0x0) {
    pFVar3 = FObjectPropertyBase::StaticClass();
    if (pFVar3->Id == CASTCLASS_None) {
      do {
        if (pFVar2 == pFVar3) {
          bVar7 = true;
          break;
        }
        pFVar2 = pFVar2->SuperClass;
      } while (pFVar2 != (FFieldClass *)0x0);
    }
    else {
      bVar7 = (pFVar2->CastFlags & pFVar3->Id) != CASTCLASS_None;
    }
    if (bVar7) {
      local_28[0] = *(UObject **)(this->ValueBytes).AllocatorInstance.Data;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_28[0]);
      }
      FSoftObjectPtr::operator=(&(this->TempObjPtr).SoftObjectPtr,(FObjectPtr)local_28);
    }
  }
  pFVar1 = this->LeafProperty;
  if (pFVar1 != (FProperty *)0x0) {
    if ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x1000000000000) == 0) {
      if (pFVar1 == (FProperty *)0x0) {
        return;
      }
      if ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x18 & 1) == 0) {
        return;
      }
      lVar4 = (**(code **)(pFVar1->_padding_ + 0x1e0))();
    }
    else {
      lVar4 = pFVar1[1]._padding_;
    }
    if (lVar4 != 0) {
      SanitizeRecordedEnumData(this);
    }
  }
  return;
}

// SetRecordedDataFromEnumIndex @ 14e2e6750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UPropertyValue::SetRecordedDataFromEnumIndex(UPropertyValue *this,int param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  bool bVar4;
  int iVar5;
  UEnum *pUVar6;
  FName local_res8;
  FString local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar1 = this->LeafProperty;
  if (pFVar1 != (FProperty *)0x0) {
    if ((*(ulonglong *)(pFVar1->_padding_ + 0x18) & 0x1000000000000) == 0) {
      if ((pFVar1 == (FProperty *)0x0) || ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x18 & 1) == 0))
      goto LAB_14e2e693a;
      pUVar6 = (UEnum *)(**(code **)(pFVar1->_padding_ + 0x1e0))();
    }
    else {
      pUVar6 = (UEnum *)pFVar1[1]._padding_;
    }
    if (pUVar6 != (UEnum *)0x0) {
      bVar3 = IsEnumIndexValid(pUVar6,param_1);
      if (!bVar3) {
        if ((byte)LogVariantContent._0_1_ < 2) {
          return;
        }
        local_res8 = (FName)pUVar6->_padding_;
        ::FName::ToString(&local_res8,&local_38);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
        if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        return;
      }
      bVar3 = IsNumericPropertySigned(this);
      if ((!bVar3) && (bVar4 = IsNumericPropertyUnsigned(this), !bVar4)) {
        if ((byte)LogVariantContent._0_1_ < 2) {
          return;
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
        return;
      }
      iVar5 = (**(code **)(this->_padding_ + 0x2f8))(this);
      EnumIndexToValueBytes(&local_28,pUVar6,param_1,iVar5,bVar3);
      if ((local_28.ArrayNum != iVar5) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7929381180359572511>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\VariantManagerContent\\Source\\VariantManagerContent\\Private\\PropertyValue.cpp"
                             ,0x3e1,"NewValueBytes.Num() == Size"), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      _Src.Data = local_28.AllocatorInstance.Data;
      if (0 < iVar5) {
        if ((this->ValueBytes).ArrayNum < iVar5) {
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&this->ValueBytes,iVar5,Default);
        }
        memcpy((this->ValueBytes).AllocatorInstance.Data,_Src.Data,(longlong)iVar5);
        this->bHasRecordedData = true;
      }
      if (local_28.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_28.AllocatorInstance.Data);
      return;
    }
  }
LAB_14e2e693a:
  if ((byte)LogVariantContent._0_1_ < 2) {
    return;
  }
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
  return;
}

// SetRecordedDataInternal @ 14e2e6990

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UPropertyValue::SetRecordedDataInternal(UPropertyValue *this,uchar *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    if ((this->ValueBytes).ArrayNum < param_2 + param_3) {
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->ValueBytes,param_2 + param_3,Default);
    }
    memcpy((this->ValueBytes).AllocatorInstance.Data + param_3,param_1,(longlong)param_2);
    this->bHasRecordedData = true;
  }
  return;
}

// StaticRegisterNativesUPropertyValue @ 14e2e7040

void __cdecl UPropertyValue::StaticRegisterNativesUPropertyValue(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UPropertyValue_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetFullDisplayString @ 14e2e8630

void __cdecl
UPropertyValue::execGetFullDisplayString(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::operator=(param_3,(FString *)(param_1 + 5));
  return;
}

// execGetPropertyTooltip @ 14e2e8980

void __cdecl UPropertyValue::execGetPropertyTooltip(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FText::FText(&local_18);
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execHasRecordedData @ 14e2e8f40

void __cdecl UPropertyValue::execHasRecordedData(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[7].field_0x18;
  return;
}

