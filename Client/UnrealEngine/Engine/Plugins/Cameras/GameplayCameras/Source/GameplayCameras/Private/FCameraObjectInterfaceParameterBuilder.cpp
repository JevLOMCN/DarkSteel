// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 11

// FCameraObjectInterfaceParameterBuilder @ 14d543590

FCameraObjectInterfaceParameterBuilder * __thiscall
UE::Cameras::FCameraObjectInterfaceParameterBuilder::FCameraObjectInterfaceParameterBuilder
          (FCameraObjectInterfaceParameterBuilder *this)

{
  this->CameraObject = (UBaseCameraObject *)0x0;
  return this;
}

// AppendDefaultParameterProperties @ 14d548810

void __cdecl
UE::Cameras::FCameraObjectInterfaceParameterBuilder::AppendDefaultParameterProperties
          (UBaseCameraObject *param_1,
          TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FCameraObjectInterfaceParameterDefinition *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_18;
  
  pFVar2 = (FCameraObjectInterfaceParameterDefinition *)
           (param_1->ParameterDefinitions).AllocatorInstance.Data;
  iVar1 = (param_1->ParameterDefinitions).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  AppendDefaultParameterProperties(&local_18,param_2);
  return;
}

// AppendDefaultParameterProperties @ 14d548890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Cameras::FCameraObjectInterfaceParameterBuilder::AppendDefaultParameterProperties
          (TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> *param_1,
          TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *param_2)

{
  FCameraObjectInterfaceParameterDefinition *pFVar1;
  int iVar2;
  FCameraObjectInterfaceParameterDefinition *pFVar3;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar8;
  UClass *pUVar9;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar10;
  ECameraObjectInterfaceParameterType *pEVar11;
  undefined1 uVar12;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStackY_e8 [32];
  TObjectPtr<UScriptStruct_const_>_u_0 local_88;
  TObjectPtr<UScriptStruct_const_>_u_0 local_80;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_78;
  TObjectPtr<UScriptStruct_const_>_u_0 local_70;
  undefined1 local_68;
  ushort local_67;
  undefined1 local_65;
  UScriptStruct *local_60;
  UScriptStruct *local_58;
  undefined4 local_50;
  ulonglong local_48;
  undefined1 uVar13;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar3 = param_1->DataPtr;
  iVar2 = param_1->ArrayNum;
  if (pFVar3 != pFVar3 + iVar2) {
    pEVar11 = &pFVar3->ParameterType;
    do {
      bVar16 = false;
      TVar8.DebugPtr = (UScriptStruct *)0x0;
      uVar15 = 0;
      uVar14 = 0;
      bVar6 = true;
      uVar13 = 0xb;
      uVar12 = 0xb;
      if (*pEVar11 == Blendable) {
        switch(*(ECameraVariableType *)(pEVar11 + 8)) {
        case Boolean:
          TVar8.DebugPtr = FBooleanCameraParameter::StaticStruct();
          break;
        case Integer32:
          TVar8.DebugPtr = FInteger32CameraParameter::StaticStruct();
          break;
        case Float:
          TVar8.DebugPtr = FFloatCameraParameter::StaticStruct();
          break;
        case Double:
          TVar8.DebugPtr = FDoubleCameraParameter::StaticStruct();
          break;
        case Vector2f:
          TVar8.DebugPtr = FVector2fCameraParameter::StaticStruct();
          break;
        case Vector2d:
          TVar8.DebugPtr = FVector2dCameraParameter::StaticStruct();
          break;
        case Vector3f:
          TVar8.DebugPtr = FVector3fCameraParameter::StaticStruct();
          break;
        case Vector3d:
          TVar8.DebugPtr = FVector3dCameraParameter::StaticStruct();
          break;
        case Vector4f:
          TVar8.DebugPtr = FVector4fCameraParameter::StaticStruct();
          break;
        case Vector4d:
          TVar8.DebugPtr = FVector4dCameraParameter::StaticStruct();
          break;
        case Rotator3f:
          TVar8.DebugPtr = FRotator3fCameraParameter::StaticStruct();
          break;
        case Rotator3d:
          TVar8.DebugPtr = FRotator3dCameraParameter::StaticStruct();
          break;
        case Transform3f:
          TVar8.DebugPtr = FTransform3fCameraParameter::StaticStruct();
          uVar14 = uVar15;
          break;
        case Transform3d:
          TVar8.DebugPtr = FTransform3dCameraParameter::StaticStruct();
          uVar14 = uVar15;
          break;
        case BlendableStruct:
          TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)
                  ((TObjectPtr<UScriptStruct_const_>_u_0 *)(pEVar11 + 0x10))->DebugPtr;
          uVar14 = 0x200000000;
          break;
        default:
          bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5348291137532592255>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceParameterBuilder.cpp"
                             ,0x7f,"false");
          uVar14 = uVar15;
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
LAB_14d548ae1:
        TVar4 = *(TObjectPtr<UScriptStruct_const_>_u_0 *)(pEVar11 + -0x18);
        local_88 = TVar8;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (TVar8.DebugPtr != (UScriptStruct *)0x0)) {
          GC::MarkAsReachable((UObject *)TVar8.DebugPtr);
        }
        local_67 = 0;
        local_65 = bVar16 != false;
        if ((bool)local_65) {
          local_67 = (ushort)bVar16;
        }
        local_80 = *(TObjectPtr<UScriptStruct_const_>_u_0 *)(pEVar11 + -0x10);
        TStack_78 = *(TObjectPtr<UScriptStruct_const_>_u_0 *)(pEVar11 + -8);
        pTVar10 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_2->AllocatorInstance).Data;
        local_60 = (UScriptStruct *)(uVar14 | 1);
        local_58 = (UScriptStruct *)0x0;
        local_50 = 0xffffffff;
        local_70 = TVar4;
        local_68 = uVar12;
        if (((pTVar10 <= &local_88) && (&local_88 < pTVar10 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        pTVar10 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
                  ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x40);
        param_2->ArrayNum = iVar7 + 1;
        pTVar10->DebugPtr = (UScriptStruct *)local_88;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (local_88.DebugPtr != (UScriptStruct *)0x0)) {
          GC::MarkAsReachable((UObject *)local_88.DebugPtr);
        }
        pTVar10[1] = local_80;
        pTVar10[2] = TStack_78;
        pTVar10[3] = local_70;
        *(undefined1 *)(pTVar10 + 4) = local_68;
        *(ushort *)((longlong)pTVar10 + 0x21) = local_67;
        *(undefined1 *)((longlong)pTVar10 + 0x23) = local_65;
        pTVar10[5].DebugPtr = local_60;
        pTVar10[6].DebugPtr = local_58;
        *(undefined4 *)(pTVar10 + 7) = local_50;
      }
      else {
        if (*pEVar11 == Data) {
          TVar8 = (TObjectPtr<UScriptStruct_const_>_u_0)
                  ((TObjectPtr<UScriptStruct_const_>_u_0 *)(pEVar11 + 0x28))->DebugPtr;
          uVar12 = uVar13;
          switch(*(ECameraContextDataType *)(pEVar11 + 0x1c)) {
          case Name:
            uVar15 = 0x200000000;
            uVar12 = 7;
            break;
          case String:
            uVar15 = 0x200000000;
            uVar12 = 8;
            break;
          case Enum:
            uVar12 = 10;
            if (TVar8.DebugPtr == (UScriptStruct *)0x0) {
LAB_14d548a92:
              bVar16 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<5348291137532592275>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceParameterBuilder.cpp"
                                  ,0x93,"PropertyTypeObject && PropertyTypeObject->IsA<UEnum>()");
              if (bVar16) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              pUVar9 = Z_Construct_UClass_UEnum_NoRegister();
              iVar7 = (int)pUVar9->_padding_;
              if ((*(int *)((TVar8.DebugPtr)->_padding_ + 0x38) < iVar7) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)((TVar8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
                  &pUVar9->_padding_)) goto LAB_14d548a92;
            }
            uVar15 = 0x200000000;
            break;
          case Struct:
            if (TVar8.DebugPtr != (UScriptStruct *)0x0) {
              pUVar9 = Z_Construct_UClass_UScriptStruct_NoRegister();
              iVar7 = (int)pUVar9->_padding_;
              if ((iVar7 <= *(int *)((TVar8.DebugPtr)->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)((TVar8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
                  &pUVar9->_padding_)) break;
            }
            bVar16 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5348291137532592280>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceParameterBuilder.cpp"
                                ,0x98,
                                "PropertyTypeObject && PropertyTypeObject->IsA<UScriptStruct>()");
            if (bVar16) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            break;
          case Object:
            uVar15 = 0x200000000;
            uVar12 = 0xc;
            break;
          case Class:
            uVar15 = 0x200000000;
            uVar12 = 0xe;
            break;
          default:
            bVar6 = false;
          }
          bVar16 = *(ECameraContextDataContainerType *)(pEVar11 + 0x20) == Array;
          uVar14 = uVar15;
          if (bVar6) goto LAB_14d548ae1;
        }
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5348291137532592307>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceParameterBuilder.cpp"
                           ,0xb3,"bIsValidProperty");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar1 = (FCameraObjectInterfaceParameterDefinition *)(pEVar11 + 0x30);
      pEVar11 = pEVar11 + 0x48;
    } while (pFVar1 != pFVar3 + iVar2);
  }
  return;
}

