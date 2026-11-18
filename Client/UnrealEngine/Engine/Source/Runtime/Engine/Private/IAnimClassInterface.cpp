// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// ~IAnimClassInterface @ 1473daea0

void __thiscall IAnimClassInterface::~IAnimClassInterface(IAnimClassInterface *this)

{
  *this = (IAnimClassInterface)&___7IAnimClassInterface__6B_;
  return;
}

// FindAnimBlueprintFunction @ 1473fcc10

FAnimBlueprintFunction * __cdecl
IAnimClassInterface::FindAnimBlueprintFunction(IAnimClassInterface *param_1,FName *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  FAnimBlueprintFunction *pFVar3;
  FAnimBlueprintFunction *pFVar4;
  undefined1 local_res8 [8];
  
  plVar2 = (longlong *)(**(code **)((longlong)*param_1 + 0x80))();
  lVar1 = plVar2[1];
  pFVar3 = (FAnimBlueprintFunction *)*plVar2;
  pFVar4 = pFVar3 + (int)lVar1;
  while( true ) {
    if ((int)plVar2[1] != (int)lVar1) {
      `TCheckedPointerIterator<FAnimBlueprintFunction_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (pFVar3->Name == *param_2) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FAnimBlueprintFunction *)0x0;
}

// GetActualAnimClass @ 1473feaf0

UClass * __cdecl IAnimClassInterface::GetActualAnimClass(IAnimClassInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  if (param_1 == (IAnimClassInterface *)0x0) {
    return (UClass *)0x0;
  }
  pUVar2 = (UClass *)(**(code **)((longlong)*param_1 + 8))();
  if (pUVar2 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  lVar4 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (lVar4 == 0) {
    return (UClass *)0x0;
  }
  pUVar2 = *(UClass **)(lVar4 + 0x20);
  if (pUVar2 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UClass *)0x0;
}

// GetActualAnimClass @ 1473febb0

UClass * __cdecl IAnimClassInterface::GetActualAnimClass(IAnimClassInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  if (param_1 == (IAnimClassInterface *)0x0) {
    return (UClass *)0x0;
  }
  pUVar2 = (UClass *)(**(code **)((longlong)*param_1 + 8))();
  if (pUVar2 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  lVar4 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (lVar4 == 0) {
    return (UClass *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UObject_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if (iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) {
    if ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_) {
      return (UClass *)0x0;
    }
    pUVar2 = *(UClass **)(lVar4 + 0x20);
    if (pUVar2 != (UClass *)0x0) {
      pUVar3 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar2;
      }
    }
    return (UClass *)0x0;
  }
  return (UClass *)0x0;
}

// GetAnimNodeFromObjectPtr @ 1473fed40

FAnimNode_Base * __cdecl
IAnimClassInterface::GetAnimNodeFromObjectPtr(UObject *param_1,int param_2,UScriptStruct *param_3)

{
  int iVar1;
  UObjectBaseUtility *this;
  FProperty *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong *plVar6;
  longlong *plVar7;
  FAnimNode_Base *pFVar8;
  uint uVar9;
  
  this = *(UObjectBaseUtility **)&param_1->field_0x10;
  if (this != (UObjectBaseUtility *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimClassInterface_NoRegister();
    plVar6 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar5);
    if (plVar6 != (longlong *)0x0) {
      plVar7 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6);
      uVar9 = 0;
      if (param_2 < (int)plVar7[1]) {
        uVar9 = (uint)~param_2 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FAnimNode_Base *)(*pcVar3)();
          return pFVar8;
        }
      }
      if (*(longlong *)(*plVar7 + (longlong)param_2 * 8) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AnimClassInterface->GetAnimNodeProperties()[InNodeIndex]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimClassInterface.cpp"
                           ,0x9f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FAnimNode_Base *)(*pcVar3)();
          return pFVar8;
        }
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6);
      uVar9 = 0;
      if (param_2 < (int)plVar6[1]) {
        uVar9 = (uint)~param_2 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FAnimNode_Base *)(*pcVar3)();
          return pFVar8;
        }
      }
      this_00 = *(FProperty **)(*plVar6 + (longlong)param_2 * 8);
      if (param_3 != (UScriptStruct *)0x0) {
        lVar2 = this_00[1]._padding_;
        iVar1 = (int)param_3->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &param_3->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pFVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_1,0);
          return pFVar8;
        }
      }
    }
  }
  return (FAnimNode_Base *)0x0;
}

// GetExposedValueHandlers @ 147401da0

TArray<FExposedValueHandler,TSizedDefaultAllocator<32>_> * __thiscall
IAnimClassInterface::GetExposedValueHandlers(IAnimClassInterface *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  longlong lVar4;
  TArray<FExposedValueHandler,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pcVar1 = *(code **)((longlong)*this + 0xc0);
  pUVar3 = FAnimSubsystem_Base::StaticStruct();
  lVar4 = (*pcVar1)(this,pUVar3);
  if (lVar4 != 0) {
    return (TArray<FExposedValueHandler,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x30);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Subsystem",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimClassInterface.h"
                     ,0xf2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TArray<FExposedValueHandler,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar5;
  }
  return (TArray<FExposedValueHandler,TSizedDefaultAllocator<32>_> *)&DAT_00000030;
}

// GetFromClass @ 147401e80

IAnimClassInterface * __cdecl IAnimClassInterface::GetFromClass(UClass *param_1)

{
  UClass *pUVar1;
  IAnimClassInterface *pIVar2;
  
  if (param_1 != (UClass *)0x0) {
    pUVar1 = Z_Construct_UClass_UAnimClassInterface_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    return pIVar2;
  }
  return (IAnimClassInterface *)0x0;
}

// GetFromClass @ 147401ec0

IAnimClassInterface * __cdecl IAnimClassInterface::GetFromClass(UClass *param_1)

{
  UClass *pUVar1;
  IAnimClassInterface *pIVar2;
  
  if (param_1 != (UClass *)0x0) {
    pUVar1 = Z_Construct_UClass_UAnimClassInterface_NoRegister();
    pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    return pIVar2;
  }
  return (IAnimClassInterface *)0x0;
}

// GetLayerNodeProperties @ 147402370

TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> * __thiscall
IAnimClassInterface::GetLayerNodeProperties(IAnimClassInterface *this)

{
  TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147402373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *)
           (**(code **)((longlong)*this + 0x40))();
  return pTVar1;
}

// GetObjectPtrFromAnimNode @ 147403070

UObject * __cdecl
IAnimClassInterface::GetObjectPtrFromAnimNode(IAnimClassInterface *param_1,FAnimNode_Base *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  longlong *plVar5;
  uint uVar6;
  
  if (param_2->NodeData == (FAnimNodeData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                       ,0x3c7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UObject *)(*pcVar2)();
      return pUVar4;
    }
  }
  uVar1 = param_2->NodeData->NodeIndex;
  plVar5 = (longlong *)(**(code **)((longlong)*param_1 + 0x20))();
  uVar6 = 0;
  if ((int)uVar1 < (int)plVar5[1]) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UObject *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar4 = ValuePtrToContainerUObjectPtr
                     (*(FProperty **)(*plVar5 + (longlong)(int)uVar1 * 8),param_2,0);
  return pUVar4;
}

// GetPropertyAccessLibrary @ 1474040a0

FPropertyAccessLibrary * __thiscall
IAnimClassInterface::GetPropertyAccessLibrary(IAnimClassInterface *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  FPropertyAccessLibrary *pFVar2;
  IAnimClassInterface *pIVar3;
  
  do {
    pIVar3 = this;
    pUVar1 = GetActualAnimClass(pIVar3);
    if ((pUVar1 == (UClass *)0x0) ||
       (this_00 = (UObjectBaseUtility *)pUVar1->_padding_, this_00 == (UObjectBaseUtility *)0x0))
    break;
    pUVar1 = Z_Construct_UClass_UAnimClassInterface_NoRegister();
    this = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
  } while (this != (IAnimClassInterface *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001474040f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FPropertyAccessLibrary *)(**(code **)((longlong)*pIVar3 + 0xf8))(pIVar3);
  return pFVar2;
}

// GetPropertyAccessLibrary_Direct @ 147404100

FPropertyAccessLibrary * __thiscall
IAnimClassInterface::GetPropertyAccessLibrary_Direct(IAnimClassInterface *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  longlong lVar4;
  FPropertyAccessLibrary *pFVar5;
  
  pcVar1 = *(code **)((longlong)*this + 0xc0);
  pUVar3 = FAnimSubsystem_PropertyAccess::StaticStruct();
  lVar4 = (*pcVar1)(this,pUVar3);
  if (lVar4 != 0) {
    return (FPropertyAccessLibrary *)(lVar4 + 8);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Subsystem",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimClassInterface.h"
                     ,0xf2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FPropertyAccessLibrary *)(*pcVar1)();
    return pFVar5;
  }
  return (FPropertyAccessLibrary *)&DAT_00000008;
}

// GetRootAnimNodeIndex @ 1474043b0

int __thiscall IAnimClassInterface::GetRootAnimNodeIndex(IAnimClassInterface *this)

{
  return -1;
}

// GetRootAnimNodeProperty @ 1474043c0

FStructProperty * __thiscall IAnimClassInterface::GetRootAnimNodeProperty(IAnimClassInterface *this)

{
  return (FStructProperty *)0x0;
}

// GetRootClass @ 1474043d0

IAnimClassInterface * __thiscall IAnimClassInterface::GetRootClass(IAnimClassInterface *this)

{
  UObjectBaseUtility *this_00;
  UClass *pUVar1;
  IAnimClassInterface *pIVar2;
  
  while( true ) {
    pIVar2 = this;
    pUVar1 = GetActualAnimClass(pIVar2);
    if (pUVar1 == (UClass *)0x0) {
      return pIVar2;
    }
    this_00 = (UObjectBaseUtility *)pUVar1->_padding_;
    if (this_00 == (UObjectBaseUtility *)0x0) break;
    pUVar1 = Z_Construct_UClass_UAnimClassInterface_NoRegister();
    this = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar1);
    if (this == (IAnimClassInterface *)0x0) {
      return pIVar2;
    }
  }
  return pIVar2;
}

// GetSubInstanceNodeProperties @ 147405800

TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> * __thiscall
IAnimClassInterface::GetSubInstanceNodeProperties(IAnimClassInterface *this)

{
  TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147405803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *)
           (**(code **)((longlong)*this + 0x30))();
  return pTVar1;
}

// HasNodeAnyFlags @ 147405e30

bool __cdecl
IAnimClassInterface::HasNodeAnyFlags
          (IAnimClassInterface *param_1,int param_2,EAnimNodeDataFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong local_18;
  int local_10;
  
  (**(code **)((longlong)*param_1 + 0x128))(param_1,&local_18);
  if (((param_2 < 0) || (local_10 <= param_2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimNodeData.IsValidIndex(InNodeIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimClassInterface.cpp"
                         ,0xad,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar4 = 0;
  if (param_2 < local_10) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return (*(EAnimNodeDataFlags *)(local_18 + 0x24 + (longlong)param_2 * 0x28) & param_3) != None;
}

// IsAnimBlueprintFunction @ 147407580

bool __cdecl
IAnimClassInterface::IsAnimBlueprintFunction(IAnimClassInterface *param_1,UFunction *param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  lVar7 = param_2->_padding_;
  if (lVar7 == 0) {
LAB_1474075bf:
    lVar7 = 0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_1474075bf;
  }
  if (param_1 != (IAnimClassInterface *)0x0) {
    lVar4 = (**(code **)((longlong)*param_1 + 8))(param_1);
    if (lVar4 != 0) {
      pUVar3 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == &pUVar3->_padding_)) goto LAB_147407636;
    }
    lVar4 = (**(code **)((longlong)*param_1 + 8))(param_1);
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0)) {
      pUVar3 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == &pUVar3->_padding_)) goto LAB_147407636;
    }
  }
  lVar4 = 0;
LAB_147407636:
  if (lVar7 == lVar4) {
    plVar5 = (longlong *)(**(code **)((longlong)*param_1 + 0x80))(param_1);
    lVar7 = plVar5[1];
    plVar6 = (longlong *)*plVar5;
    plVar8 = plVar6 + (longlong)(int)lVar7 * 0xf;
    while( true ) {
      if ((int)plVar5[1] != (int)lVar7) {
        `TCheckedPointerIterator<FAnimBlueprintFunction_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (plVar6 == plVar8) goto LAB_147407687;
      if (*plVar6 == param_2->_padding_) break;
      plVar6 = plVar6 + 0xf;
    }
    bVar2 = true;
  }
  else {
LAB_147407687:
    bVar2 = false;
  }
  return bVar2;
}

// _getUObject @ 14741d9a0

UObject * __thiscall IAnimClassInterface::_getUObject(IAnimClassInterface *this)

{
  return (UObject *)0x0;
}

