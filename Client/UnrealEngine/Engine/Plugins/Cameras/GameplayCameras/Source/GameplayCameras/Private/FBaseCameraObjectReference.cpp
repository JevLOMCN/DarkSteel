// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 13

// StaticStruct @ 14d537ae0

UScriptStruct * __cdecl FBaseCameraObjectReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBaseCameraObjectReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FBaseCameraObjectReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBaseCameraObjectReference,(UObject *)pUVar1,
                         L"BaseCameraObjectReference");
  }
  return Z_Registration_Info_UScriptStruct_FBaseCameraObjectReference.OuterSingleton;
}

// GetCameraObject @ 14d537b20

UBaseCameraObject * __thiscall
FBaseCameraObjectReference::GetCameraObject(FBaseCameraObjectReference *this)

{
  return (UBaseCameraObject *)0x0;
}

// ~FBaseCameraObjectReference @ 14d544440

void __thiscall
FBaseCameraObjectReference::~FBaseCameraObjectReference(FBaseCameraObjectReference *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBaseCameraObjectReference__6B_;
  pFVar1 = (this->ParameterMetaData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Parameters).OverridenPropertyIDs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->Parameters);
  return;
}

// FindMetaData @ 14d554300

FCameraObjectInterfaceParameterMetaData * __thiscall
FBaseCameraObjectReference::FindMetaData(FBaseCameraObjectReference *this,FGuid *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FCameraObjectInterfaceParameterMetaData *pFVar5;
  FCameraObjectInterfaceParameterMetaData *pFVar6;
  uint local_18;
  uint uStack_14;
  uint uStack_c;
  
  pFVar5 = (FCameraObjectInterfaceParameterMetaData *)
           (this->ParameterMetaData).AllocatorInstance.Data;
  uVar1 = param_1->A;
  uVar2 = param_1->B;
  uVar3 = param_1->C;
  uVar4 = param_1->D;
  pFVar6 = pFVar5 + (this->ParameterMetaData).ArrayNum;
  while( true ) {
    if (pFVar5 == pFVar6) {
      return (FCameraObjectInterfaceParameterMetaData *)0x0;
    }
    if (((uVar4 == (pFVar5->ParameterGuid).D && uVar3 == (pFVar5->ParameterGuid).C) &&
        uVar2 == (pFVar5->ParameterGuid).B) && uVar1 == (pFVar5->ParameterGuid).A) break;
    pFVar5 = pFVar5 + 1;
  }
  return pFVar5;
}

// FindOrAddMetaData @ 14d554380

FCameraObjectInterfaceParameterMetaData * __thiscall
FBaseCameraObjectReference::FindOrAddMetaData(FBaseCameraObjectReference *this,FGuid *param_1)

{
  TArray<FCameraObjectInterfaceParameterMetaData,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FCameraObjectInterfaceParameterMetaData *pFVar10;
  FCameraObjectInterfaceParameterMetaData *pFVar11;
  uint local_18;
  uint uStack_14;
  uint uStack_c;
  
  iVar9 = (this->ParameterMetaData).ArrayNum;
  pTVar1 = &this->ParameterMetaData;
  pFVar10 = (FCameraObjectInterfaceParameterMetaData *)(pTVar1->AllocatorInstance).Data;
  uVar2 = param_1->A;
  uVar3 = param_1->B;
  uVar4 = param_1->C;
  uVar5 = param_1->D;
  pFVar11 = pFVar10 + iVar9;
  while( true ) {
    if (pFVar10 == pFVar11) {
      if (iVar9 == (this->ParameterMetaData).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x41c,&pTVar1->AllocatorInstance,&(this->ParameterMetaData).ArrayMax);
      }
      (this->ParameterMetaData).ArrayNum = iVar9 + 1;
      pFVar10 = (FCameraObjectInterfaceParameterMetaData *)
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x1c);
      *(undefined2 *)&pFVar10->field_0x19 = 0;
      pFVar10->field_0x1b = 0;
      (pFVar10->ParameterGuid).A = 0;
      (pFVar10->ParameterGuid).B = 0;
      (pFVar10->ParameterGuid).C = 0;
      (pFVar10->ParameterGuid).D = 0;
      pFVar10->OverrideVariableID = 0xffffffff;
      pFVar10->OverrideDataID = 0xffffffff;
      pFVar10->bIsOverridden_DEPRECATED = false;
      uVar6 = param_1->B;
      uVar7 = param_1->C;
      uVar8 = param_1->D;
      (pFVar10->ParameterGuid).A = param_1->A;
      (pFVar10->ParameterGuid).B = uVar6;
      (pFVar10->ParameterGuid).C = uVar7;
      (pFVar10->ParameterGuid).D = uVar8;
      return pFVar10;
    }
    if (((uVar5 == (pFVar10->ParameterGuid).D && uVar4 == (pFVar10->ParameterGuid).C) &&
        uVar3 == (pFVar10->ParameterGuid).B) && uVar2 == (pFVar10->ParameterGuid).A) break;
    pFVar10 = pFVar10 + 1;
  }
  return pFVar10;
}

// GetCustomCameraNodeParameters @ 14d556c40

