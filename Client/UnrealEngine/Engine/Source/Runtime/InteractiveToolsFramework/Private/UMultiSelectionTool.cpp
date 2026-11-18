// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 14

// StaticClass @ 1496cbb20

UClass * __cdecl UMultiSelectionTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiSelectionTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MultiSelectionTool",
               &Z_Registration_Info_UClass_UMultiSelectionTool.InnerSingleton,
               StaticRegisterNativesUMultiSelectionTool,0xd8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMultiSelectionTool>,
               InternalVTableHelperCtorCaller<UMultiSelectionTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiSelectionTool.InnerSingleton;
}

// UMultiSelectionTool @ 1496d3ab0

UMultiSelectionTool * __thiscall
UMultiSelectionTool::UMultiSelectionTool(UMultiSelectionTool *this,FVTableHelper *param_1)

{
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UMultiSelectionTool__6B_;
  (this->Targets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Targets).ArrayNum = 0;
  (this->Targets).ArrayMax = 0;
  return this;
}

// UMultiSelectionTool @ 1496d3b00

UMultiSelectionTool * __thiscall UMultiSelectionTool::UMultiSelectionTool(UMultiSelectionTool *this)

{
  UInteractiveTool::UInteractiveTool((UInteractiveTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UMultiSelectionTool__6B_;
  (this->Targets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Targets).ArrayNum = 0;
  (this->Targets).ArrayMax = 0;
  return this;
}

// ~UMultiSelectionTool @ 1496d4a00

void __thiscall UMultiSelectionTool::~UMultiSelectionTool(UMultiSelectionTool *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&___7UMultiSelectionTool__6B_;
  pFVar1 = (this->Targets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInteractiveToolCameraFocusAPI__6B_;
  UInteractiveTool::~UInteractiveTool((UInteractiveTool *)this);
  return;
}

// AreAllTargetsValid @ 1496d72c0

bool __thiscall UMultiSelectionTool::AreAllTargetsValid(UMultiSelectionTool *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Targets).AllocatorInstance.Data;
  iVar2 = (this->Targets).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Targets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UToolTarget>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    cVar3 = (**(code **)(**(longlong **)pFVar4 + 0x2b0))();
    if (cVar3 == '\0') {
      return false;
    }
    pFVar4 = pFVar4 + 8;
  }
  return true;
}

// CanAccept @ 1496d8790

bool __thiscall UMultiSelectionTool::CanAccept(UMultiSelectionTool *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001496d8793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x398))();
  return (bool)uVar1;
}

// GetPrivateStaticClass @ 1496dda20

UClass * __cdecl UMultiSelectionTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiSelectionTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MultiSelectionTool",
               &Z_Registration_Info_UClass_UMultiSelectionTool.InnerSingleton,
               StaticRegisterNativesUMultiSelectionTool,0xd8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMultiSelectionTool>,
               InternalVTableHelperCtorCaller<UMultiSelectionTool>,local_res8,
               UInteractiveTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiSelectionTool.InnerSingleton;
}

// GetWorldSpaceFocusBox @ 1496de540

TBox<double> * __thiscall
UMultiSelectionTool::GetWorldSpaceFocusBox
          (UMultiSelectionTool *this,TBox<double> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  UObjectBaseUtility *this_00;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  UClass *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 local_res8 [8];
  undefined7 uStack_57;
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  puVar14 = (undefined8 *)this->_padding_;
  iVar4 = (int)this->_padding_;
  puVar1 = puVar14 + iVar4;
LAB_1496de5a2:
  do {
    if ((int)this->_padding_ != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UToolTarget>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar14 == puVar1) {
      return __return_storage_ptr__;
    }
    this_00 = (UObjectBaseUtility *)*puVar14;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar11 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
      plVar12 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar11);
      if (plVar12 != (longlong *)0x0) {
        lVar13 = (**(code **)(*plVar12 + 0x10))(plVar12);
        if (lVar13 != 0) {
          dVar16 = *(double *)(lVar13 + 0x110) + *(double *)(lVar13 + 0x128);
          dVar9 = *(double *)(lVar13 + 0x118) + *(double *)(lVar13 + 0x130);
          dVar10 = *(double *)(lVar13 + 0x120) + *(double *)(lVar13 + 0x138);
          dVar15 = *(double *)(lVar13 + 0x110) - *(double *)(lVar13 + 0x128);
          dVar17 = *(double *)(lVar13 + 0x118) - *(double *)(lVar13 + 0x130);
          dVar8 = *(double *)(lVar13 + 0x120) - *(double *)(lVar13 + 0x138);
          if (__return_storage_ptr__->IsValid != '\0') {
            dVar2 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
            puVar14 = puVar14 + 1;
            dVar3 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
            if (dVar17 <= dVar2) {
              dVar2 = dVar17;
            }
            dVar17 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
            if (dVar17 <= dVar15) {
              dVar15 = dVar17;
            }
            dVar17 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
            if (dVar16 <= dVar17) {
              dVar16 = dVar17;
            }
            if (dVar8 <= dVar3) {
              dVar3 = dVar8;
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
            dVar8 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
            if (dVar8 <= dVar9) {
              dVar8 = dVar9;
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar15;
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar3;
            dVar9 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
            if (dVar9 <= dVar10) {
              dVar9 = dVar10;
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar16;
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar8;
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar9;
            goto LAB_1496de5a2;
          }
          auVar5._8_4_ = SUB84(dVar17,0);
          auVar5._0_8_ = dVar15;
          auVar5._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar5;
          auVar7._8_4_ = SUB84(dVar16,0);
          auVar7._0_8_ = dVar8;
          auVar7._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) =
               auVar7;
          auVar6._8_4_ = SUB84(dVar10,0);
          auVar6._0_8_ = dVar9;
          auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = auVar6;
          __return_storage_ptr__->IsValid = 1;
          __return_storage_ptr__->Pad[0] = (char)uStack_57;
          __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_57 >> 8);
          __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_57 >> 0x10);
          __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_57 >> 0x18);
          __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_57 >> 0x20);
          __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_57 >> 0x28);
          __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_57 >> 0x30);
        }
      }
    }
    puVar14 = puVar14 + 1;
  } while( true );
}

