// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 44

// ~FDocumentController @ 14ad9dfd0

void __thiscall
Metasound::Frontend::FDocumentController::~FDocumentController(FDocumentController *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)&(this->DocumentPtr).field_0x10 != 0) {
    plVar3 = *(longlong **)&(this->DocumentPtr).field_0x38;
    plVar4 = (longlong *)&(this->DocumentPtr).field_0x20;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ad9e01a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// CreateDocumentHandle @ 14adaab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IDocumentController_const_,1> * __cdecl
Metasound::Frontend::FDocumentController::CreateDocumentHandle
          (TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *__return_storage_ptr__,
          FConstDocumentAccessPtr *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *pTVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  IDocumentController *pIVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  undefined1 auStack_138 [32];
  undefined1 local_118 [56];
  longlong *local_e0;
  undefined1 local_d8 [16];
  code *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  longlong local_98;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_98 = *(longlong *)&param_1->field_0x10;
  local_d8._0_8_ = 0;
  local_c8 = (code *)0x0;
  plStack_a0 = (longlong *)0x0;
  local_70 = (longlong *)0x0;
  if (local_98 != 0) {
    puVar12 = (undefined8 *)&param_1->field_0x20;
    if (*(undefined8 **)&param_1->field_0x38 != (undefined8 *)0x0) {
      puVar12 = *(undefined8 **)&param_1->field_0x38;
    }
    (**(code **)*puVar12)(puVar12,&local_88);
  }
  pIVar14 = (IDocumentController *)&DAT_00000010;
  local_68 = (code *)0x0;
  plVar7 = FMemory::Malloc(0x40,0x10);
  plStack_40 = plStack_a0;
  uVar6 = uStack_ac;
  uVar5 = uStack_b0;
  uVar4 = uStack_b4;
  uVar3 = local_b8;
  uVar9 = uStack_c0;
  *plVar7 = (longlong)
            &
            ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendDocument_____TAccessPtr_UFMetasoundFrontendDocument___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendDocument___34_W4EConstCast_234__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar13 = plVar7 + 2;
  *plVar13 = local_98;
  plVar7[7] = (longlong)local_70;
  local_70 = (longlong *)0x0;
  plVar7[4] = local_88;
  plVar7[5] = lStack_80;
  plVar7[6] = local_78;
  if (*plVar13 != 0) {
    local_98 = 0;
  }
  pcVar8 = local_68;
  if (plVar13 != (longlong *)0x0) {
    pcVar8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendDocument>::TAccessPtr<FMetasoundFrontendDocument><FMetasoundFrontendDocument_const_>'::__l2::<lambda_1>,FMetasoundFrontendDocument_*>
             ::Call;
  }
  uStack_c0 = uStack_60;
  local_a8 = local_48;
  uStack_a4 = uStack_44;
  plStack_a0 = plVar7;
  local_b8 = local_58;
  uStack_b4 = uStack_54;
  uStack_b0 = uStack_50;
  uStack_ac = uStack_4c;
  local_68 = local_c8;
  uStack_60 = uVar9;
  local_58 = uVar3;
  uStack_54 = uVar4;
  uStack_50 = uVar5;
  uStack_4c = uVar6;
  bVar16 = local_c8 != (code *)0x0;
  local_c8 = pcVar8;
  if (bVar16) {
    plVar13 = (longlong *)&local_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar13 = plStack_40;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_98 != 0) {
    plVar13 = &local_88;
    if (local_70 != (longlong *)0x0) {
      plVar13 = local_70;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  UE::Core::Private::Function::CheckCallable(local_c8);
  pcVar8 = local_c8;
  plVar13 = (longlong *)&local_b8;
  if (plStack_a0 != (longlong *)0x0) {
    plVar13 = plStack_a0;
  }
  uVar9 = (**(code **)(*plVar13 + 8))();
  local_d8._0_8_ = (*pcVar8)(uVar9);
  pTVar10 = ::operator_new(0x70);
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController___CBVFDocumentController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    local_118._36_4_ = uStack_b4;
    local_118._32_4_ = local_b8;
    local_118._44_4_ = uStack_ac;
    local_118._40_4_ = uStack_b0;
    local_118._52_4_ = uStack_a4;
    local_118._48_4_ = local_a8;
    local_118._0_8_ = local_d8._0_8_;
    local_e0 = plStack_a0;
    local_118._16_8_ = local_c8;
    plStack_a0 = (longlong *)0x0;
    if (local_c8 != (code *)0x0) {
      local_c8 = (code *)0x0;
    }
    FDocumentController((FDocumentController *)(pTVar10 + 1),(FDocumentAccessPtr *)local_118);
    pIVar14 = (IDocumentController *)(pTVar10 + 1);
    pTVar15 = pTVar10;
    if (pIVar14 == (IDocumentController *)0x0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *)(*pcVar8)();
        return pTVar11;
      }
      goto LAB_14adaadf8;
    }
  }
  if (((*(longlong *)&pIVar14->field_0x8 == 0) || (*(longlong *)&pIVar14->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar14->field_0x10 + 8) < 1)) {
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IDocumentController **)&pIVar14->field_0x8 = pIVar14;
    if (pTVar15 != *(TReferenceControllerBase<1> **)&pIVar14->field_0x10) {
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar13 = *(longlong **)&pIVar14->field_0x10;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar14->field_0x10 = pTVar15;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
LAB_14adaadf8:
  __return_storage_ptr__->Object = pIVar14;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar15;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  if (local_c8 != (code *)0x0) {
    plVar13 = (longlong *)&local_b8;
    if (plStack_a0 != (longlong *)0x0) {
      plVar13 = plStack_a0;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (*(longlong *)&param_1->field_0x10 != 0) {
    plVar13 = (longlong *)&param_1->field_0x20;
    if (*(longlong **)&param_1->field_0x38 != (longlong *)0x0) {
      plVar13 = *(longlong **)&param_1->field_0x38;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return __return_storage_ptr__;
}

// CreateDocumentHandle @ 14adaae80

TSharedRef<Metasound::Frontend::IDocumentController,1> * __cdecl
Metasound::Frontend::FDocumentController::CreateDocumentHandle
          (TSharedRef<Metasound::Frontend::IDocumentController,1> *__return_storage_ptr__,
          FDocumentAccessPtr *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  TUniquePtr<Metasound::Frontend::IDocumentBuilderRegistry,TDefaultDelete<Metasound::Frontend::IDocumentBuilderRegistry>_>
  TVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::Frontend::IDocumentController,1> *pTVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  TReferenceControllerBase<1> *pTVar12;
  IDocumentController *pIVar13;
  FDocumentAccessPtr local_58;
  
  TVar4.Ptr = DocumentInterfacePrivate::Instance.Ptr;
  if (DocumentInterfacePrivate::Instance.Ptr != (IDocumentBuilderRegistry *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->field_0x10);
    pcVar3 = *(code **)&param_1->field_0x10;
    plVar11 = (longlong *)&param_1->field_0x20;
    if (*(longlong **)&param_1->field_0x38 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x38;
    }
    uVar6 = (**(code **)(*plVar11 + 8))();
    lVar7 = (*pcVar3)(uVar6);
    *(longlong *)param_1 = lVar7;
    (**(code **)((longlong)*TVar4.Ptr + 0x30))(TVar4.Ptr,lVar7 + 0x88);
  }
  pTVar8 = ::operator_new(0x70);
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pIVar13 = (IDocumentController *)&DAT_00000010;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDocumentController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    local_58._0_8_ = *(undefined8 *)param_1;
    local_58._16_8_ = *(undefined8 *)&param_1->field_0x10;
    local_58._56_8_ = 0;
    if (local_58._16_8_ != 0) {
      puVar10 = (undefined8 *)&param_1->field_0x20;
      if (*(undefined8 **)&param_1->field_0x38 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&param_1->field_0x38;
      }
      (**(code **)*puVar10)(puVar10,&local_58.field_0x20);
    }
    FDocumentController((FDocumentController *)(pTVar8 + 1),&local_58);
    pIVar13 = (IDocumentController *)(pTVar8 + 1);
    pTVar12 = pTVar8;
    if (pIVar13 == (IDocumentController *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TSharedRef<Metasound::Frontend::IDocumentController,1> *)(*pcVar3)();
        return pTVar9;
      }
      goto LAB_14adaaff3;
    }
  }
  if (((*(longlong *)&pIVar13->field_0x8 == 0) || (*(longlong *)&pIVar13->field_0x10 == 0)) ||
     (*(int *)(*(longlong *)&pIVar13->field_0x10 + 8) < 1)) {
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(IDocumentController **)&pIVar13->field_0x8 = pIVar13;
    if (pTVar12 != *(TReferenceControllerBase<1> **)&pIVar13->field_0x10) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar11 = *(longlong **)&pIVar13->field_0x10;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pIVar13->field_0x10 = pTVar12;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
LAB_14adaaff3:
  __return_storage_ptr__->Object = pIVar13;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  if (*(longlong *)&param_1->field_0x10 != 0) {
    plVar11 = (longlong *)&param_1->field_0x20;
    if (*(longlong **)&param_1->field_0x38 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x38;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FDocumentController @ 14ae1ab10

FDocumentController * __thiscall
Metasound::Frontend::FDocumentController::FDocumentController
          (FDocumentController *this,FDocumentAccessPtr *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDocumentController_Frontend_Metasound__6B_;
  *(undefined8 *)&this->DocumentPtr = *(undefined8 *)param_1;
  lVar1 = *(longlong *)&param_1->field_0x10;
  *(undefined8 *)&(this->DocumentPtr).field_0x38 = 0;
  *(longlong *)&(this->DocumentPtr).field_0x10 = lVar1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x20;
    if (*(undefined8 **)&param_1->field_0x38 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_1->field_0x38;
    }
    (**(code **)*puVar2)();
  }
  if (*(longlong *)&param_1->field_0x10 != 0) {
    plVar3 = (longlong *)&param_1->field_0x20;
    if (*(longlong **)&param_1->field_0x38 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x38;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return this;
}

// operator() @ 14ae1eae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstClassAccessPtr * __thiscall
`Metasound::Frontend::FDocumentController::FindOrAddClass'::__l5::<lambda_1>::operator()
          (void *this,FConstClassAccessPtr *__return_storage_ptr__,FMetasoundFrontendClass *param_1,
          FGuid *param_2)

{
  longlong lVar1;
  FMetasoundFrontendClass *pFVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  FName FVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  EMetasoundFrontendClassType EVar23;
  bool bVar24;
  int iVar25;
  FConstClassAccessPtr *pFVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  FScriptContainerElement *pFVar29;
  ForAnyElementType *pFVar30;
  undefined1 auStack_c8 [32];
  FMetasoundFrontendClass *local_a8;
  FMetasoundFrontendClass *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_78 [16];
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  Metasound::Frontend::FConstClassAccessPtr::FConstClassAccessPtr(__return_storage_ptr__);
  EVar23 = FMetasoundFrontendClassMetadata::GetType(&param_1->Metadata);
  if (EVar23 == Graph) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("EMetasoundFrontendClassType::Graph != NewClassDescription.Metadata.GetType()"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentController.cpp"
                        ,0x122,L"");
    if (bVar24) {
      pcVar3 = (code *)swi(3);
      pFVar26 = (FConstClassAccessPtr *)(*pcVar3)();
      return pFVar26;
    }
  }
  uVar4 = param_2->B;
  uVar6 = param_2->C;
  uVar7 = param_2->D;
  (param_1->ID).A = param_2->A;
  (param_1->ID).B = uVar4;
  (param_1->ID).C = uVar6;
  (param_1->ID).D = uVar7;
  lVar1 = *(longlong *)((longlong)this + 0x30);
  pFVar30 = (ForAnyElementType *)(lVar1 + 0x178);
  pFVar2 = (FMetasoundFrontendClass *)pFVar30->Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + *(int *)(lVar1 + 0x184))) {
    local_90 = (longlong)*(int *)(lVar1 + 0x180);
    local_88 = 0x90;
    local_a8 = param_1;
    local_a0 = pFVar2;
    local_98 = (longlong)*(int *)(lVar1 + 0x184);
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar24) {
      pcVar3 = (code *)swi(3);
      pFVar26 = (FConstClassAccessPtr *)(*pcVar3)();
      return pFVar26;
    }
  }
  iVar25 = *(int *)(lVar1 + 0x180);
  if (iVar25 == *(int *)(lVar1 + 0x184)) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x890,pFVar30,(int *)(lVar1 + 0x184));
  }
  *(int *)(lVar1 + 0x180) = iVar25 + 1;
  pFVar29 = pFVar30->Data + (longlong)iVar25 * 0x90;
  *(undefined ***)pFVar29 = &___7FMetasoundFrontendClass__6B_;
  uVar19 = *(undefined8 *)&(param_1->ID).C;
  *(undefined8 *)(pFVar29 + 8) = *(undefined8 *)&param_1->ID;
  *(undefined8 *)(pFVar29 + 0x10) = uVar19;
  FVar20 = (param_1->Metadata).ClassName.Name;
  *(FName *)(pFVar29 + 0x18) = (param_1->Metadata).ClassName.Namespace;
  *(FName *)(pFVar29 + 0x20) = FVar20;
  uVar4 = (param_1->Metadata).ClassName.Variant.Number;
  iVar25 = (param_1->Metadata).Version.Major;
  iVar5 = (param_1->Metadata).Version.Minor;
  *(uint *)(pFVar29 + 0x28) = (param_1->Metadata).ClassName.Variant.ComparisonIndex.Value;
  *(uint *)(pFVar29 + 0x2c) = uVar4;
  *(int *)(pFVar29 + 0x30) = iVar25;
  *(int *)(pFVar29 + 0x34) = iVar5;
  uVar19 = *(undefined8 *)&(param_1->Metadata).ChangeID.B;
  *(undefined8 *)(pFVar29 + 0x38) = *(undefined8 *)&(param_1->Metadata).Type;
  *(undefined8 *)(pFVar29 + 0x40) = uVar19;
  *(uint *)(pFVar29 + 0x48) = (param_1->Metadata).ChangeID.D;
  *(undefined8 *)(pFVar29 + 0x50) = 0;
  *(FScriptContainerElement **)(pFVar29 + 0x50) = (param_1->Interface).Inputs.AllocatorInstance.Data
  ;
  (param_1->Interface).Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar29 + 0x58) = (param_1->Interface).Inputs.ArrayNum;
  *(int *)(pFVar29 + 0x5c) = (param_1->Interface).Inputs.ArrayMax;
  (param_1->Interface).Inputs.ArrayNum = 0;
  (param_1->Interface).Inputs.ArrayMax = 0;
  *(undefined8 *)(pFVar29 + 0x60) = 0;
  *(FScriptContainerElement **)(pFVar29 + 0x60) =
       (param_1->Interface).Outputs.AllocatorInstance.Data;
  (param_1->Interface).Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar29 + 0x68) = (param_1->Interface).Outputs.ArrayNum;
  *(int *)(pFVar29 + 0x6c) = (param_1->Interface).Outputs.ArrayMax;
  (param_1->Interface).Outputs.ArrayNum = 0;
  (param_1->Interface).Outputs.ArrayMax = 0;
  *(undefined8 *)(pFVar29 + 0x70) = 0;
  *(FScriptContainerElement **)(pFVar29 + 0x70) =
       (param_1->Interface).Environment.AllocatorInstance.Data;
  (param_1->Interface).Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar29 + 0x78) = (param_1->Interface).Environment.ArrayNum;
  *(int *)(pFVar29 + 0x7c) = (param_1->Interface).Environment.ArrayMax;
  (param_1->Interface).Environment.ArrayNum = 0;
  (param_1->Interface).Environment.ArrayMax = 0;
  uVar4 = (param_1->Interface).ChangeID.B;
  uVar6 = (param_1->Interface).ChangeID.C;
  uVar7 = (param_1->Interface).ChangeID.D;
  *(uint *)(pFVar29 + 0x80) = (param_1->Interface).ChangeID.A;
  *(uint *)(pFVar29 + 0x84) = uVar4;
  *(uint *)(pFVar29 + 0x88) = uVar6;
  *(uint *)(pFVar29 + 0x8c) = uVar7;
  puVar27 = (undefined8 *)
            (**(code **)(**(longlong **)this + 0x88))
                      (*(longlong **)this,local_78,(longlong)this + 8);
  *(undefined8 *)__return_storage_ptr__ = *puVar27;
  uVar19 = puVar27[3];
  uVar8 = *(undefined4 *)&__return_storage_ptr__->field_0x10;
  uVar9 = *(undefined4 *)&__return_storage_ptr__->field_0x14;
  uVar10 = *(undefined4 *)&__return_storage_ptr__->field_0x18;
  uVar11 = *(undefined4 *)&__return_storage_ptr__->field_0x1c;
  uVar12 = *(undefined4 *)&__return_storage_ptr__->field_0x20;
  uVar13 = *(undefined4 *)&__return_storage_ptr__->field_0x24;
  uVar14 = *(undefined4 *)&__return_storage_ptr__->field_0x28;
  uVar15 = *(undefined4 *)&__return_storage_ptr__->field_0x2c;
  uVar21 = *(undefined8 *)&__return_storage_ptr__->field_0x30;
  uVar22 = *(undefined8 *)&__return_storage_ptr__->field_0x38;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = puVar27[2];
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar19;
  uVar16 = *(undefined4 *)((longlong)puVar27 + 0x24);
  uVar17 = *(undefined4 *)(puVar27 + 5);
  uVar18 = *(undefined4 *)((longlong)puVar27 + 0x2c);
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)(puVar27 + 4);
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = uVar16;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = uVar17;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = uVar18;
  uVar16 = *(undefined4 *)((longlong)puVar27 + 0x34);
  uVar17 = *(undefined4 *)(puVar27 + 7);
  uVar18 = *(undefined4 *)((longlong)puVar27 + 0x3c);
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = *(undefined4 *)(puVar27 + 6);
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = uVar16;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = uVar17;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = uVar18;
  *(undefined4 *)(puVar27 + 2) = uVar8;
  *(undefined4 *)((longlong)puVar27 + 0x14) = uVar9;
  *(undefined4 *)(puVar27 + 3) = uVar10;
  *(undefined4 *)((longlong)puVar27 + 0x1c) = uVar11;
  *(undefined4 *)(puVar27 + 4) = uVar12;
  *(undefined4 *)((longlong)puVar27 + 0x24) = uVar13;
  *(undefined4 *)(puVar27 + 5) = uVar14;
  *(undefined4 *)((longlong)puVar27 + 0x2c) = uVar15;
  puVar27[6] = uVar21;
  puVar27[7] = uVar22;
  if (local_68 != 0) {
    plVar28 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar28 = local_40;
    }
    (**(code **)(*plVar28 + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 14ae1f000

bool __thiscall
`Metasound::Frontend::FDocumentController::DeduplicateDependencies'::__l5::<lambda_2>::operator()
          (void *this,FMetasoundFrontendClass *param_1,FMetasoundFrontendClass *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  FMetasoundFrontendVersionNumber *pFVar9;
  FMetasoundFrontendVersionNumber *pFVar10;
  FMetasoundFrontendClassInterface *pFVar11;
  
  uVar1 = (param_2->ID).A;
  uVar2 = (param_1->ID).A;
  if (uVar2 < uVar1) {
LAB_14ae1f114:
    bVar8 = true;
  }
  else {
    if (uVar2 == uVar1) {
      uVar3 = (param_2->ID).B;
      uVar4 = (param_1->ID).B;
      if (uVar4 < uVar3) goto LAB_14ae1f114;
      if (uVar4 <= uVar3) {
        uVar3 = (param_2->ID).C;
        uVar4 = (param_1->ID).C;
        if ((uVar4 < uVar3) || ((uVar4 <= uVar3 && ((param_1->ID).D < (param_2->ID).D))))
        goto LAB_14ae1f114;
      }
    }
    if (uVar2 <= uVar1) {
      uVar1 = (param_1->ID).B;
      uVar2 = (param_2->ID).B;
      if (uVar1 <= uVar2) {
        if (uVar2 <= uVar1) {
          uVar1 = (param_1->ID).C;
          uVar2 = (param_2->ID).C;
          if ((uVar2 < uVar1) || ((uVar2 <= uVar1 && ((param_2->ID).D < (param_1->ID).D))))
          goto LAB_14ae1f110;
        }
        pFVar9 = FMetasoundFrontendClassMetadata::GetVersion(&param_2->Metadata);
        pFVar10 = FMetasoundFrontendClassMetadata::GetVersion(&param_1->Metadata);
        if ((pFVar9->Major < pFVar10->Major) ||
           ((pFVar10->Major == pFVar9->Major && (pFVar9->Minor < pFVar10->Minor))))
        goto LAB_14ae1f114;
        pFVar9 = FMetasoundFrontendClassMetadata::GetVersion(&param_2->Metadata);
        pFVar10 = FMetasoundFrontendClassMetadata::GetVersion(&param_1->Metadata);
        if ((pFVar9->Major <= pFVar10->Major) &&
           ((pFVar10->Major != pFVar9->Major || (pFVar9->Minor <= pFVar10->Minor)))) {
          pFVar11 = FMetasoundFrontendClass::GetDefaultInterface(param_1);
          iVar5 = (pFVar11->Inputs).ArrayNum;
          pFVar11 = FMetasoundFrontendClass::GetDefaultInterface(param_1);
          iVar6 = (pFVar11->Outputs).ArrayNum;
          pFVar11 = FMetasoundFrontendClass::GetDefaultInterface(param_2);
          iVar7 = (pFVar11->Inputs).ArrayNum;
          pFVar11 = FMetasoundFrontendClass::GetDefaultInterface(param_2);
          return (pFVar11->Outputs).ArrayNum + iVar7 < iVar6 + iVar5;
        }
      }
    }
LAB_14ae1f110:
    bVar8 = false;
  }
  return bVar8;
}

// AddDuplicateSubgraph @ 14ae20750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::FDocumentController::AddDuplicateSubgraph
          (FDocumentController *this,FMetasoundFrontendGraphClass *param_1,
          FMetasoundFrontendDocument *param_2)

{
  FMetasoundFrontendClassMetadata *this_00;
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  FGuid *pFVar4;
  EMetasoundFrontendClassType EVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  FMetasoundFrontendGraphClass *pFVar16;
  ForAnyElementType *pFVar17;
  FScriptContainerElement *pFVar18;
  FMetasoundFrontendGraphClass *pFVar19;
  FGuid *this_01;
  FGuid *pFVar20;
  undefined1 auStack_248 [32];
  FMetasoundFrontendGraphClass *local_228;
  FMetasoundFrontendGraphClass *local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  undefined1 local_1f8 [4];
  uint local_1f4;
  FDocumentController *local_1f0;
  FString local_1e8;
  FMetasoundFrontendGraph *local_1d8;
  FGuid *local_1d0;
  longlong local_1c8;
  uint local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  FString local_1b0;
  FString local_1a0;
  undefined1 local_188 [16];
  longlong local_178;
  longlong local_168 [3];
  longlong *local_150;
  FMetasoundFrontendGraphClass local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_1f0 = this;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar13 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar2 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar11 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar13 != (longlong *)0x0) {
    plVar11 = plVar13;
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  local_1c8 = (*pcVar2)(uVar10);
  *(longlong *)&this->DocumentPtr = local_1c8;
  bVar8 = false;
  if (local_1c8 != 0) {
    bVar8 = true;
    FMetasoundFrontendGraphClass::FMetasoundFrontendGraphClass(&local_148,param_1);
    local_1d8 = FMetasoundFrontendGraphClass::GetDefaultGraph(&local_148);
    local_1f4 = (local_1d8->Nodes).ArrayNum;
    uVar14 = (ulonglong)(int)local_1f4;
    this_01 = (FGuid *)(local_1d8->Nodes).AllocatorInstance.Data;
    pFVar20 = this_01 + 1;
    local_1d0 = (FGuid *)((longlong)this_01 + uVar14 * 0x88);
    while( true ) {
      pFVar4 = local_1d0;
      if ((local_1d8->Nodes).ArrayNum != (int)uVar14) {
        local_1f8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendNode,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1f8);
      }
      lVar12 = local_1c8;
      if (this_01 == pFVar4) break;
      local_1c0 = pFVar20->A;
      uStack_1bc = pFVar20->B;
      uStack_1b8 = pFVar20->C;
      uStack_1b4 = pFVar20->D;
      pFVar15 = (param_2->Dependencies).AllocatorInstance.Data;
      uVar1 = pFVar20->C;
      pFVar18 = pFVar15 + (longlong)(param_2->Dependencies).ArrayNum * 0x90;
      for (; pFVar15 != pFVar18; pFVar15 = pFVar15 + 0x90) {
        if (((uStack_1b4 == *(uint *)(pFVar15 + 0x14) && uVar1 == *(int *)(pFVar15 + 0x10)) &&
            uStack_1bc == *(uint *)(pFVar15 + 0xc)) && local_1c0 == *(uint *)(pFVar15 + 8)) {
          this_00 = (FMetasoundFrontendClassMetadata *)(pFVar15 + 0x18);
          EVar5 = FMetasoundFrontendClassMetadata::GetType(this_00);
          if ((EVar5 == Graph) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("EMetasoundFrontendClassType::Graph != OriginalNodeClass->Metadata.GetType()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentController.cpp"
                                 ,0x6a,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
          plVar11 = (longlong *)
                    (**(code **)(local_1f0->_padding_ + 0x90))(local_1f0,local_188,this_00);
          UE::Core::Private::Function::CheckCallable((void *)plVar11[2]);
          pcVar2 = (code *)plVar11[2];
          plVar13 = plVar11 + 4;
          if ((longlong *)plVar11[7] != (longlong *)0x0) {
            plVar13 = (longlong *)plVar11[7];
          }
          uVar10 = (**(code **)(*plVar13 + 8))();
          lVar12 = (*pcVar2)(uVar10);
          *plVar11 = lVar12;
          if (local_178 != 0) {
            plVar13 = local_168;
            if (local_150 != (longlong *)0x0) {
              plVar13 = local_150;
            }
            (**(code **)(*plVar13 + 0x10))();
          }
          if (lVar12 == 0) {
            if (1 < (byte)LogMetaSound._0_1_) {
              FMetasoundFrontendClassName::ToString
                        ((FMetasoundFrontendClassName *)this_00,&local_1b0);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
              }
            }
            bVar8 = false;
            this = local_1f0;
          }
          else {
            uVar10 = *(undefined8 *)(lVar12 + 8);
            uVar3 = *(undefined8 *)(lVar12 + 0x10);
            pFVar20->A = (int)uVar10;
            pFVar20->B = (int)((ulonglong)uVar10 >> 0x20);
            pFVar20->C = (int)uVar3;
            pFVar20->D = (int)((ulonglong)uVar3 >> 0x20);
            this = local_1f0;
          }
          goto LAB_14ae20ab9;
        }
      }
      pFVar16 = (FMetasoundFrontendGraphClass *)(param_2->Subgraphs).AllocatorInstance.Data;
      pFVar19 = pFVar16 + (param_2->Subgraphs).ArrayNum;
      for (; pFVar16 != pFVar19; pFVar16 = pFVar16 + 1) {
        if (((uStack_1b4 == *(uint *)((longlong)&pFVar16->_padding_ + 4) &&
             uVar1 == (int)pFVar16->_padding_) &&
            uStack_1bc == *(uint *)((longlong)&pFVar16->_padding_ + 4)) &&
            local_1c0 == (uint)pFVar16->_padding_) {
          if ((bVar8) && (bVar8 = AddDuplicateSubgraph(this,pFVar16,param_2), bVar8)) {
            bVar8 = true;
            goto LAB_14ae20ab9;
          }
          bVar8 = false;
          goto LAB_14ae20b99;
        }
      }
      bVar8 = false;
      if (1 < (byte)LogMetaSound._0_1_) {
        local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.Data.ArrayNum = 0;
        local_1e8.Data.ArrayMax = 0;
        FGuid::AppendString(this_01,&local_1e8,Digits);
        ::FName::ToString((FName *)(pFVar20 + 1),&local_1a0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
      }
LAB_14ae20ab9:
      this_01 = (FGuid *)&this_01[8].C;
      pFVar20 = (FGuid *)&pFVar20[8].C;
      uVar14 = (ulonglong)local_1f4;
    }
    if (bVar8) {
      pFVar17 = (ForAnyElementType *)(local_1c8 + 0x168);
      pFVar16 = (FMetasoundFrontendGraphClass *)pFVar17->Data;
      if ((pFVar16 <= &local_148) && (&local_148 < pFVar16 + *(int *)(local_1c8 + 0x174))) {
        local_210 = (longlong)*(int *)(local_1c8 + 0x170);
        local_208 = 0xf8;
        local_228 = &local_148;
        local_220 = pFVar16;
        local_218 = (longlong)*(int *)(local_1c8 + 0x174);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      iVar9 = *(int *)(lVar12 + 0x170);
      if (iVar9 == *(int *)(lVar12 + 0x174)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8f8,pFVar17,(int *)(lVar12 + 0x174));
      }
      *(int *)(lVar12 + 0x170) = iVar9 + 1;
      FMetasoundFrontendGraphClass::FMetasoundFrontendGraphClass
                ((FMetasoundFrontendGraphClass *)(pFVar17->Data + (longlong)iVar9 * 0xf8),&local_148
                );
    }
LAB_14ae20b99:
    FMetasoundFrontendGraphClass::~FMetasoundFrontendGraphClass(&local_148);
  }
  return bVar8;
}

// AddDuplicateSubgraph @ 14ae20bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
Metasound::Frontend::FDocumentController::AddDuplicateSubgraph
          (FDocumentController *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__,
          IGraphController *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  FMetasoundFrontendDocument *pFVar4;
  FMetasoundFrontendGraphClass *pFVar5;
  TAccessPtr<FMetasoundFrontendClass_const_> *this_00;
  FMetasoundFrontendClass *pFVar6;
  longlong *plVar7;
  undefined1 auStack_4a8 [32];
  uint local_488;
  uint uStack_484;
  uint uStack_480;
  uint uStack_47c;
  undefined1 local_478 [16];
  longlong local_468;
  longlong local_458 [3];
  longlong *local_440;
  undefined1 local_438 [464];
  code *local_268;
  longlong local_258 [3];
  longlong *local_240;
  undefined1 local_238 [336];
  code *local_e8;
  longlong local_d8 [3];
  longlong *local_c0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x228))(param_1,&local_488);
  IDocumentAccessor::GetSharedAccess((FConstDocumentAccess *)local_438,(IDocumentAccessor *)*puVar2)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(uStack_47c,uStack_480));
  UE::Core::Private::Function::CheckCallable(local_268);
  plVar7 = local_258;
  if (local_240 != (longlong *)0x0) {
    plVar7 = local_240;
  }
  uVar3 = (**(code **)(*plVar7 + 8))();
  pFVar4 = (FMetasoundFrontendDocument *)(*local_268)(uVar3);
  local_438._448_8_ = pFVar4;
  if (pFVar4 == (FMetasoundFrontendDocument *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
    IGraphController::GetInvalidHandle(__return_storage_ptr__);
    goto LAB_14ae20d39;
  }
  IDocumentAccessor::GetSharedAccess((FConstDocumentAccess *)local_238,(IDocumentAccessor *)param_1)
  ;
  UE::Core::Private::Function::CheckCallable(local_e8);
  plVar7 = local_d8;
  if (local_c0 != (longlong *)0x0) {
    plVar7 = local_c0;
  }
  uVar3 = (**(code **)(*plVar7 + 8))();
  pFVar5 = (FMetasoundFrontendGraphClass *)(*local_e8)(uVar3);
  local_238._320_8_ = pFVar5;
  if (pFVar5 == (FMetasoundFrontendGraphClass *)0x0) {
    if (1 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
LAB_14ae20d25:
    IGraphController::GetInvalidHandle(__return_storage_ptr__);
  }
  else {
    bVar1 = AddDuplicateSubgraph(this,pFVar5,pFVar4);
    if (!bVar1) goto LAB_14ae20d25;
    this_00 = (TAccessPtr<FMetasoundFrontendClass_const_> *)
              (**(code **)(this->_padding_ + 0x80))(this,local_478,&pFVar5->_padding_);
    pFVar6 = TAccessPtr<FMetasoundFrontendClass_const_>::Get(this_00);
    if (local_468 != 0) {
      plVar7 = local_458;
      if (local_440 != (longlong *)0x0) {
        plVar7 = local_440;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    if (pFVar6 == (FMetasoundFrontendClass *)0x0) goto LAB_14ae20d25;
    local_488 = (pFVar6->ID).A;
    uStack_484 = (pFVar6->ID).B;
    uStack_480 = (pFVar6->ID).C;
    uStack_47c = (pFVar6->ID).D;
    (**(code **)(this->_padding_ + 0xf0))(this,__return_storage_ptr__,&local_488);
  }
  FConstDocumentAccess::~FConstDocumentAccess((FConstDocumentAccess *)local_238);
LAB_14ae20d39:
  FConstDocumentAccess::~FConstDocumentAccess((FConstDocumentAccess *)local_438);
  return __return_storage_ptr__;
}

// AddInterfaceVersion @ 14ae22020

void __thiscall
Metasound::Frontend::FDocumentController::AddInterfaceVersion
          (FDocumentController *this,FMetasoundFrontendVersion *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar1 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar2 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar5 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->DocumentPtr = lVar4;
  if (lVar4 != 0) {
    TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
    ::Emplace<FMetasoundFrontendVersion_const_&>
              ((TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                *)(lVar4 + 0x20),(FMetasoundFrontendVersion *)&stack0x00000008,(bool *)param_1);
  }
  return;
}

// ClearInterfaceVersions @ 14ae26590

void __thiscall
Metasound::Frontend::FDocumentController::ClearInterfaceVersions(FDocumentController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar1 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar2 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar5 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->DocumentPtr = lVar4;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x28) != *(int *)(lVar4 + 0x54))) {
    TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                      *)(lVar4 + 0x20));
    *(undefined4 *)(lVar4 + 0x28) = 0;
    if (*(int *)(lVar4 + 0x2c) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,(ForAnyElementType *)(lVar4 + 0x20),0,(int *)(lVar4 + 0x2c));
    }
    *(undefined4 *)(lVar4 + 0x50) = 0xffffffff;
    *(undefined4 *)(lVar4 + 0x54) = 0;
    *(undefined4 *)(lVar4 + 0x48) = 0;
  }
  return;
}

// DeduplicateDependencies @ 14ae2f8b0

void __thiscall
Metasound::Frontend::FDocumentController::DeduplicateDependencies(FDocumentController *this)

{
  uint *puVar1;
  TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *this_00;
  longlong *plVar2;
  code *pcVar3;
  FMetasoundFrontendClass *pFVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  FMetasoundFrontendClass *pFVar12;
  uint uVar13;
  FMetasoundFrontendClass *this_01;
  FScriptContainerElement *pFVar14;
  FIdentityFunctor local_res8;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar2 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar3 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar9 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar9 = plVar2;
  }
  uVar7 = (**(code **)(*plVar9 + 8))();
  lVar8 = (*pcVar3)(uVar7);
  *(longlong *)&this->DocumentPtr = lVar8;
  if (lVar8 != 0) {
    this_00 = (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *)(lVar8 + 0x178);
    puVar1 = (uint *)(lVar8 + 0x180);
    AlgoImpl::
    IntroSortInternal<FMetasoundFrontendClass,int,FIdentityFunctor,_Metasound::Frontend::FDocumentController::DeduplicateDependencies_::__l5::<lambda_2>_>
              ((FMetasoundFrontendClass *)(this_00->AllocatorInstance).Data,*(int *)(lVar8 + 0x180),
               local_res8,(<lambda_2>)0x0);
    uVar11 = *puVar1;
    uVar13 = uVar11;
    if (1 < (int)uVar11) {
      pFVar4 = (FMetasoundFrontendClass *)(this_00->AllocatorInstance).Data;
      pFVar12 = pFVar4 + 1;
      this_01 = pFVar4;
      if (pFVar12 != pFVar4 + (int)uVar11) {
        do {
          if (((((pFVar12->ID).D != (this_01->ID).D || (pFVar12->ID).C != (this_01->ID).C) ||
               (pFVar12->ID).B != (this_01->ID).B) || (pFVar12->ID).A != (this_01->ID).A) &&
             (this_01 = this_01 + 1, this_01 != pFVar12)) {
            FMetasoundFrontendClass::operator=(this_01,pFVar12);
          }
          pFVar12 = pFVar12 + 1;
        } while (pFVar12 != pFVar4 + (int)uVar11);
        uVar11 = *puVar1;
      }
      pFVar14 = (FScriptContainerElement *)((longlong)this_01 + (0x90 - (longlong)pFVar4));
      lVar10 = (longlong)pFVar14 / 0x12 + ((longlong)pFVar14 >> 0x3f);
      uVar13 = (int)(lVar10 >> 3) - (int)(lVar10 >> 0x3f);
      if ((int)uVar11 < (int)uVar13) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x90,8,uVar13 - uVar11,(ForAnyElementType *)this_00,(int *)puVar1,
                           (int *)(lVar8 + 0x184));
        DefaultConstructItems<FMetasoundFrontendClass,int>
                  ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x90,uVar13 - uVar11);
        return;
      }
    }
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if ((int)uVar13 < (int)uVar11) {
      uVar11 = uVar11 - uVar13;
      if (((int)(uVar11 | uVar13) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar11 != 0) {
        TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar13,uVar11);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,8,(ForAnyElementType *)this_00,*puVar1,(int *)(lVar8 + 0x184));
      }
    }
  }
  return;
}