// BuildDefaultParameters @ 14d54c3f0

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraObjectInterfaceParameterBuilder::BuildDefaultParameters
          (FCameraObjectInterfaceParameterBuilder *this)

{
  UBaseCameraObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  FInstancedPropertyBag *this_00;
  TObjectPtr<UScriptStruct_const_>_u_0 local_68;
  uchar *local_60;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_58;
  FCameraObjectInterfaceParameterDefinition *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FPropertyBagPropertyDesc *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_28;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_18;
  
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_68.ObjectPtr);
  pUVar1 = this->CameraObject;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_48 = (FCameraObjectInterfaceParameterDefinition *)
             (pUVar1->ParameterDefinitions).AllocatorInstance.Data;
  iStack_40 = (pUVar1->ParameterDefinitions).ArrayNum;
  if (iStack_40 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iStack_40;
  local_28.DataPtr = local_48;
  AppendDefaultParameterProperties(&local_28,&local_58);
  iStack_30 = local_58.ArrayNum;
  local_38 = (FPropertyBagPropertyDesc *)local_58.AllocatorInstance.Data;
  if (local_58.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iStack_30;
  local_18.DataPtr = local_38;
  FInstancedPropertyBag::AddProperties((FInstancedPropertyBag *)&local_68.ObjectPtr,&local_18,true);
  SetDefaultParameterValues(pUVar1,(FInstancedPropertyBag *)&local_68.ObjectPtr);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  bVar3 = FInstancedPropertyBag::Identical
                    ((FInstancedPropertyBag *)&local_68.ObjectPtr,
                     &this->CameraObject->DefaultParameters,0);
  if ((!bVar3) &&
     (this_00 = &this->CameraObject->DefaultParameters,
     (TObjectPtr<UScriptStruct_const_>_u_0 *)this_00 != &local_68)) {
    FInstancedStruct::InitializeAs(&this_00->Value,local_68.DebugPtr,local_60);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_68.ObjectPtr);
  return;
}

// BuildDefaultParameters @ 14d54c550

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __cdecl
UE::Cameras::FCameraObjectInterfaceParameterBuilder::BuildDefaultParameters
          (UBaseCameraObject *param_1,FInstancedPropertyBag *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_58;
  FCameraObjectInterfaceParameterDefinition *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FPropertyBagPropertyDesc *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_28;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_18;
  
  iVar1 = (param_1->ParameterDefinitions).ArrayNum;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_48 = (FCameraObjectInterfaceParameterDefinition *)
             (param_1->ParameterDefinitions).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = local_48;
  iStack_40 = iVar1;
  AppendDefaultParameterProperties(&local_28,&local_58);
  iStack_30 = local_58.ArrayNum;
  local_38 = (FPropertyBagPropertyDesc *)local_58.AllocatorInstance.Data;
  if (local_58.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iStack_30;
  local_18.DataPtr = local_38;
  FInstancedPropertyBag::AddProperties(param_2,&local_18,true);
  SetDefaultParameterValues(param_1,param_2);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// BuildParameterDefinitions @ 14d54f290

void __thiscall
UE::Cameras::FCameraObjectInterfaceParameterBuilder::BuildParameterDefinitions
          (FCameraObjectInterfaceParameterBuilder *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UBaseCameraObject *pUVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  longlong lVar10;
  TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  FCameraObjectInterfaceParameterDefinition local_e8;
  FCameraObjectInterfaceParameterDefinition local_98;
  
  pUVar4 = this->CameraObject;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  pFVar12 = (pUVar4->Interface).BlendableParameters.AllocatorInstance.Data;
  iVar3 = (pUVar4->Interface).BlendableParameters.ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar3 * 8;
  do {
    if ((pUVar4->Interface).BlendableParameters.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UCameraObjectInterfaceBlendableParameter>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar2) {
      pUVar4 = this->CameraObject;
      pFVar12 = (pUVar4->Interface).DataParameters.AllocatorInstance.Data;
      iVar3 = (pUVar4->Interface).DataParameters.ArrayNum;
      pFVar2 = pFVar12 + (longlong)iVar3 * 8;
      do {
        if ((pUVar4->Interface).DataParameters.ArrayNum != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UCameraObjectInterfaceDataParameter>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar12 == pFVar2) {
          pUVar4 = this->CameraObject;
          iVar3 = (int)local_f0;
          pTVar11 = &pUVar4->ParameterDefinitions;
          if ((((int)local_f0 != (pUVar4->ParameterDefinitions).ArrayNum) ||
              (bVar7 = CompareItems<FCameraObjectInterfaceParameterDefinition,int>
                                 ((FCameraObjectInterfaceParameterDefinition *)local_f8.Data,
                                  (FCameraObjectInterfaceParameterDefinition *)
                                  (pTVar11->AllocatorInstance).Data,(int)local_f0), !bVar7)) &&
             (FVar6.Data = local_f8.Data,
             pTVar11 !=
             (TArray<FCameraObjectInterfaceParameterDefinition,TSizedDefaultAllocator<32>_> *)
             &local_f8)) {
            piVar1 = &(pUVar4->ParameterDefinitions).ArrayMax;
            (pUVar4->ParameterDefinitions).ArrayNum = (int)local_f0;
            if ((iVar3 == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x48,8,iVar3,*piVar1,&pTVar11->AllocatorInstance,iVar3,piVar1);
              ConstructItems<FCameraObjectInterfaceParameterDefinition,FCameraObjectInterfaceParameterDefinition,int>
                        ((pTVar11->AllocatorInstance).Data,
                         (FCameraObjectInterfaceParameterDefinition *)FVar6.Data,iVar3);
            }
          }
          if ((FCameraObjectInterfaceParameterDefinition *)local_f8.Data !=
              (FCameraObjectInterfaceParameterDefinition *)0x0) {
            FMemory::Free(local_f8.Data);
          }
          return;
        }
        lVar10 = *(longlong *)pFVar12;
        if ((lVar10 != 0) && (*(int *)(lVar10 + 0x70) != -1)) {
          local_e8.ParameterName.ComparisonIndex.Value = 0;
          local_e8.ParameterName.Number = 0;
          local_e8.ParameterGuid.A = 0;
          local_e8.ParameterGuid.B = 0;
          local_e8.ParameterGuid.C = 0;
          local_e8.ParameterGuid.D = 0;
          iVar8 = *(int *)(lVar10 + 0x38) + -1;
          if (*(int *)(lVar10 + 0x38) == 0) {
            iVar8 = 0;
          }
          local_e8.ParameterType = Blendable;
          local_e8.VariableID.Value = 0xffffffff;
          local_e8.VariableType = Boolean;
          local_e8.BlendableStructType.field0_0x0.DebugPtr =
               (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
          local_e8.DataID.Value = 0xffffffff;
          local_e8.DataType = Name;
          local_e8.DataContainerType = None;
          local_e8.DataTypeObject.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
          pFVar9 = ::FName::FName(&local_res20,iVar8,*(wchar_t **)(lVar10 + 0x30),FNAME_Add);
          local_e8.ParameterGuid._0_8_ = *(undefined8 *)(lVar10 + 0x50);
          local_e8.ParameterGuid._8_8_ = *(undefined8 *)(lVar10 + 0x58);
          local_e8.ParameterName = *pFVar9;
          local_e8.DataID.Value = *(uint *)(lVar10 + 0x70);
          local_e8._52_8_ = *(undefined8 *)(lVar10 + 0x60);
          local_e8.ParameterType = Data;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             (*(UObject **)(lVar10 + 0x68) != (UObject *)0x0)) {
            GC::MarkAsReachable(*(UObject **)(lVar10 + 0x68));
          }
          local_e8.DataTypeObject.field0_0x0 =
               (TObjectPtr<UObject_const_>_u_0)
               ((TObjectPtr<UObject_const_>_u_0 *)(lVar10 + 0x68))->DebugPtr;
          if (((local_f8.Data <= &local_e8) &&
              (&local_e8 <
               (FCameraObjectInterfaceParameterDefinition *)
               (local_f8.Data + (longlong)local_f0._4_4_ * 0x48))) &&
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
          iVar8 = (int)local_f0;
          if ((int)local_f0 == local_f0._4_4_) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x848,&local_f8,(int *)((longlong)&local_f0 + 4));
          }
          FVar6.Data = local_f8.Data;
          lVar10 = (longlong)iVar8;
          local_f0 = CONCAT44(local_f0._4_4_,iVar8 + 1);
          *(FName *)&local_f8.Data[lVar10 * 0x48].field_0x0 = local_e8.ParameterName;
          *(undefined8 *)(local_f8.Data + lVar10 * 0x48 + 8) = local_e8.ParameterGuid._0_8_;
          *(undefined8 *)(local_f8.Data + lVar10 * 0x48 + 0x10) = local_e8.ParameterGuid._8_8_;
          local_f8.Data[lVar10 * 0x48 + 0x18] = (FScriptContainerElement)local_e8.ParameterType;
          *(uint *)&local_f8.Data[lVar10 * 0x48 + 0x1c].field_0x0 = local_e8.VariableID.Value;
          *(ECameraVariableType *)(local_f8.Data + lVar10 * 0x48 + 0x20) = local_e8.VariableType;
          ((TObjectPtr<UScriptStruct_const_>_u_0 *)(local_f8.Data + lVar10 * 0x48 + 0x28))->DebugPtr
               = (UScriptStruct *)local_e8.BlendableStructType.field0_0x0;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             (local_e8.BlendableStructType.field0_0x0.DebugPtr !=
              (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
            GC::MarkAsReachable((UObject *)local_e8.BlendableStructType.field0_0x0);
          }
          *(uint *)&FVar6.Data[lVar10 * 0x48 + 0x30].field_0x0 = local_e8.DataID.Value;
          *(ECameraContextDataType *)(FVar6.Data + lVar10 * 0x48 + 0x34) = local_e8.DataType;
          *(ECameraContextDataContainerType *)(FVar6.Data + lVar10 * 0x48 + 0x38) =
               local_e8.DataContainerType;
          ((TObjectPtr<UObject_const_>_u_0 *)(FVar6.Data + lVar10 * 0x48 + 0x40))->DebugPtr =
               (UObject *)local_e8.DataTypeObject.field0_0x0;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             (local_e8.DataTypeObject.field0_0x0.DebugPtr != (TObjectPtr<UObject_const_>_u_0)0x0)) {
            GC::MarkAsReachable((UObject *)local_e8.DataTypeObject.field0_0x0);
          }
        }
        pFVar12 = pFVar12 + 8;
      } while( true );
    }
    lVar10 = *(longlong *)pFVar12;
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x74) != -1)) {
      local_98.ParameterName.ComparisonIndex.Value = 0;
      local_98.ParameterName.Number = 0;
      local_98.ParameterGuid.A = 0;
      local_98.ParameterGuid.B = 0;
      local_98.ParameterGuid.C = 0;
      local_98.ParameterGuid.D = 0;
      iVar8 = *(int *)(lVar10 + 0x38) + -1;
      if (*(int *)(lVar10 + 0x38) == 0) {
        iVar8 = 0;
      }
      local_98.ParameterType = Blendable;
      local_98.VariableID.Value = 0xffffffff;
      local_98.VariableType = Boolean;
      local_98.BlendableStructType.field0_0x0.DebugPtr = (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
      local_98.DataID.Value = 0xffffffff;
      local_98.DataType = Name;
      local_98.DataContainerType = None;
      local_98.DataTypeObject.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
      pFVar9 = ::FName::FName(&local_res18,iVar8,*(wchar_t **)(lVar10 + 0x30),FNAME_Add);
      local_98.ParameterGuid._0_8_ = *(undefined8 *)(lVar10 + 0x50);
      local_98.ParameterGuid._8_8_ = *(undefined8 *)(lVar10 + 0x58);
      local_98.ParameterName = *pFVar9;
      local_98.VariableID.Value = *(uint *)(lVar10 + 0x74);
      local_98.VariableType = *(ECameraVariableType *)(lVar10 + 0x60);
      local_98.ParameterType = Blendable;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)(lVar10 + 0x68) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)(lVar10 + 0x68));
      }
      local_98.BlendableStructType.field0_0x0 =
           (TObjectPtr<UScriptStruct_const_>_u_0)
           ((TObjectPtr<UScriptStruct_const_>_u_0 *)(lVar10 + 0x68))->DebugPtr;
      if (((local_f8.Data <= &local_98) &&
          (&local_98 <
           (FCameraObjectInterfaceParameterDefinition *)
           (local_f8.Data + (longlong)local_f0._4_4_ * 0x48))) &&
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
      iVar8 = (int)local_f0;
      if ((int)local_f0 == local_f0._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&local_f8,(int *)((longlong)&local_f0 + 4));
      }
      FVar6.Data = local_f8.Data;
      lVar10 = (longlong)iVar8;
      local_f0 = CONCAT44(local_f0._4_4_,iVar8 + 1);
      *(FName *)&local_f8.Data[lVar10 * 0x48].field_0x0 = local_98.ParameterName;
      *(undefined8 *)(local_f8.Data + lVar10 * 0x48 + 8) = local_98.ParameterGuid._0_8_;
      *(undefined8 *)(local_f8.Data + lVar10 * 0x48 + 0x10) = local_98.ParameterGuid._8_8_;
      local_f8.Data[lVar10 * 0x48 + 0x18] = (FScriptContainerElement)local_98.ParameterType;
      *(uint *)&local_f8.Data[lVar10 * 0x48 + 0x1c].field_0x0 = local_98.VariableID.Value;
      *(ECameraVariableType *)(local_f8.Data + lVar10 * 0x48 + 0x20) = local_98.VariableType;
      ((TObjectPtr<UScriptStruct_const_>_u_0 *)(local_f8.Data + lVar10 * 0x48 + 0x28))->DebugPtr =
           (UScriptStruct *)local_98.BlendableStructType.field0_0x0;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (local_98.BlendableStructType.field0_0x0.DebugPtr !=
          (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
        GC::MarkAsReachable((UObject *)local_98.BlendableStructType.field0_0x0);
      }
      *(uint *)&FVar6.Data[lVar10 * 0x48 + 0x30].field_0x0 = local_98.DataID.Value;
      *(ECameraContextDataType *)(FVar6.Data + lVar10 * 0x48 + 0x34) = local_98.DataType;
      *(ECameraContextDataContainerType *)(FVar6.Data + lVar10 * 0x48 + 0x38) =
           local_98.DataContainerType;
      ((TObjectPtr<UObject_const_>_u_0 *)(FVar6.Data + lVar10 * 0x48 + 0x40))->DebugPtr =
           (UObject *)local_98.DataTypeObject.field0_0x0;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (local_98.DataTypeObject.field0_0x0.DebugPtr != (TObjectPtr<UObject_const_>_u_0)0x0)) {
        GC::MarkAsReachable((UObject *)local_98.DataTypeObject.field0_0x0);
      }
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// BuildParameters @ 14d54f770

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraObjectInterfaceParameterBuilder::BuildParameters
          (FCameraObjectInterfaceParameterBuilder *this,UBaseCameraObject *param_1)