void __thiscall
FBaseCameraObjectReference::GetCustomCameraNodeParameters
          (FBaseCameraObjectReference *this,FCustomCameraNodeParameterInfos *param_1)

{
  FName *pFVar1;
  char cVar2;
  longlong lVar3;
  FProperty *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  UPropertyBag *pUVar8;
  UPropertyBag *pUVar9;
  FPropertyBagPropertyDesc *pFVar10;
  UScriptStruct *pUVar11;
  FCameraObjectInterfaceParameterMetaData *pFVar12;
  UClass *pUVar13;
  UScriptStruct *pUVar14;
  FString *pFVar15;
  EPropertyBagContainerType EVar16;
  atomic<unsigned_char> *paVar17;
  uchar *puVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  ECameraContextDataContainerType EVar21;
  int iVar23;
  FName *pFVar24;
  char *pcVar25;
  FName local_78;
  FName FStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  ECameraContextDataContainerType EVar22;
  
  lVar7 = (**(code **)(this->_padding_ + 8))();
  if (((lVar7 != 0) || ((this->Parameters)._padding_ == 0)) || ((this->Parameters)._padding_ == 0))
  {
    if (lVar7 == 0) goto LAB_14d556cb6;
    if (((this->Parameters)._padding_ != 0) && ((this->Parameters)._padding_ != 0)) {
      pUVar8 = FInstancedPropertyBag::GetPropertyBagStruct((FInstancedPropertyBag *)(lVar7 + 0x88));
      pUVar9 = FInstancedPropertyBag::GetPropertyBagStruct
                         ((FInstancedPropertyBag *)&this->Parameters);
      if (pUVar8 == pUVar9) goto LAB_14d556cb6;
    }
  }
  RebuildParameters(this);
LAB_14d556cb6:
  lVar7 = (**(code **)(this->_padding_ + 8))(this);
  if (lVar7 != 0) {
    lVar3 = (this->Parameters)._padding_;
    pUVar8 = FInstancedPropertyBag::GetPropertyBagStruct((FInstancedPropertyBag *)&this->Parameters)
    ;
    if (((lVar3 == 0) || (pUVar8 == (UPropertyBag *)0x0)) ||
       (pUVar9 = FInstancedPropertyBag::GetPropertyBagStruct
                           ((FInstancedPropertyBag *)(lVar7 + 0x88)), pUVar8 != pUVar9)) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7885835649406730387>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\BaseCameraObjectReference.cpp"
                         ,0x93,
                         "ParametersMemory && ParametersStruct && ParametersStruct == DefaultParameters.GetPropertyBagStruct()"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pFVar24 = *(FName **)(lVar7 + 0x98);
      iVar23 = *(int *)(lVar7 + 0xa0);
      if ((iVar23 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = pFVar24 + (longlong)iVar23 * 9;
      for (; pFVar24 != pFVar1; pFVar24 = pFVar24 + 9) {
        local_78 = pFVar24[1];
        FStack_70 = pFVar24[2];
        pFVar10 = UPropertyBag::FindPropertyDescByID(pUVar8,(FGuid *)&local_78);
        if ((pFVar10 == (FPropertyBagPropertyDesc *)0x0) ||
           (pFVar4 = pFVar10->CachedProperty, pFVar4 == (FProperty *)0x0)) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7885835649406730395>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\BaseCameraObjectReference.cpp"
                             ,0x9b,"PropertyDesc && PropertyDesc->CachedProperty");
          if (bVar6) goto code_r0x00014d5579a8;
          goto switchD_14d556e0f_default;
        }
        cVar2 = (char)pFVar24[3].ComparisonIndex.Value;
        if (cVar2 != '\0') {
          if (cVar2 == '\x01') {
            pFVar12 = FindOrAddMetaData(this,(FGuid *)(pFVar24 + 1));
            if ((pFVar10->ContainerTypes).NumContainers == '\0') {
              EVar16 = None;
            }
            else {
              EVar16 = (pFVar10->ContainerTypes).Types.Elements[0];
            }
            pFVar4 = pFVar10->CachedProperty;
            if ((pFVar4->ArrayDim < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
            if (pFVar24[6].Number < 6) {
              EVar21 = (ECameraContextDataContainerType)(EVar16 == Array);
              EVar22 = (ECameraContextDataContainerType)(EVar16 == Array);
              switch(pFVar24[6].Number) {
              case 0:
                if (pFVar10->ValueType != Name) {
                  pcVar25 = "PropertyDesc->ValueType == EPropertyBagPropertyType::Name";
                  iVar23 = 0xdd;
                  paVar17 = &bGEnsureHasExecuted<7885835649406730461>;
LAB_14d557926:
                  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                    (paVar17,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\BaseCameraObjectReference.cpp"
                                     ,iVar23,pcVar25);
                  goto LAB_14d557941;
                }
                FCustomCameraNodeParameterInfos::AddDataParameter
                          (param_1,*pFVar24,Name,EVar21,(UObject *)0x0,puVar18,
                           &pFVar12->OverrideDataID);
                break;
              case 1:
                if (pFVar10->ValueType != String) {
                  pcVar25 = "PropertyDesc->ValueType == EPropertyBagPropertyType::String";
                  iVar23 = 0xe3;
                  paVar17 = &bGEnsureHasExecuted<7885835649406730467>;
                  goto LAB_14d557926;
                }
                FCustomCameraNodeParameterInfos::AddDataParameter
                          (param_1,*pFVar24,String,EVar21,(UObject *)0x0,puVar18,
                           &pFVar12->OverrideDataID);
                break;
              case 2:
                if ((pFVar10->ValueType != Enum) ||
                   ((FName)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr != pFVar24[8])) {
                  pcVar25 = 
                  "PropertyDesc->ValueType == EPropertyBagPropertyType::Enum && PropertyDesc->ValueTypeObject == Definition.DataTypeObject"
                  ;
                  iVar23 = 0xea;
                  paVar17 = &bGEnsureHasExecuted<7885835649406730474>;
                  goto LAB_14d557926;
                }
                if (pFVar24[8] == (FName)0x0) {
                  pFVar15 = GetTypeName<UEnum_const_>(&local_48);
                  if ((pFVar15->Data).ArrayNum == 0) {
                    pwVar20 = L"";
                  }
                  else {
                    pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
                  }
                    /* WARNING: Subroutine does not return */
                  CastLogError(L"nullptr",pwVar20);
                }
                pUVar13 = Z_Construct_UClass_UEnum_NoRegister();
                bVar6 = FObjectPtr::IsA((FObjectPtr *)(pFVar24 + 8),pUVar13);
                if ((!bVar6) || (pFVar24[8] == (FName)0x0)) {
                  pFVar15 = GetTypeName<UEnum_const_>(&local_68);
                  pwVar20 = L"";
                  if ((pFVar15->Data).ArrayNum == 0) {
                    pwVar19 = L"";
                  }
                  else {
                    pwVar19 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
                  }
                  pFVar15 = GetFullNameForCastLogError<UObject_const_>
                                      (&local_58,(UObject *)pFVar24[8]);
                  if ((pFVar15->Data).ArrayNum != 0) {
                    pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
                  }
                    /* WARNING: Subroutine does not return */
                  CastLogError(pwVar20,pwVar19);
                }
                FCustomCameraNodeParameterInfos::AddDataParameter
                          (param_1,*pFVar24,Enum,EVar21,(UObject *)pFVar24[8],puVar18,
                           &pFVar12->OverrideDataID);
                break;
              case 3:
                if ((pFVar10->ValueType != Struct) ||
                   ((FName)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr != pFVar24[8])) {
                  pcVar25 = 
                  "PropertyDesc->ValueType == EPropertyBagPropertyType::Struct && PropertyDesc->ValueTypeObject == Definition.DataTypeObject"
                  ;
                  iVar23 = 0xf2;
                  paVar17 = &bGEnsureHasExecuted<7885835649406730482>;
                  goto LAB_14d557926;
                }
                pUVar14 = CastChecked<UScriptStruct_const_,UObject_const_>
                                    ((TObjectPtr<UObject_const_> *)(pFVar24 + 8),NullChecked);
                FCustomCameraNodeParameterInfos::AddDataParameter
                          (param_1,*pFVar24,Struct,EVar21,(UObject *)pUVar14,puVar18,
                           &pFVar12->OverrideDataID);
                break;
              case 4:
                if (pFVar10->ValueType != Object) {
                  pcVar25 = "PropertyDesc->ValueType == EPropertyBagPropertyType::Object";
                  iVar23 = 0xf9;
                  paVar17 = &bGEnsureHasExecuted<7885835649406730489>;
                  goto LAB_14d557926;
                }
                FCustomCameraNodeParameterInfos::AddDataParameter
                          (param_1,*pFVar24,Object,EVar22,(UObject *)pFVar24[8],puVar18,
                           &pFVar12->OverrideDataID);
                break;
              case 5:
                if (pFVar10->ValueType != Class) {
                  pcVar25 = "PropertyDesc->ValueType == EPropertyBagPropertyType::Class";
                  iVar23 = 0xff;
                  paVar17 = &bGEnsureHasExecuted<7885835649406730495>;
                  goto LAB_14d557926;
                }
                FCustomCameraNodeParameterInfos::AddDataParameter
                          (param_1,*pFVar24,Class,EVar22,(UObject *)pFVar24[8],puVar18,
                           &pFVar12->OverrideDataID);
              }
            }
          }
          goto switchD_14d556e0f_default;
        }
        if (pFVar10->ValueType != Struct) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7885835649406730402>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\BaseCameraObjectReference.cpp"
                             ,0xa2,"PropertyDesc->ValueType == EPropertyBagPropertyType::Struct");
          goto LAB_14d557941;
        }
        switch(pFVar24[4].ComparisonIndex.Value) {
        case 0:
          pUVar11 = FBooleanCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (!bVar6) {
            pcVar25 = "PropertyDesc->ValueTypeObject == FBooleanCameraParameter::StaticStruct()";
            goto LAB_14d5575aa;
          }
          pFVar4 = pFVar10->CachedProperty;
          if ((pFVar4->ArrayDim < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar23 = pFVar4->Offset_Internal;
joined_r0x00014d556f76:
          puVar18 = (uchar *)(iVar23 + lVar3);
          if (puVar18 == (uchar *)0x0) goto LAB_14d5575a5;
          FCustomCameraNodeParameterInfos::AddBlendableParameter
                    (param_1,*pFVar24,pFVar24[4].ComparisonIndex.Value,(UScriptStruct *)0x0,puVar18,
                     (FCameraVariableID *)(puVar18 + 4));
          break;
        case 1:
          pUVar11 = FInteger32CameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (bVar6) {
            pFVar4 = pFVar10->CachedProperty;
            if ((pFVar4->ArrayDim < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar23 = pFVar4->Offset_Internal;
            goto joined_r0x00014d556f76;
          }
          pcVar25 = "PropertyDesc->ValueTypeObject == FInteger32CameraParameter::StaticStruct()";
          goto LAB_14d5575aa;
        case 2:
          pUVar11 = FFloatCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (bVar6) {
            pFVar4 = pFVar10->CachedProperty;
            if ((pFVar4->ArrayDim < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar23 = pFVar4->Offset_Internal;
            goto joined_r0x00014d556f76;
          }
          pcVar25 = "PropertyDesc->ValueTypeObject == FFloatCameraParameter::StaticStruct()";
          goto LAB_14d5575aa;
        case 3:
          pUVar11 = FDoubleCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (!bVar6) {
            pcVar25 = "PropertyDesc->ValueTypeObject == FDoubleCameraParameter::StaticStruct()";
            goto LAB_14d5575aa;
          }
          pFVar4 = pFVar10->CachedProperty;
          if ((pFVar4->ArrayDim < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
          if (puVar18 == (uchar *)0x0) goto LAB_14d5575a5;
LAB_14d557090:
          FCustomCameraNodeParameterInfos::AddBlendableParameter
                    (param_1,*pFVar24,pFVar24[4].ComparisonIndex.Value,(UScriptStruct *)0x0,puVar18,
                     (FCameraVariableID *)(puVar18 + 8));
          break;
        case 4:
          pUVar11 = FVector2fCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (bVar6) {
            pFVar4 = pFVar10->CachedProperty;
            if ((pFVar4->ArrayDim < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
            if (puVar18 != (uchar *)0x0) goto LAB_14d557090;
LAB_14d5575a5:
            pcVar25 = "PropertyValue";
          }
          else {
            pcVar25 = "PropertyDesc->ValueTypeObject == FVector2fCameraParameter::StaticStruct()";
          }
          goto LAB_14d5575aa;
        case 5:
          pUVar11 = FVector2dCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (!bVar6) {
            pcVar25 = "PropertyDesc->ValueTypeObject == FVector2dCameraParameter::StaticStruct()";
            goto LAB_14d5575aa;
          }
          pFVar4 = pFVar10->CachedProperty;
          if ((pFVar4->ArrayDim < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
          if (puVar18 == (uchar *)0x0) goto LAB_14d5575a5;
LAB_14d5572a0:
          FCustomCameraNodeParameterInfos::AddBlendableParameter
                    (param_1,*pFVar24,pFVar24[4].ComparisonIndex.Value,(UScriptStruct *)0x0,puVar18,
                     (FCameraVariableID *)(puVar18 + 0x10));
          break;
        case 6:
          pUVar11 = FVector3fCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (!bVar6) {
            pcVar25 = "PropertyDesc->ValueTypeObject == FVector3fCameraParameter::StaticStruct()";
            goto LAB_14d5575aa;
          }
          pFVar4 = pFVar10->CachedProperty;
          if ((pFVar4->ArrayDim < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
          if (puVar18 == (uchar *)0x0) goto LAB_14d5575a5;
LAB_14d5573d8:
          FCustomCameraNodeParameterInfos::AddBlendableParameter
                    (param_1,*pFVar24,pFVar24[4].ComparisonIndex.Value,(UScriptStruct *)0x0,puVar18,
                     (FCameraVariableID *)(puVar18 + 0xc));
          break;
        case 7:
          pUVar11 = FVector3dCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (!bVar6) {
            pcVar25 = "PropertyDesc->ValueTypeObject == FVector3dCameraParameter::StaticStruct()";
            goto LAB_14d5575aa;
          }
          pFVar4 = pFVar10->CachedProperty;
          if ((pFVar4->ArrayDim < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
          if (puVar18 == (uchar *)0x0) goto LAB_14d5575a5;
LAB_14d557474:
          FCustomCameraNodeParameterInfos::AddBlendableParameter
                    (param_1,*pFVar24,pFVar24[4].ComparisonIndex.Value,(UScriptStruct *)0x0,puVar18,
                     (FCameraVariableID *)(puVar18 + 0x18));
          break;
        case 8:
          pUVar11 = FVector4fCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (bVar6) {
            pFVar4 = pFVar10->CachedProperty;
            if ((pFVar4->ArrayDim < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
            if (puVar18 != (uchar *)0x0) goto LAB_14d5572a0;
            goto LAB_14d5575a5;
          }
          pcVar25 = "PropertyDesc->ValueTypeObject == FVector4fCameraParameter::StaticStruct()";
          goto LAB_14d5575aa;
        case 9:
          pUVar11 = FVector4dCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (!bVar6) {
            pcVar25 = "PropertyDesc->ValueTypeObject == FVector4dCameraParameter::StaticStruct()";
            goto LAB_14d5575aa;
          }
          pFVar4 = pFVar10->CachedProperty;
          if ((pFVar4->ArrayDim < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
          if (puVar18 == (uchar *)0x0) goto LAB_14d5575a5;
          FCustomCameraNodeParameterInfos::AddBlendableParameter
                    (param_1,*pFVar24,pFVar24[4].ComparisonIndex.Value,(UScriptStruct *)0x0,puVar18,
                     (FCameraVariableID *)(puVar18 + 0x20));
          break;
        case 10:
          pUVar11 = FRotator3fCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (bVar6) {
            pFVar4 = pFVar10->CachedProperty;
            if ((pFVar4->ArrayDim < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
            if (puVar18 != (uchar *)0x0) goto LAB_14d5573d8;
            goto LAB_14d5575a5;
          }
          pcVar25 = "PropertyDesc->ValueTypeObject == FRotator3fCameraParameter::StaticStruct()";
          goto LAB_14d5575aa;
        case 0xb:
          pUVar11 = FRotator3dCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (bVar6) {
            pFVar4 = pFVar10->CachedProperty;
            if ((pFVar4->ArrayDim < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
            if (puVar18 != (uchar *)0x0) goto LAB_14d557474;
            goto LAB_14d5575a5;
          }
          pcVar25 = "PropertyDesc->ValueTypeObject == FRotator3dCameraParameter::StaticStruct()";
LAB_14d5575aa:
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7885835649406730427>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\BaseCameraObjectReference.cpp"
                             ,0xbb,pcVar25);
LAB_14d557941:
          if (bVar6 != false) {
code_r0x00014d5579a8:
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        case 0xc:
          pUVar11 = FTransform3fCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (!bVar6) {
            pcVar25 = "PropertyDesc->ValueTypeObject == FTransform3fCameraParameter::StaticStruct()"
            ;
            goto LAB_14d5575aa;
          }
          pFVar4 = pFVar10->CachedProperty;
          if ((pFVar4->ArrayDim < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
          if (puVar18 == (uchar *)0x0) goto LAB_14d5575a5;
          FCustomCameraNodeParameterInfos::AddBlendableParameter
                    (param_1,*pFVar24,pFVar24[4].ComparisonIndex.Value,(UScriptStruct *)0x0,puVar18,
                     (FCameraVariableID *)(puVar18 + 0x30));
          break;
        case 0xd:
          pUVar11 = FTransform3dCameraParameter::StaticStruct();
          pUVar14 = (UScriptStruct *)(pFVar10->ValueTypeObject).field0_0x0.DebugPtr;
          if (pUVar14 == (UScriptStruct *)0x0) {
            bVar6 = pUVar11 == (UScriptStruct *)0x0;
          }
          else {
            bVar6 = pUVar14 == pUVar11;
          }
          if (!bVar6) {
            pcVar25 = "PropertyDesc->ValueTypeObject == FTransform3dCameraParameter::StaticStruct()"
            ;
            goto LAB_14d5575aa;
          }
          pFVar4 = pFVar10->CachedProperty;
          if ((pFVar4->ArrayDim < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
          if (puVar18 == (uchar *)0x0) goto LAB_14d5575a5;
          FCustomCameraNodeParameterInfos::AddBlendableParameter
                    (param_1,*pFVar24,pFVar24[4].ComparisonIndex.Value,(UScriptStruct *)0x0,puVar18,
                     (FCameraVariableID *)(puVar18 + 0x60));
          break;
        case 0xe:
          if ((pFVar4->ArrayDim < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar18 = (uchar *)(pFVar4->Offset_Internal + lVar3);
          if (puVar18 == (uchar *)0x0) {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7885835649406730432>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\BaseCameraObjectReference.cpp"
                               ,0xc0,"PropertyValue");
            goto LAB_14d557941;
          }
          pFVar12 = FindOrAddMetaData(this,(FGuid *)(pFVar24 + 1));
          FCustomCameraNodeParameterInfos::AddBlendableParameter
                    (param_1,*pFVar24,pFVar24[4].ComparisonIndex.Value,(UScriptStruct *)pFVar24[5],
                     puVar18,&pFVar12->OverrideVariableID);
        }
switchD_14d556e0f_default:
      }
    }
  }
  return;
}

// IsParameterOverridden @ 14d55a590

bool __thiscall
FBaseCameraObjectReference::IsParameterOverridden(FBaseCameraObjectReference *this,FGuid *param_1)

{
  bool bVar1;
  
  bVar1 = FInstancedOverridablePropertyBag::IsPropertyOverriden(&this->Parameters,param_1);
  return bVar1;
}

// NeedsRebuildParameters @ 14d55aa80

bool __thiscall FBaseCameraObjectReference::NeedsRebuildParameters(FBaseCameraObjectReference *this)

{
  longlong lVar1;
  UPropertyBag *pUVar2;
  UPropertyBag *pUVar3;
  
  lVar1 = (**(code **)(this->_padding_ + 8))();
  if (((lVar1 != 0) || ((this->Parameters)._padding_ == 0)) || ((this->Parameters)._padding_ == 0))
  {
    if (lVar1 == 0) {
      return false;
    }
    if (((this->Parameters)._padding_ != 0) && ((this->Parameters)._padding_ != 0)) {
      pUVar2 = FInstancedPropertyBag::GetPropertyBagStruct((FInstancedPropertyBag *)(lVar1 + 0x88));
      pUVar3 = FInstancedPropertyBag::GetPropertyBagStruct
                         ((FInstancedPropertyBag *)&this->Parameters);
      return pUVar2 != pUVar3;
    }
  }
  return true;
}

// PostSerialize @ 14d55dd50

void __thiscall
FBaseCameraObjectReference::PostSerialize(FBaseCameraObjectReference *this,FArchive *param_1)

{
  int iVar1;
  FGuid *pFVar2;
  FGuid *pFVar3;
  undefined1 local_res10 [8];
  
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar2 = (FGuid *)(this->ParameterMetaData).AllocatorInstance.Data;
    iVar1 = (this->ParameterMetaData).ArrayNum;
    pFVar3 = (FGuid *)((longlong)pFVar2 + (longlong)iVar1 * 0x1c);
    while( true ) {
      if ((this->ParameterMetaData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FCameraObjectInterfaceParameterMetaData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar2 == pFVar3) break;
      if ((char)pFVar2[1].C != '\0') {
        FInstancedOverridablePropertyBag::SetPropertyOverriden(&this->Parameters,pFVar2,true);
        *(undefined1 *)&pFVar2[1].C = 0;
      }
      pFVar2 = (FGuid *)&pFVar2[1].D;
    }
  }
  return;
}

// RebuildParameters @ 14d55e550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBaseCameraObjectReference::RebuildParameters(FBaseCameraObjectReference *this)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  UPropertyBag *pUVar11;
  ulong64 uVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  bool *pbVar16;
  uint uVar17;
  ForElementType<FSetElementId> FVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298 [8];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  uint local_278;
  undefined1 local_270 [8];
  TPairInitializer<FGuid_const_&,ECameraObjectInterfaceParameterType_const_&> local_268;
  longlong *local_258;
  uint uStack_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  uint local_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  longlong *local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_220;
  undefined8 uStack_200;
  bool *local_1f8;
  bool *local_1f0;
  undefined4 local_1cc;
  undefined1 local_1c8 [32];
  uint *local_1a8;
  uint local_1a0;
  int local_194;
  ForElementType<FSetElementId> local_188;
  int local_180;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_178;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_128;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  lVar10 = (**(code **)(this->_padding_ + 8))();
  if (lVar10 == 0) {
    FInstancedStruct::Reset((FInstancedStruct *)&this->Parameters);
  }
  else {
    FInstancedOverridablePropertyBag::MigrateToNewBagInstanceWithOverrides
              (&this->Parameters,(FInstancedPropertyBag *)(lVar10 + 0x88));
    pUVar11 = FInstancedPropertyBag::GetPropertyBagStruct
                        ((FInstancedPropertyBag *)&this->Parameters);
    uVar21 = 0;
    uVar17 = 0;
    if (pUVar11 != (UPropertyBag *)0x0) {
      local_128.Elements._0_8_ = 0;
      local_128.Elements._8_8_ = 0;
      local_128.Elements._32_8_ = 0;
      local_128.Elements._40_4_ = 0;
      local_128.Elements._44_4_ = 0x80;
      local_128.Elements._48_4_ = 0xffffffff;
      local_128.Elements._52_4_ = 0;
      local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_128.HashSize = 0;
      for (uVar15 = uVar21; (-1 < (int)uVar15 && ((int)uVar15 < (this->ParameterMetaData).ArrayNum))
          ; uVar15 = uVar15 + 1) {
        if (((int)uVar15 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (&local_128,(FGuid *)local_270,
                   (bool *)((this->ParameterMetaData).AllocatorInstance.Data +
                           (longlong)(int)uVar15 * 0x1c));
      }
      iVar20 = *(int *)(lVar10 + 0xa0);
      lVar10 = *(longlong *)(lVar10 + 0x98);
      local_178.Elements._0_8_ = 0;
      local_178.Elements._8_8_ = 0;
      local_178.Elements._32_8_ = 0;
      local_178.Elements._40_4_ = 0;
      local_178.Elements._44_4_ = 0x80;
      local_178.Elements._48_4_ = 0xffffffff;
      local_178.Elements._52_4_ = 0;
      local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_178.HashSize = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 0x80;
      local_a8 = 0xffffffff;
      local_a4 = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      if ((iVar20 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar1 = lVar10 + (longlong)iVar20 * 0x48;
      if (lVar10 != lVar1) {
        pbVar16 = (bool *)(lVar10 + 8);
        do {
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                    (&local_178,(FGuid *)(local_270 + 4),pbVar16);
          local_1f0 = pbVar16 + 0x10;
          local_1f8 = pbVar16;
          TSet<TTuple<FGuid,enum_ECameraObjectInterfaceParameterType>,TDefaultMapHashableKeyFuncs<FGuid,enum_ECameraObjectInterfaceParameterType,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FGuid_const_&,enum_ECameraObjectInterfaceParameterType_const_&>_>
                    (&local_d8,&local_268,(bool *)&local_1f8);
          lVar10 = lVar10 + 0x48;
          pbVar16 = pbVar16 + 0x48;
        } while (lVar10 != lVar1);
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Difference
                (&local_128,&local_88,&local_178);
      uVar9 = 1;
      uVar15 = uVar21;
      while ((-1 < (int)uVar15 && ((int)uVar15 < (this->ParameterMetaData).ArrayNum))) {
        if (((int)uVar15 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar22 = (this->ParameterMetaData).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x1c;
        uVar12 = CityHash64((char *)pFVar22,0x10);
        if (local_88.Elements._8_4_ == local_88.Elements._52_4_) {
LAB_14d55e967:
          uVar15 = uVar15 + 1;
        }
        else {
          FVar18 = (ForElementType<FSetElementId>)&local_88.Hash;
          if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar18 = local_88.Hash.SecondaryData;
          }
          iVar20 = *(int *)((longlong)FVar18 +
                           ((ulonglong)(local_88.HashSize - 1) & uVar12 & 0xffffffff) * 4);
          if (iVar20 == -1) goto LAB_14d55e967;
          do {
            piVar2 = (int *)(local_88.Elements._0_8_ + (longlong)iVar20 * 0x18);
            if (((*(int *)(pFVar22 + 0xc) == piVar2[3] &&
                 *(int *)(pFVar22 + 8) ==
                 *(int *)(local_88.Elements._0_8_ + 8 + (longlong)iVar20 * 0x18)) &&
                *(int *)(pFVar22 + 4) == piVar2[1]) && *(int *)pFVar22 == *piVar2) {
              uVar8 = uVar17;
              if ((int)uVar15 < (this->ParameterMetaData).ArrayNum) {
                uVar8 = ~uVar15 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar20 = (this->ParameterMetaData).ArrayNum;
              pFVar22 = (this->ParameterMetaData).AllocatorInstance.Data;
              iVar14 = ~uVar15 + iVar20;
              if (1 < iVar14) {
                iVar14 = 1;
              }
              if (iVar14 != 0) {
                memmove(pFVar22 + (longlong)(int)uVar15 * 0x1c,
                        pFVar22 + (longlong)(iVar20 - iVar14) * 0x1c,(longlong)iVar14 * 0x1c);
              }
              iVar20 = (this->ParameterMetaData).ArrayNum + -1;
              (this->ParameterMetaData).ArrayNum = iVar20;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1c,4,&(this->ParameterMetaData).AllocatorInstance,iVar20,
                         &(this->ParameterMetaData).ArrayMax);
              uVar15 = uVar15 - 1;
              goto LAB_14d55e967;
            }
            iVar20 = piVar2[4];
          } while (iVar20 != -1);
          uVar15 = uVar15 + 1;
        }
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Difference
                (&local_178,(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_1c8,
                 &local_128);
      uVar15 = local_1a0;
      local_238 = 0;
      uStack_23c = uVar17;
      if (local_1a0 != 0) {
        puVar19 = (uint *)(local_1c8 + 0x10);
        if (local_1a8 != (uint *)0x0) {
          puVar19 = local_1a8;
        }
        uVar8 = *puVar19;
        local_238 = uVar21;
        uVar17 = uVar21;
        while (uVar8 == 0) {
          lVar10 = (longlong)(int)uVar17;
          local_238 = local_238 + 0x20;
          uVar17 = uVar17 + 1;
          uStack_23c = local_1a0;
          if ((int)((local_1a0 - 1) + ((int)(local_1a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
          goto LAB_14d55ea01;
          uVar8 = puVar19[lVar10 + 1];
        }
        uVar9 = -uVar8 & uVar8;
        uVar4 = (ulonglong)uVar9 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_268.Key._4_4_ = (uint)lVar10;
        uStack_23c = (local_238 - 1) + local_268.Key._4_4_;
        if ((int)local_1a0 < (int)uStack_23c) {
          uStack_23c = local_1a0;
        }
      }
LAB_14d55ea01:
      local_258 = (longlong *)local_1c8;
      uStack_234 = local_1cc;
      local_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1c8 + 0x10);
      iStack_230 = local_1c8._8_4_ - local_194;
      uVar21 = local_1a0 & 0xffffffe0;
      TStack_220._padding_ = CONCAT44(uVar9,uVar17);
      uStack_240 = 0xffffffff;
      TStack_220.CurrentBitIndex = uStack_23c;
      TStack_220.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)local_1a0 >> 5;
      TStack_220._28_4_ = local_1cc;
      TStack_220.BaseBitIndex = local_238;
      uStack_200 = CONCAT44(uStack_22c,iStack_230);
      bVar13 = (byte)local_1a0;
      uStack_250 = uVar17;
      uStack_24c = uVar9;
      local_228 = local_258;
      TStack_220.Array = local_248;
      if (((int)local_1a0 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar15 != local_1a0) {
        puVar19 = (uint *)(local_1c8 + 0x10);
        if (local_1a8 != (uint *)0x0) {
          puVar19 = local_1a8;
        }
        uVar17 = -1 << (bVar13 & 0x1f) & puVar19[iVar20];
        while (uVar17 == 0) {
          lVar10 = (longlong)iVar20;
          uVar21 = uVar21 + 0x20;
          iVar20 = iVar20 + 1;
          uVar15 = local_1a0;
          if ((int)((local_1a0 - 1) + ((int)(local_1a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14d55eb02;
          uVar17 = puVar19[lVar10 + 1];
        }
        uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_268.Value._0_4_ = (int)lVar10;
        uVar15 = (int)local_268.Value + -1 + uVar21;
        if ((int)local_1a0 < (int)uVar15) {
          uVar15 = local_1a0;
        }
      }
LAB_14d55eb02:
      while( true ) {
        plVar6 = local_228;
        if ((int)local_228[1] - *(int *)((longlong)local_228 + 0x34) != (int)uStack_200) {
          local_298[0] = 0;
          `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_298);
        }
        if (((TStack_220.CurrentBitIndex == uVar15) &&
            (TStack_220.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1c8 + 0x10))) &&
           (plVar6 == (longlong *)local_1c8)) break;
        local_280 = 0xffffffffffffffff;
        local_278 = local_278 & 0xffffff00;
        puVar3 = (undefined8 *)(*plVar6 + (longlong)TStack_220.CurrentBitIndex * 0x18);
        local_290 = *puVar3;
        uStack_288 = puVar3[1];
        pFVar22 = (this->ParameterMetaData).AllocatorInstance.Data;
        if (((pFVar22 <= (FScriptContainerElement *)&local_290) &&
            ((FScriptContainerElement *)&local_290 <
             pFVar22 + (longlong)(this->ParameterMetaData).ArrayMax * 0x1c)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar20 = (this->ParameterMetaData).ArrayNum;
        piVar2 = &(this->ParameterMetaData).ArrayMax;
        if (iVar20 == *piVar2) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x41c,&(this->ParameterMetaData).AllocatorInstance,piVar2);
        }
        (this->ParameterMetaData).ArrayNum = iVar20 + 1;
        pFVar22 = (this->ParameterMetaData).AllocatorInstance.Data + (longlong)iVar20 * 0x1c;
        *(undefined8 *)pFVar22 = local_290;
        *(undefined8 *)(pFVar22 + 8) = uStack_288;
        *(undefined8 *)(pFVar22 + 0x10) = local_280;
        *(uint *)(pFVar22 + 0x18) = local_278;
        TStack_220.UnvisitedBitMask = TStack_220.UnvisitedBitMask & ~TStack_220._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_220);
      }
      local_180 = 0;
      if (local_188 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_188);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1c8);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      local_90 = 0;
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,enum_ECameraObjectInterfaceParameterType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,enum_ECameraObjectInterfaceParameterType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_d8);
      local_178.HashSize = 0;
      if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_178.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_178.Elements);
      local_128.HashSize = 0;
      if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_128.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_128.Elements);
      return;
    }
  }
  (this->ParameterMetaData).ArrayNum = 0;
  if ((this->ParameterMetaData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,&(this->ParameterMetaData).AllocatorInstance,0,
               &(this->ParameterMetaData).ArrayMax);
  }
  return;
}

// RebuildParametersIfNeeded @ 14d55ed80

bool __thiscall
FBaseCameraObjectReference::RebuildParametersIfNeeded(FBaseCameraObjectReference *this)

{
  longlong lVar1;
  UPropertyBag *pUVar2;
  UPropertyBag *pUVar3;
  
  lVar1 = (**(code **)(this->_padding_ + 8))();
  if (lVar1 == 0) {
    if (((this->Parameters)._padding_ == 0) || ((this->Parameters)._padding_ == 0)) {
      return false;
    }
  }
  else if (((this->Parameters)._padding_ != 0) && ((this->Parameters)._padding_ != 0)) {
    pUVar2 = FInstancedPropertyBag::GetPropertyBagStruct((FInstancedPropertyBag *)(lVar1 + 0x88));
    pUVar3 = FInstancedPropertyBag::GetPropertyBagStruct((FInstancedPropertyBag *)&this->Parameters)
    ;
    if (pUVar2 == pUVar3) {
      return false;
    }
  }
  RebuildParameters(this);
  return true;
}

// SetParameterOverridden @ 14d564dd0

void __thiscall
FBaseCameraObjectReference::SetParameterOverridden
          (FBaseCameraObjectReference *this,FGuid *param_1,bool param_2)

{
  FInstancedOverridablePropertyBag::SetPropertyOverriden(&this->Parameters,param_1,param_2);
  return;
}

// operator= @ 14d592300

FBaseCameraObjectReference * __thiscall
FBaseCameraObjectReference::operator=
          (FBaseCameraObjectReference *this,FBaseCameraObjectReference *param_1)

{
  if (&this->Parameters != &param_1->Parameters) {
    FInstancedStruct::InitializeAs
              ((FInstancedStruct *)&this->Parameters,
               (UScriptStruct *)(param_1->Parameters)._padding_,
               (uchar *)(param_1->Parameters)._padding_);
  }
  TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Parameters).OverridenPropertyIDs,&(param_1->Parameters).OverridenPropertyIDs);
  TArray<FCameraObjectInterfaceParameterMetaData,TSizedDefaultAllocator<32>_>::operator=
            (&this->ParameterMetaData,&param_1->ParameterMetaData);
  return this;
}