// ExportToJSON @ 14ae31830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
Metasound::Frontend::FDocumentController::ExportToJSON
          (FDocumentController *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *pTVar5;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *pTVar6;
  UScriptStruct *pUVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStackY_188 [32];
  ForAnyElementType local_158;
  int local_150 [2];
  TRawPtrProxy<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>_> local_148;
  IStructSerializerBackend local_140;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_138;
  undefined4 local_128;
  FArchiveState local_118;
  undefined8 local_88;
  ForAnyElementType *local_80;
  undefined8 local_78;
  undefined1 local_68 [56];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar6 = (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar9 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar1 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar8 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar9 != (longlong *)0x0) {
    plVar8 = plVar9;
  }
  uVar3 = (**(code **)(*plVar8 + 8))();
  pvVar4 = (void *)(*pcVar1)(uVar3);
  *(void **)&this->DocumentPtr = pvVar4;
  if (pvVar4 != (void *)0x0) {
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150[0] = 0;
    local_150[1] = 0;
    local_118._padding_ = 0;
    local_118.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_148.Object = (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *)0x0;
    local_118.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_118.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_118.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_118._40_8_ = 0;
    local_118.ArSerializingDefaults = 0;
    local_118.ArPortFlags = 0;
    local_118.ArMaxSerializeSize = 0;
    local_118.ArUEVer.FileVersionUE4 = 0;
    local_118.ArUEVer.FileVersionUE5 = 0;
    local_118.ArLicenseeUEVer = 0;
    local_118.ArEngineVer.Major = 0;
    local_118.ArEngineVer.Minor = 0;
    local_118.ArEngineVer.Patch = 0;
    local_118.ArEngineVer._6_2_ = 0;
    local_118.ArEngineVer.Changelist = 0;
    local_118.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_118.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_118.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_118.SerializedProperty = (FProperty *)0x0;
    local_118.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_118.bCustomVersionsAreReset = false;
    local_118._129_7_ = 0;
    local_118.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_118);
    local_88 = 0;
    local_118._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_80 = &local_158;
    local_78 = 0;
    FArchiveState::SetIsSaving(&local_118,true);
    (**(code **)(local_118._padding_ + 0x108))(&local_118,0);
    local_118._padding_ = (longlong)&___7FMemoryWriter__6B_;
    local_140 = (IStructSerializerBackend)
                &___7__TJsonStructSerializerBackend_DU__TPrettyJsonPrintPolicy_D___Metasound__6B_;
    pTVar5 = ::operator_new(0x28);
    if (pTVar5 != (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *)0x0) {
      (pTVar5->Stack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar5->_padding_ = (longlong)&___7__TJsonWriter_DU__TPrettyJsonPrintPolicy_D____6B_;
      pTVar5->Stream = (FArchive *)&local_118;
      (pTVar5->Stack).ArrayNum = 0;
      (pTVar5->Stack).ArrayMax = 0;
      pTVar5->PreviousTokenWritten = None;
      pTVar5->IndentLevel = 0;
      pTVar6 = pTVar5;
    }
    local_148.Object = pTVar6;
    TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1>::
    TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1><TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>_>
              (&local_138,&local_148);
    local_128 = 3;
    local_68._0_4_ = Serialize;
    local_68._4_4_ = Ignore;
    local_68._8_4_ = KeyValuePair;
    local_68._16_8_ = 0;
    local_30 = (longlong *)0x0;
    pUVar7 = FMetasoundFrontendDocument::StaticStruct();
    FStructSerializer::Serialize
              (pvVar4,(UStruct *)pUVar7,&local_140,(FStructSerializerPolicies *)local_68);
    if (local_68._16_8_ != 0) {
      plVar9 = (longlong *)(local_68 + 0x20);
      if (local_30 != (longlong *)0x0) {
        plVar9 = local_30;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,1,&local_158,local_150,local_150 + 1);
    local_158.Data[iVar2] = (FScriptContainerElement)0x0;
    ::FString::AppendChars(__return_storage_ptr__,(char *)local_158.Data,local_150[0]);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.SharedReferenceCount.ReferenceController);
    local_140 = (IStructSerializerBackend)&___7IStructSerializerBackend__6B_;
    FArchive::~FArchive((FArchive *)&local_118);
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data);
    }
  }
  return __return_storage_ptr__;
}

