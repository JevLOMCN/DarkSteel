// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// FCameraObjectInterfaceParameterOverrideHelper @ 14d5fb790

FCameraObjectInterfaceParameterOverrideHelper * __thiscall
UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::
FCameraObjectInterfaceParameterOverrideHelper
          (FCameraObjectInterfaceParameterOverrideHelper *this,FCameraVariableTable *param_1,
          FCameraContextDataTable *param_2)

{
  this->VariableTable = param_1;
  this->ContextDataTable = param_2;
  return this;
}

// ApplyDefaultBlendableParameters @ 14d60ba50

void __cdecl
UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyDefaultBlendableParameters
          (UBaseCameraObject *param_1,FCameraVariableTable *param_2)

{
  ApplyDefaultParametersImpl(param_1,param_2,(FCameraContextDataTable *)0x0);
  return;
}

// ApplyDefaultParameters @ 14d60ba60

void __cdecl
UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyDefaultParameters
          (UBaseCameraObject *param_1,FCameraVariableTable *param_2,FCameraContextDataTable *param_3
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  FProperty *pFVar5;
  code *pcVar6;
  bool bVar7;
  FPropertyBagPropertyDesc *pFVar8;
  uchar *_Dst;
  uchar *_Src;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  FGuid FStack_58;
  FGuid FStack_48;
  
  if (param_1 == (UBaseCameraObject *)0x0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6752941276653420001>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                       ,0x21f,"CameraObject");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    iVar2 = (param_1->ParameterDefinitions).ArrayNum;
    pFVar10 = (param_1->ParameterDefinitions).AllocatorInstance.Data;
    puVar3 = (param_1->DefaultParameters).Value.StructMemory;
    if ((iVar2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar1 = pFVar10 + (longlong)iVar2 * 0x48;
    if (pFVar10 != pFVar1) {
      pFVar9 = pFVar10 + 0x1c;
      do {
        if (pFVar9[-4] == (FScriptContainerElement)0x0) {
          if (((param_2 != (FCameraVariableTable *)0x0) && (*(uint *)pFVar9 != 0xffffffff)) &&
             (bVar7 = FCameraVariableTable::IsValueWritten
                                (param_2,(FCameraVariableID)*(uint *)pFVar9), !bVar7)) {
            FStack_58._0_8_ = *(undefined8 *)(pFVar9 + -0x14);
            FStack_58._8_8_ = *(undefined8 *)(pFVar9 + -0xc);
            pFVar8 = FInstancedPropertyBag::FindPropertyDescByID
                               (&param_1->DefaultParameters,&FStack_58);
            if ((pFVar8 == (FPropertyBagPropertyDesc *)0x0) ||
               (pFVar4 = pFVar8->CachedProperty, pFVar4 == (FProperty *)0x0)) {
              bVar7 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_6752941276653419978>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                                 ,0x236,"PropertyDesc && PropertyDesc->CachedProperty");
              if (bVar7) {
code_r0x00014d60be07:
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              if ((pFVar4->ArrayDim < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((puVar3 == (uchar *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FCameraVariableTable::TrySetValue
                        (param_2,(FCameraVariableID)*(uint *)pFVar9,
                         *(ECameraVariableType *)(pFVar9 + 4),*(UScriptStruct **)(pFVar9 + 0xc),
                         puVar3 + pFVar4->Offset_Internal,true);
            }
          }
        }
        else if ((((pFVar9[-4] == (FScriptContainerElement)0x1) &&
                  (param_3 != (FCameraContextDataTable *)0x0)) &&
                 (*(uint *)(pFVar9 + 0x14) != 0xffffffff)) &&
                (bVar7 = FCameraContextDataTable::IsValueWritten
                                   (param_3,(FCameraContextDataID)*(uint *)(pFVar9 + 0x14)), !bVar7)
                ) {
          FStack_48._0_8_ = *(undefined8 *)(pFVar9 + -0x14);
          FStack_48._8_8_ = *(undefined8 *)(pFVar9 + -0xc);
          pFVar8 = FInstancedPropertyBag::FindPropertyDescByID
                             (&param_1->DefaultParameters,&FStack_48);
          if ((pFVar8 == (FPropertyBagPropertyDesc *)0x0) ||
             (pFVar8->CachedProperty == (FProperty *)0x0)) {
            bVar7 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6752941276653419957>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                               ,0x24b,"PropertyDesc && PropertyDesc->CachedProperty");
            if (bVar7) goto code_r0x00014d60be07;
          }
          else {
            uVar11 = 1;
            _Dst = FCameraContextDataTable::TryGetMutableRawDataPtr
                             (param_3,(FCameraContextDataID)*(uint *)(pFVar9 + 0x14),
                              *(ECameraContextDataType *)(pFVar9 + 0x18),
                              *(UObject **)(pFVar9 + 0x24),true);
            if (_Dst != (uchar *)0x0) {
              pFVar4 = pFVar8->CachedProperty;
              if (pFVar4->ArrayDim < 1) {
                uVar11 = 0;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
                ;
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              if ((puVar3 == (uchar *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar5 = pFVar8->CachedProperty;
              _Src = puVar3 + pFVar4->Offset_Internal;
              if (_Dst != _Src) {
                if (((uint)(int)pFVar5->PropertyFlags >> 0x1e & 1) == 0) {
                  (**(code **)(pFVar5->_padding_ + 0xf0))(pFVar5,_Dst,_Src,pFVar5->ArrayDim,uVar11);
                }
                else {
                  memcpy(_Dst,_Src,(longlong)pFVar5->ElementSize * (longlong)pFVar5->ArrayDim);
                }
              }
            }
          }
        }
        pFVar10 = pFVar10 + 0x48;
        pFVar9 = pFVar9 + 0x48;
      } while (pFVar10 != pFVar1);
    }
  }
  return;
}

// ApplyDefaultParametersImpl @ 14d60ba70

void __cdecl
UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyDefaultParametersImpl
          (UBaseCameraObject *param_1,FCameraVariableTable *param_2,FCameraContextDataTable *param_3
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  FProperty *pFVar5;
  code *pcVar6;
  bool bVar7;
  FPropertyBagPropertyDesc *pFVar8;
  uchar *_Dst;
  uchar *_Src;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  FGuid local_58;
  FGuid local_48;
  
  if (param_1 == (UBaseCameraObject *)0x0) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6752941276653420001>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                       ,0x21f,"CameraObject");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    iVar2 = (param_1->ParameterDefinitions).ArrayNum;
    pFVar10 = (param_1->ParameterDefinitions).AllocatorInstance.Data;
    puVar3 = (param_1->DefaultParameters).Value.StructMemory;
    if ((iVar2 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar1 = pFVar10 + (longlong)iVar2 * 0x48;
    if (pFVar10 != pFVar1) {
      pFVar9 = pFVar10 + 0x1c;
      do {
        if (pFVar9[-4] == (FScriptContainerElement)0x0) {
          if (((param_2 != (FCameraVariableTable *)0x0) && (*(uint *)pFVar9 != 0xffffffff)) &&
             (bVar7 = FCameraVariableTable::IsValueWritten
                                (param_2,(FCameraVariableID)*(uint *)pFVar9), !bVar7)) {
            local_58._0_8_ = *(undefined8 *)(pFVar9 + -0x14);
            local_58._8_8_ = *(undefined8 *)(pFVar9 + -0xc);
            pFVar8 = FInstancedPropertyBag::FindPropertyDescByID
                               (&param_1->DefaultParameters,&local_58);
            if ((pFVar8 == (FPropertyBagPropertyDesc *)0x0) ||
               (pFVar4 = pFVar8->CachedProperty, pFVar4 == (FProperty *)0x0)) {
              bVar7 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_6752941276653419978>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                                 ,0x236,"PropertyDesc && PropertyDesc->CachedProperty");
              if (bVar7) {
code_r0x00014d60be07:
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              if ((pFVar4->ArrayDim < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((puVar3 == (uchar *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FCameraVariableTable::TrySetValue
                        (param_2,(FCameraVariableID)*(uint *)pFVar9,
                         *(ECameraVariableType *)(pFVar9 + 4),*(UScriptStruct **)(pFVar9 + 0xc),
                         puVar3 + pFVar4->Offset_Internal,true);
            }
          }
        }
        else if ((((pFVar9[-4] == (FScriptContainerElement)0x1) &&
                  (param_3 != (FCameraContextDataTable *)0x0)) &&
                 (*(uint *)(pFVar9 + 0x14) != 0xffffffff)) &&
                (bVar7 = FCameraContextDataTable::IsValueWritten
                                   (param_3,(FCameraContextDataID)*(uint *)(pFVar9 + 0x14)), !bVar7)
                ) {
          local_48._0_8_ = *(undefined8 *)(pFVar9 + -0x14);
          local_48._8_8_ = *(undefined8 *)(pFVar9 + -0xc);
          pFVar8 = FInstancedPropertyBag::FindPropertyDescByID
                             (&param_1->DefaultParameters,&local_48);
          if ((pFVar8 == (FPropertyBagPropertyDesc *)0x0) ||
             (pFVar8->CachedProperty == (FProperty *)0x0)) {
            bVar7 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6752941276653419957>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                               ,0x24b,"PropertyDesc && PropertyDesc->CachedProperty");
            if (bVar7) goto code_r0x00014d60be07;
          }
          else {
            uVar11 = 1;
            _Dst = FCameraContextDataTable::TryGetMutableRawDataPtr
                             (param_3,(FCameraContextDataID)*(uint *)(pFVar9 + 0x14),
                              *(ECameraContextDataType *)(pFVar9 + 0x18),
                              *(UObject **)(pFVar9 + 0x24),true);
            if (_Dst != (uchar *)0x0) {
              pFVar4 = pFVar8->CachedProperty;
              if (pFVar4->ArrayDim < 1) {
                uVar11 = 0;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
                ;
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              if ((puVar3 == (uchar *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar5 = pFVar8->CachedProperty;
              _Src = puVar3 + pFVar4->Offset_Internal;
              if (_Dst != _Src) {
                if (((uint)(int)pFVar5->PropertyFlags >> 0x1e & 1) == 0) {
                  (**(code **)(pFVar5->_padding_ + 0xf0))(pFVar5,_Dst,_Src,pFVar5->ArrayDim,uVar11);
                }
                else {
                  memcpy(_Dst,_Src,(longlong)pFVar5->ElementSize * (longlong)pFVar5->ArrayDim);
                }
              }
            }
          }
        }
        pFVar10 = pFVar10 + 0x48;
        pFVar9 = pFVar9 + 0x48;
      } while (pFVar10 != pFVar1);
    }
  }
  return;
}

// ApplyParameterOverride @ 14d60c380

/* WARNING: Removing unreachable block (ram,0x00014d60c468) */
/* WARNING: Removing unreachable block (ram,0x00014d60c494) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyParameterOverride
          (FCameraObjectInterfaceParameterOverrideHelper *this,UObject *param_1,
          FCameraObjectInterfaceParameterDefinition *param_2,
          FInstancedOverridablePropertyBag *param_3,FPropertyBagPropertyDesc *param_4,bool param_5)

{
  FCameraContextDataTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString local_28;
  FString local_18;
  
  if (((((param_2->ParameterGuid).D != (param_4->ID).D ||
        (param_2->ParameterGuid).C != (param_4->ID).C) ||
       (param_2->ParameterGuid).B != (param_4->ID).B) ||
       (param_2->ParameterGuid).A != (param_4->ID).A) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6752941276653420045>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                         ,499,"ParameterDefinition.ParameterGuid == PropertyBagPropertyDesc.ID"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2->ParameterType == Blendable) {
    if (this->VariableTable == (FCameraVariableTable *)0x0) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6752941276653420039>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                         ,0x1f9,"VariableTable");
      if (bVar3) {
code_r0x00014d60c5af:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      Cameras::Internal::ApplyBlendableParameterOverride
                (param_1,param_2,param_3,param_4,this->VariableTable,param_5);
    }
  }
  else if (param_2->ParameterType == Data) {
    pFVar1 = this->ContextDataTable;
    if (pFVar1 == (FCameraContextDataTable *)0x0) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6752941276653420026>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                         ,0x206,"ContextDataTable");
      if (bVar3) goto code_r0x00014d60c5af;
    }
    else if (!param_5) {
      if ((param_2->DataID).Value == 0xffffffff) {
        if (1 < (byte)LogCameraSystem._0_1_) {
          if (param_1 == (UObject *)0x0) {
            ::FString::FString(&local_28,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
          }
          ::FName::ToString(&param_2->ParameterName,&local_18);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (param_2->DataContainerType == None) {
        Cameras::Internal::ApplyDataParameterSingleOverride(param_1,param_2,param_3,param_4,pFVar1);
      }
      else if (param_2->DataContainerType == Array) {
        Cameras::Internal::ApplyDataParameterArrayOverride(param_1,param_2,param_3,param_4,pFVar1);
      }
    }
  }
  return;
}

// ApplyParameterOverrides @ 14d60c600

void __thiscall
UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyParameterOverrides
          (FCameraObjectInterfaceParameterOverrideHelper *this,UObject *param_1,
          TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> *param_2,
          FInstancedOverridablePropertyBag *param_3,FInstancedPropertyBag *param_4)

{
  FCameraObjectInterfaceParameterDefinition *pFVar1;
  int iVar2;
  longlong lVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  code *pcVar6;
  FCameraObjectInterfaceParameterDefinition *pFVar7;
  bool bVar8;
  char cVar9;
  UPropertyBag *this_00;
  UPropertyBag *pUVar10;
  FPropertyBagPropertyDesc *pFVar11;
  FCameraObjectInterfaceParameterDefinition *pFVar12;
  FGuid *pFVar13;
  FGuid local_38;
  
  this_00 = FInstancedPropertyBag::GetPropertyBagStruct((FInstancedPropertyBag *)param_3);
  if ((param_1 != (UObject *)0x0) && (this_00 != (UPropertyBag *)0x0)) {
    lVar3 = param_3->_padding_;
    puVar4 = (param_4->Value).StructMemory;
    if ((lVar3 != 0) && (puVar4 != (uchar *)0x0)) {
      pUVar10 = FInstancedPropertyBag::GetPropertyBagStruct(param_4);
      if (this_00 == pUVar10) {
        pFVar12 = param_2->DataPtr;
        pFVar1 = pFVar12 + param_2->ArrayNum;
        pFVar7 = pFVar12;
        for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 1) {
          pFVar13 = &pFVar7->ParameterGuid;
          if (((this->ContextDataTable != (FCameraContextDataTable *)0x0) ||
              (*(ECameraObjectInterfaceParameterType *)(pFVar13 + 1) != Data)) &&
             (bVar8 = FInstancedOverridablePropertyBag::IsPropertyOverriden(param_3,pFVar13), bVar8)
             ) {
            local_38.A = pFVar13->A;
            local_38.B = pFVar13->B;
            local_38.C = pFVar13->C;
            local_38.D = pFVar13->D;
            pFVar11 = UPropertyBag::FindPropertyDescByID(this_00,&local_38);
            if (pFVar11 == (FPropertyBagPropertyDesc *)0x0) {
              bVar8 = Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_6752941276653420068>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                                 ,0x1dc,"PropertyDesc");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              pFVar5 = pFVar11->CachedProperty;
              if ((pFVar5->ArrayDim < 1) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar2 = pFVar5->Offset_Internal;
              pFVar5 = pFVar11->CachedProperty;
              if ((pFVar5->ArrayDim < 1) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              cVar9 = (**(code **)(pFVar11->CachedProperty->_padding_ + 0xb8))
                                (pFVar11->CachedProperty,iVar2 + lVar3,
                                 puVar4 + pFVar5->Offset_Internal,0);
              if (cVar9 == '\0') {
                ApplyParameterOverride(this,param_1,pFVar12,param_3,pFVar11,false);
              }
            }
          }
          pFVar7 = (FCameraObjectInterfaceParameterDefinition *)(pFVar13 + 4);
        }
      }
      else {
        bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6752941276653420086>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                           ,0x1ca,
                           "ParameterOverridesStruct == CachedParameterOverrides.GetPropertyBagStruct()"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
  }
  return;
}

// ApplyParameterOverrides @ 14d60c870

void __thiscall
UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyParameterOverrides
          (FCameraObjectInterfaceParameterOverrideHelper *this,UObject *param_1,
          TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> *param_2,
          FInstancedOverridablePropertyBag *param_3,bool param_4)

{
  FCameraObjectInterfaceParameterDefinition *pFVar1;
  code *pcVar2;
  FCameraObjectInterfaceParameterDefinition *pFVar3;
  bool bVar4;
  UPropertyBag *this_00;
  FPropertyBagPropertyDesc *pFVar5;
  FCameraObjectInterfaceParameterDefinition *pFVar6;
  FGuid *pFVar7;
  FGuid local_38;
  
  this_00 = FInstancedPropertyBag::GetPropertyBagStruct((FInstancedPropertyBag *)param_3);
  if ((param_1 != (UObject *)0x0) && (this_00 != (UPropertyBag *)0x0)) {
    pFVar6 = param_2->DataPtr;
    pFVar1 = pFVar6 + param_2->ArrayNum;
    pFVar3 = pFVar6;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 1) {
      pFVar7 = &pFVar3->ParameterGuid;
      if (((this->ContextDataTable != (FCameraContextDataTable *)0x0) ||
          (*(ECameraObjectInterfaceParameterType *)(pFVar7 + 1) != Data)) &&
         (bVar4 = FInstancedOverridablePropertyBag::IsPropertyOverriden(param_3,pFVar7), bVar4)) {
        local_38.A = pFVar7->A;
        local_38.B = pFVar7->B;
        local_38.C = pFVar7->C;
        local_38.D = pFVar7->D;
        pFVar5 = UPropertyBag::FindPropertyDescByID(this_00,&local_38);
        if (pFVar5 == (FPropertyBagPropertyDesc *)0x0) {
          bVar4 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6752941276653420116>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                             ,0x1ac,"PropertyDesc");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          ApplyParameterOverride(this,param_1,pFVar6,param_3,pFVar5,param_4);
        }
      }
      pFVar3 = (FCameraObjectInterfaceParameterDefinition *)(pFVar7 + 4);
    }
  }
  return;
}