// GetWorldSpaceFocusPoint @ 1496de720

bool __thiscall
UMultiSelectionTool::GetWorldSpaceFocusPoint
          (UMultiSelectionTool *this,TRay<double> *param_1,TVector<double> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  UObjectBaseUtility *this_00;
  double dVar3;
  undefined8 uVar4;
  char cVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  double dVar9;
  undefined1 local_res8 [8];
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  double local_100;
  undefined4 local_94;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar3 = __real_4290000000000000;
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar4;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  puVar8 = (undefined8 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar8 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UToolTarget>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar8 == puVar1) break;
    this_00 = (UObjectBaseUtility *)*puVar8;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar6 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
      plVar7 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar6);
      if (plVar7 != (longlong *)0x0) {
        memset(local_138,0,0x100);
        local_80 = 0;
        uStack_78 = 0;
        local_134 = 0x3f800000;
        local_94 = 0xffffffff;
        local_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0xffffffff;
        uStack_64 = 0;
        cVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,param_1,local_138);
        if (cVar5 != '\0') {
          dVar9 = ((double)CONCAT44(uStack_104,local_108) - (param_1->Origin).field0_0x0._s_0.Y) *
                  (param_1->Direction).field0_0x0._s_0.Y +
                  ((double)CONCAT44(uStack_10c,local_110) - (param_1->Origin).field0_0x0._s_0.X) *
                  (param_1->Direction).field0_0x0._s_0.X +
                  (local_100 - (param_1->Origin).field0_0x0._s_0.Z) *
                  (param_1->Direction).field0_0x0._s_0.Z;
          if (dVar9 < dVar3) {
            *(undefined4 *)&param_2->field0_0x0 = local_110;
            *(undefined4 *)((longlong)&param_2->field0_0x0 + 4) = uStack_10c;
            *(undefined4 *)((longlong)&param_2->field0_0x0 + 8) = local_108;
            *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc) = uStack_104;
            (param_2->field0_0x0)._s_0.Z = local_100;
            dVar3 = dVar9;
          }
        }
      }
    }
    puVar8 = puVar8 + 1;
  }
  return dVar3 < __real_4290000000000000;
}

// StaticRegisterNativesUMultiSelectionTool @ 1496e6740

void __cdecl UMultiSelectionTool::StaticRegisterNativesUMultiSelectionTool(void)

{
  return;
}

// SupportsWorldSpaceFocusBox @ 1496e67f0

bool __thiscall UMultiSelectionTool::SupportsWorldSpaceFocusBox(UMultiSelectionTool *this)

{
  undefined8 *puVar1;
  int iVar2;
  UObjectBaseUtility *this_00;
  int iVar3;
  UClass *pUVar4;
  void *pvVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 local_res8 [8];
  
  puVar6 = (undefined8 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar6 + iVar2;
  iVar3 = 0;
  while( true ) {
    iVar7 = iVar3;
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UToolTarget>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar6 == puVar1) break;
    this_00 = (UObjectBaseUtility *)*puVar6;
    if (this_00 == (UObjectBaseUtility *)0x0) {
      puVar6 = puVar6 + 1;
      iVar3 = iVar7;
    }
    else {
      pUVar4 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
      pvVar5 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar4);
      puVar6 = puVar6 + 1;
      iVar3 = iVar7 + 1;
      if (pvVar5 == (void *)0x0) {
        iVar3 = iVar7;
      }
    }
  }
  return 0 < iVar7;
}

// SupportsWorldSpaceFocusPoint @ 1496e68a0

bool __thiscall UMultiSelectionTool::SupportsWorldSpaceFocusPoint(UMultiSelectionTool *this)

{
  undefined8 *puVar1;
  int iVar2;
  UObjectBaseUtility *this_00;
  int iVar3;
  UClass *pUVar4;
  void *pvVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 local_res8 [8];
  
  puVar6 = (undefined8 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar6 + iVar2;
  iVar3 = 0;
  while( true ) {
    iVar7 = iVar3;
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UToolTarget>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar6 == puVar1) break;
    this_00 = (UObjectBaseUtility *)*puVar6;
    if (this_00 == (UObjectBaseUtility *)0x0) {
      puVar6 = puVar6 + 1;
      iVar3 = iVar7;
    }
    else {
      pUVar4 = Z_Construct_UClass_UPrimitiveComponentBackedTarget_NoRegister();
      pvVar5 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar4);
      puVar6 = puVar6 + 1;
      iVar3 = iVar7 + 1;
      if (pvVar5 == (void *)0x0) {
        iVar3 = iVar7;
      }
    }
  }
  return 0 < iVar7;
}

// _getUObject @ 1496e8140

UObject * __thiscall UMultiSelectionTool::_getUObject(UMultiSelectionTool *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{152}' @ 1496e814c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMultiSelectionTool::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall UMultiSelectionTool::_getUObject_adjustor_152__(UMultiSelectionTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMultiSelectionTool *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