// ExportToJSONAsset @ 14ae31a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::FDocumentController::ExportToJSONAsset
          (FDocumentController *this,FString *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  IFileManager *pIVar4;
  FArchive *pFVar5;
  TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *pTVar6;
  UScriptStruct *pUVar7;
  longlong *plVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  undefined1 auStack_b8 [32];
  TRawPtrProxy<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>_> local_98;
  IStructSerializerBackend local_90;
  TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> local_88;
  undefined4 local_78;
  undefined1 local_68 [56];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar9 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar1 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar8 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar9 != (longlong *)0x0) {
    plVar8 = plVar9;
  }
  uVar2 = (**(code **)(*plVar8 + 8))();
  pvVar3 = (void *)(*pcVar1)(uVar2);
  *(void **)&this->DocumentPtr = pvVar3;
  if (pvVar3 != (void *)0x0) {
    pIVar4 = IFileManager::Get();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar5 = (FArchive *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,pwVar10,0);
    if (pFVar5 != (FArchive *)0x0) {
      local_90 = (IStructSerializerBackend)
                 &___7__TJsonStructSerializerBackend_DU__TPrettyJsonPrintPolicy_D___Metasound__6B_;
      pTVar6 = ::operator_new(0x28);
      local_98.Object = (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *)0x0;
      if (pTVar6 != (TJsonWriter<char,TPrettyJsonPrintPolicy<char>_> *)0x0) {
        pTVar6->Stream = pFVar5;
        pTVar6->_padding_ = (longlong)&___7__TJsonWriter_DU__TPrettyJsonPrintPolicy_D____6B_;
        (pTVar6->Stack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pTVar6->Stack).ArrayNum = 0;
        (pTVar6->Stack).ArrayMax = 0;
        pTVar6->PreviousTokenWritten = None;
        pTVar6->IndentLevel = 0;
        local_98.Object = pTVar6;
      }
      TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1>::
      TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1><TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>_>
                (&local_88,&local_98);
      local_78 = 3;
      local_68._0_4_ = Serialize;
      local_68._4_4_ = Ignore;
      local_68._8_4_ = KeyValuePair;
      local_68._16_8_ = 0;
      local_30 = (longlong *)0x0;
      pUVar7 = FMetasoundFrontendDocument::StaticStruct();
      FStructSerializer::Serialize
                (pvVar3,(UStruct *)pUVar7,&local_90,(FStructSerializerPolicies *)local_68);
      if (local_68._16_8_ != 0) {
        plVar9 = (longlong *)(local_68 + 0x20);
        if (local_30 != (longlong *)0x0) {
          plVar9 = local_30;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      (**(code **)(*(longlong *)pFVar5 + 0x210))(pFVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      local_90 = (IStructSerializerBackend)&___7IStructSerializerBackend__6B_;
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
      return true;
    }
    if (1 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    }
  }
  return false;
}

// FindClass @ 14ae32110

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentController::FindClass
          (FDocumentController *this,FConstClassAccessPtr *__return_storage_ptr__,
          FMetasoundFrontendClassMetadata *param_1)

{
  FDocumentAccessPtr::GetClassWithMetadata(&this->DocumentPtr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FindClass @ 14ae32140

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentController::FindClass
          (FDocumentController *this,FConstClassAccessPtr *__return_storage_ptr__,
          FNodeClassRegistryKey *param_1)

{
  FDocumentAccessPtr::GetClassWithRegistryKey(&this->DocumentPtr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FindClassWithID @ 14ae32330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentController::FindClassWithID
          (FDocumentController *this,FConstClassAccessPtr *__return_storage_ptr__,FGuid *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_148 [32];
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  code *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong *local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong *plStack_80;
  undefined1 local_78 [16];
  longlong local_68;
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128 = param_1->A;
  uStack_124 = param_1->B;
  uStack_120 = param_1->C;
  uStack_11c = param_1->D;
  (**(code **)(this->_padding_ + 0x50))(local_128,__return_storage_ptr__,&local_128);
  UE::Core::Private::Function::CheckCallable(*(void **)&__return_storage_ptr__->field_0x10);
  pcVar9 = *(code **)&__return_storage_ptr__->field_0x10;
  plVar11 = (longlong *)&__return_storage_ptr__->field_0x20;
  if (*(longlong **)&__return_storage_ptr__->field_0x38 != (longlong *)0x0) {
    plVar11 = *(longlong **)&__return_storage_ptr__->field_0x38;
  }
  uVar6 = (**(code **)(*plVar11 + 8))();
  lVar7 = (*pcVar9)(uVar6);
  *(longlong *)__return_storage_ptr__ = lVar7;
  if (lVar7 == 0) {
    local_128 = param_1->A;
    uStack_124 = param_1->B;
    uStack_120 = param_1->C;
    uStack_11c = param_1->D;
    lVar7 = (**(code **)(this->_padding_ + 0x58))(this,local_78,&local_128);
    local_118 = 0;
    local_108 = (code *)0x0;
    uStack_e0 = (longlong *)0x0;
    local_d8 = *(longlong *)(lVar7 + 0x10);
    local_b0 = (longlong *)0x0;
    if (local_d8 != 0) {
      puVar10 = (undefined8 *)(lVar7 + 0x20);
      if (*(undefined8 **)(lVar7 + 0x38) != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)(lVar7 + 0x38);
      }
      (**(code **)*puVar10)(puVar10,&local_c8);
    }
    local_a8 = (code *)0x0;
    plVar8 = FMemory::Malloc(0x40,0x10);
    plStack_80 = uStack_e0;
    uVar5 = local_e8;
    uVar4 = uStack_ec;
    uVar3 = uStack_f0;
    uVar2 = uStack_f4;
    uVar1 = local_f8;
    uVar6 = uStack_100;
    *plVar8 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1_____0__CBUFMetasoundFrontendGraphClass_____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr___CBUFMetasoundFrontendGraphClass___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
    ;
    plVar11 = plVar8 + 2;
    *plVar11 = local_d8;
    plVar8[7] = (longlong)local_b0;
    local_b0 = (longlong *)0x0;
    plVar8[4] = local_c8;
    plVar8[5] = lStack_c0;
    plVar8[6] = local_b8;
    if (*plVar11 != 0) {
      local_d8 = 0;
    }
    pcVar9 = local_a8;
    if (plVar11 != (longlong *)0x0) {
      pcVar9 = UE::Core::Private::Function::
               TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendGraphClass_const_>'::__l2::<lambda_1>,FMetasoundFrontendClass_const_*>
               ::Call;
    }
    uStack_100 = uStack_a0;
    local_e8 = local_88;
    uStack_e0 = plVar8;
    local_f8 = local_98;
    uStack_f4 = uStack_94;
    uStack_f0 = uStack_90;
    uStack_ec = uStack_8c;
    local_a8 = local_108;
    uStack_a0 = uVar6;
    local_98 = uVar1;
    uStack_94 = uVar2;
    uStack_90 = uVar3;
    uStack_8c = uVar4;
    local_88 = uVar5;
    bVar12 = local_108 != (code *)0x0;
    local_108 = pcVar9;
    if (bVar12) {
      plVar11 = (longlong *)&local_98;
      if (plStack_80 != (longlong *)0x0) {
        plVar11 = plStack_80;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (local_d8 != 0) {
      plVar11 = &local_c8;
      if (local_b0 != (longlong *)0x0) {
        plVar11 = local_b0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    UE::Core::Private::Function::CheckCallable(local_108);
    pcVar9 = local_108;
    plVar11 = (longlong *)&local_f8;
    if (uStack_e0 != (longlong *)0x0) {
      plVar11 = uStack_e0;
    }
    uVar6 = (**(code **)(*plVar11 + 8))();
    local_118 = (*pcVar9)(uVar6);
    *(undefined8 *)__return_storage_ptr__ = local_118;
    lVar7 = *(longlong *)&__return_storage_ptr__->field_0x10;
    uVar5 = *(undefined8 *)&__return_storage_ptr__->field_0x18;
    uVar1 = *(undefined4 *)&__return_storage_ptr__->field_0x20;
    uVar2 = *(undefined4 *)&__return_storage_ptr__->field_0x24;
    uVar3 = *(undefined4 *)&__return_storage_ptr__->field_0x28;
    uVar4 = *(undefined4 *)&__return_storage_ptr__->field_0x2c;
    uVar6 = *(undefined8 *)&__return_storage_ptr__->field_0x30;
    plVar11 = *(longlong **)&__return_storage_ptr__->field_0x38;
    *(code **)&__return_storage_ptr__->field_0x10 = local_108;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_100;
    *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_f8;
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_f4;
    *(undefined4 *)&__return_storage_ptr__->field_0x28 = uStack_f0;
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = uStack_ec;
    *(undefined4 *)&__return_storage_ptr__->field_0x30 = (undefined4)local_e8;
    *(undefined4 *)&__return_storage_ptr__->field_0x34 = local_e8._4_4_;
    *(undefined4 *)&__return_storage_ptr__->field_0x38 = (undefined4)uStack_e0;
    *(undefined4 *)&__return_storage_ptr__->field_0x3c = uStack_e0._4_4_;
    local_f8 = uVar1;
    uStack_f4 = uVar2;
    uStack_f0 = uVar3;
    uStack_ec = uVar4;
    local_e8 = uVar6;
    uStack_e0 = plVar11;
    local_108 = (code *)lVar7;
    uStack_100 = uVar5;
    if (lVar7 != 0) {
      plVar8 = (longlong *)&local_f8;
      if (plVar11 != (longlong *)0x0) {
        plVar8 = plVar11;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_68 != 0) {
      plVar11 = local_58;
      if (local_40 != (longlong *)0x0) {
        plVar11 = local_40;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// FindDependencyWithID @ 14ae327d0

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentController::FindDependencyWithID
          (FDocumentController *this,FConstClassAccessPtr *__return_storage_ptr__,FGuid *param_1)

{
  FDocumentAccessPtr::GetDependencyWithID(&this->DocumentPtr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// FindOrAddClass @ 14ae342e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentController::FindOrAddClass
          (FDocumentController *this,FConstClassAccessPtr *__return_storage_ptr__,
          FMetasoundFrontendClassMetadata *param_1)

{
  code *pcVar1;
  FMetasoundFrontendGraphClass *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  EMetasoundFrontendClassType EVar16;
  bool bVar17;
  int iVar18;
  undefined8 uVar19;
  longlong lVar20;
  FMetasoundFrontendVersionNumber *pFVar21;
  FMetasoundFrontendVersionNumber *pFVar22;
  FConstClassAccessPtr *pFVar23;
  FGuid *pFVar24;
  FString *pFVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  longlong *plVar28;
  ForAnyElementType *pFVar29;
  wchar_t *pwVar30;
  undefined1 auStack_348 [32];
  FMetasoundFrontendGraphClass *local_328;
  FMetasoundFrontendGraphClass *local_320;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  undefined1 local_2f8 [24];
  FMetasoundFrontendClassMetadata local_2e0;
  ForAnyElementType local_2a8;
  longlong local_2a0;
  ForAnyElementType local_298;
  longlong local_290;
  ForAnyElementType local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FNodeClassRegistryKey local_218;
  FGuid local_1f0;
  FGuid local_1e0;
  undefined1 local_1c8 [56];
  longlong *plStack_190;
  undefined1 local_188 [16];
  longlong local_178;
  longlong local_168 [3];
  longlong *local_150;
  FMetasoundFrontendGraphClass local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  (**(code **)(this->_padding_ + 0x80))();
  UE::Core::Private::Function::CheckCallable(*(void **)&__return_storage_ptr__->field_0x10);
  pcVar1 = *(code **)&__return_storage_ptr__->field_0x10;
  plVar28 = (longlong *)&__return_storage_ptr__->field_0x20;
  if (*(longlong **)&__return_storage_ptr__->field_0x38 != (longlong *)0x0) {
    plVar28 = *(longlong **)&__return_storage_ptr__->field_0x38;
  }
  uVar19 = (**(code **)(*plVar28 + 8))();
  lVar20 = (*pcVar1)(uVar19);
  *(longlong *)__return_storage_ptr__ = lVar20;
  if ((lVar20 != 0) &&
     ((EVar16 = FMetasoundFrontendClassMetadata::GetType(param_1), EVar16 == External ||
      (EVar16 = FMetasoundFrontendClassMetadata::GetType(param_1), EVar16 == Template)))) {
    pFVar21 = FMetasoundFrontendClassMetadata::GetVersion
                        ((FMetasoundFrontendClassMetadata *)(lVar20 + 0x18));
    pFVar22 = FMetasoundFrontendClassMetadata::GetVersion(param_1);
    if (pFVar22->Major != pFVar21->Major) {
      local_1c8._0_8_ = 0;
      local_1c8._8_8_ = 0;
      local_1c8._16_8_ = 0;
      local_1c8._24_8_ = 0;
      local_1c8._32_8_ = 0;
      local_1c8._40_8_ = 0;
      local_1c8._48_8_ = 0;
      plStack_190 = (longlong *)0x0;
      pFVar23 = FConstClassAccessPtr::FConstClassAccessPtr((FConstClassAccessPtr *)local_1c8);
      *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pFVar23;
      uVar19 = *(undefined8 *)&pFVar23->field_0x18;
      uVar3 = *(undefined4 *)&__return_storage_ptr__->field_0x10;
      uVar4 = *(undefined4 *)&__return_storage_ptr__->field_0x14;
      uVar5 = *(undefined4 *)&__return_storage_ptr__->field_0x18;
      uVar6 = *(undefined4 *)&__return_storage_ptr__->field_0x1c;
      uVar7 = *(undefined4 *)&__return_storage_ptr__->field_0x20;
      uVar8 = *(undefined4 *)&__return_storage_ptr__->field_0x24;
      uVar9 = *(undefined4 *)&__return_storage_ptr__->field_0x28;
      uVar10 = *(undefined4 *)&__return_storage_ptr__->field_0x2c;
      uVar14 = *(undefined8 *)&__return_storage_ptr__->field_0x30;
      uVar15 = *(undefined8 *)&__return_storage_ptr__->field_0x38;
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&pFVar23->field_0x10;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar19;
      uVar11 = *(undefined4 *)&pFVar23->field_0x24;
      uVar12 = *(undefined4 *)&pFVar23->field_0x28;
      uVar13 = *(undefined4 *)&pFVar23->field_0x2c;
      *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)&pFVar23->field_0x20;
      *(undefined4 *)&__return_storage_ptr__->field_0x24 = uVar11;
      *(undefined4 *)&__return_storage_ptr__->field_0x28 = uVar12;
      *(undefined4 *)&__return_storage_ptr__->field_0x2c = uVar13;
      uVar11 = *(undefined4 *)&pFVar23->field_0x34;
      uVar12 = *(undefined4 *)&pFVar23->field_0x38;
      uVar13 = *(undefined4 *)&pFVar23->field_0x3c;
      *(undefined4 *)&__return_storage_ptr__->field_0x30 = *(undefined4 *)&pFVar23->field_0x30;
      *(undefined4 *)&__return_storage_ptr__->field_0x34 = uVar11;
      *(undefined4 *)&__return_storage_ptr__->field_0x38 = uVar12;
      *(undefined4 *)&__return_storage_ptr__->field_0x3c = uVar13;
      *(undefined4 *)&pFVar23->field_0x10 = uVar3;
      *(undefined4 *)&pFVar23->field_0x14 = uVar4;
      *(undefined4 *)&pFVar23->field_0x18 = uVar5;
      *(undefined4 *)&pFVar23->field_0x1c = uVar6;
      *(undefined4 *)&pFVar23->field_0x20 = uVar7;
      *(undefined4 *)&pFVar23->field_0x24 = uVar8;
      *(undefined4 *)&pFVar23->field_0x28 = uVar9;
      *(undefined4 *)&pFVar23->field_0x2c = uVar10;
      *(undefined8 *)&pFVar23->field_0x30 = uVar14;
      *(undefined8 *)&pFVar23->field_0x38 = uVar15;
      if (local_1c8._16_8_ != 0) {
        plVar28 = (longlong *)(local_1c8 + 0x20);
        if (plStack_190 != (longlong *)0x0) {
          plVar28 = plStack_190;
        }
        (**(code **)(*plVar28 + 0x10))();
      }
    }
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&__return_storage_ptr__->field_0x10);
  pcVar1 = *(code **)&__return_storage_ptr__->field_0x10;
  plVar28 = (longlong *)&__return_storage_ptr__->field_0x20;
  if (*(longlong **)&__return_storage_ptr__->field_0x38 != (longlong *)0x0) {
    plVar28 = *(longlong **)&__return_storage_ptr__->field_0x38;
  }
  uVar19 = (**(code **)(*plVar28 + 8))(plVar28);
  lVar20 = (*pcVar1)(uVar19);
  *(longlong *)__return_storage_ptr__ = lVar20;
  if (lVar20 != 0) {
    return __return_storage_ptr__;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar28 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar1 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar27 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar28 != (longlong *)0x0) {
    plVar27 = plVar28;
  }
  uVar19 = (**(code **)(*plVar27 + 8))();
  lVar20 = (*pcVar1)(uVar19);
  *(longlong *)&this->DocumentPtr = lVar20;
  if (lVar20 == 0) {
    return __return_storage_ptr__;
  }
  EVar16 = FMetasoundFrontendClassMetadata::GetType(param_1);
  if (EVar16 != External) {
    if (EVar16 == Graph) {
      FMetasoundFrontendGraphClass::FMetasoundFrontendGraphClass(&local_148);
      pFVar24 = FGuid::NewGuid(&local_1f0);
      local_148._padding_ = *(longlong *)&(param_1->ClassName).Namespace;
      local_148._padding_ = *(longlong *)&(param_1->ClassName).Name;
      local_148._padding_._0_4_ = pFVar24->A;
      local_148._padding_._4_4_ = pFVar24->B;
      local_148._padding_._0_4_ = pFVar24->C;
      local_148._padding_._4_4_ = pFVar24->D;
      local_148._padding_._0_4_ = (param_1->ChangeID).D;
      local_148._padding_._0_1_ = param_1->Type;
      local_148._padding_._1_1_ = param_1->field_0x21;
      local_148._padding_._2_2_ = param_1->AccessFlags;
      local_148._padding_._4_4_ = (param_1->ChangeID).A;
      local_148._padding_._0_4_ = (param_1->ChangeID).B;
      local_148._padding_._4_4_ = (param_1->ChangeID).C;
      local_148._padding_ = *(longlong *)&(param_1->ClassName).Variant;
      local_148._padding_ = *(longlong *)&param_1->Version;
      FMetasoundFrontendGraphClass::InitDefaultGraphPage(&local_148);
      pFVar29 = (ForAnyElementType *)(lVar20 + 0x168);
      pFVar2 = (FMetasoundFrontendGraphClass *)pFVar29->Data;
      if ((pFVar2 <= &local_148) && (&local_148 < pFVar2 + *(int *)(lVar20 + 0x174))) {
        local_310 = (longlong)*(int *)(lVar20 + 0x170);
        local_308 = 0xf8;
        local_328 = &local_148;
        local_320 = pFVar2;
        local_318 = (longlong)*(int *)(lVar20 + 0x174);
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar17) {
          pcVar1 = (code *)swi(3);
          pFVar23 = (FConstClassAccessPtr *)(*pcVar1)();
          return pFVar23;
        }
      }
      iVar18 = *(int *)(lVar20 + 0x170);
      if (iVar18 == *(int *)(lVar20 + 0x174)) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8f8,pFVar29,(int *)(lVar20 + 0x174));
      }
      *(int *)(lVar20 + 0x170) = iVar18 + 1;
      FMetasoundFrontendGraphClass::FMetasoundFrontendGraphClass
                ((FMetasoundFrontendGraphClass *)(pFVar29->Data + (longlong)iVar18 * 0xf8),
                 &local_148);
      FMetasoundFrontendGraphClass::~FMetasoundFrontendGraphClass(&local_148);
      goto LAB_14ae3489b;
    }
    if (((EVar16 != Input) && (EVar16 != Output)) && (EVar16 != Template)) {
      if (1 < (byte)LogMetaSound._0_1_) {
        pFVar21 = FMetasoundFrontendClassMetadata::GetVersion(param_1);
        FMetasoundFrontendVersionNumber::ToString(pFVar21,&local_258);
        FMetasoundFrontendClassName::ToString(&param_1->ClassName,&local_268);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_268.Data.AllocatorInstance.Data);
        }
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
      }
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDocumentController.cpp"
                          ,0x1a3,L"");
      if (bVar17) {
        pcVar1 = (code *)swi(3);
        pFVar23 = (FConstClassAccessPtr *)(*pcVar1)();
        return pFVar23;
      }
      goto LAB_14ae3489b;
    }
  }
  local_2f8._0_8_ = &___7FMetasoundFrontendClass__6B_;
  local_2f8._8_4_ = FrontendInvalidID.A;
  local_2f8._12_4_ = FrontendInvalidID.B;
  local_2f8._16_4_ = FrontendInvalidID.C;
  local_2f8._20_4_ = FrontendInvalidID.D;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata
            ((FMetasoundFrontendClassMetadata *)(local_2f8 + 0x18));
  local_2a8.Data = (FScriptContainerElement *)0x0;
  local_2a0 = 0;
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290 = 0;
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  FNodeClassRegistryKey::FNodeClassRegistryKey(&local_218,param_1);
  bVar17 = INodeClassRegistry::GetFrontendClassFromRegistered
                     (&local_218,(FMetasoundFrontendClass *)local_2f8);
  if (bVar17) {
    pFVar24 = FGuid::NewGuid(&local_1e0);
    pFVar29 = (ForAnyElementType *)(lVar20 + 0x178);
    local_2f8._8_16_ = *(undefined1 (*) [16])pFVar24;
    pFVar2 = (FMetasoundFrontendGraphClass *)pFVar29->Data;
    if ((pFVar2 <= (FMetasoundFrontendGraphClass *)local_2f8) &&
       (local_2f8 < &pFVar2->_padding_ + (longlong)*(int *)(lVar20 + 0x184) * 0x12)) {
      local_310 = (longlong)*(int *)(lVar20 + 0x180);
      local_308 = 0x90;
      local_328 = (FMetasoundFrontendGraphClass *)local_2f8;
      local_320 = pFVar2;
      local_318 = (longlong)*(int *)(lVar20 + 0x184);
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar17) {
        pcVar1 = (code *)swi(3);
        pFVar23 = (FConstClassAccessPtr *)(*pcVar1)();
        return pFVar23;
      }
    }
    iVar18 = *(int *)(lVar20 + 0x180);
    if (iVar18 == *(int *)(lVar20 + 0x184)) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x890,pFVar29,(int *)(lVar20 + 0x184));
    }
    *(int *)(lVar20 + 0x180) = iVar18 + 1;
    FMetasoundFrontendClass::FMetasoundFrontendClass
              ((FMetasoundFrontendClass *)(pFVar29->Data + (longlong)iVar18 * 0x90),
               (FMetasoundFrontendClass *)local_2f8);
  }
  else if (1 < (byte)LogMetaSound._0_1_) {
    pFVar21 = FMetasoundFrontendClassMetadata::GetVersion(param_1);
    pFVar25 = FMetasoundFrontendVersionNumber::ToString(pFVar21,&local_228);
    if ((pFVar25->Data).ArrayNum == 0) {
      pwVar30 = L"";
    }
    else {
      pwVar30 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
    }
    FMetasoundFrontendClassName::ToString(&param_1->ClassName,&local_238);
    FNodeClassRegistryKey::ToString(&local_218,&local_248);
    local_328 = (FMetasoundFrontendGraphClass *)pwVar30;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  if (local_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data);
  }
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_2a8.Data,(int)local_2a0);
  if ((FMetasoundFrontendClassInput *)local_2a8.Data != (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
LAB_14ae3489b:
  puVar26 = (undefined8 *)(**(code **)(this->_padding_ + 0x80))(this,local_188,param_1);
  *(undefined8 *)__return_storage_ptr__ = *puVar26;
  uVar19 = puVar26[3];
  uVar3 = *(undefined4 *)&__return_storage_ptr__->field_0x10;
  uVar4 = *(undefined4 *)&__return_storage_ptr__->field_0x14;
  uVar5 = *(undefined4 *)&__return_storage_ptr__->field_0x18;
  uVar6 = *(undefined4 *)&__return_storage_ptr__->field_0x1c;
  uVar7 = *(undefined4 *)&__return_storage_ptr__->field_0x20;
  uVar8 = *(undefined4 *)&__return_storage_ptr__->field_0x24;
  uVar9 = *(undefined4 *)&__return_storage_ptr__->field_0x28;
  uVar10 = *(undefined4 *)&__return_storage_ptr__->field_0x2c;
  uVar14 = *(undefined8 *)&__return_storage_ptr__->field_0x30;
  uVar15 = *(undefined8 *)&__return_storage_ptr__->field_0x38;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = puVar26[2];
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar19;
  uVar11 = *(undefined4 *)((longlong)puVar26 + 0x24);
  uVar12 = *(undefined4 *)(puVar26 + 5);
  uVar13 = *(undefined4 *)((longlong)puVar26 + 0x2c);
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)(puVar26 + 4);
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = uVar11;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = uVar12;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = uVar13;
  uVar11 = *(undefined4 *)((longlong)puVar26 + 0x34);
  uVar12 = *(undefined4 *)(puVar26 + 7);
  uVar13 = *(undefined4 *)((longlong)puVar26 + 0x3c);
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = *(undefined4 *)(puVar26 + 6);
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = uVar11;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = uVar12;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = uVar13;
  *(undefined4 *)(puVar26 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar26 + 0x14) = uVar4;
  *(undefined4 *)(puVar26 + 3) = uVar5;
  *(undefined4 *)((longlong)puVar26 + 0x1c) = uVar6;
  *(undefined4 *)(puVar26 + 4) = uVar7;
  *(undefined4 *)((longlong)puVar26 + 0x24) = uVar8;
  *(undefined4 *)(puVar26 + 5) = uVar9;
  *(undefined4 *)((longlong)puVar26 + 0x2c) = uVar10;
  puVar26[6] = uVar14;
  puVar26[7] = uVar15;
  if (local_178 != 0) {
    plVar28 = local_168;
    if (local_150 != (longlong *)0x0) {
      plVar28 = local_150;
    }
    (**(code **)(*plVar28 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FindOrAddClass @ 14ae34940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentController::FindOrAddClass
          (FDocumentController *this,FConstClassAccessPtr *__return_storage_ptr__,
          FNodeClassRegistryKey *param_1,bool param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  EMetasoundFrontendClassType EVar8;
  undefined8 uVar9;
  FMetasoundFrontendDocument *pFVar10;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendVersionNumber *pFVar11;
  FMetasoundFrontendVersionNumber *pFVar12;
  FMetasoundFrontendClass *pFVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_288 [32];
  FGuid local_268;
  FMetasoundFrontendClass local_258;
  FGuid local_1c8;
  FDocumentController *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  int local_190;
  FMetasoundFrontendDocument *local_188;
  FMetasoundFrontendClass local_178;
  FMetasoundFrontendClass *local_e8 [2];
  code *local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  code *local_a8;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_288;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar16 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar1 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar15 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar16 != (longlong *)0x0) {
    plVar15 = plVar16;
  }
  uVar9 = (**(code **)(*plVar15 + 8))();
  pFVar10 = (FMetasoundFrontendDocument *)(*pcVar1)(uVar9);
  *(FMetasoundFrontendDocument **)&this->DocumentPtr = pFVar10;
  if (pFVar10 == (FMetasoundFrontendDocument *)0x0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
    FConstClassAccessPtr::FConstClassAccessPtr(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FDocumentAccessPtr::GetClassWithRegistryKey
            (&this->DocumentPtr,(FClassAccessPtr *)local_e8,param_1);
  local_1b0._0_1_ = param_1->Type;
  local_1b0._1_3_ = *(undefined3 *)&param_1->field_0x1;
  local_1b0._4_4_ = (param_1->ClassName).Namespace.ComparisonIndex;
  uStack_1a8 = *(undefined8 *)&(param_1->ClassName).Namespace.Number;
  local_190 = (param_1->Version).Minor;
  local_1a0 = *(undefined8 *)&(param_1->ClassName).Name.Number;
  uStack_198 = *(undefined8 *)&(param_1->ClassName).Variant.Number;
  local_1b8 = this;
  local_188 = pFVar10;
  UE::Core::Private::Function::CheckCallable(local_d8);
  pcVar1 = local_d8;
  plVar16 = local_c8;
  if (local_b0 != (longlong *)0x0) {
    plVar16 = local_b0;
  }
  uVar9 = (**(code **)(*plVar16 + 8))();
  this_00 = (FMetasoundFrontendClass *)(*pcVar1)(uVar9);
  local_e8[0] = this_00;
  if (this_00 == (FMetasoundFrontendClass *)0x0) {
    GenerateClass(&local_178,param_1);
    FDocumentIDGenerator::CreateIDFromDocument
              ((FDocumentIDGenerator *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9ac8),&local_1c8,pFVar10);
    `Metasound::Frontend::FDocumentController::FindOrAddClass'::__l5::<lambda_1>::operator()
              (&local_1b8,__return_storage_ptr__,&local_178,&local_1c8);
    if (local_178.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Interface.Environment.AllocatorInstance.Data);
    }
    if (local_178.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Interface.Outputs.AllocatorInstance.Data);
    }
    DestructItems<FMetasoundFrontendClassInput,int>
              ((FMetasoundFrontendClassInput *)local_178.Interface.Inputs.AllocatorInstance.Data,
               local_178.Interface.Inputs.ArrayNum);
    if ((FMetasoundFrontendClassInput *)local_178.Interface.Inputs.AllocatorInstance.Data !=
        (FMetasoundFrontendClassInput *)0x0) {
      FMemory::Free(local_178.Interface.Inputs.AllocatorInstance.Data);
    }
    if (local_d8 == (code *)0x0) {
      return __return_storage_ptr__;
    }
    plVar16 = local_c8;
    if (local_b0 != (longlong *)0x0) {
      plVar16 = local_b0;
    }
    (**(code **)(*plVar16 + 0x10))();
    return __return_storage_ptr__;
  }
  EVar8 = FMetasoundFrontendClassMetadata::GetType(&this_00->Metadata);
  if ((EVar8 == Template) ||
     (EVar8 = FMetasoundFrontendClassMetadata::GetType(&this_00->Metadata), EVar8 == External)) {
    GenerateClass(&local_258,param_1);
    pFVar11 = FMetasoundFrontendClassMetadata::GetVersion(&this_00->Metadata);
    pFVar12 = FMetasoundFrontendClassMetadata::GetVersion(&local_258.Metadata);
    if (pFVar12->Major != pFVar11->Major) {
      FDocumentIDGenerator::CreateIDFromDocument
                ((FDocumentIDGenerator *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9ac8),&local_268,pFVar10);
      `Metasound::Frontend::FDocumentController::FindOrAddClass'::__l5::<lambda_1>::operator()
                (&local_1b8,__return_storage_ptr__,&local_258,&local_268);
      if (local_258.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_258.Interface.Environment.AllocatorInstance.Data);
      }
      if (local_258.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Interface.Outputs.AllocatorInstance.Data);
      }
      DestructItems<FMetasoundFrontendClassInput,int>
                ((FMetasoundFrontendClassInput *)local_258.Interface.Inputs.AllocatorInstance.Data,
                 local_258.Interface.Inputs.ArrayNum);
      if ((FMetasoundFrontendClassInput *)local_258.Interface.Inputs.AllocatorInstance.Data !=
          (FMetasoundFrontendClassInput *)0x0) {
        FMemory::Free(local_258.Interface.Inputs.AllocatorInstance.Data);
      }
      goto LAB_14ae34d2c;
    }
    if (local_258.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Interface.Environment.AllocatorInstance.Data);
    }
    if (local_258.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Interface.Outputs.AllocatorInstance.Data);
    }
    DestructItems<FMetasoundFrontendClassInput,int>
              ((FMetasoundFrontendClassInput *)local_258.Interface.Inputs.AllocatorInstance.Data,
               local_258.Interface.Inputs.ArrayNum);
    if ((FMetasoundFrontendClassInput *)local_258.Interface.Inputs.AllocatorInstance.Data !=
        (FMetasoundFrontendClassInput *)0x0) {
      FMemory::Free(local_258.Interface.Inputs.AllocatorInstance.Data);
    }
  }
  if (param_2) {
    local_268.A = (this_00->ID).A;
    local_268.B = (this_00->ID).B;
    local_268.C = (this_00->ID).C;
    local_268.D = (this_00->ID).D;
    pFVar13 = GenerateClass(&local_258,param_1);
    FMetasoundFrontendClass::operator=(this_00,pFVar13);
    if (local_258.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Interface.Environment.AllocatorInstance.Data);
    }
    if (local_258.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Interface.Outputs.AllocatorInstance.Data);
    }
    DestructItems<FMetasoundFrontendClassInput,int>
              ((FMetasoundFrontendClassInput *)local_258.Interface.Inputs.AllocatorInstance.Data,
               local_258.Interface.Inputs.ArrayNum);
    if ((FMetasoundFrontendClassInput *)local_258.Interface.Inputs.AllocatorInstance.Data !=
        (FMetasoundFrontendClassInput *)0x0) {
      FMemory::Free(local_258.Interface.Inputs.AllocatorInstance.Data);
    }
    (this_00->ID).A = local_268.A;
    (this_00->ID).B = local_268.B;
    (this_00->ID).C = local_268.C;
    (this_00->ID).D = local_268.D;
    (**(code **)(this->_padding_ + 0x88))(this,__return_storage_ptr__,param_1);
  }
  else {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
    local_a8 = local_d8;
    local_80 = (longlong *)0x0;
    if (local_d8 != (code *)0x0) {
      plVar16 = local_c8;
      if (local_b0 != (longlong *)0x0) {
        plVar16 = local_b0;
      }
      (**(code **)*plVar16)(plVar16,&local_98);
    }
    local_78 = (code *)0x0;
    puVar14 = FMemory::Malloc(0x40,0x10);
    *puVar14 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1_____0UFMetasoundFrontendClass_____TAccessPtr___CBUFMetasoundFrontendClass___Frontend_Metasound__QEAA_AEBV__TAccessPtr_UFMetasoundFrontendClass___34_W4EDerivedCopy_234__Z__0A__00_Function_Private_Core_UE__6B_
    ;
    plVar16 = puVar14 + 2;
    *plVar16 = (longlong)local_a8;
    puVar14[7] = local_80;
    local_80 = (longlong *)0x0;
    puVar14[4] = local_98;
    puVar14[5] = uStack_90;
    puVar14[6] = local_88;
    if (*plVar16 != 0) {
      local_a8 = (code *)0x0;
    }
    lVar6 = *(longlong *)&__return_storage_ptr__->field_0x10;
    uVar7 = *(undefined8 *)&__return_storage_ptr__->field_0x18;
    uVar2 = *(undefined4 *)&__return_storage_ptr__->field_0x20;
    uVar3 = *(undefined4 *)&__return_storage_ptr__->field_0x24;
    uVar4 = *(undefined4 *)&__return_storage_ptr__->field_0x28;
    uVar5 = *(undefined4 *)&__return_storage_ptr__->field_0x2c;
    uVar9 = *(undefined8 *)&__return_storage_ptr__->field_0x30;
    plVar15 = *(longlong **)&__return_storage_ptr__->field_0x38;
    if (plVar16 != (longlong *)0x0) {
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Metasound::Frontend::TAccessPtr<FMetasoundFrontendClass_const_>::TAccessPtr<FMetasoundFrontendClass_const_><FMetasoundFrontendClass>'::__l2::<lambda_1>,FMetasoundFrontendClass_const_*>
                 ::Call;
    }
    *(code **)&__return_storage_ptr__->field_0x10 = local_78;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_70;
    uStack_50._0_4_ = SUB84(puVar14,0);
    uStack_50._4_4_ = (undefined4)((ulonglong)puVar14 >> 0x20);
    *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_68;
    *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_64;
    *(undefined4 *)&__return_storage_ptr__->field_0x28 = uStack_60;
    *(undefined4 *)&__return_storage_ptr__->field_0x2c = uStack_5c;
    *(undefined4 *)&__return_storage_ptr__->field_0x30 = (undefined4)local_58;
    *(undefined4 *)&__return_storage_ptr__->field_0x34 = local_58._4_4_;
    *(undefined4 *)&__return_storage_ptr__->field_0x38 = (undefined4)uStack_50;
    *(undefined4 *)&__return_storage_ptr__->field_0x3c = uStack_50._4_4_;
    local_78 = (code *)lVar6;
    uStack_70 = uVar7;
    local_68 = uVar2;
    uStack_64 = uVar3;
    uStack_60 = uVar4;
    uStack_5c = uVar5;
    local_58 = uVar9;
    uStack_50 = plVar15;
    if (lVar6 != 0) {
      plVar16 = (longlong *)&local_68;
      if (plVar15 != (longlong *)0x0) {
        plVar16 = plVar15;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if (local_a8 != (code *)0x0) {
      plVar16 = &local_98;
      if (local_80 != (longlong *)0x0) {
        plVar16 = local_80;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&__return_storage_ptr__->field_0x10);
    pcVar1 = *(code **)&__return_storage_ptr__->field_0x10;
    plVar16 = (longlong *)&__return_storage_ptr__->field_0x20;
    if (*(longlong **)&__return_storage_ptr__->field_0x38 != (longlong *)0x0) {
      plVar16 = *(longlong **)&__return_storage_ptr__->field_0x38;
    }
    uVar9 = (**(code **)(*plVar16 + 8))();
    uVar9 = (*pcVar1)(uVar9);
    *(undefined8 *)__return_storage_ptr__ = uVar9;
  }
LAB_14ae34d2c:
  if (local_d8 != (code *)0x0) {
    plVar16 = local_c8;
    if (local_b0 != (longlong *)0x0) {
      plVar16 = local_b0;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FindSubgraphWithID @ 14ae36ab0

FConstGraphClassAccessPtr * __thiscall
Metasound::Frontend::FDocumentController::FindSubgraphWithID
          (FDocumentController *this,FConstGraphClassAccessPtr *__return_storage_ptr__,
          FGuid *param_1)

{
  FDocumentAccessPtr::GetSubgraphWithID(&this->DocumentPtr,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetDependencies @ 14ae37d30

TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FDocumentController::GetDependencies(FDocumentController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar1 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar2 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar5 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->DocumentPtr = lVar4;
  if (lVar4 != 0) {
    return (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x178);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidClassArray'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetDocumentPtr @ 14ae38200

FDocumentAccessPtr * __thiscall
Metasound::Frontend::FDocumentController::GetDocumentPtr
          (FDocumentController *this,FDocumentAccessPtr *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)&this->DocumentPtr;
  lVar1 = *(longlong *)&(this->DocumentPtr).field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(this->DocumentPtr).field_0x38;
    puVar3 = (undefined8 *)&(this->DocumentPtr).field_0x20;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)();
  }
  return __return_storage_ptr__;
}

// GetDocumentPtr @ 14ae38250

FDocumentAccessPtr * __thiscall
Metasound::Frontend::FDocumentController::GetDocumentPtr
          (FDocumentController *this,FDocumentAccessPtr *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)&this->DocumentPtr;
  lVar1 = *(longlong *)&(this->DocumentPtr).field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(this->DocumentPtr).field_0x38;
    puVar3 = (undefined8 *)&(this->DocumentPtr).field_0x20;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)();
  }
  return __return_storage_ptr__;
}

// GetInterfaceVersions @ 14ae38bd0

TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator> *
__thiscall Metasound::Frontend::FDocumentController::GetInterfaceVersions(FDocumentController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar1 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar2 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar5 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->DocumentPtr = lVar4;
  if (lVar4 != 0) {
    return (TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
            *)(lVar4 + 0x20);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::FDocumentController::GetInterfaceVersions'::__l2::
             _dynamic_atexit_destructor_for__EmptySet__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptySet;
}

// GetMetadata @ 14ae39220

FMetasoundFrontendDocumentMetadata * __thiscall
Metasound::Frontend::FDocumentController::GetMetadata(FDocumentController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  FMetasoundFrontendDocumentMetadata *pFVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar1 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar2 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar6 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->DocumentPtr = lVar4;
  pFVar5 = (FMetasoundFrontendDocumentMetadata *)0x0;
  if (lVar4 != 0) {
    pFVar5 = (FMetasoundFrontendDocumentMetadata *)(lVar4 + 0x10);
  }
  return pFVar5;
}

// GetMetadata @ 14ae39280

FMetasoundFrontendDocumentMetadata * __thiscall
Metasound::Frontend::FDocumentController::GetMetadata(FDocumentController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  FMetasoundFrontendDocumentMetadata *pFVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar1 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar2 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar6 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->DocumentPtr = lVar4;
  pFVar5 = &::Invalid;
  if (lVar4 != 0) {
    pFVar5 = (FMetasoundFrontendDocumentMetadata *)(lVar4 + 0x10);
  }
  return pFVar5;
}

// GetRootGraph @ 14ae3cb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
Metasound::Frontend::FDocumentController::GetRootGraph
          (FDocumentController *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [64];
  undefined1 local_68 [56];
  longlong *local_30;
  TSharedRef<Metasound::Frontend::IDocumentController,1> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  cVar1 = (**(code **)(this->_padding_ + 0x18))();
  if (cVar1 == '\0') {
    IGraphController::GetInvalidHandle(__return_storage_ptr__);
  }
  else {
    FDocumentAccessPtr::GetRootGraph(&this->DocumentPtr,(FGraphClassAccessPtr *)local_a8);
    local_68._0_8_ = local_a8._0_8_;
    local_68._16_8_ = local_a8._16_8_;
    local_30 = (longlong *)0x0;
    if (local_a8._16_8_ != 0) {
      plVar2 = (longlong *)(local_a8 + 0x20);
      if ((longlong *)local_a8._56_8_ != (longlong *)0x0) {
        plVar2 = (longlong *)local_a8._56_8_;
      }
      (**(code **)*plVar2)(plVar2,local_68 + 0x20);
    }
    TSharedFromThis<Metasound::Frontend::IDocumentController,1>::AsShared
              ((TSharedFromThis<Metasound::Frontend::IDocumentController,1> *)&this->_padding_,
               &local_28);
    FGraphController::CreateGraphHandle(__return_storage_ptr__,(FInitParams *)local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (local_68._16_8_ != 0) {
      plVar2 = (longlong *)(local_68 + 0x20);
      if (local_30 != (longlong *)0x0) {
        plVar2 = local_30;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_a8._16_8_ != 0) {
      plVar2 = (longlong *)(local_a8 + 0x20);
      if ((longlong *)local_a8._56_8_ != (longlong *)0x0) {
        plVar2 = (longlong *)local_a8._56_8_;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetRootGraph @ 14ae3cc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __thiscall
Metasound::Frontend::FDocumentController::GetRootGraph
          (FDocumentController *this,
          TSharedRef<Metasound::Frontend::IGraphController_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *pTVar3;
  TSharedRef<Metasound::Frontend::IGraphController,1> *pTVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  TSharedRef<Metasound::Frontend::IDocumentController_const_,1> local_b8;
  undefined1 local_a8 [64];
  IDocumentController *local_68;
  FSharedReferencer<1> local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  cVar2 = (**(code **)(this->_padding_ + 0x18))();
  if (cVar2 == '\0') {
    pTVar4 = IGraphController::GetInvalidHandle
                       ((TSharedRef<Metasound::Frontend::IGraphController,1> *)&local_b8);
    __return_storage_ptr__->Object = pTVar4->Object;
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  else {
    FDocumentAccessPtr::GetRootGraph(&this->DocumentPtr,(FConstGraphClassAccessPtr *)local_58);
    ConstCastAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,Metasound::Frontend::FConstGraphClassAccessPtr>
              ((FGraphClassAccessPtr *)local_a8,(FConstGraphClassAccessPtr *)local_58);
    pTVar3 = TSharedFromThis<Metasound::Frontend::IDocumentController,1>::AsShared
                       ((TSharedFromThis<Metasound::Frontend::IDocumentController,1> *)
                        &this->_padding_,&local_b8);
    local_68 = pTVar3->Object;
    local_60.ReferenceController = (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FGraphController::CreateConstGraphHandle(__return_storage_ptr__,(FInitParams *)local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    if (local_a8._16_8_ != 0) {
      plVar5 = (longlong *)(local_a8 + 0x20);
      if ((longlong *)local_a8._56_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_a8._56_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    if (local_58._16_8_ != 0) {
      plVar5 = (longlong *)(local_58 + 0x20);
      if ((longlong *)local_58._56_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_58._56_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetRootGraphClass @ 14ae3ce20

FMetasoundFrontendGraphClass * __thiscall
Metasound::Frontend::FDocumentController::GetRootGraphClass(FDocumentController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar1 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar2 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar5 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->DocumentPtr = lVar4;
  if (lVar4 != 0) {
    return (FMetasoundFrontendGraphClass *)(lVar4 + 0x70);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMetasoundFrontendGraphClass::FMetasoundFrontendGraphClass(&::Invalid);
      atexit(`Metasound::Frontend::Invalid::GetInvalidGraphClass'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetSubgraphHandles @ 14ae3cef0

TArray<TSharedRef<Metasound::Frontend::IGraphController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FDocumentController::GetSubgraphHandles
          (FDocumentController *this,
          TArray<TSharedRef<Metasound::Frontend::IGraphController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  TArray<TSharedRef<Metasound::Frontend::IGraphController,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar2 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar3 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar11 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar11 = plVar2;
  }
  uVar7 = (**(code **)(*plVar11 + 8))();
  lVar8 = (*pcVar3)(uVar7);
  *(longlong *)&this->DocumentPtr = lVar8;
  if (lVar8 != 0) {
    lVar14 = *(longlong *)(lVar8 + 0x168);
    iVar1 = *(int *)(lVar8 + 0x170);
    puVar13 = (undefined4 *)(lVar14 + 8);
    lVar15 = (longlong)iVar1 * 0xf8 + lVar14;
    while( true ) {
      if (*(int *)(lVar8 + 0x170) != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendGraphClass,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (lVar14 == lVar15) break;
      local_58 = *puVar13;
      uStack_54 = puVar13[1];
      uStack_50 = puVar13[2];
      uStack_4c = puVar13[3];
      pFVar9 = (FScriptContainerElement *)
               (**(code **)(this->_padding_ + 0xf0))(this,local_48,&local_58);
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar12 <= pFVar9) &&
          (pFVar9 < pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TArray<TSharedRef<Metasound::Frontend::IGraphController,1>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar12 = *(undefined8 *)pFVar9;
      lVar4 = *(longlong *)(pFVar9 + 8);
      *(longlong *)(pFVar12 + 8) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      lVar14 = lVar14 + 0xf8;
      puVar13 = puVar13 + 0x3e;
    }
  }
  return __return_storage_ptr__;
}

// GetSubgraphHandles @ 14ae3d0d0

TArray<TSharedRef<Metasound::Frontend::IGraphController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FDocumentController::GetSubgraphHandles
          (FDocumentController *this,
          TArray<TSharedRef<Metasound::Frontend::IGraphController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  TArray<TSharedRef<Metasound::Frontend::IGraphController_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar2 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar3 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar11 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar11 = plVar2;
  }
  uVar7 = (**(code **)(*plVar11 + 8))();
  lVar8 = (*pcVar3)(uVar7);
  *(longlong *)&this->DocumentPtr = lVar8;
  if (lVar8 != 0) {
    lVar14 = *(longlong *)(lVar8 + 0x168);
    iVar1 = *(int *)(lVar8 + 0x170);
    puVar13 = (undefined4 *)(lVar14 + 8);
    lVar15 = (longlong)iVar1 * 0xf8 + lVar14;
    while( true ) {
      if (*(int *)(lVar8 + 0x170) != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendGraphClass_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (lVar14 == lVar15) break;
      local_58 = *puVar13;
      uStack_54 = puVar13[1];
      uStack_50 = puVar13[2];
      uStack_4c = puVar13[3];
      pFVar9 = (FScriptContainerElement *)
               (**(code **)(this->_padding_ + 0xe8))(this,local_48,&local_58);
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar12 <= pFVar9) &&
          (pFVar9 < pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar10 = (TArray<TSharedRef<Metasound::Frontend::IGraphController_const_,1>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar3)();
        return pTVar10;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar12 = *(undefined8 *)pFVar9;
      lVar4 = *(longlong *)(pFVar9 + 8);
      *(longlong *)(pFVar12 + 8) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      lVar14 = lVar14 + 0xf8;
      puVar13 = puVar13 + 0x3e;
    }
  }
  return __return_storage_ptr__;
}

// GetSubgraphWithClassID @ 14ae3d2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
Metasound::Frontend::FDocumentController::GetSubgraphWithClassID
          (FDocumentController *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__,FGuid *param_1
          )

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [64];
  undefined1 local_68 [56];
  longlong *local_30;
  TSharedRef<Metasound::Frontend::IDocumentController,1> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FDocumentAccessPtr::GetSubgraphWithID(&this->DocumentPtr,(FGraphClassAccessPtr *)local_a8,param_1)
  ;
  local_68._0_8_ = local_a8._0_8_;
  local_68._16_8_ = local_a8._16_8_;
  local_30 = (longlong *)0x0;
  if (local_a8._16_8_ != 0) {
    plVar1 = (longlong *)(local_a8 + 0x20);
    if ((longlong *)local_a8._56_8_ != (longlong *)0x0) {
      plVar1 = (longlong *)local_a8._56_8_;
    }
    (**(code **)*plVar1)(plVar1,local_68 + 0x20);
  }
  TSharedFromThis<Metasound::Frontend::IDocumentController,1>::AsShared
            ((TSharedFromThis<Metasound::Frontend::IDocumentController,1> *)&this->_padding_,
             &local_28);
  FGraphController::CreateGraphHandle(__return_storage_ptr__,(FInitParams *)local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_68._16_8_ != 0) {
    plVar1 = (longlong *)(local_68 + 0x20);
    if (local_30 != (longlong *)0x0) {
      plVar1 = local_30;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_a8._16_8_ != 0) {
    plVar1 = (longlong *)(local_a8 + 0x20);
    if ((longlong *)local_a8._56_8_ != (longlong *)0x0) {
      plVar1 = (longlong *)local_a8._56_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSubgraphWithClassID @ 14ae3d3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __thiscall
Metasound::Frontend::FDocumentController::GetSubgraphWithClassID
          (FDocumentController *this,
          TSharedRef<Metasound::Frontend::IGraphController_const_,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *pTVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  TSharedRef<Metasound::Frontend::IDocumentController_const_,1> local_b8;
  undefined1 local_a8 [64];
  IDocumentController *local_68;
  FSharedReferencer<1> local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FDocumentAccessPtr::GetSubgraphWithID
            (&this->DocumentPtr,(FConstGraphClassAccessPtr *)local_58,param_1);
  ConstCastAccessPtr<Metasound::Frontend::FGraphClassAccessPtr,Metasound::Frontend::FConstGraphClassAccessPtr>
            ((FGraphClassAccessPtr *)local_a8,(FConstGraphClassAccessPtr *)local_58);
  pTVar1 = TSharedFromThis<Metasound::Frontend::IDocumentController,1>::AsShared
                     ((TSharedFromThis<Metasound::Frontend::IDocumentController,1> *)
                      &this->_padding_,&local_b8);
  local_68 = pTVar1->Object;
  local_60.ReferenceController = (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGraphController::CreateConstGraphHandle(__return_storage_ptr__,(FInitParams *)local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  if (local_a8._16_8_ != 0) {
    plVar2 = (longlong *)(local_a8 + 0x20);
    if ((longlong *)local_a8._56_8_ != (longlong *)0x0) {
      plVar2 = (longlong *)local_a8._56_8_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_58._16_8_ != 0) {
    plVar2 = (longlong *)(local_58 + 0x20);
    if ((longlong *)local_58._56_8_ != (longlong *)0x0) {
      plVar2 = (longlong *)local_58._56_8_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetSubgraphs @ 14ae3d4d0

TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FDocumentController::GetSubgraphs(FDocumentController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar1 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar2 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar5 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->DocumentPtr = lVar4;
  if (lVar4 != 0) {
    return (TArray<FMetasoundFrontendGraphClass,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x168);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidGraphClassArray'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// IsValid @ 14ae3f770

bool __thiscall Metasound::Frontend::FDocumentController::IsValid(FDocumentController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar1 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar2 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar5 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->DocumentPtr = lVar4;
  return lVar4 != 0;
}

// IterateDependencies @ 14ae3fcd0

void __thiscall
Metasound::Frontend::FDocumentController::IterateDependencies
          (FDocumentController *this,TFunctionRef<void___cdecl(FMetasoundFrontendClass_&)> *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar2 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar3 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar6 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  lVar5 = (*pcVar3)(uVar4);
  *(longlong *)&this->DocumentPtr = lVar5;
  if (lVar5 != 0) {
    lVar7 = *(longlong *)(lVar5 + 0x178);
    iVar1 = *(int *)(lVar5 + 0x180);
    pcVar3 = *(code **)param_1;
    uVar4 = *(undefined8 *)&param_1->field_0x8;
    lVar8 = (longlong)iVar1 * 0x90 + lVar7;
    while( true ) {
      if (*(int *)(lVar5 + 0x180) != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendClass,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar7 == lVar8) break;
      (*pcVar3)(uVar4,lVar7);
      lVar7 = lVar7 + 0x90;
    }
  }
  return;
}

// IterateDependencies @ 14ae3fd90

void __thiscall
Metasound::Frontend::FDocumentController::IterateDependencies
          (FDocumentController *this,
          TFunctionRef<void___cdecl(FMetasoundFrontendClass_const_&)> *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar2 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar3 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar6 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  lVar5 = (*pcVar3)(uVar4);
  *(longlong *)&this->DocumentPtr = lVar5;
  if (lVar5 != 0) {
    lVar7 = *(longlong *)(lVar5 + 0x178);
    iVar1 = *(int *)(lVar5 + 0x180);
    pcVar3 = *(code **)param_1;
    uVar4 = *(undefined8 *)&param_1->field_0x8;
    lVar8 = (longlong)iVar1 * 0x90 + lVar7;
    while( true ) {
      if (*(int *)(lVar5 + 0x180) != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendClass_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (lVar7 == lVar8) break;
      (*pcVar3)(uVar4,lVar7);
      lVar7 = lVar7 + 0x90;
    }
  }
  return;
}

// RemoveInterfaceVersion @ 14ae42e40

void __thiscall
Metasound::Frontend::FDocumentController::RemoveInterfaceVersion
          (FDocumentController *this,FMetasoundFrontendVersion *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FName FVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar3 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar4 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar9 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar3 != (longlong *)0x0) {
    plVar9 = plVar3;
  }
  uVar7 = (**(code **)(*plVar9 + 8))();
  lVar8 = (*pcVar4)(uVar7);
  *(longlong *)&this->DocumentPtr = lVar8;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x28) != *(int *)(lVar8 + 0x54))) {
    uVar1 = (param_1->Number).Major;
    iVar2 = (param_1->Number).Minor;
    FVar5 = param_1->Name;
    uVar6 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
    uVar6 = uVar6 + FVar5.Number;
    TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
    ::RemoveImpl<FMetasoundFrontendVersion>
              ((TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
                *)(lVar8 + 0x20),
               (uVar6 >> 2) +
               uVar6 * 0x40 + -0x61c88647 +
               (iVar2 + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) ^ uVar6,param_1);
  }
  return;
}

// RemoveUnreferencedDependencies @ 14ae43d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Frontend::FDocumentController::RemoveUnreferencedDependencies(FDocumentController *this)

{
  TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulong64 uVar10;
  longlong *plVar11;
  uint uVar12;
  FMetasoundFrontendGraphClass *this_01;
  FMetasoundFrontendGraphClass *pFVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [8];
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  code *local_a8;
  undefined8 **local_a0;
  code *local_98;
  undefined8 **local_90;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar2 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar3 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar11 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar11 = plVar2;
  }
  uVar8 = (**(code **)(*plVar11 + 8))();
  lVar9 = (*pcVar3)(uVar8);
  *(longlong *)&this->DocumentPtr = lVar9;
  if (lVar9 != 0) {
    local_c0 = lVar9;
    DeduplicateDependencies(this);
    this_00 = (TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_> *)(lVar9 + 0x178);
    lVar14 = lVar9;
    do {
      local_b8 = (undefined8 *)local_88;
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      local_a0 = &local_b8;
      local_88._8_8_ = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = (ForElementType<FSetElementId>)0x0;
      local_40 = 0;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<``Metasound::Frontend::FDocumentController::RemoveUnreferencedDependencies'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_const_&>
                 ::Call;
      FMetasoundFrontendGraphClass::IterateGraphPages
                ((FMetasoundFrontendGraphClass *)(lVar14 + 0x70),
                 (TFunctionRef<void___cdecl(FMetasoundFrontendGraph_const_&)> *)&local_a8);
      iVar1 = *(int *)(lVar14 + 0x170);
      this_01 = *(FMetasoundFrontendGraphClass **)(lVar14 + 0x168);
      pFVar13 = this_01 + iVar1;
      while( true ) {
        if (*(int *)(lVar14 + 0x170) != iVar1) {
          local_c8[0] = 0;
          `TCheckedPointerIterator<FMetasoundFrontendGraphClass,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_c8);
        }
        if (this_01 == pFVar13) break;
        local_b0 = (undefined8 *)local_88;
        local_98 = UE::Core::Private::Function::
                   TFunctionRefCaller<``Metasound::Frontend::FDocumentController::RemoveUnreferencedDependencies'::__l7::<lambda_1>::operator()'::__l2::<lambda_1>,void,FMetasoundFrontendGraph_const_&>
                   ::Call;
        local_90 = &local_b0;
        FMetasoundFrontendGraphClass::IterateGraphPages
                  (this_01,(TFunctionRef<void___cdecl(FMetasoundFrontendGraph_const_&)> *)&local_98)
        ;
        this_01 = this_01 + 1;
      }
      iVar1 = *(int *)(lVar9 + 0x180);
      uVar12 = 0;
      bVar15 = false;
      iVar7 = iVar1;
      if (0 < iVar1) {
        do {
          uVar6 = 0;
          if ((int)uVar12 < iVar7) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar4 = (this_00->AllocatorInstance).Data;
          uVar10 = CityHash64((char *)(pFVar4 + (longlong)(int)uVar12 * 0x90 + 8),0x10);
          iVar7 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                            ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_88,
                             (uint)uVar10,(FGuid *)(pFVar4 + (longlong)(int)uVar12 * 0x90 + 8));
          if (iVar7 == -1) {
            bVar15 = true;
            uVar6 = 0;
            if ((int)uVar12 < *(int *)(lVar9 + 0x180)) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            TArray<FMetasoundFrontendClass,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                      (this_00,uVar12);
          }
          else {
            uVar12 = uVar12 + 1;
          }
          iVar7 = *(int *)(lVar9 + 0x180);
        } while ((int)uVar12 < iVar7);
        lVar14 = local_c0;
        if (bVar15) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x90,8,(ForAnyElementType *)this_00,iVar7,(int *)(lVar9 + 0x184));
          lVar14 = local_c0;
        }
      }
      iVar7 = *(int *)(lVar9 + 0x180);
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      bVar15 = local_88._12_4_ != 0;
      local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
      if (bVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = 0xffffffff;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
    } while (0 < iVar1 - iVar7);
  }
  return;
}

// SetMetadata @ 14ae455a0

void __thiscall
Metasound::Frontend::FDocumentController::SetMetadata
          (FDocumentController *this,FMetasoundFrontendDocumentMetadata *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FMetasoundFrontendVersionNumber FVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar1 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar2 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar6 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  lVar5 = (*pcVar2)(uVar4);
  *(longlong *)&this->DocumentPtr = lVar5;
  if (lVar5 != 0) {
    FVar3 = (param_1->Version).Number;
    *(FName *)(lVar5 + 0x10) = (param_1->Version).Name;
    *(FMetasoundFrontendVersionNumber *)(lVar5 + 0x18) = FVar3;
  }
  return;
}

// SetRootGraphClass @ 14ae458d0

void __thiscall
Metasound::Frontend::FDocumentController::SetRootGraphClass
          (FDocumentController *this,FMetasoundFrontendGraphClass *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  FMetasoundFrontendGraph *pFVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar4 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar5 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar10 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar4 != (longlong *)0x0) {
    plVar10 = plVar4;
  }
  uVar8 = (**(code **)(*plVar10 + 8))();
  lVar9 = (*pcVar5)(uVar8);
  *(longlong *)&this->DocumentPtr = lVar9;
  if (lVar9 != 0) {
    lVar7 = param_1->_padding_;
    *(longlong *)(lVar9 + 0x78) = param_1->_padding_;
    *(longlong *)(lVar9 + 0x80) = lVar7;
    lVar7 = param_1->_padding_;
    *(longlong *)(lVar9 + 0x88) = param_1->_padding_;
    *(longlong *)(lVar9 + 0x90) = lVar7;
    lVar7 = param_1->_padding_;
    *(longlong *)(lVar9 + 0x98) = param_1->_padding_;
    *(longlong *)(lVar9 + 0xa0) = lVar7;
    lVar7 = param_1->_padding_;
    *(longlong *)(lVar9 + 0xa8) = param_1->_padding_;
    *(longlong *)(lVar9 + 0xb0) = lVar7;
    *(int *)(lVar9 + 0xb8) = (int)param_1->_padding_;
    FMetasoundFrontendClassInterface::operator=
              ((FMetasoundFrontendClassInterface *)(lVar9 + 0xc0),
               (FMetasoundFrontendClassInterface *)&param_1->_padding_);
    pFVar2 = (ForAnyElementType *)(lVar9 + 0x100);
    if ((TArray<FMetasoundFrontendGraph,TSizedDefaultAllocator<32>_> *)pFVar2 !=
        &param_1->PagedGraphs) {
      DestructItems<FMetasoundFrontendGraph,int>
                ((FMetasoundFrontendGraph *)pFVar2->Data,*(int *)(lVar9 + 0x108));
      iVar3 = (param_1->PagedGraphs).ArrayNum;
      piVar1 = (int *)(lVar9 + 0x10c);
      pFVar6 = (FMetasoundFrontendGraph *)(param_1->PagedGraphs).AllocatorInstance.Data;
      *(int *)(lVar9 + 0x108) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
        ConstructItems<FMetasoundFrontendGraph,FMetasoundFrontendGraph,int>
                  (pFVar2->Data,pFVar6,iVar3);
      }
    }
    *(bool *)(lVar9 + 0x110) = (param_1->PresetOptions).bIsPreset;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar9 + 0x118),
               &(param_1->PresetOptions).InputsInheritingDefault);
  }
  return;
}

// ShareAccess @ 14ae45f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDocumentAccess * __thiscall
Metasound::Frontend::FDocumentController::ShareAccess
          (FDocumentController *this,FDocumentAccess *__return_storage_ptr__)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  undefined8 uStack_30;
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FDocumentAccess::FDocumentAccess(__return_storage_ptr__);
  *(undefined8 *)&__return_storage_ptr__->Document = *(undefined8 *)&this->DocumentPtr;
  local_58._0_8_ = *(undefined8 *)&(this->DocumentPtr).field_0x10;
  uStack_30 = (longlong *)0x0;
  if (local_58._0_8_ != 0) {
    puVar1 = *(undefined8 **)&(this->DocumentPtr).field_0x38;
    puVar10 = (undefined8 *)&(this->DocumentPtr).field_0x20;
    if (puVar1 != (undefined8 *)0x0) {
      puVar10 = puVar1;
    }
    (**(code **)*puVar10)(puVar10,local_58 + 0x10);
  }
  lVar4 = *(longlong *)&(__return_storage_ptr__->Document).field_0x10;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->Document).field_0x18;
  lVar6 = *(longlong *)&(__return_storage_ptr__->Document).field_0x20;
  lVar7 = *(longlong *)&(__return_storage_ptr__->Document).field_0x28;
  uVar2 = *(undefined8 *)&(__return_storage_ptr__->Document).field_0x30;
  plVar3 = *(longlong **)&(__return_storage_ptr__->Document).field_0x38;
  *(undefined8 *)&(__return_storage_ptr__->Document).field_0x10 = local_58._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->Document).field_0x18 = local_58._8_8_;
  *(undefined4 *)&(__return_storage_ptr__->Document).field_0x20 = local_58._16_4_;
  *(undefined4 *)&(__return_storage_ptr__->Document).field_0x24 = local_58._20_4_;
  *(undefined4 *)&(__return_storage_ptr__->Document).field_0x28 = local_58._24_4_;
  *(undefined4 *)&(__return_storage_ptr__->Document).field_0x2c = local_58._28_4_;
  *(undefined4 *)&(__return_storage_ptr__->Document).field_0x30 = local_58._32_4_;
  *(undefined4 *)&(__return_storage_ptr__->Document).field_0x34 = local_58._36_4_;
  *(undefined4 *)&(__return_storage_ptr__->Document).field_0x38 = (undefined4)uStack_30;
  *(undefined4 *)&(__return_storage_ptr__->Document).field_0x3c = uStack_30._4_4_;
  local_58._16_8_ = lVar6;
  local_58._24_8_ = lVar7;
  local_58._32_8_ = uVar2;
  uStack_30 = plVar3;
  local_58._0_8_ = lVar4;
  local_58._8_8_ = uVar5;
  if (lVar4 != 0) {
    plVar11 = (longlong *)(local_58 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      plVar11 = plVar3;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  FConstDocumentAccessPtr::FConstDocumentAccessPtr<FMetasoundFrontendDocument>
            ((FConstDocumentAccessPtr *)local_58,
             (TAccessPtr<FMetasoundFrontendDocument> *)&this->DocumentPtr,Tag);
  __return_storage_ptr__->_padding_ = local_58._0_8_;
  lVar6 = __return_storage_ptr__->_padding_;
  lVar7 = __return_storage_ptr__->_padding_;
  lVar8 = __return_storage_ptr__->_padding_;
  lVar9 = __return_storage_ptr__->_padding_;
  lVar4 = __return_storage_ptr__->_padding_;
  plVar3 = (longlong *)__return_storage_ptr__->_padding_;
  __return_storage_ptr__->_padding_ = local_58._16_8_;
  __return_storage_ptr__->_padding_ = local_58._24_8_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = local_58._32_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58._36_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = (undefined4)uStack_30;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = uStack_30._4_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = (undefined4)local_28;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_28._4_4_;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = plStack_20._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = plStack_20._4_4_;
  local_58._16_8_ = lVar6;
  local_58._24_8_ = lVar7;
  local_58._32_8_ = lVar8;
  uStack_30 = (longlong *)lVar9;
  local_28 = lVar4;
  plStack_20 = plVar3;
  if (lVar6 != 0) {
    plVar11 = (longlong *)(local_58 + 0x20);
    if (plVar3 != (longlong *)0x0) {
      plVar11 = plVar3;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return __return_storage_ptr__;
}

// ShareAccess @ 14ae460b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstDocumentAccess * __thiscall
Metasound::Frontend::FDocumentController::ShareAccess
          (FDocumentController *this,FConstDocumentAccess *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FConstDocumentAccess::FConstDocumentAccess(__return_storage_ptr__);
  FConstDocumentAccessPtr::FConstDocumentAccessPtr<FMetasoundFrontendDocument>
            ((FConstDocumentAccessPtr *)local_58,
             (TAccessPtr<FMetasoundFrontendDocument> *)&this->DocumentPtr,Tag);
  *(undefined8 *)&__return_storage_ptr__->ConstDocument = local_58._0_8_;
  lVar7 = *(longlong *)&(__return_storage_ptr__->ConstDocument).field_0x10;
  uVar8 = *(undefined8 *)&(__return_storage_ptr__->ConstDocument).field_0x18;
  uVar1 = *(undefined4 *)&(__return_storage_ptr__->ConstDocument).field_0x20;
  uVar2 = *(undefined4 *)&(__return_storage_ptr__->ConstDocument).field_0x24;
  uVar3 = *(undefined4 *)&(__return_storage_ptr__->ConstDocument).field_0x28;
  uVar4 = *(undefined4 *)&(__return_storage_ptr__->ConstDocument).field_0x2c;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->ConstDocument).field_0x30;
  plVar6 = *(longlong **)&(__return_storage_ptr__->ConstDocument).field_0x38;
  *(undefined8 *)&(__return_storage_ptr__->ConstDocument).field_0x10 = local_58._16_8_;
  *(undefined8 *)&(__return_storage_ptr__->ConstDocument).field_0x18 = local_58._24_8_;
  *(undefined4 *)&(__return_storage_ptr__->ConstDocument).field_0x20 = local_58._32_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstDocument).field_0x24 = local_58._36_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstDocument).field_0x28 = local_58._40_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstDocument).field_0x2c = local_58._44_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstDocument).field_0x30 = local_58._48_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstDocument).field_0x34 = local_58._52_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstDocument).field_0x38 = local_58._56_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstDocument).field_0x3c = local_58._60_4_;
  local_58._32_4_ = uVar1;
  local_58._36_4_ = uVar2;
  local_58._40_4_ = uVar3;
  local_58._44_4_ = uVar4;
  local_58._48_8_ = uVar5;
  local_58._56_8_ = plVar6;
  if (lVar7 != 0) {
    plVar9 = (longlong *)(local_58 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    local_58._16_8_ = lVar7;
    local_58._24_8_ = uVar8;
    (**(code **)(*plVar9 + 0x10))();
  }
  return __return_storage_ptr__;
}

// SynchronizeDependencyMetadata @ 14ae46950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<Metasound::Frontend::FConstClassAccessPtr,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FDocumentController::SynchronizeDependencyMetadata
          (FDocumentController *this,
          TArray<Metasound::Frontend::FConstClassAccessPtr,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  INodeClassRegistry *pIVar11;
  FScriptContainerElement *pFVar12;
  TArray<Metasound::Frontend::FConstClassAccessPtr,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong *plVar14;
  longlong *plVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_1a8 [32];
  FScriptContainerElement *local_188;
  FScriptContainerElement *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined1 local_158 [8];
  FDocumentController *local_150;
  undefined **local_148;
  FGuid local_140;
  FMetasoundFrontendClassMetadata local_130;
  FMetasoundFrontendClassInput *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  FNodeClassRegistryKey local_b8;
  undefined1 local_88 [16];
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_150 = this;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->DocumentPtr).field_0x10);
  plVar15 = *(longlong **)&(this->DocumentPtr).field_0x38;
  pcVar2 = *(code **)&(this->DocumentPtr).field_0x10;
  plVar14 = (longlong *)&(this->DocumentPtr).field_0x20;
  if (plVar15 != (longlong *)0x0) {
    plVar14 = plVar15;
  }
  uVar9 = (**(code **)(*plVar14 + 8))();
  lVar10 = (*pcVar2)(uVar9);
  *(longlong *)&this->DocumentPtr = lVar10;
  if (lVar10 != 0) {
    lVar17 = *(longlong *)(lVar10 + 0x178);
    iVar1 = *(int *)(lVar10 + 0x180);
    lVar18 = (longlong)iVar1 * 0x90 + lVar17;
    while( true ) {
      if (*(int *)(lVar10 + 0x180) != iVar1) {
        local_158[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClass,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_158);
      }
      if (lVar17 == lVar18) break;
      local_148 = &___7FMetasoundFrontendClass__6B_;
      local_140 = FrontendInvalidID;
      FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_130);
      local_f8 = (FMetasoundFrontendClassInput *)0x0;
      local_f0 = 0;
      local_e8 = (void *)0x0;
      local_e0 = 0;
      local_d8 = (void *)0x0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      FNodeClassRegistryKey::FNodeClassRegistryKey
                (&local_b8,(FMetasoundFrontendClassMetadata *)(lVar17 + 0x18));
      pIVar11 = INodeClassRegistry::Get();
      cVar6 = (**(code **)((longlong)*pIVar11 + 0x68))(pIVar11,&local_b8,&local_148);
      if ((cVar6 != '\0') &&
         (((local_130.ChangeID.D != *(uint *)(lVar17 + 0x48) ||
           local_130.ChangeID.C != *(uint *)(lVar17 + 0x44)) ||
          local_130.ChangeID.B != *(uint *)(lVar17 + 0x40)) ||
          local_130.ChangeID.A != *(uint *)(lVar17 + 0x3c))) {
        *(FName *)(lVar17 + 0x18) = local_130.ClassName.Namespace;
        *(FName *)(lVar17 + 0x20) = local_130.ClassName.Name;
        *(uint *)(lVar17 + 0x28) = local_130.ClassName.Variant.ComparisonIndex.Value;
        *(uint *)(lVar17 + 0x2c) = local_130.ClassName.Variant.Number;
        *(int *)(lVar17 + 0x30) = local_130.Version.Major;
        *(int *)(lVar17 + 0x34) = local_130.Version.Minor;
        *(undefined4 *)(lVar17 + 0x38) = local_130._32_4_;
        *(uint *)(lVar17 + 0x3c) = local_130.ChangeID.A;
        *(uint *)(lVar17 + 0x40) = local_130.ChangeID.B;
        *(uint *)(lVar17 + 0x44) = local_130.ChangeID.C;
        *(uint *)(lVar17 + 0x48) = local_130.ChangeID.D;
        pFVar12 = (FScriptContainerElement *)
                  (**(code **)(local_150->_padding_ + 0x88))(local_150,local_88,&local_b8);
        pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar16 <= pFVar12) &&
           (pFVar12 < pFVar16 + (longlong)__return_storage_ptr__->ArrayMax * 0x40)) {
          local_170 = (longlong)__return_storage_ptr__->ArrayNum;
          local_168 = 0x40;
          local_188 = pFVar12;
          local_180 = pFVar16;
          local_178 = (longlong)__return_storage_ptr__->ArrayMax;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            pTVar13 = (TArray<Metasound::Frontend::FConstClassAccessPtr,TSizedDefaultAllocator<32>_>
                       *)(*pcVar2)();
            return pTVar13;
          }
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1040,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x40;
        *(undefined8 *)pFVar16 = *(undefined8 *)pFVar12;
        *(undefined8 *)(pFVar16 + 0x10) = *(undefined8 *)(pFVar12 + 0x10);
        *(undefined8 *)(pFVar16 + 0x38) = *(undefined8 *)(pFVar12 + 0x38);
        *(undefined8 *)(pFVar12 + 0x38) = 0;
        uVar3 = *(undefined4 *)(pFVar12 + 0x24);
        uVar4 = *(undefined4 *)(pFVar12 + 0x28);
        uVar5 = *(undefined4 *)(pFVar12 + 0x2c);
        *(undefined4 *)(pFVar16 + 0x20) = *(undefined4 *)(pFVar12 + 0x20);
        *(undefined4 *)(pFVar16 + 0x24) = uVar3;
        *(undefined4 *)(pFVar16 + 0x28) = uVar4;
        *(undefined4 *)(pFVar16 + 0x2c) = uVar5;
        *(undefined8 *)(pFVar16 + 0x30) = *(undefined8 *)(pFVar12 + 0x30);
        if (*(longlong *)(pFVar16 + 0x10) != 0) {
          *(undefined8 *)(pFVar12 + 0x10) = 0;
        }
        if (local_78 != 0) {
          plVar15 = local_68;
          if (local_50 != (longlong *)0x0) {
            plVar15 = local_50;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      DestructItems<FMetasoundFrontendClassInput,int>(local_f8,(int)local_f0);
      if (local_f8 != (FMetasoundFrontendClassInput *)0x0) {
        FMemory::Free(local_f8);
      }
      lVar17 = lVar17 + 0x90;
    }
  }
  return __return_storage_ptr__;
}