{
  UBaseCameraObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  FInstancedPropertyBag *this_00;
  TObjectPtr<UScriptStruct_const_>_u_0 local_68;
  uchar *local_60;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_58;
  FCameraObjectInterfaceParameterDefinition *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FPropertyBagPropertyDesc *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_28;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_18;
  
  this->CameraObject = param_1;
  BuildParameterDefinitions(this);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_68.ObjectPtr);
  pUVar1 = this->CameraObject;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_48 = (FCameraObjectInterfaceParameterDefinition *)
             (pUVar1->ParameterDefinitions).AllocatorInstance.Data;
  iStack_40 = (pUVar1->ParameterDefinitions).ArrayNum;
  if (iStack_40 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iStack_40;
  local_28.DataPtr = local_48;
  AppendDefaultParameterProperties(&local_28,&local_58);
  iStack_30 = local_58.ArrayNum;
  local_38 = (FPropertyBagPropertyDesc *)local_58.AllocatorInstance.Data;
  if (local_58.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iStack_30;
  local_18.DataPtr = local_38;
  FInstancedPropertyBag::AddProperties((FInstancedPropertyBag *)&local_68.ObjectPtr,&local_18,true);
  SetDefaultParameterValues(pUVar1,(FInstancedPropertyBag *)&local_68.ObjectPtr);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  bVar3 = FInstancedPropertyBag::Identical
                    ((FInstancedPropertyBag *)&local_68.ObjectPtr,
                     &this->CameraObject->DefaultParameters,0);
  if ((!bVar3) &&
     (this_00 = &this->CameraObject->DefaultParameters,
     (TObjectPtr<UScriptStruct_const_>_u_0 *)this_00 != &local_68)) {
    FInstancedStruct::InitializeAs(&this_00->Value,local_68.DebugPtr,local_60);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_68.ObjectPtr);
  this->CameraObject = (UBaseCameraObject *)0x0;
  return;
}

// BuildParametersImpl @ 14d54fba0

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraObjectInterfaceParameterBuilder::BuildParametersImpl
          (FCameraObjectInterfaceParameterBuilder *this)

{
  UBaseCameraObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  FInstancedPropertyBag *this_00;
  TObjectPtr<UScriptStruct_const_>_u_0 local_68;
  uchar *local_60;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_58;
  FCameraObjectInterfaceParameterDefinition *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  FPropertyBagPropertyDesc *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_28;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_18;
  
  BuildParameterDefinitions(this);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_68.ObjectPtr);
  pUVar1 = this->CameraObject;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_48 = (FCameraObjectInterfaceParameterDefinition *)
             (pUVar1->ParameterDefinitions).AllocatorInstance.Data;
  iStack_40 = (pUVar1->ParameterDefinitions).ArrayNum;
  if (iStack_40 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28._12_4_ = uStack_3c;
  local_28.ArrayNum = iStack_40;
  local_28.DataPtr = local_48;
  AppendDefaultParameterProperties(&local_28,&local_58);
  iStack_30 = local_58.ArrayNum;
  local_38 = (FPropertyBagPropertyDesc *)local_58.AllocatorInstance.Data;
  if (local_58.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iStack_30;
  local_18.DataPtr = local_38;
  FInstancedPropertyBag::AddProperties((FInstancedPropertyBag *)&local_68.ObjectPtr,&local_18,true);
  SetDefaultParameterValues(pUVar1,(FInstancedPropertyBag *)&local_68.ObjectPtr);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  bVar3 = FInstancedPropertyBag::Identical
                    ((FInstancedPropertyBag *)&local_68.ObjectPtr,
                     &this->CameraObject->DefaultParameters,0);
  if ((!bVar3) &&
     (this_00 = &this->CameraObject->DefaultParameters,
     (TObjectPtr<UScriptStruct_const_>_u_0 *)this_00 != &local_68)) {
    FInstancedStruct::InitializeAs(&this_00->Value,local_68.DebugPtr,local_60);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&local_68.ObjectPtr);
  return;
}

// FixUpDefaultParameterProperties @ 14d554470

void __cdecl
UE::Cameras::FCameraObjectInterfaceParameterBuilder::FixUpDefaultParameterProperties
          (TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> *param_1,
          FInstancedPropertyBag *param_2)

{
  FCameraObjectInterfaceParameterDefinition *pFVar1;
  int iVar2;
  FPropertyBagPropertyDesc *pFVar3;
  code *pcVar4;
  bool bVar5;
  UPropertyBag *pUVar6;
  ForAnyElementType FVar7;
  uint *puVar8;
  FCameraObjectInterfaceParameterDefinition *pFVar9;
  byte bVar10;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FPropertyBagPropertyDesc *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_38;
  
  pUVar6 = FInstancedPropertyBag::GetPropertyBagStruct(param_2);
  if (pUVar6 != (UPropertyBag *)0x0) {
    iVar2 = (pUVar6->PropertyDescs).ArrayNum;
    pFVar3 = (FPropertyBagPropertyDesc *)(pUVar6->PropertyDescs).AllocatorInstance.Data;
    bVar10 = 0;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = iVar2;
    if (iVar2 == 0) {
      local_4c = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar2,0,&local_58,iVar2,&local_4c);
      ConstructItems<FPropertyBagPropertyDesc,FPropertyBagPropertyDesc,int>
                (local_58.Data,pFVar3,iVar2);
    }
    iVar2 = local_50;
    pFVar9 = param_1->DataPtr;
    pFVar1 = pFVar9 + param_1->ArrayNum;
    if (pFVar9 != pFVar1) {
      puVar8 = &(pFVar9->ParameterGuid).C;
      do {
        if (local_58.Data != local_58.Data + (longlong)local_50 * 0x40) {
          FVar7.Data = local_58.Data;
          do {
            if (((((FGuid *)(puVar8 + -2))->A == *(uint *)(FVar7.Data + 8) &&
                 puVar8[1] == *(uint *)(FVar7.Data + 0x14)) &&
                *puVar8 == *(uint *)(FVar7.Data + 0x10)) &&
                puVar8[-1] == *(uint *)(FVar7.Data + 0xc)) {
              if ((char)puVar8[2] == '\0') {
                bVar5 = puVar8[4] == 0xe;
              }
              else {
                if ((char)puVar8[2] != '\x01') break;
                bVar5 = puVar8[9] != 3;
              }
              if (bVar5) {
                bVar10 = bVar10 | ~(byte)(*(ulonglong *)(FVar7.Data + 0x28) >> 0x21) & 1;
                *(ulonglong *)(FVar7.Data + 0x28) = *(ulonglong *)(FVar7.Data + 0x28) | 0x200000000;
              }
              break;
            }
            FVar7.Data = FVar7.Data + 0x40;
          } while (FVar7.Data != local_58.Data + (longlong)local_50 * 0x40);
        }
        pFVar9 = pFVar9 + 1;
        puVar8 = puVar8 + 0x12;
      } while (pFVar9 != pFVar1);
      if (bVar10 != 0) {
        local_48 = (FPropertyBagPropertyDesc *)local_58.Data;
        if ((local_50 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_38._12_4_ = uStack_3c;
        local_38.ArrayNum = iVar2;
        local_38.DataPtr = local_48;
        iStack_40 = iVar2;
        pUVar6 = UPropertyBag::GetOrCreateFromDescs(&local_38,(wchar_t *)0x0);
        FInstancedPropertyBag::MigrateToNewBagStruct(param_2,pUVar6);
      }
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  return;
}

// SetDefaultParameterValue @ 14d563640

void __cdecl
UE::Cameras::FCameraObjectInterfaceParameterBuilder::SetDefaultParameterValue
          (UCameraObjectInterfaceDataParameter *param_1,void *param_2,void *param_3)

{
  UScriptStruct *this;
  int iVar1;
  
  switch(param_1->DataType) {
  case Name:
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    return;
  case String:
    iVar1 = *(int *)((longlong)param_3 + 8) + -1;
    if (*(int *)((longlong)param_3 + 8) == 0) {
      iVar1 = 0;
    }
    ::FString::AssignRange(param_2,*(wchar_t **)param_3,iVar1);
    return;
  case Enum:
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    return;
  case Struct:
    this = CastChecked<UScriptStruct_const_,UObject_const_>(&param_1->DataTypeObject,NullChecked);
    UScriptStruct::CopyScriptStruct(this,param_2,param_3,1);
    return;
  case Object:
  case Class:
    FObjectPtr::operator=(param_2,param_3);
  }
  return;
}

// SetDefaultParameterValues @ 14d563720

void __cdecl
UE::Cameras::FCameraObjectInterfaceParameterBuilder::SetDefaultParameterValues
          (UBaseCameraObject *param_1,FInstancedPropertyBag *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uchar *puVar3;
  longlong lVar4;
  UObjectBaseUtility *pUVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  UPropertyBag *this;
  UClass *pUVar9;
  longlong *plVar10;
  FProperty *pFVar11;
  void *pvVar12;
  UScriptStruct *pUVar13;
  undefined8 *puVar14;
  FPropertyBagPropertyDesc *pFVar15;
  undefined1 *puVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  FObjectPtr_u_0 *pFVar19;
  atomic<unsigned_char> *paVar20;
  FObjectPtr_u_0 *this_00;
  int iVar21;
  FScriptContainerElement *pFVar22;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uchar *local_res20;
  char *pcVar23;
  FGuid local_a8;
  FGuid local_98;
  longlong *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  
  puVar3 = (param_2->Value).StructMemory;
  local_res20 = puVar3;
  this = FInstancedPropertyBag::GetPropertyBagStruct(param_2);
  if ((puVar3 == (uchar *)0x0) || (this == (UPropertyBag *)0x0)) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5348291137532592325>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceParameterBuilder.cpp"
                       ,0xc5,"PropertyBagValue && PropertyBagStruct");
    if (!bVar8) {
      return;
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar2 = (param_1->Interface).BlendableParameters.ArrayNum;
  pFVar22 = (param_1->Interface).BlendableParameters.AllocatorInstance.Data;
  pFVar1 = pFVar22 + (longlong)iVar2 * 8;
LAB_14d563791:
  do {
    while( true ) {
      puVar14 = (undefined8 *)0x0;
      if ((param_1->Interface).BlendableParameters.ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UCameraObjectInterfaceBlendableParameter>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      puVar3 = local_res20;
      if (pFVar22 == pFVar1) {
        pFVar22 = (param_1->Interface).DataParameters.AllocatorInstance.Data;
        iVar2 = (param_1->Interface).DataParameters.ArrayNum;
        pFVar1 = pFVar22 + (longlong)iVar2 * 8;
        goto LAB_14d56405e;
      }
      lVar4 = *(longlong *)pFVar22;
      if (lVar4 != 0) break;
      pcVar23 = "BlendableParameter";
      iVar21 = 0xcc;
      paVar20 = &bGEnsureHasExecuted<5348291137532592332>;
LAB_14d563f17:
      bVar8 = Assert::Private::ExecCheckImplInternal
                        (paVar20,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceParameterBuilder.cpp"
                         ,iVar21,pcVar23);
      if (bVar8) {
code_r0x00014d564040:
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar22 = pFVar22 + 8;
    }
    pUVar5 = *(UObjectBaseUtility **)(lVar4 + 0x40);
    if (pUVar5 == (UObjectBaseUtility *)0x0) goto switchD_14d5638d5_default;
    pUVar9 = Z_Construct_UClass_UCustomCameraNodeParameterProvider_NoRegister();
    plVar10 = UObjectBaseUtility::GetInterfaceAddress(pUVar5,pUVar9);
    if (plVar10 == (longlong *)0x0) {
LAB_14d56388c:
      pFVar11 = UStruct::FindPropertyByName
                          (*(UStruct **)&pUVar5->field_0x10,*(FName *)(lVar4 + 0x48));
      if ((pFVar11 != (FProperty *)0x0) && ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x14 & 1) != 0)
         ) {
        switch(*(undefined4 *)(lVar4 + 0x60)) {
        case 0:
          pUVar13 = FBooleanCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) break;
          pUVar13 = FBooleanCameraVariableReference::StaticStruct();
LAB_14d5638fd:
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) goto switchD_14d5638d5_default;
          pvVar12 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar11,(UObject *)pUVar5,0);
          if (*(longlong **)((longlong)pvVar12 + 8) == (longlong *)0x0)
          goto switchD_14d5638d5_default;
          puVar14 = (undefined8 *)(**(code **)(**(longlong **)((longlong)pvVar12 + 8) + 0x2b8))();
          goto LAB_14d563b6c;
        case 1:
          pUVar13 = FInteger32CameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FInteger32CameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 2:
          pUVar13 = FFloatCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FFloatCameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 3:
          pUVar13 = FDoubleCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FDoubleCameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 4:
          pUVar13 = FVector2fCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FVector2fCameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 5:
          pUVar13 = FVector2dCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FVector2dCameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 6:
          pUVar13 = FVector3fCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FVector3fCameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 7:
          pUVar13 = FVector3dCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FVector3dCameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 8:
          pUVar13 = FVector4fCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FVector4fCameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 9:
          pUVar13 = FVector4dCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FVector4dCameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 10:
          pUVar13 = FRotator3fCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FRotator3fCameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 0xb:
          pUVar13 = FRotator3dCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FRotator3dCameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 0xc:
          pUVar13 = FTransform3fCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FTransform3fCameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 0xd:
          pUVar13 = FTransform3dCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (!bVar8) {
            pUVar13 = FTransform3dCameraVariableReference::StaticStruct();
            goto LAB_14d5638fd;
          }
          break;
        case 0xe:
          break;
        default:
          goto switchD_14d5638d5_default;
        }
        puVar14 = FProperty::ContainerUObjectPtrToValuePtrInternal(pFVar11,(UObject *)pUVar5,0);
LAB_14d563b6c:
        if (puVar14 != (undefined8 *)0x0) goto LAB_14d563b78;
      }
    }
    else {
      local_88 = (longlong *)0x0;
      local_80 = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      (**(code **)(*plVar10 + 0x10))(plVar10,&local_88);
      if (local_88 != local_88 + (longlong)(int)local_80 * 6) {
        plVar10 = local_88;
        do {
          if (*plVar10 == *(longlong *)(lVar4 + 0x48)) {
            puVar14 = (undefined8 *)plVar10[3];
            break;
          }
          plVar10 = plVar10 + 6;
        } while (plVar10 != local_88 + (longlong)(int)local_80 * 6);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free(local_88);
      }
      if (puVar14 == (undefined8 *)0x0) goto LAB_14d56388c;
LAB_14d563b78:
      local_a8._0_8_ = *(undefined8 *)(lVar4 + 0x50);
      local_a8._8_8_ = *(undefined8 *)(lVar4 + 0x58);
      pFVar15 = UPropertyBag::FindPropertyDescByID(this,&local_a8);
      if ((pFVar15 != (FPropertyBagPropertyDesc *)0x0) &&
         (pFVar11 = pFVar15->CachedProperty, pFVar11 != (FProperty *)0x0)) {
        if ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x14 & 1) == 0) {
          pcVar23 = "DefaultParameterProperty";
          iVar21 = 0x120;
          paVar20 = &bGEnsureHasExecuted<5348291137532592416>;
          goto LAB_14d563f17;
        }
        switch(*(undefined4 *)(lVar4 + 0x60)) {
        case 0:
          pUVar13 = FBooleanCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) {
            puVar16 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar11,local_res20,0);
            pFVar22 = pFVar22 + 8;
            *puVar16 = *(undefined1 *)puVar14;
            goto LAB_14d563791;
          }
          break;
        case 1:
          pUVar13 = FInteger32CameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) {
LAB_14d563c39:
            puVar17 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar11,local_res20,0);
            pFVar22 = pFVar22 + 8;
            *puVar17 = *(undefined4 *)puVar14;
            goto LAB_14d563791;
          }
          break;
        case 2:
          pUVar13 = FFloatCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) goto LAB_14d563c39;
          break;
        case 3:
          pUVar13 = FDoubleCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) {
LAB_14d563c9c:
            puVar18 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar11,local_res20,0);
            pFVar22 = pFVar22 + 8;
            *puVar18 = *puVar14;
            goto LAB_14d563791;
          }
          break;
        case 4:
          pUVar13 = FVector2fCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) goto LAB_14d563c9c;
          break;
        case 5:
          pUVar13 = FVector2dCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) {
            puVar18 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar11,local_res20,0);
            uVar7 = puVar14[1];
            pFVar22 = pFVar22 + 8;
            *puVar18 = *puVar14;
            puVar18[1] = uVar7;
            goto LAB_14d563791;
          }
          break;
        case 6:
          pUVar13 = FVector3fCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) {
LAB_14d563d44:
            puVar18 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar11,local_res20,0);
            pFVar22 = pFVar22 + 8;
            *puVar18 = *puVar14;
            *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(puVar14 + 1);
            goto LAB_14d563791;
          }
          break;
        case 7:
          pUVar13 = FVector3dCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) {
LAB_14d563d8f:
            puVar18 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar11,local_res20,0);
            uVar7 = puVar14[1];
            pFVar22 = pFVar22 + 8;
            *puVar18 = *puVar14;
            puVar18[1] = uVar7;
            puVar18[2] = puVar14[2];
            goto LAB_14d563791;
          }
          break;
        case 8:
          pUVar13 = FVector4fCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) {
            puVar18 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar11,local_res20,0);
            uVar7 = puVar14[1];
            pFVar22 = pFVar22 + 8;
            *puVar18 = *puVar14;
            puVar18[1] = uVar7;
            goto LAB_14d563791;
          }
          break;
        case 9:
          pUVar13 = FVector4dCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) {
            puVar18 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar11,local_res20,0);
            uVar7 = puVar14[1];
            pFVar22 = pFVar22 + 8;
            *puVar18 = *puVar14;
            puVar18[1] = uVar7;
            uVar7 = puVar14[3];
            puVar18[2] = puVar14[2];
            puVar18[3] = uVar7;
            goto LAB_14d563791;
          }
          break;
        case 10:
          pUVar13 = FRotator3fCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) goto LAB_14d563d44;
          break;
        case 0xb:
          pUVar13 = FRotator3dCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) goto LAB_14d563d8f;
          break;
        case 0xc:
          pUVar13 = FTransform3fCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) {
            puVar18 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar11,local_res20,0);
            uVar7 = puVar14[1];
            pFVar22 = pFVar22 + 8;
            *puVar18 = *puVar14;
            puVar18[1] = uVar7;
            uVar7 = puVar14[3];
            puVar18[2] = puVar14[2];
            puVar18[3] = uVar7;
            uVar7 = puVar14[5];
            puVar18[4] = puVar14[4];
            puVar18[5] = uVar7;
            goto LAB_14d563791;
          }
          break;
        case 0xd:
          pUVar13 = FTransform3dCameraParameter::StaticStruct();
          if ((UScriptStruct *)pFVar11[1]._padding_ == (UScriptStruct *)0x0) {
            bVar8 = pUVar13 == (UScriptStruct *)0x0;
          }
          else {
            bVar8 = (UScriptStruct *)pFVar11[1]._padding_ == pUVar13;
          }
          if (bVar8) {
            puVar18 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar11,local_res20,0);
            uVar7 = puVar14[1];
            pFVar22 = pFVar22 + 8;
            *puVar18 = *puVar14;
            puVar18[1] = uVar7;
            uVar7 = puVar14[3];
            puVar18[2] = puVar14[2];
            puVar18[3] = uVar7;
            uVar7 = puVar14[5];
            puVar18[4] = puVar14[4];
            puVar18[5] = uVar7;
            uVar7 = puVar14[7];
            puVar18[6] = puVar14[6];
            puVar18[7] = uVar7;
            uVar7 = puVar14[9];
            puVar18[8] = puVar14[8];
            puVar18[9] = uVar7;
            uVar7 = puVar14[0xb];
            puVar18[10] = puVar14[10];
            puVar18[0xb] = uVar7;
            goto LAB_14d563791;
          }
          break;
        case 0xe:
          if (pFVar11[1]._padding_ == *(longlong *)(lVar4 + 0x68)) {
            pvVar12 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar11,local_res20,0);
            UScriptStruct::CopyScriptStruct(*(UScriptStruct **)(lVar4 + 0x68),pvVar12,puVar14,1);
            pFVar22 = pFVar22 + 8;
          }
          else {
            bVar8 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<5348291137532592438>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceParameterBuilder.cpp"
                               ,0x136,
                               "DefaultParameterProperty->Struct == BlendableParameter->BlendableStructType"
                              );
            if (bVar8) goto code_r0x00014d564040;
            pFVar22 = pFVar22 + 8;
          }
          goto LAB_14d563791;
        default:
          goto switchD_14d5638d5_default;
        }
        pcVar23 = "DefaultParameterProperty->Struct == CameraParameterType::StaticStruct()";
        iVar21 = 0x133;
        paVar20 = &bGEnsureHasExecuted<5348291137532592435>;
        goto LAB_14d563f17;
      }
      bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5348291137532592408>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceParameterBuilder.cpp"
                         ,0x118,"PropertyDesc && PropertyDesc->CachedProperty");
      if (bVar8) goto code_r0x00014d564040;
    }
switchD_14d5638d5_default:
    pFVar22 = pFVar22 + 8;
  } while( true );
LAB_14d56405e:
  if ((param_1->Interface).DataParameters.ArrayNum != iVar2) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<TObjectPtr<UCameraObjectInterfaceDataParameter>_const_,int,0>::
    operator!='::__l2::<lambda_1>::operator()(local_res18);
  }
  if (pFVar22 == pFVar1) {
    return;
  }
  lVar4 = *(longlong *)pFVar22;
  if (lVar4 == 0) {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5348291137532592449>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceParameterBuilder.cpp"
                       ,0x141,"DataParameter");
    if (bVar8) goto code_r0x00014d564339;
    pFVar22 = pFVar22 + 8;
    goto LAB_14d56405e;
  }
  pUVar5 = *(UObjectBaseUtility **)(lVar4 + 0x40);
  if (pUVar5 != (UObjectBaseUtility *)0x0) {
    pFVar19 = (FObjectPtr_u_0 *)0x0;
    pUVar9 = Z_Construct_UClass_UCustomCameraNodeParameterProvider_NoRegister();
    plVar10 = UObjectBaseUtility::GetInterfaceAddress(pUVar5,pUVar9);
    if (plVar10 == (longlong *)0x0) {
LAB_14d56415b:
      pFVar11 = UStruct::FindPropertyByName
                          (*(UStruct **)(*(longlong *)(lVar4 + 0x40) + 0x10),
                           *(FName *)(lVar4 + 0x48));
      if ((pFVar11 != (FProperty *)0x0) &&
         (pFVar19 = FProperty::ContainerUObjectPtrToValuePtrInternal
                              (pFVar11,*(UObject **)(lVar4 + 0x40),0),
         pFVar19 != (FObjectPtr_u_0 *)0x0)) goto LAB_14d564190;
      pcVar23 = "RawSourceValuePtr";
      iVar21 = 0x169;
      paVar20 = &bGEnsureHasExecuted<5348291137532592489>;
    }
    else {
      local_68 = (void *)0x0;
      local_60 = 0;
      local_58 = (longlong *)0x0;
      local_50 = 0;
      (**(code **)(*plVar10 + 0x10))(plVar10,&local_68);
      if (local_58 != local_58 + (longlong)(int)local_50 * 5) {
        plVar10 = local_58;
        do {
          if (*plVar10 == *(longlong *)(lVar4 + 0x48)) {
            pFVar19 = (FObjectPtr_u_0 *)plVar10[3];
            break;
          }
          plVar10 = plVar10 + 5;
        } while (plVar10 != local_58 + (longlong)(int)local_50 * 5);
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if (pFVar19 == (FObjectPtr_u_0 *)0x0) goto LAB_14d56415b;
LAB_14d564190:
      local_98._0_8_ = *(undefined8 *)(lVar4 + 0x50);
      local_98._8_8_ = *(undefined8 *)(lVar4 + 0x58);
      pFVar15 = UPropertyBag::FindPropertyDescByID(this,&local_98);
      if ((pFVar15 != (FPropertyBagPropertyDesc *)0x0) &&
         (pFVar11 = pFVar15->CachedProperty, pFVar11 != (FProperty *)0x0)) {
        if (*(int *)(lVar4 + 100) == 0) {
          if ((pFVar11->ArrayDim < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          this_00 = (FObjectPtr_u_0 *)(puVar3 + pFVar11->Offset_Internal);
          if (this_00 == (FObjectPtr_u_0 *)0x0) {
            bVar8 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<5348291137532592503>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceParameterBuilder.cpp"
                               ,0x177,"RawDestinationValuePtr");
            if (bVar8) goto code_r0x00014d564339;
            pFVar22 = pFVar22 + 8;
          }
          else {
            switch(*(undefined4 *)(lVar4 + 0x60)) {
            case 0:
              pFVar22 = pFVar22 + 8;
              this_00->Handle = (UObject *)*(UObject **)pFVar19;
              break;
            case 1:
              iVar21 = *(int *)(pFVar19 + 1) + -1;
              if (*(int *)(pFVar19 + 1) == 0) {
                iVar21 = 0;
              }
              ::FString::AssignRange((FString *)this_00,(wchar_t *)pFVar19->Handle,iVar21);
              pFVar22 = pFVar22 + 8;
              break;
            case 2:
              pFVar22 = pFVar22 + 8;
              *(undefined1 *)this_00 = *(undefined1 *)pFVar19;
              break;
            case 3:
              pUVar13 = CastChecked<UScriptStruct_const_,UObject_const_>
                                  ((TObjectPtr<UObject_const_> *)(lVar4 + 0x68),NullChecked);
              UScriptStruct::CopyScriptStruct(pUVar13,this_00,pFVar19,1);
              pFVar22 = pFVar22 + 8;
              break;
            case 4:
            case 5:
              FObjectPtr::operator=((FObjectPtr *)this_00,(FObjectPtr *)pFVar19);
              pFVar22 = pFVar22 + 8;
              break;
            default:
              goto switchD_14d56425f_default;
            }
          }
          goto LAB_14d56405e;
        }
        goto switchD_14d56425f_default;
      }
      pcVar23 = "PropertyDesc && PropertyDesc->CachedProperty";
      iVar21 = 0x16f;
      paVar20 = &bGEnsureHasExecuted<5348291137532592495>;
    }
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (paVar20,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Build\\CameraObjectInterfaceParameterBuilder.cpp"
                       ,iVar21,pcVar23);
    if (bVar8) {
code_r0x00014d564339:
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
switchD_14d56425f_default:
  pFVar22 = pFVar22 + 8;
  goto LAB_14d56405e;
}

