// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 68

// FBaseNodeController @ 14ae57860

/* WARNING: Enum "Type": Some values do not have unique names */

FBaseNodeController * __thiscall
Metasound::Frontend::FBaseNodeController::FBaseNodeController
          (FBaseNodeController *this,FInitParams *param_1)

{
  FGuid *this_00;
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  FString local_38;
  FString local_28;
  
  this->_padding_ = 0;
  plVar10 = (longlong *)&(this->NodePtr).field_0x20;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBaseNodeController_Frontend_Metasound__6B_;
  *(undefined8 *)&this->NodePtr = *(undefined8 *)&param_1->NodePtr;
  lVar6 = *(longlong *)&(param_1->NodePtr).field_0x10;
  *(longlong *)&(this->NodePtr).field_0x10 = lVar6;
  *(undefined8 *)&(this->NodePtr).field_0x38 = 0;
  if (lVar6 != 0) {
    puVar1 = *(undefined8 **)&(param_1->NodePtr).field_0x38;
    puVar8 = (undefined8 *)&(param_1->NodePtr).field_0x20;
    if (puVar1 != (undefined8 *)0x0) {
      puVar8 = puVar1;
    }
    (**(code **)*puVar8)(puVar8,plVar10);
  }
  plVar9 = (longlong *)&(this->ClassPtr).field_0x20;
  *(undefined8 *)&this->ClassPtr = *(undefined8 *)&param_1->ClassPtr;
  lVar6 = *(longlong *)&(param_1->ClassPtr).field_0x10;
  *(longlong *)&(this->ClassPtr).field_0x10 = lVar6;
  *(undefined8 *)&(this->ClassPtr).field_0x38 = 0;
  if (lVar6 != 0) {
    puVar1 = *(undefined8 **)&(param_1->ClassPtr).field_0x38;
    puVar8 = (undefined8 *)&(param_1->ClassPtr).field_0x20;
    if (puVar1 != (undefined8 *)0x0) {
      puVar8 = puVar1;
    }
    (**(code **)*puVar8)(puVar8,plVar9);
  }
  (this->OwningGraph).Object = (param_1->OwningGraph).Object;
  pTVar2 = (param_1->OwningGraph).SharedReferenceCount.ReferenceController;
  (this->OwningGraph).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar3 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar4 = *(code **)&(this->NodePtr).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar10 = plVar3;
  }
  uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
  lVar6 = (*pcVar4)(uVar5);
  *(longlong *)&this->NodePtr = lVar6;
  if (lVar6 != 0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->ClassPtr).field_0x10);
    plVar10 = *(longlong **)&(this->ClassPtr).field_0x38;
    pcVar4 = *(code **)&(this->ClassPtr).field_0x10;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
    lVar7 = (*pcVar4)(uVar5);
    *(longlong *)&this->ClassPtr = lVar7;
    if ((lVar7 != 0) &&
       (this_00 = (FGuid *)(lVar7 + 8),
       ((*(int *)(lVar6 + 0x1c) != *(int *)(lVar7 + 0x14) ||
        *(int *)(lVar6 + 0x18) != *(int *)(lVar7 + 0x10)) ||
       *(int *)(lVar6 + 0x14) != *(int *)(lVar7 + 0xc)) || *(uint *)(lVar6 + 0x10) != this_00->A)) {
      if (2 < (byte)LogMetaSound._0_1_) {
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        FGuid::AppendString(this_00,&local_28,Digits);
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        FGuid::AppendString((FGuid *)(lVar6 + 0x10),&local_38,Digits);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      uVar5 = *(undefined8 *)(lVar7 + 0x10);
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)this_00;
      *(undefined8 *)(lVar6 + 0x18) = uVar5;
    }
  }
  return this;
}

// ~FBaseNodeController @ 14ae5bff0

void __thiscall
Metasound::Frontend::FBaseNodeController::~FBaseNodeController(FBaseNodeController *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwningGraph).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&(this->ClassPtr).field_0x10 != 0) {
    plVar3 = *(longlong **)&(this->ClassPtr).field_0x38;
    plVar4 = (longlong *)&(this->ClassPtr).field_0x20;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->NodePtr).field_0x10 != 0) {
    plVar3 = *(longlong **)&(this->NodePtr).field_0x38;
    plVar4 = (longlong *)&(this->NodePtr).field_0x20;
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
                    /* WARNING: Could not recover jumptable at 0x00014ae5c065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14ae5d740

void __thiscall
`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_1>::
operator()(void *this,TSharedRef<Metasound::Frontend::IInputController,1> *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int *piVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  TTuple<FName,FName> local_58;
  undefined1 local_48 [8];
  void *local_40;
  
  plVar12 = (longlong *)0x0;
  plVar9 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0x30))();
  plVar10 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0x38))();
  lVar2 = *plVar9;
  plVar9 = *(longlong **)this;
  lVar3 = *plVar10;
  local_58._0_8_ = lVar3;
  local_58._8_8_ = lVar2;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
  iVar13 = (int)((ulonglong)lVar3 >> 0x20);
  uVar7 = iVar13 + uVar7;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  iVar14 = (int)((ulonglong)lVar2 >> 0x20);
  if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
    plVar10 = (longlong *)plVar9[8];
    if ((longlong *)plVar9[8] == (longlong *)0x0) {
      plVar10 = plVar9 + 7;
    }
    iVar1 = *(int *)((longlong)plVar10 +
                    (ulonglong)
                    ((int)plVar9[9] - 1U &
                    (iVar14 + uVar7 * 0x40 + (uVar7 >> 2) + uVar8 + 0x9e3779b9 ^ uVar7)) * 4);
    if (iVar1 != -1) {
      do {
        plVar10 = (longlong *)((longlong)iVar1 * 0x98 + *plVar9);
        if ((*plVar10 == lVar3) && (plVar10[1] == lVar2)) {
          if (iVar1 != -1) {
            plVar9 = plVar10 + 2;
            if (plVar10 == (longlong *)0x0) {
              plVar9 = plVar12;
            }
            if (plVar9 != (longlong *)0x0) {
              if ((char)plVar9[0xf] != '\0') {
                (**(code **)(*(longlong *)param_1->Object + 0x58))(param_1->Object,plVar9 + 4);
              }
              cVar5 = (**(code **)(*(longlong *)*plVar9 + 0x18))();
              if (cVar5 == '\0') {
LAB_14ae5d89c:
                bVar6 = false;
              }
              else {
                plVar12 = (longlong *)&DAT_00000001;
                piVar11 = (int *)(**(code **)(*(longlong *)param_1->Object + 0xa0))
                                           (param_1->Object,local_48,*plVar9);
                if (*piVar11 != 0) goto LAB_14ae5d89c;
                bVar6 = true;
              }
              if ((plVar12 != (longlong *)0x0) && (local_40 != (void *)0x0)) {
                FMemory::Free(local_40);
              }
              if (bVar6) {
                cVar5 = (**(code **)(*(longlong *)param_1->Object + 0xa8))();
                if ((cVar5 == '\0') &&
                   (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_3501407040784301191>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                                       ,0x379,
                                       "InputHandle->Connect(*ConnectionInfo->ConnectedOutput)"),
                   bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                this_00 = *(TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>,FDefaultSetAllocator>
                            **)this;
                if (*(int *)&(this_00->Elements).field_0x8 !=
                    *(int *)&(this_00->Elements).field_0x34) {
                  uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
                  uVar7 = iVar13 + uVar7;
                  uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
                  TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>,FDefaultSetAllocator>
                  ::RemoveImpl<TTuple<FName,FName>_>
                            (this_00,(uVar7 >> 2) + iVar14 + uVar7 * 0x40 + uVar8 + 0x9e3779b9 ^
                                     uVar7,&local_58);
                }
              }
            }
          }
          break;
        }
        iVar1 = (int)plVar10[0x12];
      } while (iVar1 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14ae5d980

void __thiscall
`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_1>::
operator()(void *this,TSharedRef<Metasound::Frontend::IInputController,1> *param_1)

{
  TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>,FDefaultSetAllocator>
  *this_00;
  FMetasoundFrontendLiteral *pFVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FMetasoundFrontendLiteral local_118;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  EMetasoundFrontendLiteralType local_98;
  int local_94;
  FScriptContainerElement *local_90;
  int local_88;
  int local_84;
  FScriptContainerElement *local_80;
  int local_78;
  int local_74;
  FScriptContainerElement *local_70;
  int local_68;
  int local_64;
  FScriptContainerElement *local_60;
  int local_58;
  int local_54;
  FScriptContainerElement *local_50;
  int local_48;
  int local_44;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined1 *local_20;
  
  local_118.Type = None;
  local_118.AsNumDefault = 0;
  local_118.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AsBoolean.ArrayNum = 0;
  local_118.AsBoolean.ArrayMax = 0;
  local_118.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AsInteger.ArrayNum = 0;
  local_118.AsInteger.ArrayMax = 0;
  local_118.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AsFloat.ArrayNum = 0;
  local_118.AsFloat.ArrayMax = 0;
  local_118.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AsString.ArrayNum = 0;
  local_118.AsString.ArrayMax = 0;
  local_118.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AsUObject.ArrayNum = 0;
  local_118.AsUObject.ArrayMax = 0;
  pFVar1 = (FMetasoundFrontendLiteral *)(**(code **)(*(longlong *)param_1->Object + 0x50))();
  if (pFVar1 != (FMetasoundFrontendLiteral *)0x0) {
    FMetasoundFrontendLiteral::operator=(&local_118,pFVar1);
  }
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1->Object + 0x30))();
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1->Object + 0x38))();
  local_38 = *puVar3;
  local_30 = *puVar2;
  this_00 = *(TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>,FDefaultSetAllocator>
              **)this;
  (**(code **)(*(longlong *)param_1->Object + 0x88))(param_1->Object,local_b8);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1->Object + 0x38))();
  local_a8 = *puVar2;
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1->Object + 0x30))();
  local_a0 = *puVar2;
  local_98 = local_118.Type;
  local_94 = local_118.AsNumDefault;
  local_90 = local_118.AsBoolean.AllocatorInstance.Data;
  local_88 = local_118.AsBoolean.ArrayNum;
  local_84 = local_118.AsBoolean.ArrayMax;
  local_80 = local_118.AsInteger.AllocatorInstance.Data;
  local_78 = local_118.AsInteger.ArrayNum;
  local_74 = local_118.AsInteger.ArrayMax;
  local_70 = local_118.AsFloat.AllocatorInstance.Data;
  local_68 = local_118.AsFloat.ArrayNum;
  local_64 = local_118.AsFloat.ArrayMax;
  local_60 = local_118.AsString.AllocatorInstance.Data;
  local_58 = local_118.AsString.ArrayNum;
  local_54 = local_118.AsString.ArrayMax;
  local_50 = local_118.AsUObject.AllocatorInstance.Data;
  local_48 = local_118.AsUObject.ArrayNum;
  local_44 = local_118.AsUObject.ArrayMax;
  local_20 = local_b8;
  local_118.AsBoolean.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AsBoolean.ArrayNum = 0;
  local_118.AsBoolean.ArrayMax = 0;
  local_118.AsInteger.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AsInteger.ArrayNum = 0;
  local_118.AsInteger.ArrayMax = 0;
  local_118.AsFloat.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AsFloat.ArrayNum = 0;
  local_118.AsFloat.ArrayMax = 0;
  local_118.AsString.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AsString.ArrayNum = 0;
  local_118.AsString.ArrayMax = 0;
  local_118.AsUObject.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AsUObject.ArrayNum = 0;
  local_118.AsUObject.ArrayMax = 0;
  local_40 = pFVar1 != (FMetasoundFrontendLiteral *)0x0;
  local_28 = &local_38;
  TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FName,FName>_const_&,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo_&&>_>
            (this_00,(TPairInitializer<TTuple<FName,FName>_const_&,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo_&&>
                      *)&stack0x00000008,(bool *)&local_28);
  if (local_50 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50);
  }
  DestructItems<FString,int>((FString *)local_60,local_58);
  if (local_60 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_80 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_90 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  if (local_118.AsUObject.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AsUObject.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_118.AsString.AllocatorInstance.Data,local_118.AsString.ArrayNum);
  if (local_118.AsString.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AsString.AllocatorInstance.Data);
  }
  if (local_118.AsFloat.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AsFloat.AllocatorInstance.Data);
  }
  if (local_118.AsInteger.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AsInteger.AllocatorInstance.Data);
  }
  if (local_118.AsBoolean.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AsBoolean.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14ae5e050

void __thiscall
`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_2>::
operator()(void *this,TSharedRef<Metasound::Frontend::IOutputController,1> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined1 local_res18 [8];
  uint local_res20;
  TTuple<FName,FName> local_78;
  undefined1 local_68 [8];
  void *local_60;
  
  plVar16 = (longlong *)0x0;
  plVar12 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0x28))();
  plVar13 = (longlong *)(**(code **)(*(longlong *)param_1->Object + 0x30))();
  lVar1 = *plVar12;
  plVar12 = *(longlong **)this;
  lVar2 = *plVar13;
  local_78._0_8_ = lVar2;
  local_78._8_8_ = lVar1;
  uVar10 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
  uVar10 = (int)((ulonglong)lVar2 >> 0x20) + uVar10;
  uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
    plVar13 = (longlong *)plVar12[8];
    if ((longlong *)plVar12[8] == (longlong *)0x0) {
      plVar13 = plVar12 + 7;
    }
    iVar18 = *(int *)((longlong)plVar13 +
                     (ulonglong)
                     ((int)plVar12[9] - 1U &
                     ((int)((ulonglong)lVar1 >> 0x20) + uVar10 * 0x40 + (uVar10 >> 2) +
                      uVar11 + 0x9e3779b9 ^ uVar10)) * 4);
    if (iVar18 != -1) {
      do {
        plVar13 = (longlong *)((longlong)iVar18 * 0x38 + *plVar12);
        if ((*plVar13 == lVar2) && (plVar13[1] == lVar1)) {
          if (iVar18 != -1) {
            plVar12 = plVar13 + 2;
            if (plVar13 == (longlong *)0x0) {
              plVar12 = plVar16;
            }
            if (plVar12 != (longlong *)0x0) {
              local_res20 = *(uint *)(plVar12 + 1);
              uVar14 = (ulonglong)(int)local_res20;
              puVar17 = (undefined8 *)*plVar12;
              puVar19 = puVar17 + uVar14 * 2;
              bVar9 = false;
              goto LAB_14ae5e180;
            }
          }
          break;
        }
        iVar18 = (int)plVar13[6];
      } while (iVar18 != -1);
    }
  }
LAB_14ae5e2ed:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
LAB_14ae5e180:
  if ((int)plVar12[1] != (int)uVar14) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<TSharedRef<Metasound::Frontend::IInputController,1>,int,0>::operator!='
    ::__l2::<lambda_1>::operator()(local_res18);
  }
  uVar6 = local_78._0_8_;
  if (puVar17 == puVar19) {
    if ((bVar9) &&
       (this_00 = *(TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>,FDefaultSetAllocator>
                    **)this,
       *(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34)) {
      uVar10 = ::GetTypeHash((FNameEntryId)local_78._0_4_);
      uVar7 = local_78._8_8_;
      uVar10 = uVar10 + SUB84(uVar6,4);
      uVar11 = ::GetTypeHash((FNameEntryId)local_78._8_4_);
      TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>,FDefaultSetAllocator>
      ::RemoveImpl<TTuple<FName,FName>_>
                (this_00,(uVar10 >> 2) + SUB84(uVar7,4) + uVar10 * 0x40 + uVar11 + 0x9e3779b9 ^
                         uVar10,&local_78);
    }
    goto LAB_14ae5e2ed;
  }
  pTVar3 = (TReferenceControllerBase<1> *)puVar17[1];
  plVar13 = (longlong *)*puVar17;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  cVar8 = (**(code **)(*plVar13 + 0x18))(plVar13);
  if (cVar8 == '\0') {
LAB_14ae5e1e3:
    bVar5 = false;
  }
  else {
    plVar16 = (longlong *)&DAT_00000001;
    piVar15 = (int *)(**(code **)(*plVar13 + 0xa0))(plVar13,local_68,param_1->Object);
    if (*piVar15 != 0) goto LAB_14ae5e1e3;
    bVar5 = true;
  }
  if ((plVar16 != (longlong *)0x0) && (plVar16 = (longlong *)0x0, local_60 != (void *)0x0)) {
    FMemory::Free(local_60);
  }
  if (bVar5) {
    cVar8 = (**(code **)(*plVar13 + 0xa8))(plVar13);
    if ((cVar8 == '\0') &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3501407040784301158>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                           ,0x39a,"InputHandle->Connect(*OutputHandle)"), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar9 = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    uVar14 = (ulonglong)local_res20;
    puVar17 = puVar17 + 2;
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    uVar14 = (ulonglong)local_res20;
    puVar17 = puVar17 + 2;
  }
  goto LAB_14ae5e180;
}

// operator() @ 14ae5e310

void __thiscall
`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_2>::
operator()(void *this,TSharedRef<Metasound::Frontend::IOutputController,1> *param_1)

{
  TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>,FDefaultSetAllocator>
  *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  TSharedRef<Metasound::Frontend::IInputController,1> **local_30;
  TSharedRef<Metasound::Frontend::IInputController,1> *local_28;
  int local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1->Object + 0x28))();
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1->Object + 0x30))();
  local_48 = *puVar2;
  local_40 = *puVar1;
  this_00 = *(TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>,FDefaultSetAllocator>
              **)this;
  (**(code **)(*(longlong *)param_1->Object + 0x70))(param_1->Object,&local_28);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1->Object + 0x30))();
  local_18 = *puVar1;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1->Object + 0x28))();
  local_10 = *puVar1;
  local_38 = &local_48;
  local_30 = &local_28;
  TSet<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TTuple<FName,FName>_const_&,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo_&&>_>
            (this_00,(TPairInitializer<TTuple<FName,FName>_const_&,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo_&&>
                      *)&stack0x00000008,(bool *)&local_38);
  DestructItems<TSharedRef<Metasound::Frontend::IInputController,1>,int>(local_28,local_20);
  if (local_28 != (TSharedRef<Metasound::Frontend::IInputController,1> *)0x0) {
    FMemory::Free(local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddInput @ 14ae60f40

TSharedRef<Metasound::Frontend::IInputController,1> * __thiscall
Metasound::Frontend::FBaseNodeController::AddInput
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController,1> *__return_storage_ptr__,FName *param_1
          ,FMetasoundFrontendLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                     ,0x122,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedRef<Metasound::Frontend::IInputController,1> *)(*pcVar1)();
    return pTVar3;
  }
  IInputController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddOutput @ 14ae61180

TSharedRef<Metasound::Frontend::IInputController,1> * __thiscall
Metasound::Frontend::FBaseNodeController::AddOutput
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController,1> *__return_storage_ptr__,FName *param_1
          ,FMetasoundFrontendLiteral *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                     ,0x136,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedRef<Metasound::Frontend::IInputController,1> *)(*pcVar1)();
    return pTVar3;
  }
  IInputController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ApplyNodeInstanceReplacementData @ 14ae63880

void __thiscall
Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData
          (FBaseNodeController *this,FMetasoundFrontendClass *param_1,INodeController *param_2,
          FNodeInstanceReplacementData *param_3,
          TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  TMap<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>_>
  *pTVar2;
  ulonglong uVar3;
  UScriptStruct *pUVar4;
  uchar *puVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType *pFVar8;
  TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *pTVar9;
  TMap<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>_>
  *pTVar10;
  TMap<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>_>
  *pTVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  longlong *plVar15;
  byte bVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  undefined1 local_res20 [8];
  undefined1 local_1d8 [4];
  uint local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  TMap<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>_>
  *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int local_190;
  undefined4 uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  undefined8 local_170;
  TMap<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>_>
  *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  TMap<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  TMap<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TObjectPtr<UScriptStruct_const_>_u_0 local_d8;
  uchar *local_d0;
  code *local_c8 [2];
  undefined **local_b8;
  TMap<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>_>
  *local_b0;
  undefined8 local_a0;
  code *local_98 [2];
  undefined **local_88;
  TMap<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo,0>_>
  *local_80;
  undefined8 local_70;
  undefined1 local_68 [44];
  undefined4 local_3c;
  
  pUVar4 = (param_3->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
  plVar15 = (longlong *)(**(code **)(*(longlong *)param_2 + 0x150))(param_2,local_68);
  if ((UScriptStruct *)*plVar15 == pUVar4) {
    local_d8 = (TObjectPtr<UScriptStruct_const_>_u_0)
               (param_3->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
    puVar5 = (param_3->Configuration).InstancedStruct.StructMemory;
    pcVar6 = *(code **)(*(longlong *)param_2 + 0x148);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_d8.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_d8.DebugPtr);
    }
    (param_3->Configuration).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0
    ;
    (param_3->Configuration).InstancedStruct.StructMemory = (uchar *)0x0;
    local_d0 = puVar5;
    (*pcVar6)(param_2,&local_d8);
  }
  local_b0 = &param_3->InputConnections;
  local_b8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_c8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_1>,void,TSharedRef<Metasound::Frontend::IInputController,1>_>
                ::Call;
  local_a0 = 0;
  (**(code **)(*(longlong *)param_2 + 0x38))(param_2,local_c8);
  pFVar8 = (ForAnyElementType *)CONCAT71(param_4._1_7_,param_4._0_1_);
  local_170 = 1;
  if (pFVar8 != (ForAnyElementType *)0x0) {
    iVar14 = *(int *)&(param_3->InputConnections).field_0x28;
    local_1a0 = &(param_3->InputConnections).field_0x10;
    iStack_1a8 = 0;
    uStack_1a4 = 1;
    iStack_194 = iStack_1a8;
    local_190 = iStack_1a8;
    if (iVar14 != 0) {
      puVar22 = *(uint **)&(param_3->InputConnections).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)local_1a0;
      }
      uStack_1a4 = *puVar22;
      local_190 = 0;
      iStack_1a8 = 0;
      while (uStack_1a4 == 0) {
        lVar17 = (longlong)iStack_1a8;
        local_190 = local_190 + 0x20;
        iStack_1a8 = iStack_1a8 + 1;
        uStack_1a4 = 1;
        iStack_194 = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a8)
        goto LAB_14ae639df;
        uStack_1a4 = puVar22[lVar17 + 1];
      }
      uStack_1a4 = -uStack_1a4 & uStack_1a4;
      uVar3 = (ulonglong)uStack_1a4 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_180 = (int)lVar17;
      iStack_194 = local_190 + -1 + local_180;
      if (iVar14 < iStack_194) {
        iStack_194 = iVar14;
      }
    }
LAB_14ae639df:
    local_1d4 = *(uint *)&(param_3->InputConnections).field_0x28;
    local_1b0 = &param_3->InputConnections;
    uStack_18c = local_3c;
    iStack_188 = *(int *)&(param_3->InputConnections).field_0x8 -
                 *(int *)&(param_3->InputConnections).field_0x34;
    uVar25 = local_1d4 & 0xffffffe0;
    TStack_130._padding_ = CONCAT44(uStack_1a4,iStack_1a8);
    uStack_198 = 0xffffffff;
    TStack_130.CurrentBitIndex = iStack_194;
    TStack_130.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)local_1d4 >> 5;
    TStack_130._28_4_ = local_3c;
    TStack_130.BaseBitIndex = local_190;
    uStack_110 = CONCAT44(uStack_184,iStack_188);
    bVar16 = (byte)local_1d4;
    local_138 = local_1b0;
    TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1a0;
    if ((((int)local_1d4 < 0) || (iVar14 < (int)local_1d4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar23 = *(uint *)&(param_3->InputConnections).field_0x28;
    if (local_1d4 != uVar23) {
      puVar21 = *(undefined1 **)&(param_3->InputConnections).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = &(param_3->InputConnections).field_0x10;
      }
      uVar24 = -1 << (bVar16 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
      while (uVar24 == 0) {
        lVar17 = (longlong)iVar20;
        uVar25 = uVar25 + 0x20;
        iVar20 = iVar20 + 1;
        local_1d4 = uVar23;
        if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_14ae63b03;
        uVar24 = *(uint *)(puVar21 + lVar17 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_17c = (int)lVar17;
      local_1d4 = local_17c + -1 + uVar25;
      if ((int)uVar23 < (int)local_1d4) {
        local_1d4 = uVar23;
      }
    }
LAB_14ae63b03:
    uVar25 = local_1d4;
    while( true ) {
      pTVar10 = local_138;
      if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
        param_4._0_1_ = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&param_4);
      }
      if (((TStack_130.CurrentBitIndex == uVar25) &&
          (TStack_130.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(param_3->InputConnections).field_0x10)) &&
         (pTVar10 == &param_3->InputConnections)) break;
      lVar17 = *(longlong *)pTVar10 + (longlong)TStack_130.CurrentBitIndex * 0x98;
      cVar13 = (**(code **)(**(longlong **)(lVar17 + 0x10) + 0x18))();
      if (cVar13 != '\0') {
        local_1d0 = *(undefined8 *)(lVar17 + 0x20);
        uStack_1c8 = *(undefined8 *)(lVar17 + 0x28);
        if (((pFVar8->Data <= (FScriptContainerElement *)&local_1d0) &&
            ((FScriptContainerElement *)&local_1d0 <
             pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 0x10)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar14 = *(int *)&pFVar8[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,pFVar8,piVar1);
        }
        *(int *)&pFVar8[1].Data = iVar14 + 1;
        pFVar7 = pFVar8->Data;
        *(undefined8 *)(pFVar7 + (longlong)iVar14 * 0x10) = local_1d0;
        *(undefined8 *)(pFVar7 + (longlong)iVar14 * 0x10 + 8) = uStack_1c8;
      }
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    }
  }
  iVar14 = 0;
  uVar25 = (uint)local_170;
  local_70 = 0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::`2'::<lambda_2>,1,0>
              ::_vftable_;
  pTVar2 = &param_3->OutputConnections;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Metasound::Frontend::FBaseNodeController::ApplyNodeInstanceReplacementData'::__l2::<lambda_2>,void,TSharedRef<Metasound::Frontend::IOutputController,1>_>
                ::Call;
  local_80 = pTVar2;
  (**(code **)(*(longlong *)param_2 + 0x50))(param_2,local_98);
  pTVar9 = param_5;
  if (param_5 != (TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_3->OutputConnections).field_0x10;
    local_148 = 0;
    iVar20 = *(int *)&(param_3->OutputConnections).field_0x28;
    iStack_14c = local_148;
    iStack_160 = iVar14;
    if (iVar20 != 0) {
      puVar22 = *(uint **)&(param_3->OutputConnections).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)pTVar26;
      }
      uVar23 = *puVar22;
      local_148 = iVar14;
      while (uVar23 == 0) {
        lVar17 = (longlong)iStack_160;
        local_148 = local_148 + 0x20;
        iStack_160 = iStack_160 + 1;
        iStack_14c = iVar20;
        if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_160)
        goto LAB_14ae63d1d;
        uVar23 = puVar22[lVar17 + 1];
      }
      uVar25 = -uVar23 & uVar23;
      uVar3 = (ulonglong)uVar25 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_178 = (int)lVar17;
      iStack_14c = local_148 + -1 + local_178;
      if (iVar20 < iStack_14c) {
        iStack_14c = iVar20;
      }
    }
LAB_14ae63d1d:
    iStack_144 = iStack_194;
    iStack_140 = *(int *)&(param_3->OutputConnections).field_0x8 -
                 *(int *)&(param_3->OutputConnections).field_0x34;
    uVar23 = *(uint *)&(param_3->OutputConnections).field_0x28;
    uStack_150 = 0xffffffff;
    uVar24 = uVar23 & 0xffffffe0;
    TStack_100._padding_ = CONCAT44(uVar25,iStack_160);
    TStack_100.CurrentBitIndex = iStack_14c;
    TStack_100.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar23 >> 5;
    TStack_100._28_4_ = iStack_194;
    TStack_100.BaseBitIndex = local_148;
    uStack_e0 = CONCAT44(uStack_13c,iStack_140);
    param_5 = (TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *)pTVar26;
    local_168 = pTVar2;
    uStack_15c = uVar25;
    local_158 = (undefined1 *)pTVar26;
    local_108 = pTVar2;
    TStack_100.Array = pTVar26;
    if ((((int)uVar23 < 0) || (iVar20 < (int)uVar23)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar25 = *(uint *)&(param_3->OutputConnections).field_0x28;
    if (uVar23 != uVar25) {
      puVar21 = *(undefined1 **)&(param_3->OutputConnections).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = (undefined1 *)pTVar26;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar14 * 4);
      while (uVar23 == 0) {
        lVar17 = (longlong)iVar14;
        uVar24 = uVar24 + 0x20;
        iVar14 = iVar14 + 1;
        uVar23 = uVar25;
        if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14ae63e30;
        uVar23 = *(uint *)(puVar21 + lVar17 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_174 = (int)lVar17;
      uVar23 = local_174 + -1 + uVar24;
      if ((int)uVar25 < (int)uVar23) {
        uVar23 = uVar25;
      }
    }
LAB_14ae63e30:
    while( true ) {
      pTVar11 = local_108;
      if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_100.CurrentBitIndex == uVar23) && (TStack_100.Array == pTVar26)) &&
         (pTVar11 == pTVar2)) break;
      lVar17 = (longlong)TStack_100.CurrentBitIndex * 0x38 + *(longlong *)pTVar11;
      iVar14 = *(int *)(lVar17 + 0x18);
      puVar18 = *(undefined8 **)(lVar17 + 0x10);
      puVar19 = puVar18 + (longlong)iVar14 * 2;
      while( true ) {
        if (*(int *)(lVar17 + 0x18) != iVar14) {
          local_1d8[0] = 0;
          `TCheckedPointerIterator<TSharedRef<Metasound::Frontend::IInputController,1>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_1d8);
        }
        if (puVar18 == puVar19) goto LAB_14ae63f6a;
        cVar13 = (**(code **)(*(longlong *)*puVar18 + 0x18))();
        if (cVar13 != '\0') break;
        puVar18 = puVar18 + 2;
      }
      local_1c0 = *(undefined8 *)(lVar17 + 0x20);
      pFVar7 = (pTVar9->AllocatorInstance).Data;
      uStack_1b8 = *(undefined8 *)(lVar17 + 0x28);
      if (((pFVar7 <= (FScriptContainerElement *)&local_1c0) &&
          ((FScriptContainerElement *)&local_1c0 < pFVar7 + (longlong)pTVar9->ArrayMax * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar14 = pTVar9->ArrayNum;
      if (iVar14 == pTVar9->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
      }
      pTVar9->ArrayNum = iVar14 + 1;
      pFVar7 = (pTVar9->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
      *(undefined8 *)pFVar7 = local_1c0;
      *(undefined8 *)(pFVar7 + 8) = uStack_1b8;
LAB_14ae63f6a:
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
      pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)param_5;
    }
  }
  return;
}

// AsGraph @ 14ae63fb0

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
Metasound::Frontend::FBaseNodeController::AsGraph
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ClassPtr).field_0x10);
  pcVar1 = *(code **)&(this->ClassPtr).field_0x10;
  plVar2 = *(longlong **)&(this->ClassPtr).field_0x38;
  plVar6 = (longlong *)&(this->ClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  lVar4 = (*pcVar1)(uVar3);
  *(longlong *)&this->ClassPtr = lVar4;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x178))(this,local_18);
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)*puVar5 + 0x230))((longlong *)*puVar5,local_28)
    ;
    local_38 = *(undefined4 *)(lVar4 + 8);
    uStack_34 = *(undefined4 *)(lVar4 + 0xc);
    uStack_30 = *(undefined4 *)(lVar4 + 0x10);
    uStack_2c = *(undefined4 *)(lVar4 + 0x14);
    (**(code **)(*(longlong *)*puVar5 + 0xf0))((longlong *)*puVar5,__return_storage_ptr__,&local_38)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return __return_storage_ptr__;
  }
  IGraphController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AsGraph @ 14ae64090

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __thiscall
Metasound::Frontend::FBaseNodeController::AsGraph
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IGraphController_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  TSharedRef<Metasound::Frontend::IGraphController,1> *pTVar7;
  longlong *plVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  TSharedRef<Metasound::Frontend::IGraphController,1> local_18;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ClassPtr).field_0x10);
  pcVar1 = *(code **)&(this->ClassPtr).field_0x10;
  plVar2 = *(longlong **)&(this->ClassPtr).field_0x38;
  plVar8 = (longlong *)&(this->ClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar8 = plVar2;
  }
  uVar4 = (**(code **)(*plVar8 + 8))();
  lVar5 = (*pcVar1)(uVar4);
  *(longlong *)&this->ClassPtr = lVar5;
  if (lVar5 == 0) {
    pTVar7 = IGraphController::GetInvalidHandle(&local_18);
    __return_storage_ptr__->Object = pTVar7->Object;
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x170))(this,&local_18);
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)*puVar6 + 0x228))((longlong *)*puVar6,local_28)
    ;
    local_38 = *(undefined4 *)(lVar5 + 8);
    uStack_34 = *(undefined4 *)(lVar5 + 0xc);
    uStack_30 = *(undefined4 *)(lVar5 + 0x10);
    uStack_2c = *(undefined4 *)(lVar5 + 0x14);
    (**(code **)(*(longlong *)*puVar6 + 0xe8))((longlong *)*puVar6,__return_storage_ptr__,&local_38)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CanAddInput @ 14ae65bc0

bool __thiscall
Metasound::Frontend::FBaseNodeController::CanAddInput(FBaseNodeController *this,FName *param_1)

{
  return false;
}

// CanAddOutput @ 14ae65bd0

bool __thiscall
Metasound::Frontend::FBaseNodeController::CanAddOutput(FBaseNodeController *this,FName *param_1)

{
  return false;
}

// CaptureNodeInstanceReplacementData @ 14ae65e90

FNodeInstanceReplacementData * __thiscall
Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData
          (FBaseNodeController *this,FNodeInstanceReplacementData *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  longlong *plVar8;
  code *local_58 [2];
  undefined **local_48;
  TMap<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>_>
  *local_40;
  undefined8 local_30;
  
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)__return_storage_ptr__);
  FInstancedStruct::FInstancedStruct
            (&(__return_storage_ptr__->ClassInterfaceOverride).InstancedStruct);
  *(undefined8 *)&__return_storage_ptr__->InputConnections = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputConnections).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputConnections).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputConnections).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputConnections).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InputConnections).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InputConnections).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputConnections).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputConnections).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->OutputConnections = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputConnections).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputConnections).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputConnections).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputConnections).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OutputConnections).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OutputConnections).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputConnections).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputConnections).field_0x48 = 0;
  (__return_storage_ptr__->NodeID).A = 0;
  (__return_storage_ptr__->NodeID).B = 0;
  (__return_storage_ptr__->NodeID).C = 0;
  (__return_storage_ptr__->NodeID).D = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar2 = *(code **)&(this->NodePtr).field_0x10;
  plVar8 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar8 = plVar1;
  }
  uVar6 = (**(code **)(*plVar8 + 8))();
  puVar7 = (uint *)(*pcVar2)(uVar6);
  *(uint **)&this->NodePtr = puVar7;
  if (puVar7 != (uint *)0x0) {
    FInstancedStruct::operator=
              ((FInstancedStruct *)__return_storage_ptr__,(FInstancedStruct *)(puVar7 + 0x1a));
    FInstancedStruct::operator=
              (&(__return_storage_ptr__->ClassInterfaceOverride).InstancedStruct,
               (FInstancedStruct *)(puVar7 + 0x1e));
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    local_30 = 0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_1>,void,TSharedRef<Metasound::Frontend::IInputController,1>_>
                  ::Call;
    (__return_storage_ptr__->NodeID).A = *puVar7;
    (__return_storage_ptr__->NodeID).B = uVar3;
    (__return_storage_ptr__->NodeID).C = uVar4;
    (__return_storage_ptr__->NodeID).D = uVar5;
    local_40 = &__return_storage_ptr__->InputConnections;
    (**(code **)(this->_padding_ + 0x38))(this,local_58);
    local_30 = 0;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::`2'::<lambda_2>,1,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_2>,void,TSharedRef<Metasound::Frontend::IOutputController,1>_>
                  ::Call;
    local_40 = (TMap<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo,0>_>
                *)&__return_storage_ptr__->OutputConnections;
    (**(code **)(this->_padding_ + 0x50))(this,local_58);
  }
  return __return_storage_ptr__;
}

// ClearInputLiteral @ 14ae66010

bool __thiscall
Metasound::Frontend::FBaseNodeController::ClearInputLiteral
          (FBaseNodeController *this,FGuid *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar2 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar3 = *(code **)&(this->NodePtr).field_0x10;
  plVar14 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar14 = plVar2;
  }
  uVar11 = (**(code **)(*plVar14 + 8))();
  lVar12 = (*pcVar3)(uVar11);
  *(longlong *)&this->NodePtr = lVar12;
  if (lVar12 == 0) {
    return false;
  }
  uVar4 = param_1->A;
  uVar5 = param_1->B;
  uVar6 = param_1->C;
  uVar7 = param_1->D;
  iVar1 = *(int *)(lVar12 + 0x60);
  uVar16 = 0;
  iVar13 = iVar1;
  if (0 < iVar1) {
    lVar17 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar16 < iVar13) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pFVar15 = (((TArray<FMetasoundFrontendVertexLiteral,TSizedDefaultAllocator<32>_> *)
                 (lVar12 + 0x58))->AllocatorInstance).Data + lVar17;
      if (((uVar7 == *(int *)(pFVar15 + 0xc) && uVar6 == *(int *)(pFVar15 + 8)) &&
          uVar5 == *(int *)(pFVar15 + 4)) && uVar4 == *(int *)pFVar15) {
        uVar10 = 0;
        if ((int)uVar16 < *(int *)(lVar12 + 0x60)) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        TArray<FMetasoundFrontendVertexLiteral,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  ((TArray<FMetasoundFrontendVertexLiteral,TSizedDefaultAllocator<32>_> *)
                   (lVar12 + 0x58),uVar16);
      }
      else {
        uVar16 = uVar16 + 1;
        lVar17 = lVar17 + 0x68;
      }
      iVar13 = *(int *)(lVar12 + 0x60);
    } while ((int)uVar16 < iVar13);
  }
  return 0 < iVar1 - iVar13;
}

// FindInputControllerParamsWithID @ 14ae71f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Frontend::FBaseNodeController::FindInputControllerParamsWithID
          (FBaseNodeController *this,FGuid *param_1,FInputControllerParams *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_168 [32];
  undefined1 local_148 [32];
  longlong local_128 [3];
  longlong *local_110;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  FMetasoundFrontendVertex *local_f8;
  code *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  FMetasoundFrontendClassInput *local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  FNodeAccessPtr::GetInputWithVertexID
            (&this->NodePtr,(TAccessPtr<FMetasoundFrontendVertex_const_> *)local_148,param_1);
  UE::Core::Private::Function::CheckCallable((void *)local_148._16_8_);
  uVar5 = local_148._16_8_;
  plVar11 = local_128;
  if (local_110 != (longlong *)0x0) {
    plVar11 = local_110;
  }
  uVar9 = (**(code **)(*plVar11 + 8))();
  local_148._0_8_ = (*(code *)uVar5)(uVar9);
  if ((FMetasoundFrontendVertex *)local_148._0_8_ == (FMetasoundFrontendVertex *)0x0) {
    bVar12 = false;
  }
  else {
    FConstClassAccessPtr::GetInputWithName
              (&this->ClassPtr,(TAccessPtr<FMetasoundFrontendClassInput_const_> *)local_78,
               (FName *)local_148._0_8_);
    local_f8 = (FMetasoundFrontendVertex *)local_148._0_8_;
    local_108 = param_1->A;
    uStack_104 = param_1->B;
    uStack_100 = param_1->C;
    uStack_fc = param_1->D;
    local_e8 = (code *)local_148._16_8_;
    plStack_c0 = (longlong *)0x0;
    if ((code *)local_148._16_8_ != (code *)0x0) {
      plVar11 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar11 = local_110;
      }
      (**(code **)*plVar11)(param_1->A,&local_d8);
    }
    local_b8 = (FMetasoundFrontendClassInput *)local_78._0_8_;
    local_a8 = local_78._16_8_;
    uStack_80 = (longlong *)0x0;
    if (local_78._16_8_ != 0) {
      plVar11 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_78._56_8_;
      }
      (**(code **)*plVar11)(plVar11,&local_98);
    }
    (param_2->VertexID).A = local_108;
    (param_2->VertexID).B = uStack_104;
    (param_2->VertexID).C = uStack_100;
    (param_2->VertexID).D = uStack_fc;
    (param_2->NodeVertexPtr).CachedObjectPtr = local_f8;
    lVar7 = *(longlong *)&(param_2->NodeVertexPtr).GetObject;
    uVar5 = *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x8;
    lVar6 = *(longlong *)&(param_2->NodeVertexPtr).GetObject.field_0x10;
    uVar9 = *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x18;
    uVar8 = *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x20;
    plVar11 = *(longlong **)&(param_2->NodeVertexPtr).GetObject.field_0x28;
    *(code **)&(param_2->NodeVertexPtr).GetObject = local_e8;
    *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x8 = uStack_e0;
    *(longlong *)&(param_2->NodeVertexPtr).GetObject.field_0x10 = local_d8;
    *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x18 = uStack_d0;
    *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x20 = local_c8;
    *(longlong **)&(param_2->NodeVertexPtr).GetObject.field_0x28 = plStack_c0;
    (param_2->ClassInputPtr).CachedObjectPtr = local_b8;
    local_d8 = lVar6;
    uStack_d0 = uVar9;
    lVar6 = *(longlong *)&(param_2->ClassInputPtr).GetObject;
    uVar9 = *(undefined8 *)&(param_2->ClassInputPtr).GetObject.field_0x8;
    local_e8 = (code *)lVar7;
    uStack_e0 = uVar5;
    uVar1 = *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x10;
    uVar2 = *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x14;
    uVar3 = *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x18;
    uVar4 = *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x1c;
    local_c8 = uVar8;
    plStack_c0 = plVar11;
    uVar5 = *(undefined8 *)&(param_2->ClassInputPtr).GetObject.field_0x20;
    plVar11 = *(longlong **)&(param_2->ClassInputPtr).GetObject.field_0x28;
    *(longlong *)&(param_2->ClassInputPtr).GetObject = local_a8;
    *(undefined8 *)&(param_2->ClassInputPtr).GetObject.field_0x8 = uStack_a0;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x10 = local_98;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x14 = uStack_94;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x18 = uStack_90;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x1c = uStack_8c;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x20 = (undefined4)local_88;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x24 = local_88._4_4_;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x28 = (undefined4)uStack_80;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x2c = uStack_80._4_4_;
    local_a8 = lVar6;
    uStack_a0 = uVar9;
    local_98 = uVar1;
    uStack_94 = uVar2;
    uStack_90 = uVar3;
    uStack_8c = uVar4;
    local_88 = uVar5;
    uStack_80 = plVar11;
    if (lVar6 != 0) {
      plVar10 = (longlong *)&local_98;
      if (plVar11 != (longlong *)0x0) {
        plVar10 = plVar11;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (local_e8 != (code *)0x0) {
      plVar11 = &local_d8;
      if (plStack_c0 != (longlong *)0x0) {
        plVar11 = plStack_c0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (local_78._16_8_ != 0) {
      plVar11 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    bVar12 = true;
  }
  if ((code *)local_148._16_8_ != (code *)0x0) {
    plVar11 = local_128;
    if (local_110 != (longlong *)0x0) {
      plVar11 = local_110;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return bVar12;
}

// FindInputControllerParamsWithVertexName @ 14ae72190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Frontend::FBaseNodeController::FindInputControllerParamsWithVertexName
          (FBaseNodeController *this,FName *param_1,FInputControllerParams *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FMetasoundFrontendVertex *pFVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_168 [32];
  undefined1 local_148 [32];
  longlong local_128 [3];
  longlong *local_110;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  FMetasoundFrontendVertex *local_f8;
  code *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  FMetasoundFrontendClassInput *local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  FNodeAccessPtr::GetInputWithName
            (&this->NodePtr,(TAccessPtr<FMetasoundFrontendVertex_const_> *)local_148,param_1);
  UE::Core::Private::Function::CheckCallable((void *)local_148._16_8_);
  uVar5 = local_148._16_8_;
  plVar12 = local_128;
  if (local_110 != (longlong *)0x0) {
    plVar12 = local_110;
  }
  uVar9 = (**(code **)(*plVar12 + 8))();
  pFVar10 = (FMetasoundFrontendVertex *)(*(code *)uVar5)(uVar9);
  local_148._0_8_ = pFVar10;
  if (pFVar10 == (FMetasoundFrontendVertex *)0x0) {
    bVar13 = false;
  }
  else {
    FConstClassAccessPtr::GetInputWithName
              (&this->ClassPtr,(TAccessPtr<FMetasoundFrontendClassInput_const_> *)local_78,param_1);
    local_108 = (pFVar10->VertexID).A;
    local_f8 = (FMetasoundFrontendVertex *)local_148._0_8_;
    uStack_104 = (pFVar10->VertexID).B;
    uStack_100 = (pFVar10->VertexID).C;
    uStack_fc = (pFVar10->VertexID).D;
    local_e8 = (code *)local_148._16_8_;
    plStack_c0 = (longlong *)0x0;
    if ((code *)local_148._16_8_ != (code *)0x0) {
      plVar12 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar12 = local_110;
      }
      (**(code **)*plVar12)(local_108,&local_d8);
    }
    local_b8 = (FMetasoundFrontendClassInput *)local_78._0_8_;
    local_a8 = local_78._16_8_;
    uStack_80 = (longlong *)0x0;
    if (local_78._16_8_ != 0) {
      plVar12 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_78._56_8_;
      }
      (**(code **)*plVar12)(plVar12,&local_98);
    }
    (param_2->VertexID).A = local_108;
    (param_2->VertexID).B = uStack_104;
    (param_2->VertexID).C = uStack_100;
    (param_2->VertexID).D = uStack_fc;
    (param_2->NodeVertexPtr).CachedObjectPtr = local_f8;
    lVar7 = *(longlong *)&(param_2->NodeVertexPtr).GetObject;
    uVar5 = *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x8;
    lVar6 = *(longlong *)&(param_2->NodeVertexPtr).GetObject.field_0x10;
    uVar9 = *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x18;
    uVar8 = *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x20;
    plVar12 = *(longlong **)&(param_2->NodeVertexPtr).GetObject.field_0x28;
    *(code **)&(param_2->NodeVertexPtr).GetObject = local_e8;
    *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x8 = uStack_e0;
    *(longlong *)&(param_2->NodeVertexPtr).GetObject.field_0x10 = local_d8;
    *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x18 = uStack_d0;
    *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x20 = local_c8;
    *(longlong **)&(param_2->NodeVertexPtr).GetObject.field_0x28 = plStack_c0;
    (param_2->ClassInputPtr).CachedObjectPtr = local_b8;
    local_d8 = lVar6;
    uStack_d0 = uVar9;
    lVar6 = *(longlong *)&(param_2->ClassInputPtr).GetObject;
    uVar9 = *(undefined8 *)&(param_2->ClassInputPtr).GetObject.field_0x8;
    local_e8 = (code *)lVar7;
    uStack_e0 = uVar5;
    uVar1 = *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x10;
    uVar2 = *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x14;
    uVar3 = *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x18;
    uVar4 = *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x1c;
    local_c8 = uVar8;
    plStack_c0 = plVar12;
    uVar5 = *(undefined8 *)&(param_2->ClassInputPtr).GetObject.field_0x20;
    plVar12 = *(longlong **)&(param_2->ClassInputPtr).GetObject.field_0x28;
    *(longlong *)&(param_2->ClassInputPtr).GetObject = local_a8;
    *(undefined8 *)&(param_2->ClassInputPtr).GetObject.field_0x8 = uStack_a0;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x10 = local_98;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x14 = uStack_94;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x18 = uStack_90;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x1c = uStack_8c;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x20 = (undefined4)local_88;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x24 = local_88._4_4_;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x28 = (undefined4)uStack_80;
    *(undefined4 *)&(param_2->ClassInputPtr).GetObject.field_0x2c = uStack_80._4_4_;
    local_a8 = lVar6;
    uStack_a0 = uVar9;
    local_98 = uVar1;
    uStack_94 = uVar2;
    uStack_90 = uVar3;
    uStack_8c = uVar4;
    local_88 = uVar5;
    uStack_80 = plVar12;
    if (lVar6 != 0) {
      plVar11 = (longlong *)&local_98;
      if (plVar12 != (longlong *)0x0) {
        plVar11 = plVar12;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (local_e8 != (code *)0x0) {
      plVar12 = &local_d8;
      if (plStack_c0 != (longlong *)0x0) {
        plVar12 = plStack_c0;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (local_78._16_8_ != 0) {
      plVar12 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    bVar13 = true;
  }
  if ((code *)local_148._16_8_ != (code *)0x0) {
    plVar12 = local_128;
    if (local_110 != (longlong *)0x0) {
      plVar12 = local_110;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return bVar13;
}

// FindNodeConfigurationUpdates @ 14ae72970

void __thiscall
Metasound::Frontend::FBaseNodeController::FindNodeConfigurationUpdates
          (FBaseNodeController *this,FMetasoundFrontendClass *param_1,
          FNodeConfigurationUpdateData *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EMetasoundFrontendClassType EVar4;
  FNodeClassRegistry *pFVar5;
  FNodeClassRegistry *pFVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  INodeTemplateRegistry *pIVar10;
  FMetasoundFrontendVersionNumber *pFVar11;
  longlong *plVar12;
  FInstancedStruct *pFVar13;
  UScriptStruct *pUVar14;
  longlong *plVar15;
  FNodeClassRegistry *pFVar16;
  TObjectPtr<UScriptStruct_const_>_u_0 *this_00;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_res10;
  TObjectPtr<UScriptStruct_const_>_u_0 local_c8;
  longlong *plStack_c0;
  EMetasoundFrontendClassType local_b8 [4];
  FName local_b4;
  FName FStack_ac;
  FName local_a4;
  FMetasoundFrontendVersionNumber local_9c;
  EMetasoundFrontendClassType local_94 [4];
  FName local_90;
  FName FStack_88;
  FName local_80;
  FMetasoundFrontendVersionNumber local_78;
  TObjectPtr<UScriptStruct_const_>_u_0 local_70 [2];
  FInstancedStruct local_60;
  undefined1 local_50 [24];
  
  pFVar16 = (FNodeClassRegistry *)0x0;
  pFVar6 = FNodeClassRegistry::LazySingleton;
  if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
    pFVar5 = ::operator_new(0x182b0);
    pFVar6 = pFVar16;
    if (pFVar5 != (FNodeClassRegistry *)0x0) {
      pFVar6 = FNodeClassRegistry::FNodeClassRegistry(pFVar5);
    }
    FNodeClassRegistry::LazySingleton = pFVar6;
    if ((pFVar6 == (FNodeClassRegistry *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("nullptr != Registry",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                           ,0x42c,
                           L"The metasound node registry should always be available if the metasound plugin is loaded"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar7 = (undefined8 *)(**(code **)(this->_padding_ + 0x150))(this,local_50);
  uVar8 = puVar7[1];
  *(undefined8 *)&param_2->ExistingConfig = *puVar7;
  *(undefined8 *)&(param_2->ExistingConfig).field_0x8 = uVar8;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar12 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar2 = *(code **)&(this->NodePtr).field_0x10;
  plVar15 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar12 != (longlong *)0x0) {
    plVar15 = plVar12;
  }
  uVar8 = (**(code **)(*plVar15 + 8))();
  lVar9 = (*pcVar2)(uVar8);
  *(longlong *)&this->NodePtr = lVar9;
  pFVar5 = pFVar16;
  if (lVar9 != 0) {
    pFVar5 = *(FNodeClassRegistry **)(lVar9 + 0x80);
    pFVar16 = *(FNodeClassRegistry **)(lVar9 + 0x78);
  }
  *(FNodeClassRegistry **)&param_2->ExistingClassInterfaceOverride = pFVar16;
  *(FNodeClassRegistry **)&(param_2->ExistingClassInterfaceOverride).field_0x8 = pFVar5;
  EVar4 = FMetasoundFrontendClassMetadata::GetType(&param_1->Metadata);
  if (EVar4 == Template) {
    pIVar10 = INodeTemplateRegistry::Get();
    pcVar2 = *(code **)((longlong)*pIVar10 + 0x10);
    local_b8[0] = FMetasoundFrontendClassMetadata::GetType(&param_1->Metadata);
    local_b4 = (param_1->Metadata).ClassName.Namespace;
    FStack_ac = (param_1->Metadata).ClassName.Name;
    local_a4 = (param_1->Metadata).ClassName.Variant;
    pFVar11 = FMetasoundFrontendClassMetadata::GetVersion(&param_1->Metadata);
    local_9c = *pFVar11;
    EVar4 = FMetasoundFrontendClassMetadata::GetType(&param_1->Metadata);
    if ((EVar4 == Graph) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                           ,0xa9,
                           L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar12 = (longlong *)(*pcVar2)(pIVar10,local_b8);
    if (plVar12 != (longlong *)0x0) {
      pFVar13 = (FInstancedStruct *)(**(code **)(*plVar12 + 0x20))(plVar12,&local_c8);
      FInstancedStruct::operator=(&(param_2->RegisteredConfig).InstancedStruct,pFVar13);
      this_00 = &local_c8;
      goto LAB_14ae72ba4;
    }
  }
  else {
    pcVar2 = *(code **)(*(longlong *)pFVar6 + 0x78);
    local_94[0] = FMetasoundFrontendClassMetadata::GetType(&param_1->Metadata);
    local_90 = (param_1->Metadata).ClassName.Namespace;
    FStack_88 = (param_1->Metadata).ClassName.Name;
    local_80 = (param_1->Metadata).ClassName.Variant;
    pFVar11 = FMetasoundFrontendClassMetadata::GetVersion(&param_1->Metadata);
    local_78 = *pFVar11;
    EVar4 = FMetasoundFrontendClassMetadata::GetType(&param_1->Metadata);
    if ((EVar4 == Graph) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                           ,0xa9,
                           L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar13 = (FInstancedStruct *)(*pcVar2)(pFVar6,local_70,local_94);
    FInstancedStruct::operator=(&(param_2->RegisteredConfig).InstancedStruct,pFVar13);
    this_00 = local_70;
LAB_14ae72ba4:
    FInstancedStruct::Reset((FInstancedStruct *)&this_00->ObjectPtr);
  }
  local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)
               (param_2->RegisteredConfig).InstancedStruct.ScriptStruct.field0_0x0.DebugPtr;
  if (local_res8.DebugPtr == *(UScriptStruct **)&param_2->ExistingConfig) {
    local_res8.ObjectPtr.field0_0x0 = *(FObjectPtr *)&param_2->ExistingConfig;
    plVar12 = *(longlong **)&(param_2->ExistingConfig).field_0x8;
    local_c8.ObjectPtr.field0_0x0 = local_res8.ObjectPtr.field0_0x0;
    plStack_c0 = plVar12;
    if (!param_3) {
      return;
    }
  }
  else {
    plVar12 = (longlong *)(param_2->RegisteredConfig).InstancedStruct.StructMemory;
  }
  param_2->bDidUpdateClassInterfaceOverride = true;
  if (plVar12 == (longlong *)0x0) {
    return;
  }
  if (local_res8.DebugPtr == (UScriptStruct *)0x0) {
    return;
  }
  pUVar14 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
  if (local_res8.DebugPtr != pUVar14) {
    pUVar14 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
    if (pUVar14 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar14->_padding_;
      if (((int)(local_res8.DebugPtr)->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)((local_res8.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar14->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14ae72c33;
    }
    local_res10 = &local_res8;
    bVar3 = `UE::StructUtils::
            GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration>'::
            __l7::<lambda_1>::operator()(&local_res10);
    if (!bVar3) {
      return;
    }
  }
LAB_14ae72c33:
  pFVar13 = (FInstancedStruct *)(**(code **)(*plVar12 + 8))(plVar12,&local_60,param_1);
  FInstancedStruct::operator=(&(param_2->RegeneratedClassInterfaceOverride).InstancedStruct,pFVar13)
  ;
  FInstancedStruct::Reset(&local_60);
  return;
}

// FindOutputControllerParamsWithID @ 14ae72d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Frontend::FBaseNodeController::FindOutputControllerParamsWithID
          (FBaseNodeController *this,FGuid *param_1,FOutputControllerParams *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_168 [32];
  undefined1 local_148 [32];
  longlong local_128 [3];
  longlong *local_110;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  FMetasoundFrontendVertex *local_f8;
  code *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  FMetasoundFrontendClassOutput *local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  FNodeAccessPtr::GetOutputWithVertexID
            (&this->NodePtr,(TAccessPtr<FMetasoundFrontendVertex_const_> *)local_148,param_1);
  UE::Core::Private::Function::CheckCallable((void *)local_148._16_8_);
  uVar5 = local_148._16_8_;
  plVar11 = local_128;
  if (local_110 != (longlong *)0x0) {
    plVar11 = local_110;
  }
  uVar9 = (**(code **)(*plVar11 + 8))();
  local_148._0_8_ = (*(code *)uVar5)(uVar9);
  if ((FMetasoundFrontendVertex *)local_148._0_8_ == (FMetasoundFrontendVertex *)0x0) {
    bVar12 = false;
  }
  else {
    FConstClassAccessPtr::GetOutputWithName
              (&this->ClassPtr,(TAccessPtr<FMetasoundFrontendClassOutput_const_> *)local_78,
               (FName *)local_148._0_8_);
    local_f8 = (FMetasoundFrontendVertex *)local_148._0_8_;
    local_108 = param_1->A;
    uStack_104 = param_1->B;
    uStack_100 = param_1->C;
    uStack_fc = param_1->D;
    local_e8 = (code *)local_148._16_8_;
    plStack_c0 = (longlong *)0x0;
    if ((code *)local_148._16_8_ != (code *)0x0) {
      plVar11 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar11 = local_110;
      }
      (**(code **)*plVar11)(param_1->A,&local_d8);
    }
    local_b8 = (FMetasoundFrontendClassOutput *)local_78._0_8_;
    local_a8 = local_78._16_8_;
    uStack_80 = (longlong *)0x0;
    if (local_78._16_8_ != 0) {
      plVar11 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_78._56_8_;
      }
      (**(code **)*plVar11)(plVar11,&local_98);
    }
    (param_2->VertexID).A = local_108;
    (param_2->VertexID).B = uStack_104;
    (param_2->VertexID).C = uStack_100;
    (param_2->VertexID).D = uStack_fc;
    (param_2->NodeVertexPtr).CachedObjectPtr = local_f8;
    lVar7 = *(longlong *)&(param_2->NodeVertexPtr).GetObject;
    uVar5 = *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x8;
    lVar6 = *(longlong *)&(param_2->NodeVertexPtr).GetObject.field_0x10;
    uVar9 = *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x18;
    uVar8 = *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x20;
    plVar11 = *(longlong **)&(param_2->NodeVertexPtr).GetObject.field_0x28;
    *(code **)&(param_2->NodeVertexPtr).GetObject = local_e8;
    *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x8 = uStack_e0;
    *(longlong *)&(param_2->NodeVertexPtr).GetObject.field_0x10 = local_d8;
    *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x18 = uStack_d0;
    *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x20 = local_c8;
    *(longlong **)&(param_2->NodeVertexPtr).GetObject.field_0x28 = plStack_c0;
    (param_2->ClassOutputPtr).CachedObjectPtr = local_b8;
    local_d8 = lVar6;
    uStack_d0 = uVar9;
    lVar6 = *(longlong *)&(param_2->ClassOutputPtr).GetObject;
    uVar9 = *(undefined8 *)&(param_2->ClassOutputPtr).GetObject.field_0x8;
    local_e8 = (code *)lVar7;
    uStack_e0 = uVar5;
    uVar1 = *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x10;
    uVar2 = *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x14;
    uVar3 = *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x18;
    uVar4 = *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x1c;
    local_c8 = uVar8;
    plStack_c0 = plVar11;
    uVar5 = *(undefined8 *)&(param_2->ClassOutputPtr).GetObject.field_0x20;
    plVar11 = *(longlong **)&(param_2->ClassOutputPtr).GetObject.field_0x28;
    *(longlong *)&(param_2->ClassOutputPtr).GetObject = local_a8;
    *(undefined8 *)&(param_2->ClassOutputPtr).GetObject.field_0x8 = uStack_a0;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x10 = local_98;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x14 = uStack_94;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x18 = uStack_90;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x1c = uStack_8c;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x20 = (undefined4)local_88;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x24 = local_88._4_4_;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x28 = (undefined4)uStack_80;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x2c = uStack_80._4_4_;
    local_a8 = lVar6;
    uStack_a0 = uVar9;
    local_98 = uVar1;
    uStack_94 = uVar2;
    uStack_90 = uVar3;
    uStack_8c = uVar4;
    local_88 = uVar5;
    uStack_80 = plVar11;
    if (lVar6 != 0) {
      plVar10 = (longlong *)&local_98;
      if (plVar11 != (longlong *)0x0) {
        plVar10 = plVar11;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (local_e8 != (code *)0x0) {
      plVar11 = &local_d8;
      if (plStack_c0 != (longlong *)0x0) {
        plVar11 = plStack_c0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (local_78._16_8_ != 0) {
      plVar11 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    bVar12 = true;
  }
  if ((code *)local_148._16_8_ != (code *)0x0) {
    plVar11 = local_128;
    if (local_110 != (longlong *)0x0) {
      plVar11 = local_110;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return bVar12;
}

// FindOutputControllerParamsWithVertexName @ 14ae72fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Metasound::Frontend::FBaseNodeController::FindOutputControllerParamsWithVertexName
          (FBaseNodeController *this,FName *param_1,FOutputControllerParams *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FMetasoundFrontendVertex *pFVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_168 [32];
  undefined1 local_148 [32];
  longlong local_128 [3];
  longlong *local_110;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  FMetasoundFrontendVertex *local_f8;
  code *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  FMetasoundFrontendClassOutput *local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  FNodeAccessPtr::GetOutputWithName
            (&this->NodePtr,(TAccessPtr<FMetasoundFrontendVertex_const_> *)local_148,param_1);
  UE::Core::Private::Function::CheckCallable((void *)local_148._16_8_);
  uVar5 = local_148._16_8_;
  plVar12 = local_128;
  if (local_110 != (longlong *)0x0) {
    plVar12 = local_110;
  }
  uVar9 = (**(code **)(*plVar12 + 8))();
  pFVar10 = (FMetasoundFrontendVertex *)(*(code *)uVar5)(uVar9);
  local_148._0_8_ = pFVar10;
  if (pFVar10 == (FMetasoundFrontendVertex *)0x0) {
    bVar13 = false;
  }
  else {
    FConstClassAccessPtr::GetOutputWithName
              (&this->ClassPtr,(TAccessPtr<FMetasoundFrontendClassOutput_const_> *)local_78,param_1)
    ;
    local_108 = (pFVar10->VertexID).A;
    local_f8 = (FMetasoundFrontendVertex *)local_148._0_8_;
    uStack_104 = (pFVar10->VertexID).B;
    uStack_100 = (pFVar10->VertexID).C;
    uStack_fc = (pFVar10->VertexID).D;
    local_e8 = (code *)local_148._16_8_;
    plStack_c0 = (longlong *)0x0;
    if ((code *)local_148._16_8_ != (code *)0x0) {
      plVar12 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar12 = local_110;
      }
      (**(code **)*plVar12)(local_108,&local_d8);
    }
    local_b8 = (FMetasoundFrontendClassOutput *)local_78._0_8_;
    local_a8 = local_78._16_8_;
    uStack_80 = (longlong *)0x0;
    if (local_78._16_8_ != 0) {
      plVar12 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_78._56_8_;
      }
      (**(code **)*plVar12)(plVar12,&local_98);
    }
    (param_2->VertexID).A = local_108;
    (param_2->VertexID).B = uStack_104;
    (param_2->VertexID).C = uStack_100;
    (param_2->VertexID).D = uStack_fc;
    (param_2->NodeVertexPtr).CachedObjectPtr = local_f8;
    lVar7 = *(longlong *)&(param_2->NodeVertexPtr).GetObject;
    uVar5 = *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x8;
    lVar6 = *(longlong *)&(param_2->NodeVertexPtr).GetObject.field_0x10;
    uVar9 = *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x18;
    uVar8 = *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x20;
    plVar12 = *(longlong **)&(param_2->NodeVertexPtr).GetObject.field_0x28;
    *(code **)&(param_2->NodeVertexPtr).GetObject = local_e8;
    *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x8 = uStack_e0;
    *(longlong *)&(param_2->NodeVertexPtr).GetObject.field_0x10 = local_d8;
    *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x18 = uStack_d0;
    *(undefined8 *)&(param_2->NodeVertexPtr).GetObject.field_0x20 = local_c8;
    *(longlong **)&(param_2->NodeVertexPtr).GetObject.field_0x28 = plStack_c0;
    (param_2->ClassOutputPtr).CachedObjectPtr = local_b8;
    local_d8 = lVar6;
    uStack_d0 = uVar9;
    lVar6 = *(longlong *)&(param_2->ClassOutputPtr).GetObject;
    uVar9 = *(undefined8 *)&(param_2->ClassOutputPtr).GetObject.field_0x8;
    local_e8 = (code *)lVar7;
    uStack_e0 = uVar5;
    uVar1 = *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x10;
    uVar2 = *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x14;
    uVar3 = *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x18;
    uVar4 = *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x1c;
    local_c8 = uVar8;
    plStack_c0 = plVar12;
    uVar5 = *(undefined8 *)&(param_2->ClassOutputPtr).GetObject.field_0x20;
    plVar12 = *(longlong **)&(param_2->ClassOutputPtr).GetObject.field_0x28;
    *(longlong *)&(param_2->ClassOutputPtr).GetObject = local_a8;
    *(undefined8 *)&(param_2->ClassOutputPtr).GetObject.field_0x8 = uStack_a0;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x10 = local_98;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x14 = uStack_94;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x18 = uStack_90;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x1c = uStack_8c;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x20 = (undefined4)local_88;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x24 = local_88._4_4_;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x28 = (undefined4)uStack_80;
    *(undefined4 *)&(param_2->ClassOutputPtr).GetObject.field_0x2c = uStack_80._4_4_;
    local_a8 = lVar6;
    uStack_a0 = uVar9;
    local_98 = uVar1;
    uStack_94 = uVar2;
    uStack_90 = uVar3;
    uStack_8c = uVar4;
    local_88 = uVar5;
    uStack_80 = plVar12;
    if (lVar6 != 0) {
      plVar11 = (longlong *)&local_98;
      if (plVar12 != (longlong *)0x0) {
        plVar11 = plVar12;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (local_e8 != (code *)0x0) {
      plVar12 = &local_d8;
      if (plStack_c0 != (longlong *)0x0) {
        plVar12 = plStack_c0;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (local_78._16_8_ != 0) {
      plVar12 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    bVar13 = true;
  }
  if ((code *)local_148._16_8_ != (code *)0x0) {
    plVar12 = local_128;
    if (local_110 != (longlong *)0x0) {
      plVar12 = local_110;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return bVar13;
}

// FindRegisteredClass @ 14ae73430

bool __thiscall
Metasound::Frontend::FBaseNodeController::FindRegisteredClass
          (FBaseNodeController *this,FMetasoundFrontendClassMetadata *param_1,bool param_2,
          FMetasoundFrontendClass *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EMetasoundFrontendClassType EVar5;
  FNodeClassRegistry *pFVar6;
  ISearchEngine *pIVar7;
  FMetasoundFrontendVersionNumber *pFVar8;
  FNodeClassName *pFVar9;
  FMetasoundFrontendClassName local_68;
  FNodeClassName local_50;
  EMetasoundFrontendClassType local_38 [4];
  FName local_34;
  FName FStack_2c;
  FName local_24;
  FMetasoundFrontendVersionNumber local_1c;
  
  pFVar6 = FNodeClassRegistry::LazySingleton;
  if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
    pFVar6 = ::operator_new(0x182b0);
    if (pFVar6 == (FNodeClassRegistry *)0x0) {
      pFVar6 = (FNodeClassRegistry *)0x0;
    }
    else {
      pFVar6 = FNodeClassRegistry::FNodeClassRegistry(pFVar6);
    }
    FNodeClassRegistry::LazySingleton = pFVar6;
    if (pFVar6 == (FNodeClassRegistry *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != Registry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                         ,0x410,
                         L"The metasound node registry should always be available if the metasound plugin is loaded"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  if (param_2) {
    pIVar7 = ISearchEngine::Get();
    pcVar2 = *(code **)((longlong)*pIVar7 + 0x10);
    pFVar8 = FMetasoundFrontendClassMetadata::GetVersion(param_1);
    iVar1 = pFVar8->Major;
    pFVar9 = FMetasoundFrontendClassName::ToNodeClassName(&param_1->ClassName,&local_50);
    FMetasoundFrontendClassName::FMetasoundFrontendClassName(&local_68,pFVar9);
    uVar4 = (*pcVar2)(pIVar7,&local_68,iVar1,param_3);
  }
  else {
    pcVar2 = *(code **)(*(longlong *)pFVar6 + 0x68);
    local_38[0] = FMetasoundFrontendClassMetadata::GetType(param_1);
    local_34 = (param_1->ClassName).Namespace;
    FStack_2c = (param_1->ClassName).Name;
    local_24 = (param_1->ClassName).Variant;
    pFVar8 = FMetasoundFrontendClassMetadata::GetVersion(param_1);
    local_1c = *pFVar8;
    EVar5 = FMetasoundFrontendClassMetadata::GetType(param_1);
    if (EVar5 == Graph) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                         ,0xa9,
                         L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar4 = (*pcVar2)(pFVar6,local_38,param_3);
  }
  return (bool)uVar4;
}

// GetApplicableRegistryInterface @ 14ae746a0

FMetasoundFrontendClassInterface * __thiscall
Metasound::Frontend::FBaseNodeController::GetApplicableRegistryInterface
          (FBaseNodeController *this,FMetasoundFrontendClass *param_1,
          FNodeConfigurationUpdateData *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FMetasoundFrontendClassInterface *pFVar4;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res18;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_res20;
  
  if (param_2->bDidUpdateClassInterfaceOverride == false) {
    pFVar4 = *(FMetasoundFrontendClassInterface **)
              &(param_2->ExistingClassInterfaceOverride).field_0x8;
    local_res18 = *(TObjectPtr<UScriptStruct_const_>_u_0 *)&param_2->ExistingClassInterfaceOverride;
  }
  else {
    pFVar4 = (FMetasoundFrontendClassInterface *)
             (param_2->RegeneratedClassInterfaceOverride).InstancedStruct.StructMemory;
    local_res18 = (TObjectPtr<UScriptStruct_const_>_u_0)
                  (param_2->RegeneratedClassInterfaceOverride).InstancedStruct.ScriptStruct.
                  field0_0x0.DebugPtr;
  }
  if ((pFVar4 != (FMetasoundFrontendClassInterface *)0x0) &&
     (local_res18.DebugPtr != (UScriptStruct *)0x0)) {
    pUVar3 = FMetasoundFrontendClassInterface::StaticStruct();
    if (local_res18.DebugPtr != pUVar3) {
      pUVar3 = FMetasoundFrontendClassInterface::StaticStruct();
      if (pUVar3 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar3->_padding_;
        if (((int)(local_res18.DebugPtr)->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)((local_res18.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return pFVar4;
        }
      }
      local_res20 = &local_res18;
      bVar2 = `UE::StructUtils::
              GetStructPtr<FMetasoundFrontendClassInterface,FMetasoundFrontendClassInterface>'::__l7
              ::<lambda_1>::operator()(&local_res20);
      if (!bVar2) goto LAB_14ae7473a;
    }
    return pFVar4;
  }
LAB_14ae7473a:
  pFVar4 = FMetasoundFrontendClass::GetDefaultInterface(param_1);
  return pFVar4;
}

// GetClassID @ 14ae747b0

FGuid * __thiscall
Metasound::Frontend::FBaseNodeController::GetClassID
          (FBaseNodeController *this,FGuid *__return_storage_ptr__)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ClassPtr).field_0x10);
  pcVar1 = *(code **)&(this->ClassPtr).field_0x10;
  plVar2 = *(longlong **)&(this->ClassPtr).field_0x38;
  plVar5 = (longlong *)&(this->ClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar1)(uVar3);
  *(longlong *)&this->ClassPtr = lVar4;
  if (lVar4 == 0) {
    uVar6 = FrontendInvalidID.A;
    uVar7 = FrontendInvalidID.B;
    uVar8 = FrontendInvalidID.C;
    uVar9 = FrontendInvalidID.D;
  }
  else {
    uVar6 = *(uint *)(lVar4 + 8);
    uVar7 = *(uint *)(lVar4 + 0xc);
    uVar8 = *(uint *)(lVar4 + 0x10);
    uVar9 = *(uint *)(lVar4 + 0x14);
  }
  __return_storage_ptr__->A = uVar6;
  __return_storage_ptr__->B = uVar7;
  __return_storage_ptr__->C = uVar8;
  __return_storage_ptr__->D = uVar9;
  return __return_storage_ptr__;
}

// GetClassInterface @ 14ae74850

FMetasoundFrontendClassInterface * __thiscall
Metasound::Frontend::FBaseNodeController::GetClassInterface(FBaseNodeController *this)

{
  FMetasoundFrontendClassInterface *pFVar1;
  
  pFVar1 = GetClassInterfaceForNode(this);
  if (pFVar1 == (FMetasoundFrontendClassInterface *)0x0) {
    pFVar1 = Frontend::Invalid::GetInvalidClassInterface();
    return pFVar1;
  }
  return pFVar1;
}

// GetClassInterfaceForNode @ 14ae74880

FMetasoundFrontendClassInterface * __thiscall
Metasound::Frontend::FBaseNodeController::GetClassInterfaceForNode(FBaseNodeController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  FMetasoundFrontendNode *pFVar4;
  FMetasoundFrontendClass *this_00;
  FMetasoundFrontendClassInterface *pFVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar2 = *(code **)&(this->NodePtr).field_0x10;
  plVar6 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  pFVar4 = (FMetasoundFrontendNode *)(*pcVar2)(uVar3);
  *(FMetasoundFrontendNode **)&this->NodePtr = pFVar4;
  if (pFVar4 != (FMetasoundFrontendNode *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->ClassPtr).field_0x10);
    pcVar2 = *(code **)&(this->ClassPtr).field_0x10;
    plVar1 = *(longlong **)&(this->ClassPtr).field_0x38;
    plVar6 = (longlong *)&(this->ClassPtr).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar3 = (**(code **)(*plVar6 + 8))();
    this_00 = (FMetasoundFrontendClass *)(*pcVar2)(uVar3);
    *(FMetasoundFrontendClass **)&this->ClassPtr = this_00;
    if (this_00 != (FMetasoundFrontendClass *)0x0) {
      pFVar5 = FMetasoundFrontendClass::GetInterfaceForNode(this_00,pFVar4);
      return pFVar5;
    }
  }
  return (FMetasoundFrontendClassInterface *)0x0;
}

// GetClassInterfaceOverride @ 14ae74930

TConstStructView<FMetasoundFrontendClassInterface> * __thiscall
Metasound::Frontend::FBaseNodeController::GetClassInterfaceOverride
          (FBaseNodeController *this,
          TConstStructView<FMetasoundFrontendClassInterface> *__return_storage_ptr__)

{
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  pvVar1 = *(void **)&(this->NodePtr).field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  UE::Core::Private::Function::CheckCallable(pvVar1);
  plVar2 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar3 = *(code **)&(this->NodePtr).field_0x10;
  plVar6 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  lVar5 = (*pcVar3)(uVar4);
  *(longlong *)&this->NodePtr = lVar5;
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x80);
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar5 + 0x78);
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
  }
  return __return_storage_ptr__;
}

// GetClassMetadata @ 14ae749b0

FMetasoundFrontendClassMetadata * __thiscall
Metasound::Frontend::FBaseNodeController::GetClassMetadata(FBaseNodeController *this)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  FMetasoundFrontendClassMetadata *pFVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->ClassPtr).field_0x10);
  pcVar1 = *(code **)&(this->ClassPtr).field_0x10;
  plVar2 = *(longlong **)&(this->ClassPtr).field_0x38;
  plVar6 = (longlong *)&(this->ClassPtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  lVar4 = (*pcVar1)(uVar3);
  *(longlong *)&this->ClassPtr = lVar4;
  if (lVar4 != 0) {
    return (FMetasoundFrontendClassMetadata *)(lVar4 + 0x18);
  }
  pFVar5 = Frontend::Invalid::GetInvalidClassMetadata();
  return pFVar5;
}

// GetConstInputWithVertexName @ 14ae74e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IInputController_const_,1> * __thiscall
Metasound::Frontend::FBaseNodeController::GetConstInputWithVertexName
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController_const_,1> *__return_storage_ptr__,
          FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar5;
  undefined8 *puVar6;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar7;
  longlong *plVar8;
  atomic<int> *paVar9;
  undefined1 auStack_1b8 [32];
  FMetasoundFrontendClassInput **local_198;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *local_190;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> local_188;
  TSharedRef<Metasound::Frontend::IInputController,1> local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FMetasoundFrontendClassInput *local_158 [2];
  longlong local_148;
  undefined1 local_138 [24];
  undefined8 local_120;
  FMetasoundFrontendVertex *local_118 [2];
  longlong local_108;
  undefined1 local_f8 [24];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_d8 = 0;
  uStack_d0 = 0;
  TAccessPtr<FMetasoundFrontendVertex_const_>::TAccessPtr<FMetasoundFrontendVertex_const_>
            ((TAccessPtr<FMetasoundFrontendVertex_const_> *)local_c8);
  TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_>
            ((TAccessPtr<FMetasoundFrontendClassInput_const_> *)local_88);
  cVar4 = (**(code **)(this->_padding_ + 400))(this,param_1,&local_d8);
  if (cVar4 == '\0') {
    pTVar7 = IInputController::GetInvalidHandle(&local_178);
    __return_storage_ptr__->Object = pTVar7->Object;
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    if (local_88._16_8_ != 0) {
      plVar8 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_88._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_c8._16_8_ != 0) {
      plVar8 = (longlong *)(local_c8 + 0x20);
      if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_c8._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  else {
    pTVar5 = TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
                       ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
                        &local_188);
    pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
    local_188.Object = pTVar5->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar9 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar9 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    pcVar2 = *(code **)(this->_padding_ + 0x1b0);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    local_158[0] = (FMetasoundFrontendClassInput *)local_88._0_8_;
    local_148 = local_88._16_8_;
    local_120 = 0;
    local_188.SharedReferenceCount.ReferenceController = pTVar1;
    if (local_88._16_8_ != 0) {
      plVar8 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_88._56_8_;
      }
      (**(code **)*plVar8)(plVar8,local_138);
    }
    local_118[0] = (FMetasoundFrontendVertex *)local_c8._0_8_;
    local_108 = local_c8._16_8_;
    local_e0 = 0;
    if (local_c8._16_8_ != 0) {
      plVar8 = (longlong *)(local_c8 + 0x20);
      if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_c8._56_8_;
      }
      (**(code **)*plVar8)(plVar8,local_f8);
    }
    local_190 = &local_188;
    local_198 = local_158;
    local_168 = (undefined4)local_d8;
    uStack_164 = local_d8._4_4_;
    uStack_160 = (undefined4)uStack_d0;
    uStack_15c = uStack_d0._4_4_;
    puVar6 = (undefined8 *)(*pcVar2)(this,&local_178,&local_168,local_118);
    __return_storage_ptr__->Object = (IInputController *)*puVar6;
    pTVar3 = (TReferenceControllerBase<1> *)puVar6[1];
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (local_88._16_8_ != 0) {
      plVar8 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_88._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_c8._16_8_ != 0) {
      plVar8 = (longlong *)(local_c8 + 0x20);
      if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_c8._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetConstInputs @ 14ae75060

TArray<TSharedRef<Metasound::Frontend::IInputController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FBaseNodeController::GetConstInputs
          (FBaseNodeController *this,
          TArray<TSharedRef<Metasound::Frontend::IInputController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FInputControllerParams *pFVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar7;
  undefined8 *puVar8;
  TArray<TSharedRef<Metasound::Frontend::IInputController_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  ulonglong uVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  TFunction<FMetasoundFrontendClassInput_const_*___cdecl(void)> *pTVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  INodeController *local_res18;
  FInputControllerParams *local_res20;
  longlong *local_128;
  TReferenceControllerBase<1> *local_120;
  FInputControllerParams *local_118;
  uint local_110;
  INodeController *local_108;
  TReferenceControllerBase<1> *local_100;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> local_f8;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  TReferenceControllerBase<1> *local_d0;
  longlong local_c8 [2];
  longlong local_b8;
  undefined1 local_a8 [24];
  undefined8 local_90;
  longlong local_88 [2];
  longlong local_78;
  undefined1 local_68 [24];
  undefined8 local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar7 = TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
                     ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
                      &local_f8);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  local_res18 = pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  (**(code **)(this->_padding_ + 0x180))(this,&local_118);
  uVar10 = (ulonglong)(int)local_110;
  local_res10 = local_110;
  pTVar13 = &(local_118->ClassInputPtr).GetObject;
  local_res20 = local_118 + uVar10;
  while( true ) {
    pFVar3 = local_res20;
    if (local_110 != (uint)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::Frontend::FBaseNodeController::FInputControllerParams,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FInputControllerParams *)(pTVar13 + -2) == pFVar3) break;
    pcVar2 = *(code **)(this->_padding_ + 0x1b0);
    local_108 = local_res18;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8[0] = *(longlong *)((longlong)(pTVar13 + -1) + 0x20);
    local_b8 = *(longlong *)pTVar13;
    local_90 = 0;
    local_100 = pTVar1;
    if (local_b8 != 0) {
      puVar8 = (undefined8 *)&pTVar13->field_0x10;
      if (*(undefined8 **)&pTVar13->field_0x28 != (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)&pTVar13->field_0x28;
      }
      (**(code **)*puVar8)(puVar8,local_a8);
    }
    local_88[0] = *(longlong *)((longlong)(pTVar13 + -2) + 0x10);
    local_78 = *(longlong *)((longlong)(pTVar13 + -2) + 0x20);
    local_50 = 0;
    if (local_78 != 0) {
      plVar11 = (longlong *)(pTVar13 + -1);
      if (*(longlong **)((longlong)(pTVar13 + -1) + 0x18) != (longlong *)0x0) {
        plVar11 = *(longlong **)((longlong)(pTVar13 + -1) + 0x18);
      }
      (**(code **)*plVar11)(plVar11,local_68);
    }
    local_e8 = (((FInputControllerParams *)(pTVar13 + -2))->VertexID).A;
    uStack_e4 = *(undefined4 *)((longlong)(pTVar13 + -2) + 4);
    uStack_e0 = (undefined4)*(longlong *)((longlong)(pTVar13 + -2) + 8);
    uStack_dc = *(undefined4 *)((longlong)(pTVar13 + -2) + 0xc);
    puVar8 = (undefined8 *)(*pcVar2)(this,local_d8,&local_e8,local_88,local_c8,&local_108);
    local_128 = (longlong *)*puVar8;
    local_120 = (TReferenceControllerBase<1> *)puVar8[1];
    if (local_120 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_120->SharedReferenceCount = (atomic<int>)((int)local_120->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    cVar4 = (**(code **)(*local_128 + 0x18))();
    if (cVar4 != '\0') {
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 <
           pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TArray<TSharedRef<Metasound::Frontend::IInputController_const_,1>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar2)();
        return pTVar9;
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
      *(longlong **)pFVar12 = local_128;
      *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_120;
      if (local_120 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_120->SharedReferenceCount = (atomic<int>)((int)local_120->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
    uVar10 = (ulonglong)local_res10;
    pTVar13 = pTVar13 + 3;
  }
  DestructItems<Metasound::Frontend::FBaseNodeController::FInputControllerParams,int>
            (local_118,local_110);
  if (local_118 != (FInputControllerParams *)0x0) {
    FMemory::Free(local_118);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetConstOutputWithVertexName @ 14ae75330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IOutputController_const_,1> * __thiscall
Metasound::Frontend::FBaseNodeController::GetConstOutputWithVertexName
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IOutputController_const_,1> *__return_storage_ptr__,
          FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar5;
  undefined8 *puVar6;
  TSharedRef<Metasound::Frontend::IOutputController,1> *pTVar7;
  longlong *plVar8;
  atomic<int> *paVar9;
  undefined1 auStack_1b8 [32];
  FMetasoundFrontendClassOutput **local_198;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *local_190;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> local_188;
  TSharedRef<Metasound::Frontend::IOutputController,1> local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FMetasoundFrontendClassOutput *local_158 [2];
  longlong local_148;
  undefined1 local_138 [24];
  undefined8 local_120;
  FMetasoundFrontendVertex *local_118 [2];
  longlong local_108;
  undefined1 local_f8 [24];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_d8 = 0;
  uStack_d0 = 0;
  TAccessPtr<FMetasoundFrontendVertex_const_>::TAccessPtr<FMetasoundFrontendVertex_const_>
            ((TAccessPtr<FMetasoundFrontendVertex_const_> *)local_c8);
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_>
            ((TAccessPtr<FMetasoundFrontendClassOutput_const_> *)local_88);
  cVar4 = (**(code **)(this->_padding_ + 0x198))(this,param_1,&local_d8);
  if (cVar4 == '\0') {
    pTVar7 = IOutputController::GetInvalidHandle(&local_178);
    __return_storage_ptr__->Object = pTVar7->Object;
    pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    if (local_88._16_8_ != 0) {
      plVar8 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_88._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_c8._16_8_ != 0) {
      plVar8 = (longlong *)(local_c8 + 0x20);
      if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_c8._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  else {
    pTVar5 = TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
                       ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
                        &local_188);
    pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
    local_188.Object = pTVar5->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar9 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar9 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    pcVar2 = *(code **)(this->_padding_ + 0x1b8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar9 = (atomic<int>)((int)*paVar9 + 1);
      UNLOCK();
    }
    local_158[0] = (FMetasoundFrontendClassOutput *)local_88._0_8_;
    local_148 = local_88._16_8_;
    local_120 = 0;
    local_188.SharedReferenceCount.ReferenceController = pTVar1;
    if (local_88._16_8_ != 0) {
      plVar8 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_88._56_8_;
      }
      (**(code **)*plVar8)(plVar8,local_138);
    }
    local_118[0] = (FMetasoundFrontendVertex *)local_c8._0_8_;
    local_108 = local_c8._16_8_;
    local_e0 = 0;
    if (local_c8._16_8_ != 0) {
      plVar8 = (longlong *)(local_c8 + 0x20);
      if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_c8._56_8_;
      }
      (**(code **)*plVar8)(plVar8,local_f8);
    }
    local_190 = &local_188;
    local_198 = local_158;
    local_168 = (undefined4)local_d8;
    uStack_164 = local_d8._4_4_;
    uStack_160 = (undefined4)uStack_d0;
    uStack_15c = uStack_d0._4_4_;
    puVar6 = (undefined8 *)(*pcVar2)(this,&local_178,&local_168,local_118);
    __return_storage_ptr__->Object = (IOutputController *)*puVar6;
    pTVar3 = (TReferenceControllerBase<1> *)puVar6[1];
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (local_88._16_8_ != 0) {
      plVar8 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_88._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (local_c8._16_8_ != 0) {
      plVar8 = (longlong *)(local_c8 + 0x20);
      if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_c8._56_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetConstOutputs @ 14ae75590

TArray<TSharedRef<Metasound::Frontend::IOutputController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FBaseNodeController::GetConstOutputs
          (FBaseNodeController *this,
          TArray<TSharedRef<Metasound::Frontend::IOutputController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FOutputControllerParams *pFVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar7;
  undefined8 *puVar8;
  TArray<TSharedRef<Metasound::Frontend::IOutputController_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  ulonglong uVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  TFunction<FMetasoundFrontendClassOutput_const_*___cdecl(void)> *pTVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  INodeController *local_res18;
  FOutputControllerParams *local_res20;
  longlong *local_128;
  TReferenceControllerBase<1> *local_120;
  FOutputControllerParams *local_118;
  uint local_110;
  INodeController *local_108;
  TReferenceControllerBase<1> *local_100;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> local_f8;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  TReferenceControllerBase<1> *local_d0;
  longlong local_c8 [2];
  longlong local_b8;
  undefined1 local_a8 [24];
  undefined8 local_90;
  longlong local_88 [2];
  longlong local_78;
  undefined1 local_68 [24];
  undefined8 local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar7 = TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
                     ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
                      &local_f8);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  local_res18 = pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  (**(code **)(this->_padding_ + 0x188))(this,&local_118);
  uVar10 = (ulonglong)(int)local_110;
  local_res10 = local_110;
  pTVar13 = &(local_118->ClassOutputPtr).GetObject;
  local_res20 = local_118 + uVar10;
  while( true ) {
    pFVar3 = local_res20;
    if (local_110 != (uint)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FOutputControllerParams *)(pTVar13 + -2) == pFVar3) break;
    pcVar2 = *(code **)(this->_padding_ + 0x1b8);
    local_108 = local_res18;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8[0] = *(longlong *)((longlong)(pTVar13 + -1) + 0x20);
    local_b8 = *(longlong *)pTVar13;
    local_90 = 0;
    local_100 = pTVar1;
    if (local_b8 != 0) {
      puVar8 = (undefined8 *)&pTVar13->field_0x10;
      if (*(undefined8 **)&pTVar13->field_0x28 != (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)&pTVar13->field_0x28;
      }
      (**(code **)*puVar8)(puVar8,local_a8);
    }
    local_88[0] = *(longlong *)((longlong)(pTVar13 + -2) + 0x10);
    local_78 = *(longlong *)((longlong)(pTVar13 + -2) + 0x20);
    local_50 = 0;
    if (local_78 != 0) {
      plVar11 = (longlong *)(pTVar13 + -1);
      if (*(longlong **)((longlong)(pTVar13 + -1) + 0x18) != (longlong *)0x0) {
        plVar11 = *(longlong **)((longlong)(pTVar13 + -1) + 0x18);
      }
      (**(code **)*plVar11)(plVar11,local_68);
    }
    local_e8 = (((FOutputControllerParams *)(pTVar13 + -2))->VertexID).A;
    uStack_e4 = *(undefined4 *)((longlong)(pTVar13 + -2) + 4);
    uStack_e0 = (undefined4)*(longlong *)((longlong)(pTVar13 + -2) + 8);
    uStack_dc = *(undefined4 *)((longlong)(pTVar13 + -2) + 0xc);
    puVar8 = (undefined8 *)(*pcVar2)(this,local_d8,&local_e8,local_88,local_c8,&local_108);
    local_128 = (longlong *)*puVar8;
    local_120 = (TReferenceControllerBase<1> *)puVar8[1];
    if (local_120 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_120->SharedReferenceCount = (atomic<int>)((int)local_120->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
    cVar4 = (**(code **)(*local_128 + 0x18))();
    if (cVar4 != '\0') {
      pFVar12 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 <
           pFVar12 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TArray<TSharedRef<Metasound::Frontend::IOutputController_const_,1>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar2)();
        return pTVar9;
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
      *(longlong **)pFVar12 = local_128;
      *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_120;
      if (local_120 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_120->SharedReferenceCount = (atomic<int>)((int)local_120->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
    uVar10 = (ulonglong)local_res10;
    pTVar13 = pTVar13 + 3;
  }
  DestructItems<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,int>
            (local_118,local_110);
  if (local_118 != (FOutputControllerParams *)0x0) {
    FMemory::Free(local_118);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetID @ 14ae75b70

FGuid * __thiscall
Metasound::Frontend::FBaseNodeController::GetID
          (FBaseNodeController *this,FGuid *__return_storage_ptr__)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar2 = *(code **)&(this->NodePtr).field_0x10;
  plVar5 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  puVar4 = (uint *)(*pcVar2)(uVar3);
  *(uint **)&this->NodePtr = puVar4;
  if (puVar4 == (uint *)0x0) {
    uVar6 = FrontendInvalidID.A;
    uVar7 = FrontendInvalidID.B;
    uVar8 = FrontendInvalidID.C;
    uVar9 = FrontendInvalidID.D;
  }
  else {
    uVar6 = *puVar4;
    uVar7 = puVar4[1];
    uVar8 = puVar4[2];
    uVar9 = puVar4[3];
  }
  __return_storage_ptr__->A = uVar6;
  __return_storage_ptr__->B = uVar7;
  __return_storage_ptr__->C = uVar8;
  __return_storage_ptr__->D = uVar9;
  return __return_storage_ptr__;
}

// GetInputControllerParams @ 14ae75c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae75e9d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x00014ae75ea1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TArray<Metasound::Frontend::FBaseNodeController::FInputControllerParams,TSizedDefaultAllocator<32>_>
* __thiscall
Metasound::Frontend::FBaseNodeController::GetInputControllerParams
          (FBaseNodeController *this,
          TArray<Metasound::Frontend::FBaseNodeController::FInputControllerParams,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  TArray<Metasound::Frontend::FBaseNodeController::FInputControllerParams,TSizedDefaultAllocator<32>_>
  *pTVar7;
  longlong *plVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  FName *pFVar12;
  FName *pFVar13;
  undefined1 auStack_1b8 [32];
  uint *local_198;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 local_168 [8];
  FBaseNodeController *local_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  FMetasoundFrontendVertex *local_148;
  longlong local_138;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *local_110;
  FMetasoundFrontendClassInput *local_108;
  longlong local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_160 = this;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar9 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar2 = *(code **)&(this->NodePtr).field_0x10;
  plVar8 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar9 != (longlong *)0x0) {
    plVar8 = plVar9;
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  lVar6 = (*pcVar2)(uVar5);
  *(longlong *)&this->NodePtr = lVar6;
  if (lVar6 != 0) {
    pFVar11 = *(FName **)(lVar6 + 0x28);
    iVar1 = *(int *)(lVar6 + 0x30);
    pFVar12 = pFVar11 + 2;
    pFVar13 = pFVar11 + (longlong)iVar1 * 4;
    while( true ) {
      if (*(int *)(lVar6 + 0x30) != iVar1) {
        local_168[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_168);
      }
      if (pFVar11 == pFVar13) break;
      FNodeAccessPtr::GetInputWithName
                (&local_160->NodePtr,(TAccessPtr<FMetasoundFrontendVertex_const_> *)local_88,pFVar11
                );
      FConstClassAccessPtr::GetInputWithName
                (&local_160->ClassPtr,(TAccessPtr<FMetasoundFrontendClassInput_const_> *)local_c8,
                 pFVar11);
      local_158 = (pFVar12->ComparisonIndex).Value;
      uStack_154 = pFVar12->Number;
      uStack_150 = pFVar12[1].ComparisonIndex.Value;
      uStack_14c = pFVar12[1].Number;
      local_148 = (FMetasoundFrontendVertex *)local_88._0_8_;
      local_138 = local_88._16_8_;
      local_110 = (longlong *)0x0;
      if (local_88._16_8_ != 0) {
        plVar9 = (longlong *)(local_88 + 0x20);
        if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_88._56_8_;
        }
        (**(code **)*plVar9)(local_158,&local_128);
      }
      local_108 = (FMetasoundFrontendClassInput *)local_c8._0_8_;
      local_f8 = local_c8._16_8_;
      local_d0 = 0;
      if (local_c8._16_8_ != 0) {
        plVar9 = (longlong *)(local_c8 + 0x20);
        if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_c8._56_8_;
        }
        (**(code **)*plVar9)(plVar9,&local_e8);
      }
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_158) &&
         ((FScriptContainerElement *)&local_158 <
          pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 0x90)) {
        local_180 = (longlong)__return_storage_ptr__->ArrayNum;
        local_178 = 0x90;
        local_198 = &local_158;
        local_190 = pFVar10;
        local_188 = (longlong)__return_storage_ptr__->ArrayMax;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<Metasound::Frontend::FBaseNodeController::FInputControllerParams,TSizedDefaultAllocator<32>_>
                    *)(*pcVar2)();
          return pTVar7;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1090,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x90;
      *(ulonglong *)pFVar10 = CONCAT44(uStack_154,local_158);
      *(ulonglong *)(pFVar10 + 8) = CONCAT44(uStack_14c,uStack_150);
      *(FMetasoundFrontendVertex **)(pFVar10 + 0x10) = local_148;
      *(longlong *)(pFVar10 + 0x20) = local_138;
      *(longlong **)(pFVar10 + 0x48) = local_110;
      local_110 = (longlong *)0x0;
      *(longlong *)(pFVar10 + 0x30) = local_128;
      *(undefined8 *)(pFVar10 + 0x38) = uStack_120;
      *(undefined8 *)(pFVar10 + 0x40) = local_118;
      if (*(longlong *)(pFVar10 + 0x20) != 0) {
        local_138 = 0;
      }
      *(FMetasoundFrontendClassInput **)(pFVar10 + 0x50) = local_108;
      *(longlong *)(pFVar10 + 0x60) = local_f8;
      *(undefined8 *)(pFVar10 + 0x88) = local_d0;
      local_d0 = 0;
      *(undefined4 *)(pFVar10 + 0x70) = local_e8;
      *(undefined4 *)(pFVar10 + 0x74) = uStack_e4;
      *(undefined4 *)(pFVar10 + 0x78) = uStack_e0;
      *(undefined4 *)(pFVar10 + 0x7c) = uStack_dc;
      *(undefined8 *)(pFVar10 + 0x80) = local_d8;
      if (*(longlong *)(pFVar10 + 0x60) == 0) {
        if (local_f8 != 0) {
          (**(code **)(CONCAT44(uStack_e4,local_e8) + 0x10))();
        }
      }
      else {
        local_f8 = 0;
      }
      if (local_138 != 0) {
        plVar9 = &local_128;
        if (local_110 != (longlong *)0x0) {
          plVar9 = local_110;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (local_c8._16_8_ != 0) {
        plVar9 = (longlong *)(local_c8 + 0x20);
        if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_c8._56_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (local_88._16_8_ != 0) {
        plVar9 = (longlong *)(local_88 + 0x20);
        if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_88._56_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      pFVar11 = pFVar11 + 4;
      pFVar12 = pFVar12 + 4;
    }
  }
  return __return_storage_ptr__;
}

// GetInputLiteral @ 14ae75f80

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FBaseNodeController::GetInputLiteral(FBaseNodeController *this,FGuid *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  FMetasoundFrontendLiteral *pFVar6;
  longlong *plVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar2 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar3 = *(code **)&(this->NodePtr).field_0x10;
  plVar7 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar7 = plVar2;
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  lVar5 = (*pcVar3)(uVar4);
  *(longlong *)&this->NodePtr = lVar5;
  if (lVar5 == 0) {
LAB_14ae7601f:
    pFVar6 = (FMetasoundFrontendLiteral *)0x0;
  }
  else {
    iVar1 = *(int *)(lVar5 + 0x60);
    puVar8 = *(uint **)(lVar5 + 0x58);
    puVar9 = puVar8 + (longlong)iVar1 * 0x1a;
    while( true ) {
      if (*(int *)(lVar5 + 0x60) != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendVertexLiteral_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar8 == puVar9) goto LAB_14ae7601f;
      if (((puVar8[3] == param_1->D && puVar8[2] == param_1->C) && puVar8[1] == param_1->B) &&
          *puVar8 == param_1->A) break;
      puVar8 = puVar8 + 0x1a;
    }
    pFVar6 = (FMetasoundFrontendLiteral *)(puVar8 + 4);
  }
  return pFVar6;
}

// GetInputWithID @ 14ae760e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IInputController,1> * __thiscall
Metasound::Frontend::FBaseNodeController::GetInputWithID
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController,1> *__return_storage_ptr__,FGuid *param_1
          )

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_198 [32];
  FMetasoundFrontendClassInput **local_178;
  TSharedRef<Metasound::Frontend::INodeController,1> *local_170;
  TSharedRef<Metasound::Frontend::INodeController,1> local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  FMetasoundFrontendClassInput *local_148 [2];
  longlong local_138;
  undefined1 local_128 [24];
  undefined8 local_110;
  FMetasoundFrontendVertex *local_108 [2];
  longlong local_f8;
  undefined1 local_e8 [24];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  plVar5 = (longlong *)(local_b8 + 0x20);
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_c8 = 0;
  uStack_c0 = 0;
  TAccessPtr<FMetasoundFrontendVertex_const_>::TAccessPtr<FMetasoundFrontendVertex_const_>
            ((TAccessPtr<FMetasoundFrontendVertex_const_> *)local_b8);
  TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_>
            ((TAccessPtr<FMetasoundFrontendClassInput_const_> *)local_78);
  local_168.Object = *(INodeController **)param_1;
  local_168.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)&param_1->C;
  cVar3 = (**(code **)(this->_padding_ + 0x1a0))(this,&local_168,&local_c8);
  if (cVar3 == '\0') {
    IInputController::GetInvalidHandle(__return_storage_ptr__);
    if (local_78._16_8_ != 0) {
      plVar4 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (local_b8._16_8_ != 0) {
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_b8._56_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  else {
    TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
              ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
               &local_168);
    FVar2.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
    pcVar1 = *(code **)(this->_padding_ + 0x1b0);
    if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148[0] = (FMetasoundFrontendClassInput *)local_78._0_8_;
    local_138 = local_78._16_8_;
    local_110 = 0;
    if (local_78._16_8_ != 0) {
      plVar4 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_78._56_8_;
      }
      (**(code **)*plVar4)(local_168.SharedReferenceCount.ReferenceController,local_128);
    }
    local_108[0] = (FMetasoundFrontendVertex *)local_b8._0_8_;
    local_f8 = local_b8._16_8_;
    local_d0 = 0;
    if (local_b8._16_8_ != 0) {
      plVar4 = plVar5;
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_b8._56_8_;
      }
      (**(code **)*plVar4)(plVar4,local_e8);
    }
    local_170 = &local_168;
    local_178 = local_148;
    local_158 = local_c8;
    uStack_150 = uStack_c0;
    (*pcVar1)(this,__return_storage_ptr__,&local_158,local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    if (local_78._16_8_ != 0) {
      plVar4 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (local_b8._16_8_ != 0) {
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_b8._56_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetInputWithID @ 14ae762d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IInputController_const_,1> * __thiscall
Metasound::Frontend::FBaseNodeController::GetInputWithID
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController_const_,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  INodeController *pIVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  char cVar5;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar6;
  undefined8 *puVar7;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar8;
  longlong *plVar9;
  atomic<int> *paVar10;
  undefined1 auStack_1b8 [32];
  FMetasoundFrontendClassInput **local_198;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *local_190;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> local_188;
  TSharedRef<Metasound::Frontend::IInputController,1> local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FMetasoundFrontendClassInput *local_158 [2];
  longlong local_148;
  undefined1 local_138 [24];
  undefined8 local_120;
  FMetasoundFrontendVertex *local_118 [2];
  longlong local_108;
  undefined1 local_f8 [24];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_d8 = 0;
  uStack_d0 = 0;
  TAccessPtr<FMetasoundFrontendVertex_const_>::TAccessPtr<FMetasoundFrontendVertex_const_>
            ((TAccessPtr<FMetasoundFrontendVertex_const_> *)local_c8);
  TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_>
            ((TAccessPtr<FMetasoundFrontendClassInput_const_> *)local_88);
  local_188.Object = *(INodeController **)param_1;
  local_188.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)&param_1->C;
  cVar5 = (**(code **)(this->_padding_ + 0x1a0))(this,&local_188,&local_d8);
  if (cVar5 == '\0') {
    pTVar8 = IInputController::GetInvalidHandle(&local_178);
    __return_storage_ptr__->Object = pTVar8->Object;
    pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    if (local_88._16_8_ != 0) {
      plVar9 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_88._56_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_c8._16_8_ != 0) {
      plVar9 = (longlong *)(local_c8 + 0x20);
      if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_c8._56_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  else {
    pTVar6 = TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
                       ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
                        &local_188);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    pcVar3 = *(code **)(this->_padding_ + 0x1b0);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_158[0] = (FMetasoundFrontendClassInput *)local_88._0_8_;
    local_148 = local_88._16_8_;
    local_120 = 0;
    local_188.Object = pIVar2;
    local_188.SharedReferenceCount.ReferenceController = pTVar1;
    if (local_88._16_8_ != 0) {
      plVar9 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_88._56_8_;
      }
      (**(code **)*plVar9)(plVar9,local_138);
    }
    local_118[0] = (FMetasoundFrontendVertex *)local_c8._0_8_;
    local_108 = local_c8._16_8_;
    local_e0 = 0;
    if (local_c8._16_8_ != 0) {
      plVar9 = (longlong *)(local_c8 + 0x20);
      if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_c8._56_8_;
      }
      (**(code **)*plVar9)(plVar9,local_f8);
    }
    local_190 = &local_188;
    local_198 = local_158;
    local_168 = (undefined4)local_d8;
    uStack_164 = local_d8._4_4_;
    uStack_160 = (undefined4)uStack_d0;
    uStack_15c = uStack_d0._4_4_;
    puVar7 = (undefined8 *)(*pcVar3)(this,&local_178,&local_168,local_118);
    __return_storage_ptr__->Object = (IInputController *)*puVar7;
    pTVar4 = (TReferenceControllerBase<1> *)puVar7[1];
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (local_88._16_8_ != 0) {
      plVar9 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_88._56_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_c8._16_8_ != 0) {
      plVar9 = (longlong *)(local_c8 + 0x20);
      if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_c8._56_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetInputWithVertexName @ 14ae76540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IInputController,1> * __thiscall
Metasound::Frontend::FBaseNodeController::GetInputWithVertexName
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController,1> *__return_storage_ptr__,FName *param_1
          )

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_198 [32];
  FMetasoundFrontendClassInput **local_178;
  TSharedRef<Metasound::Frontend::INodeController,1> *local_170;
  TSharedRef<Metasound::Frontend::INodeController,1> local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  FMetasoundFrontendClassInput *local_148 [2];
  longlong local_138;
  undefined1 local_128 [24];
  undefined8 local_110;
  FMetasoundFrontendVertex *local_108 [2];
  longlong local_f8;
  undefined1 local_e8 [24];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  plVar4 = (longlong *)(local_b8 + 0x20);
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_c8 = 0;
  uStack_c0 = 0;
  TAccessPtr<FMetasoundFrontendVertex_const_>::TAccessPtr<FMetasoundFrontendVertex_const_>
            ((TAccessPtr<FMetasoundFrontendVertex_const_> *)local_b8);
  TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_>
            ((TAccessPtr<FMetasoundFrontendClassInput_const_> *)local_78);
  cVar2 = (**(code **)(this->_padding_ + 400))(this,param_1,&local_c8);
  if (cVar2 == '\0') {
    IInputController::GetInvalidHandle(__return_storage_ptr__);
    if (local_78._16_8_ != 0) {
      plVar3 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_b8._16_8_ != 0) {
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_b8._56_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  else {
    TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
              ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
               &local_168);
    pcVar1 = *(code **)(this->_padding_ + 0x1b0);
    if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148[0] = (FMetasoundFrontendClassInput *)local_78._0_8_;
    local_138 = local_78._16_8_;
    local_110 = 0;
    if (local_78._16_8_ != 0) {
      plVar3 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_78._56_8_;
      }
      (**(code **)*plVar3)(local_168.SharedReferenceCount.ReferenceController,local_128);
    }
    local_108[0] = (FMetasoundFrontendVertex *)local_b8._0_8_;
    local_f8 = local_b8._16_8_;
    local_d0 = 0;
    if (local_b8._16_8_ != 0) {
      plVar3 = plVar4;
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_b8._56_8_;
      }
      (**(code **)*plVar3)(plVar3,local_e8);
    }
    local_170 = &local_168;
    local_178 = local_148;
    local_158 = local_c8;
    uStack_150 = uStack_c0;
    (*pcVar1)(this,__return_storage_ptr__,&local_158,local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    if (local_78._16_8_ != 0) {
      plVar3 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_b8._16_8_ != 0) {
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_b8._56_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetInputs @ 14ae76720

TArray<TSharedRef<Metasound::Frontend::IInputController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FBaseNodeController::GetInputs
          (FBaseNodeController *this,
          TArray<TSharedRef<Metasound::Frontend::IInputController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FInputControllerParams *pFVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TArray<TSharedRef<Metasound::Frontend::IInputController,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  TFunction<FMetasoundFrontendClassInput_const_*___cdecl(void)> *pTVar12;
  undefined1 local_res8 [8];
  uint local_res10;
  FInputControllerParams *local_res18;
  longlong *local_108;
  TReferenceControllerBase<1> *local_100;
  FInputControllerParams *local_f8;
  uint local_f0;
  TSharedRef<Metasound::Frontend::INodeController,1> local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8 [2];
  longlong local_a8;
  undefined1 local_98 [24];
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68;
  undefined1 local_58 [24];
  undefined8 local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
            ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,&local_e8);
  (**(code **)(this->_padding_ + 0x180))(this,&local_f8);
  uVar8 = (ulonglong)(int)local_f0;
  pTVar2 = (TReferenceControllerBase<1> *)
           CONCAT44(local_e8.SharedReferenceCount.ReferenceController._4_4_,
                    local_e8.SharedReferenceCount.ReferenceController._0_4_);
  local_res10 = local_f0;
  pTVar12 = &(local_f8->ClassInputPtr).GetObject;
  local_res18 = local_f8 + uVar8;
  while( true ) {
    pFVar3 = local_res18;
    if (local_f0 != (uint)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::Frontend::FBaseNodeController::FInputControllerParams,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FInputControllerParams *)(pTVar12 + -2) == pFVar3) break;
    local_d8 = local_e8.Object._0_4_;
    uStack_d4 = local_e8.Object._4_4_;
    uStack_d0 = local_e8.SharedReferenceCount.ReferenceController._0_4_;
    uStack_cc = local_e8.SharedReferenceCount.ReferenceController._4_4_;
    pcVar1 = *(code **)(this->_padding_ + 0x1b0);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b8[0] = *(longlong *)((longlong)(pTVar12 + -1) + 0x20);
    local_a8 = *(longlong *)pTVar12;
    local_80 = 0;
    if (local_a8 != 0) {
      puVar9 = (undefined8 *)&pTVar12->field_0x10;
      if (*(undefined8 **)&pTVar12->field_0x28 != (undefined8 *)0x0) {
        puVar9 = *(undefined8 **)&pTVar12->field_0x28;
      }
      (**(code **)*puVar9)(local_e8.Object._0_4_,local_98);
    }
    local_78[0] = *(longlong *)((longlong)(pTVar12 + -2) + 0x10);
    local_68 = *(longlong *)((longlong)(pTVar12 + -2) + 0x20);
    local_40 = 0;
    if (local_68 != 0) {
      plVar10 = (longlong *)(pTVar12 + -1);
      if (*(longlong **)((longlong)(pTVar12 + -1) + 0x18) != (longlong *)0x0) {
        plVar10 = *(longlong **)((longlong)(pTVar12 + -1) + 0x18);
      }
      (**(code **)*plVar10)(plVar10,local_58);
    }
    local_c8 = (((FInputControllerParams *)(pTVar12 + -2))->VertexID).A;
    uStack_c4 = *(undefined4 *)((longlong)(pTVar12 + -2) + 4);
    uStack_c0 = (undefined4)*(longlong *)((longlong)(pTVar12 + -2) + 8);
    uStack_bc = *(undefined4 *)((longlong)(pTVar12 + -2) + 0xc);
    (*pcVar1)(this,&local_108,&local_c8,local_78,local_b8,&local_d8);
    cVar4 = (**(code **)(*local_108 + 0x18))();
    if (cVar4 != '\0') {
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 <
           pFVar11 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TArray<TSharedRef<Metasound::Frontend::IInputController,1>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar1)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(longlong **)pFVar11 = local_108;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = local_100;
      if (local_100 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
    uVar8 = (ulonglong)local_res10;
    pTVar12 = pTVar12 + 3;
  }
  DestructItems<Metasound::Frontend::FBaseNodeController::FInputControllerParams,int>
            (local_f8,local_f0);
  if (local_f8 != (FInputControllerParams *)0x0) {
    FMemory::Free(local_f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetInterfaceVersion @ 14ae769a0

FMetasoundFrontendVersion * __thiscall
Metasound::Frontend::FBaseNodeController::GetInterfaceVersion(FBaseNodeController *this)

{
  return &InvalidVersion;
}

// GetNodeConfiguration @ 14ae77480

TConstStructView<FMetaSoundFrontendNodeConfiguration> * __thiscall
Metasound::Frontend::FBaseNodeController::GetNodeConfiguration
          (FBaseNodeController *this,
          TConstStructView<FMetaSoundFrontendNodeConfiguration> *__return_storage_ptr__)

{
  void *pvVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  pvVar1 = *(void **)&(this->NodePtr).field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  UE::Core::Private::Function::CheckCallable(pvVar1);
  plVar2 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar3 = *(code **)&(this->NodePtr).field_0x10;
  plVar6 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar4 = (**(code **)(*plVar6 + 8))();
  lVar5 = (*pcVar3)(uVar4);
  *(longlong *)&this->NodePtr = lVar5;
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x70);
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
  }
  return __return_storage_ptr__;
}

// GetNodeInterface @ 14ae77500

FMetasoundFrontendNodeInterface * __thiscall
Metasound::Frontend::FBaseNodeController::GetNodeInterface(FBaseNodeController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  FMetasoundFrontendNodeInterface *pFVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar2 = *(code **)&(this->NodePtr).field_0x10;
  plVar6 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->NodePtr = lVar4;
  if (lVar4 != 0) {
    return (FMetasoundFrontendNodeInterface *)(lVar4 + 0x28);
  }
  pFVar5 = Frontend::Invalid::GetInvalidNodeInterface();
  return pFVar5;
}

// GetNodeName @ 14ae77570

FName * __thiscall Metasound::Frontend::FBaseNodeController::GetNodeName(FBaseNodeController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  FName *pFVar5;
  longlong *plVar6;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar2 = *(code **)&(this->NodePtr).field_0x10;
  plVar6 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar6 = plVar1;
  }
  uVar3 = (**(code **)(*plVar6 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->NodePtr = lVar4;
  if (lVar4 != 0) {
    return (FName *)(lVar4 + 0x20);
  }
  pFVar5 = Frontend::Invalid::GetInvalidName();
  return pFVar5;
}

// GetNumInputs @ 14ae77650

int __thiscall Metasound::Frontend::FBaseNodeController::GetNumInputs(FBaseNodeController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar2 = *(code **)&(this->NodePtr).field_0x10;
  plVar5 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->NodePtr = lVar4;
  if (lVar4 != 0) {
    return *(int *)(lVar4 + 0x30);
  }
  return 0;
}

// GetNumOutputs @ 14ae77720

int __thiscall Metasound::Frontend::FBaseNodeController::GetNumOutputs(FBaseNodeController *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar2 = *(code **)&(this->NodePtr).field_0x10;
  plVar5 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar5 = plVar1;
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  lVar4 = (*pcVar2)(uVar3);
  *(longlong *)&this->NodePtr = lVar4;
  if (lVar4 != 0) {
    return *(int *)(lVar4 + 0x40);
  }
  return 0;
}

// GetOutputControllerParams @ 14ae777f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ae77a7d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x00014ae77a81 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TArray<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,TSizedDefaultAllocator<32>_>
* __thiscall
Metasound::Frontend::FBaseNodeController::GetOutputControllerParams
          (FBaseNodeController *this,
          TArray<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  TArray<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,TSizedDefaultAllocator<32>_>
  *pTVar7;
  longlong *plVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  FName *pFVar12;
  FName *pFVar13;
  undefined1 auStack_1b8 [32];
  uint *local_198;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 local_168 [8];
  FBaseNodeController *local_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  FMetasoundFrontendVertex *local_148;
  longlong local_138;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong *local_110;
  FMetasoundFrontendClassOutput *local_108;
  longlong local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_160 = this;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar9 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar2 = *(code **)&(this->NodePtr).field_0x10;
  plVar8 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar9 != (longlong *)0x0) {
    plVar8 = plVar9;
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  lVar6 = (*pcVar2)(uVar5);
  *(longlong *)&this->NodePtr = lVar6;
  if (lVar6 != 0) {
    pFVar11 = *(FName **)(lVar6 + 0x38);
    iVar1 = *(int *)(lVar6 + 0x40);
    pFVar12 = pFVar11 + 2;
    pFVar13 = pFVar11 + (longlong)iVar1 * 4;
    while( true ) {
      if (*(int *)(lVar6 + 0x40) != iVar1) {
        local_168[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVertex_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_168);
      }
      if (pFVar11 == pFVar13) break;
      FNodeAccessPtr::GetOutputWithName
                (&local_160->NodePtr,(TAccessPtr<FMetasoundFrontendVertex_const_> *)local_88,pFVar11
                );
      FConstClassAccessPtr::GetOutputWithName
                (&local_160->ClassPtr,(TAccessPtr<FMetasoundFrontendClassOutput_const_> *)local_c8,
                 pFVar11);
      local_158 = (pFVar12->ComparisonIndex).Value;
      uStack_154 = pFVar12->Number;
      uStack_150 = pFVar12[1].ComparisonIndex.Value;
      uStack_14c = pFVar12[1].Number;
      local_148 = (FMetasoundFrontendVertex *)local_88._0_8_;
      local_138 = local_88._16_8_;
      local_110 = (longlong *)0x0;
      if (local_88._16_8_ != 0) {
        plVar9 = (longlong *)(local_88 + 0x20);
        if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_88._56_8_;
        }
        (**(code **)*plVar9)(local_158,&local_128);
      }
      local_108 = (FMetasoundFrontendClassOutput *)local_c8._0_8_;
      local_f8 = local_c8._16_8_;
      local_d0 = 0;
      if (local_c8._16_8_ != 0) {
        plVar9 = (longlong *)(local_c8 + 0x20);
        if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_c8._56_8_;
        }
        (**(code **)*plVar9)(plVar9,&local_e8);
      }
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_158) &&
         ((FScriptContainerElement *)&local_158 <
          pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 0x90)) {
        local_180 = (longlong)__return_storage_ptr__->ArrayNum;
        local_178 = 0x90;
        local_198 = &local_158;
        local_190 = pFVar10;
        local_188 = (longlong)__return_storage_ptr__->ArrayMax;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,TSizedDefaultAllocator<32>_>
                    *)(*pcVar2)();
          return pTVar7;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1090,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x90;
      *(ulonglong *)pFVar10 = CONCAT44(uStack_154,local_158);
      *(ulonglong *)(pFVar10 + 8) = CONCAT44(uStack_14c,uStack_150);
      *(FMetasoundFrontendVertex **)(pFVar10 + 0x10) = local_148;
      *(longlong *)(pFVar10 + 0x20) = local_138;
      *(longlong **)(pFVar10 + 0x48) = local_110;
      local_110 = (longlong *)0x0;
      *(longlong *)(pFVar10 + 0x30) = local_128;
      *(undefined8 *)(pFVar10 + 0x38) = uStack_120;
      *(undefined8 *)(pFVar10 + 0x40) = local_118;
      if (*(longlong *)(pFVar10 + 0x20) != 0) {
        local_138 = 0;
      }
      *(FMetasoundFrontendClassOutput **)(pFVar10 + 0x50) = local_108;
      *(longlong *)(pFVar10 + 0x60) = local_f8;
      *(undefined8 *)(pFVar10 + 0x88) = local_d0;
      local_d0 = 0;
      *(undefined4 *)(pFVar10 + 0x70) = local_e8;
      *(undefined4 *)(pFVar10 + 0x74) = uStack_e4;
      *(undefined4 *)(pFVar10 + 0x78) = uStack_e0;
      *(undefined4 *)(pFVar10 + 0x7c) = uStack_dc;
      *(undefined8 *)(pFVar10 + 0x80) = local_d8;
      if (*(longlong *)(pFVar10 + 0x60) == 0) {
        if (local_f8 != 0) {
          (**(code **)(CONCAT44(uStack_e4,local_e8) + 0x10))();
        }
      }
      else {
        local_f8 = 0;
      }
      if (local_138 != 0) {
        plVar9 = &local_128;
        if (local_110 != (longlong *)0x0) {
          plVar9 = local_110;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (local_c8._16_8_ != 0) {
        plVar9 = (longlong *)(local_c8 + 0x20);
        if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_c8._56_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (local_88._16_8_ != 0) {
        plVar9 = (longlong *)(local_88 + 0x20);
        if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_88._56_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      pFVar11 = pFVar11 + 4;
      pFVar12 = pFVar12 + 4;
    }
  }
  return __return_storage_ptr__;
}

// GetOutputWithID @ 14ae77bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IOutputController,1> * __thiscall
Metasound::Frontend::FBaseNodeController::GetOutputWithID
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IOutputController,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_198 [32];
  FMetasoundFrontendClassOutput **local_178;
  TSharedRef<Metasound::Frontend::INodeController,1> *local_170;
  TSharedRef<Metasound::Frontend::INodeController,1> local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  FMetasoundFrontendClassOutput *local_148 [2];
  longlong local_138;
  undefined1 local_128 [24];
  undefined8 local_110;
  FMetasoundFrontendVertex *local_108 [2];
  longlong local_f8;
  undefined1 local_e8 [24];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  plVar5 = (longlong *)(local_b8 + 0x20);
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_c8 = 0;
  uStack_c0 = 0;
  TAccessPtr<FMetasoundFrontendVertex_const_>::TAccessPtr<FMetasoundFrontendVertex_const_>
            ((TAccessPtr<FMetasoundFrontendVertex_const_> *)local_b8);
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_>
            ((TAccessPtr<FMetasoundFrontendClassOutput_const_> *)local_78);
  local_168.Object = *(INodeController **)param_1;
  local_168.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)&param_1->C;
  cVar3 = (**(code **)(this->_padding_ + 0x1a8))(this,&local_168,&local_c8);
  if (cVar3 == '\0') {
    IOutputController::GetInvalidHandle(__return_storage_ptr__);
    if (local_78._16_8_ != 0) {
      plVar4 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (local_b8._16_8_ != 0) {
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_b8._56_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  else {
    TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
              ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
               &local_168);
    FVar2.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
    pcVar1 = *(code **)(this->_padding_ + 0x1b8);
    if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148[0] = (FMetasoundFrontendClassOutput *)local_78._0_8_;
    local_138 = local_78._16_8_;
    local_110 = 0;
    if (local_78._16_8_ != 0) {
      plVar4 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_78._56_8_;
      }
      (**(code **)*plVar4)(local_168.SharedReferenceCount.ReferenceController,local_128);
    }
    local_108[0] = (FMetasoundFrontendVertex *)local_b8._0_8_;
    local_f8 = local_b8._16_8_;
    local_d0 = 0;
    if (local_b8._16_8_ != 0) {
      plVar4 = plVar5;
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_b8._56_8_;
      }
      (**(code **)*plVar4)(plVar4,local_e8);
    }
    local_170 = &local_168;
    local_178 = local_148;
    local_158 = local_c8;
    uStack_150 = uStack_c0;
    (*pcVar1)(this,__return_storage_ptr__,&local_158,local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
    if (local_78._16_8_ != 0) {
      plVar4 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if (local_b8._16_8_ != 0) {
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_b8._56_8_;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetOutputWithID @ 14ae77de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IOutputController_const_,1> * __thiscall
Metasound::Frontend::FBaseNodeController::GetOutputWithID
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IOutputController_const_,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  INodeController *pIVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  char cVar5;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar6;
  undefined8 *puVar7;
  TSharedRef<Metasound::Frontend::IOutputController,1> *pTVar8;
  longlong *plVar9;
  atomic<int> *paVar10;
  undefined1 auStack_1b8 [32];
  FMetasoundFrontendClassOutput **local_198;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *local_190;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> local_188;
  TSharedRef<Metasound::Frontend::IOutputController,1> local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FMetasoundFrontendClassOutput *local_158 [2];
  longlong local_148;
  undefined1 local_138 [24];
  undefined8 local_120;
  FMetasoundFrontendVertex *local_118 [2];
  longlong local_108;
  undefined1 local_f8 [24];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_d8 = 0;
  uStack_d0 = 0;
  TAccessPtr<FMetasoundFrontendVertex_const_>::TAccessPtr<FMetasoundFrontendVertex_const_>
            ((TAccessPtr<FMetasoundFrontendVertex_const_> *)local_c8);
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_>
            ((TAccessPtr<FMetasoundFrontendClassOutput_const_> *)local_88);
  local_188.Object = *(INodeController **)param_1;
  local_188.SharedReferenceCount.ReferenceController = *(TReferenceControllerBase<1> **)&param_1->C;
  cVar5 = (**(code **)(this->_padding_ + 0x1a8))(this,&local_188,&local_d8);
  if (cVar5 == '\0') {
    pTVar8 = IOutputController::GetInvalidHandle(&local_178);
    __return_storage_ptr__->Object = pTVar8->Object;
    pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    if (local_88._16_8_ != 0) {
      plVar9 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_88._56_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_c8._16_8_ != 0) {
      plVar9 = (longlong *)(local_c8 + 0x20);
      if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_c8._56_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  else {
    pTVar6 = TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
                       ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
                        &local_188);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pIVar2 = pTVar6->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &pTVar1->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    pcVar3 = *(code **)(this->_padding_ + 0x1b8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_158[0] = (FMetasoundFrontendClassOutput *)local_88._0_8_;
    local_148 = local_88._16_8_;
    local_120 = 0;
    local_188.Object = pIVar2;
    local_188.SharedReferenceCount.ReferenceController = pTVar1;
    if (local_88._16_8_ != 0) {
      plVar9 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_88._56_8_;
      }
      (**(code **)*plVar9)(plVar9,local_138);
    }
    local_118[0] = (FMetasoundFrontendVertex *)local_c8._0_8_;
    local_108 = local_c8._16_8_;
    local_e0 = 0;
    if (local_c8._16_8_ != 0) {
      plVar9 = (longlong *)(local_c8 + 0x20);
      if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_c8._56_8_;
      }
      (**(code **)*plVar9)(plVar9,local_f8);
    }
    local_190 = &local_188;
    local_198 = local_158;
    local_168 = (undefined4)local_d8;
    uStack_164 = local_d8._4_4_;
    uStack_160 = (undefined4)uStack_d0;
    uStack_15c = uStack_d0._4_4_;
    puVar7 = (undefined8 *)(*pcVar3)(this,&local_178,&local_168,local_118);
    __return_storage_ptr__->Object = (IOutputController *)*puVar7;
    pTVar4 = (TReferenceControllerBase<1> *)puVar7[1];
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (local_88._16_8_ != 0) {
      plVar9 = (longlong *)(local_88 + 0x20);
      if ((longlong *)local_88._56_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_88._56_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_c8._16_8_ != 0) {
      plVar9 = (longlong *)(local_c8 + 0x20);
      if ((longlong *)local_c8._56_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_c8._56_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetOutputWithVertexName @ 14ae78050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<Metasound::Frontend::IOutputController,1> * __thiscall
Metasound::Frontend::FBaseNodeController::GetOutputWithVertexName
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IOutputController,1> *__return_storage_ptr__,
          FName *param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_198 [32];
  FMetasoundFrontendClassOutput **local_178;
  TSharedRef<Metasound::Frontend::INodeController,1> *local_170;
  TSharedRef<Metasound::Frontend::INodeController,1> local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  FMetasoundFrontendClassOutput *local_148 [2];
  longlong local_138;
  undefined1 local_128 [24];
  undefined8 local_110;
  FMetasoundFrontendVertex *local_108 [2];
  longlong local_f8;
  undefined1 local_e8 [24];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  plVar4 = (longlong *)(local_b8 + 0x20);
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_c8 = 0;
  uStack_c0 = 0;
  TAccessPtr<FMetasoundFrontendVertex_const_>::TAccessPtr<FMetasoundFrontendVertex_const_>
            ((TAccessPtr<FMetasoundFrontendVertex_const_> *)local_b8);
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_>
            ((TAccessPtr<FMetasoundFrontendClassOutput_const_> *)local_78);
  cVar2 = (**(code **)(this->_padding_ + 0x198))(this,param_1,&local_c8);
  if (cVar2 == '\0') {
    IOutputController::GetInvalidHandle(__return_storage_ptr__);
    if (local_78._16_8_ != 0) {
      plVar3 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_b8._16_8_ != 0) {
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_b8._56_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  else {
    TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
              ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
               &local_168);
    pcVar1 = *(code **)(this->_padding_ + 0x1b8);
    if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148[0] = (FMetasoundFrontendClassOutput *)local_78._0_8_;
    local_138 = local_78._16_8_;
    local_110 = 0;
    if (local_78._16_8_ != 0) {
      plVar3 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_78._56_8_;
      }
      (**(code **)*plVar3)(local_168.SharedReferenceCount.ReferenceController,local_128);
    }
    local_108[0] = (FMetasoundFrontendVertex *)local_b8._0_8_;
    local_f8 = local_b8._16_8_;
    local_d0 = 0;
    if (local_b8._16_8_ != 0) {
      plVar3 = plVar4;
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_b8._56_8_;
      }
      (**(code **)*plVar3)(plVar3,local_e8);
    }
    local_170 = &local_168;
    local_178 = local_148;
    local_158 = local_c8;
    uStack_150 = uStack_c0;
    (*pcVar1)(this,__return_storage_ptr__,&local_158,local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    if (local_78._16_8_ != 0) {
      plVar3 = (longlong *)(local_78 + 0x20);
      if ((longlong *)local_78._56_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_78._56_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_b8._16_8_ != 0) {
      if ((longlong *)local_b8._56_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_b8._56_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// GetOutputs @ 14ae78230

TArray<TSharedRef<Metasound::Frontend::IOutputController,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FBaseNodeController::GetOutputs
          (FBaseNodeController *this,
          TArray<TSharedRef<Metasound::Frontend::IOutputController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FOutputControllerParams *pFVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  TArray<TSharedRef<Metasound::Frontend::IOutputController,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  TFunction<FMetasoundFrontendClassOutput_const_*___cdecl(void)> *pTVar12;
  undefined1 local_res8 [8];
  uint local_res10;
  FOutputControllerParams *local_res18;
  longlong *local_108;
  TReferenceControllerBase<1> *local_100;
  FOutputControllerParams *local_f8;
  uint local_f0;
  TSharedRef<Metasound::Frontend::INodeController,1> local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8 [2];
  longlong local_a8;
  undefined1 local_98 [24];
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68;
  undefined1 local_58 [24];
  undefined8 local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
            ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,&local_e8);
  (**(code **)(this->_padding_ + 0x188))(this,&local_f8);
  uVar8 = (ulonglong)(int)local_f0;
  pTVar2 = (TReferenceControllerBase<1> *)
           CONCAT44(local_e8.SharedReferenceCount.ReferenceController._4_4_,
                    local_e8.SharedReferenceCount.ReferenceController._0_4_);
  local_res10 = local_f0;
  pTVar12 = &(local_f8->ClassOutputPtr).GetObject;
  local_res18 = local_f8 + uVar8;
  while( true ) {
    pFVar3 = local_res18;
    if (local_f0 != (uint)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FOutputControllerParams *)(pTVar12 + -2) == pFVar3) break;
    local_d8 = local_e8.Object._0_4_;
    uStack_d4 = local_e8.Object._4_4_;
    uStack_d0 = local_e8.SharedReferenceCount.ReferenceController._0_4_;
    uStack_cc = local_e8.SharedReferenceCount.ReferenceController._4_4_;
    pcVar1 = *(code **)(this->_padding_ + 0x1b8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b8[0] = *(longlong *)((longlong)(pTVar12 + -1) + 0x20);
    local_a8 = *(longlong *)pTVar12;
    local_80 = 0;
    if (local_a8 != 0) {
      puVar9 = (undefined8 *)&pTVar12->field_0x10;
      if (*(undefined8 **)&pTVar12->field_0x28 != (undefined8 *)0x0) {
        puVar9 = *(undefined8 **)&pTVar12->field_0x28;
      }
      (**(code **)*puVar9)(local_e8.Object._0_4_,local_98);
    }
    local_78[0] = *(longlong *)((longlong)(pTVar12 + -2) + 0x10);
    local_68 = *(longlong *)((longlong)(pTVar12 + -2) + 0x20);
    local_40 = 0;
    if (local_68 != 0) {
      plVar10 = (longlong *)(pTVar12 + -1);
      if (*(longlong **)((longlong)(pTVar12 + -1) + 0x18) != (longlong *)0x0) {
        plVar10 = *(longlong **)((longlong)(pTVar12 + -1) + 0x18);
      }
      (**(code **)*plVar10)(plVar10,local_58);
    }
    local_c8 = (((FOutputControllerParams *)(pTVar12 + -2))->VertexID).A;
    uStack_c4 = *(undefined4 *)((longlong)(pTVar12 + -2) + 4);
    uStack_c0 = (undefined4)*(longlong *)((longlong)(pTVar12 + -2) + 8);
    uStack_bc = *(undefined4 *)((longlong)(pTVar12 + -2) + 0xc);
    (*pcVar1)(this,&local_108,&local_c8,local_78,local_b8,&local_d8);
    cVar4 = (**(code **)(*local_108 + 0x18))();
    if (cVar4 != '\0') {
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 <
           pFVar11 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TArray<TSharedRef<Metasound::Frontend::IOutputController,1>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar1)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(longlong **)pFVar11 = local_108;
      *(TReferenceControllerBase<1> **)(pFVar11 + 8) = local_100;
      if (local_100 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
    uVar8 = (ulonglong)local_res10;
    pTVar12 = pTVar12 + 3;
  }
  DestructItems<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,int>
            (local_f8,local_f0);
  if (local_f8 != (FOutputControllerParams *)0x0) {
    FMemory::Free(local_f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetOwningGraph @ 14ae784b0

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
Metasound::Frontend::FBaseNodeController::GetOwningGraph
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OwningGraph).Object;
  pTVar1 = (this->OwningGraph).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOwningGraph @ 14ae784e0

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __thiscall
Metasound::Frontend::FBaseNodeController::GetOwningGraph
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::IGraphController_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->OwningGraph).Object;
  pTVar1 = (this->OwningGraph).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetOwningGraphClassID @ 14ae78510

FGuid * __thiscall
Metasound::Frontend::FBaseNodeController::GetOwningGraphClassID
          (FBaseNodeController *this,FGuid *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)(this->OwningGraph).Object + 0x20))();
  return __return_storage_ptr__;
}

// IsInterfaceMember @ 14ae7a6c0

bool __thiscall
Metasound::Frontend::FBaseNodeController::IsInterfaceMember(FBaseNodeController *this)

{
  FMetasoundFrontendVersion *pFVar1;
  FName *pFVar2;
  
  pFVar1 = FMetasoundFrontendVersion::GetInvalid();
  pFVar2 = (FName *)(**(code **)(this->_padding_ + 0xa0))(this);
  if (((*pFVar2 == pFVar1->Name) && (pFVar2[1].ComparisonIndex.Value == (pFVar1->Number).Major)) &&
     (pFVar2[1].Number == (pFVar1->Number).Minor)) {
    return false;
  }
  return true;
}

// IsValid @ 14ae7a7b0

bool __thiscall Metasound::Frontend::FBaseNodeController::IsValid(FBaseNodeController *this)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  cVar3 = (**(code **)(*(longlong *)(this->OwningGraph).Object + 0x18))();
  if (cVar3 != '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
    plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
    pcVar2 = *(code **)&(this->NodePtr).field_0x10;
    plVar6 = (longlong *)&(this->NodePtr).field_0x20;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar4 = (**(code **)(*plVar6 + 8))();
    lVar5 = (*pcVar2)(uVar4);
    *(longlong *)&this->NodePtr = lVar5;
    if (lVar5 != 0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&(this->ClassPtr).field_0x10);
      pcVar2 = *(code **)&(this->ClassPtr).field_0x10;
      plVar1 = *(longlong **)&(this->ClassPtr).field_0x38;
      plVar6 = (longlong *)&(this->ClassPtr).field_0x20;
      if (plVar1 != (longlong *)0x0) {
        plVar6 = plVar1;
      }
      uVar4 = (**(code **)(*plVar6 + 8))();
      lVar5 = (*pcVar2)(uVar4);
      *(longlong *)&this->ClassPtr = lVar5;
      if (lVar5 != 0) {
        return true;
      }
    }
  }
  return false;
}

// IterateConstInputs @ 14ae7af70

void __thiscall
Metasound::Frontend::FBaseNodeController::IterateConstInputs
          (FBaseNodeController *this,
          TUniqueFunction<void___cdecl(TSharedRef<Metasound::Frontend::IInputController_const_,1>)>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FInputControllerParams *pFVar4;
  char cVar5;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  TFunction<FMetasoundFrontendClassInput_const_*___cdecl(void)> *pTVar11;
  atomic<int> *paVar12;
  INodeController *pIVar13;
  undefined1 local_128 [4];
  uint local_124;
  FInputControllerParams *local_120;
  uint local_118;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> local_110;
  FInputControllerParams *local_100;
  INodeController *local_f8;
  longlong *local_f0;
  TReferenceControllerBase<1> *local_e8;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [8];
  TReferenceControllerBase<1> *local_c0;
  longlong local_b8 [2];
  longlong local_a8;
  undefined1 local_98 [24];
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68;
  undefined1 local_58 [24];
  undefined8 local_40;
  
  pTVar6 = TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
                     ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
                      &local_110);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pIVar13 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8 = pIVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.SharedReferenceCount.ReferenceController);
  (**(code **)(this->_padding_ + 0x180))(this,&local_120);
  uVar9 = (ulonglong)(int)local_118;
  local_124 = local_118;
  local_100 = local_120 + uVar9;
  pTVar11 = &(local_120->ClassInputPtr).GetObject;
  while( true ) {
    pFVar4 = local_100;
    if (local_118 != (uint)uVar9) {
      `TCheckedPointerIterator<Metasound::Frontend::FBaseNodeController::FInputControllerParams,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if ((FInputControllerParams *)(pTVar11 + -2) == pFVar4) break;
    pcVar2 = *(code **)(this->_padding_ + 0x1b0);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b8[0] = *(longlong *)((longlong)(pTVar11 + -1) + 0x20);
    local_a8 = *(longlong *)pTVar11;
    local_80 = 0;
    local_110.Object = pIVar13;
    local_110.SharedReferenceCount.ReferenceController = pTVar1;
    if (local_a8 != 0) {
      puVar7 = (undefined8 *)&pTVar11->field_0x10;
      if (*(undefined8 **)&pTVar11->field_0x28 != (undefined8 *)0x0) {
        puVar7 = *(undefined8 **)&pTVar11->field_0x28;
      }
      (**(code **)*puVar7)(puVar7,local_98);
    }
    local_78[0] = *(longlong *)((longlong)(pTVar11 + -2) + 0x10);
    local_68 = *(longlong *)((longlong)(pTVar11 + -2) + 0x20);
    local_40 = 0;
    if (local_68 != 0) {
      plVar10 = (longlong *)(pTVar11 + -1);
      if (*(longlong **)((longlong)(pTVar11 + -1) + 0x18) != (longlong *)0x0) {
        plVar10 = *(longlong **)((longlong)(pTVar11 + -1) + 0x18);
      }
      (**(code **)*plVar10)(plVar10,local_58);
    }
    local_d8 = (((FInputControllerParams *)(pTVar11 + -2))->VertexID).A;
    uStack_d4 = *(undefined4 *)((longlong)(pTVar11 + -2) + 4);
    uStack_d0 = (undefined4)*(longlong *)((longlong)(pTVar11 + -2) + 8);
    uStack_cc = *(undefined4 *)((longlong)(pTVar11 + -2) + 0xc);
    puVar7 = (undefined8 *)(*pcVar2)(this,local_c8,&local_d8,local_78,local_b8,&local_110);
    pTVar3 = (TReferenceControllerBase<1> *)puVar7[1];
    plVar10 = (longlong *)*puVar7;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar12 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar12 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
    cVar5 = (**(code **)(*plVar10 + 0x18))(plVar10);
    if (cVar5 != '\0') {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
      }
      local_f0 = plVar10;
      local_e8 = pTVar3;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar2 = *(code **)param_1;
      plVar10 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar10 = (longlong *)&param_1->field_0x10;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar2)(uVar8,&local_f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    uVar9 = (ulonglong)local_124;
    pTVar11 = pTVar11 + 3;
    pIVar13 = local_f8;
  }
  DestructItems<Metasound::Frontend::FBaseNodeController::FInputControllerParams,int>
            (local_120,local_118);
  if (local_120 != (FInputControllerParams *)0x0) {
    FMemory::Free(local_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// IterateConstOutputs @ 14ae7b1c0

void __thiscall
Metasound::Frontend::FBaseNodeController::IterateConstOutputs
          (FBaseNodeController *this,
          TUniqueFunction<void___cdecl(TSharedRef<Metasound::Frontend::IOutputController_const_,1>)>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FOutputControllerParams *pFVar4;
  char cVar5;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  TFunction<FMetasoundFrontendClassOutput_const_*___cdecl(void)> *pTVar11;
  atomic<int> *paVar12;
  INodeController *pIVar13;
  undefined1 local_128 [4];
  uint local_124;
  FOutputControllerParams *local_120;
  uint local_118;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> local_110;
  FOutputControllerParams *local_100;
  INodeController *local_f8;
  longlong *local_f0;
  TReferenceControllerBase<1> *local_e8;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [8];
  TReferenceControllerBase<1> *local_c0;
  longlong local_b8 [2];
  longlong local_a8;
  undefined1 local_98 [24];
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68;
  undefined1 local_58 [24];
  undefined8 local_40;
  
  pTVar6 = TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
                     ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
                      &local_110);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pIVar13 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8 = pIVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.SharedReferenceCount.ReferenceController);
  (**(code **)(this->_padding_ + 0x188))(this,&local_120);
  uVar9 = (ulonglong)(int)local_118;
  local_124 = local_118;
  local_100 = local_120 + uVar9;
  pTVar11 = &(local_120->ClassOutputPtr).GetObject;
  while( true ) {
    pFVar4 = local_100;
    if (local_118 != (uint)uVar9) {
      `TCheckedPointerIterator<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if ((FOutputControllerParams *)(pTVar11 + -2) == pFVar4) break;
    pcVar2 = *(code **)(this->_padding_ + 0x1b8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b8[0] = *(longlong *)((longlong)(pTVar11 + -1) + 0x20);
    local_a8 = *(longlong *)pTVar11;
    local_80 = 0;
    local_110.Object = pIVar13;
    local_110.SharedReferenceCount.ReferenceController = pTVar1;
    if (local_a8 != 0) {
      puVar7 = (undefined8 *)&pTVar11->field_0x10;
      if (*(undefined8 **)&pTVar11->field_0x28 != (undefined8 *)0x0) {
        puVar7 = *(undefined8 **)&pTVar11->field_0x28;
      }
      (**(code **)*puVar7)(puVar7,local_98);
    }
    local_78[0] = *(longlong *)((longlong)(pTVar11 + -2) + 0x10);
    local_68 = *(longlong *)((longlong)(pTVar11 + -2) + 0x20);
    local_40 = 0;
    if (local_68 != 0) {
      plVar10 = (longlong *)(pTVar11 + -1);
      if (*(longlong **)((longlong)(pTVar11 + -1) + 0x18) != (longlong *)0x0) {
        plVar10 = *(longlong **)((longlong)(pTVar11 + -1) + 0x18);
      }
      (**(code **)*plVar10)(plVar10,local_58);
    }
    local_d8 = (((FOutputControllerParams *)(pTVar11 + -2))->VertexID).A;
    uStack_d4 = *(undefined4 *)((longlong)(pTVar11 + -2) + 4);
    uStack_d0 = (undefined4)*(longlong *)((longlong)(pTVar11 + -2) + 8);
    uStack_cc = *(undefined4 *)((longlong)(pTVar11 + -2) + 0xc);
    puVar7 = (undefined8 *)(*pcVar2)(this,local_c8,&local_d8,local_78,local_b8,&local_110);
    pTVar3 = (TReferenceControllerBase<1> *)puVar7[1];
    plVar10 = (longlong *)*puVar7;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar12 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar12 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
    cVar5 = (**(code **)(*plVar10 + 0x18))(plVar10);
    if (cVar5 != '\0') {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
      }
      local_f0 = plVar10;
      local_e8 = pTVar3;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar2 = *(code **)param_1;
      plVar10 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar10 = (longlong *)&param_1->field_0x10;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar2)(uVar8,&local_f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    uVar9 = (ulonglong)local_124;
    pTVar11 = pTVar11 + 3;
    pIVar13 = local_f8;
  }
  DestructItems<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,int>
            (local_120,local_118);
  if (local_120 != (FOutputControllerParams *)0x0) {
    FMemory::Free(local_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// IterateInputs @ 14ae7b410

void __thiscall
Metasound::Frontend::FBaseNodeController::IterateInputs
          (FBaseNodeController *this,
          TUniqueFunction<void___cdecl(TSharedRef<Metasound::Frontend::IInputController,1>)>
          *param_1)

{
  FInputControllerParams *pFVar1;
  code *pcVar2;
  int iVar3;
  FInputControllerParams *pFVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  TFunction<FMetasoundFrontendClassInput_const_*___cdecl(void)> *pTVar14;
  bool bVar15;
  undefined1 local_118 [4];
  uint local_114;
  FInputControllerParams *local_110;
  uint local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  FInputControllerParams *local_f0;
  longlong *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  longlong *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8 [2];
  longlong local_a8;
  undefined1 local_98 [24];
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68;
  undefined1 local_58 [24];
  undefined8 local_40;
  
  (**(code **)(this->_padding_ + 0x180))(this,&local_110);
  uVar9 = (ulonglong)(int)local_108;
  local_114 = local_108;
  pTVar14 = &(local_110->ClassInputPtr).GetObject;
  local_f0 = local_110 + uVar9;
  do {
    pFVar4 = local_f0;
    if (local_108 != (uint)uVar9) {
      local_118[0] = 0;
      `TCheckedPointerIterator<Metasound::Frontend::FBaseNodeController::FInputControllerParams,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    puVar10 = (undefined8 *)0x0;
    pFVar1 = (FInputControllerParams *)(pTVar14 + -2);
    if (pFVar1 == pFVar4) {
      DestructItems<Metasound::Frontend::FBaseNodeController::FInputControllerParams,int>
                (local_110,local_108);
      if (local_110 != (FInputControllerParams *)0x0) {
        FMemory::Free(local_110);
      }
      if (*(longlong *)param_1 != 0) {
        plVar11 = (longlong *)&param_1->field_0x10;
        if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
          plVar11 = *(longlong **)&param_1->field_0x28;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      return;
    }
    puVar7 = (undefined8 *)this->_padding_;
    pcVar2 = *(code **)(this->_padding_ + 0x1b0);
    puVar12 = puVar7;
    puVar13 = puVar10;
    if (puVar7 != (undefined8 *)0x0) {
      iVar3 = *(int *)(puVar7 + 1);
      do {
        puVar12 = puVar10;
        if (iVar3 == 0) goto LAB_14ae7b4d3;
        LOCK();
        iVar6 = *(int *)(puVar7 + 1);
        bVar15 = iVar3 == iVar6;
        if (bVar15) {
          *(int *)(puVar7 + 1) = iVar3 + 1;
          iVar6 = iVar3;
        }
        UNLOCK();
        iVar3 = iVar6;
      } while (!bVar15);
      puVar12 = puVar7;
      puVar13 = (undefined8 *)this->_padding_;
    }
LAB_14ae7b4d3:
    puVar7 = puVar13 + 1;
    if (puVar13 == (undefined8 *)0x0) {
      puVar7 = puVar10;
    }
    if ((puVar7 != &this->_padding_) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar15)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((puVar13 == (undefined8 *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar15)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_100 = puVar13;
    local_f8 = puVar12;
    if ((puVar13 == (undefined8 *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar15)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_b8[0] = *(longlong *)((longlong)(pTVar14 + -1) + 0x20);
    local_a8 = *(longlong *)pTVar14;
    local_80 = 0;
    if (local_a8 != 0) {
      puVar10 = (undefined8 *)&pTVar14->field_0x10;
      if (*(undefined8 **)&pTVar14->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&pTVar14->field_0x28;
      }
      (**(code **)*puVar10)(puVar10,local_98);
    }
    local_78[0] = *(longlong *)((longlong)(pTVar14 + -2) + 0x10);
    local_68 = *(longlong *)((longlong)(pTVar14 + -2) + 0x20);
    local_40 = 0;
    if (local_68 != 0) {
      plVar11 = (longlong *)(pTVar14 + -1);
      if (*(longlong **)((longlong)(pTVar14 + -1) + 0x18) != (longlong *)0x0) {
        plVar11 = *(longlong **)((longlong)(pTVar14 + -1) + 0x18);
      }
      (**(code **)*plVar11)(plVar11,local_58);
    }
    local_c8._0_4_ = (pFVar1->VertexID).A;
    local_c8._4_4_ = (pFVar1->VertexID).B;
    lStack_c0 = *(longlong *)((longlong)(pTVar14 + -2) + 8);
    (*pcVar2)(this,&local_e8,&local_c8,local_78,local_b8,&local_100);
    cVar5 = (**(code **)(*local_e8 + 0x18))();
    if (cVar5 != '\0') {
      local_d8 = local_e8;
      pTStack_d0 = pTStack_e0;
      if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_e0->SharedReferenceCount = (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
        UNLOCK();
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar2 = *(code **)param_1;
      plVar11 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar11 = (longlong *)&param_1->field_0x10;
      }
      uVar8 = (**(code **)(*plVar11 + 8))();
      (*pcVar2)(uVar8,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_d0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e0);
    uVar9 = (ulonglong)local_114;
    pTVar14 = pTVar14 + 3;
  } while( true );
}

// IterateOutputs @ 14ae7b710

void __thiscall
Metasound::Frontend::FBaseNodeController::IterateOutputs
          (FBaseNodeController *this,
          TUniqueFunction<void___cdecl(TSharedRef<Metasound::Frontend::IOutputController,1>)>
          *param_1)

{
  FOutputControllerParams *pFVar1;
  code *pcVar2;
  int iVar3;
  FOutputControllerParams *pFVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  TFunction<FMetasoundFrontendClassOutput_const_*___cdecl(void)> *pTVar14;
  bool bVar15;
  undefined1 local_118 [4];
  uint local_114;
  FOutputControllerParams *local_110;
  uint local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  FOutputControllerParams *local_f0;
  longlong *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  longlong *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8 [2];
  longlong local_a8;
  undefined1 local_98 [24];
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68;
  undefined1 local_58 [24];
  undefined8 local_40;
  
  (**(code **)(this->_padding_ + 0x188))(this,&local_110);
  uVar9 = (ulonglong)(int)local_108;
  local_114 = local_108;
  pTVar14 = &(local_110->ClassOutputPtr).GetObject;
  local_f0 = local_110 + uVar9;
  do {
    pFVar4 = local_f0;
    if (local_108 != (uint)uVar9) {
      local_118[0] = 0;
      `TCheckedPointerIterator<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    puVar10 = (undefined8 *)0x0;
    pFVar1 = (FOutputControllerParams *)(pTVar14 + -2);
    if (pFVar1 == pFVar4) {
      DestructItems<Metasound::Frontend::FBaseNodeController::FOutputControllerParams,int>
                (local_110,local_108);
      if (local_110 != (FOutputControllerParams *)0x0) {
        FMemory::Free(local_110);
      }
      if (*(longlong *)param_1 != 0) {
        plVar11 = (longlong *)&param_1->field_0x10;
        if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
          plVar11 = *(longlong **)&param_1->field_0x28;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      return;
    }
    puVar7 = (undefined8 *)this->_padding_;
    pcVar2 = *(code **)(this->_padding_ + 0x1b8);
    puVar12 = puVar7;
    puVar13 = puVar10;
    if (puVar7 != (undefined8 *)0x0) {
      iVar3 = *(int *)(puVar7 + 1);
      do {
        puVar12 = puVar10;
        if (iVar3 == 0) goto LAB_14ae7b7d3;
        LOCK();
        iVar6 = *(int *)(puVar7 + 1);
        bVar15 = iVar3 == iVar6;
        if (bVar15) {
          *(int *)(puVar7 + 1) = iVar3 + 1;
          iVar6 = iVar3;
        }
        UNLOCK();
        iVar3 = iVar6;
      } while (!bVar15);
      puVar12 = puVar7;
      puVar13 = (undefined8 *)this->_padding_;
    }
LAB_14ae7b7d3:
    puVar7 = puVar13 + 1;
    if (puVar13 == (undefined8 *)0x0) {
      puVar7 = puVar10;
    }
    if ((puVar7 != &this->_padding_) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar15)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((puVar13 == (undefined8 *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar15)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_100 = puVar13;
    local_f8 = puVar12;
    if ((puVar13 == (undefined8 *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar15)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_b8[0] = *(longlong *)((longlong)(pTVar14 + -1) + 0x20);
    local_a8 = *(longlong *)pTVar14;
    local_80 = 0;
    if (local_a8 != 0) {
      puVar10 = (undefined8 *)&pTVar14->field_0x10;
      if (*(undefined8 **)&pTVar14->field_0x28 != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)&pTVar14->field_0x28;
      }
      (**(code **)*puVar10)(puVar10,local_98);
    }
    local_78[0] = *(longlong *)((longlong)(pTVar14 + -2) + 0x10);
    local_68 = *(longlong *)((longlong)(pTVar14 + -2) + 0x20);
    local_40 = 0;
    if (local_68 != 0) {
      plVar11 = (longlong *)(pTVar14 + -1);
      if (*(longlong **)((longlong)(pTVar14 + -1) + 0x18) != (longlong *)0x0) {
        plVar11 = *(longlong **)((longlong)(pTVar14 + -1) + 0x18);
      }
      (**(code **)*plVar11)(plVar11,local_58);
    }
    local_c8._0_4_ = (pFVar1->VertexID).A;
    local_c8._4_4_ = (pFVar1->VertexID).B;
    lStack_c0 = *(longlong *)((longlong)(pTVar14 + -2) + 8);
    (*pcVar2)(this,&local_e8,&local_c8,local_78,local_b8,&local_100);
    cVar5 = (**(code **)(*local_e8 + 0x18))();
    if (cVar5 != '\0') {
      local_d8 = local_e8;
      pTStack_d0 = pTStack_e0;
      if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_e0->SharedReferenceCount = (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
        UNLOCK();
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar2 = *(code **)param_1;
      plVar11 = *(longlong **)&param_1->field_0x28;
      if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
        plVar11 = (longlong *)&param_1->field_0x10;
      }
      uVar8 = (**(code **)(*plVar11 + 8))();
      (*pcVar2)(uVar8,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_d0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e0);
    uVar9 = (ulonglong)local_114;
    pTVar14 = pTVar14 + 3;
  } while( true );
}

// RemoveInput @ 14ae87490

bool __thiscall
Metasound::Frontend::FBaseNodeController::RemoveInput(FBaseNodeController *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                     ,0x129,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// RemoveOutput @ 14ae874d0

bool __thiscall
Metasound::Frontend::FBaseNodeController::RemoveOutput(FBaseNodeController *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                     ,0x13d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// ReplaceWithVersion @ 14ae87f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FBaseNodeController::ReplaceWithVersion
          (FBaseNodeController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FMetasoundFrontendVersionNumber *param_1,
          TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  EMetasoundFrontendClassType EVar5;
  FName *pFVar6;
  FNodeClassRegistry *pFVar7;
  FNodeClassRegistry *pFVar8;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar9;
  FMetasoundFrontendVersionNumber *pFVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStackY_3b8 [32];
  INodeController *local_378;
  TReferenceControllerBase<1> *local_370;
  FMetasoundFrontendClass local_368;
  FString local_2d0;
  FString local_2c0;
  longlong *local_2b0;
  TReferenceControllerBase<1> *local_2a8;
  undefined1 local_2a0 [8];
  TReferenceControllerBase<1> *local_298;
  undefined1 local_290 [40];
  FName FStack_268;
  uint local_260;
  EMetasoundFrontendClassType local_258 [4];
  FName local_254;
  FName FStack_24c;
  FName local_244;
  FMetasoundFrontendVersionNumber local_23c;
  EMetasoundFrontendClassType local_230 [4];
  FName local_22c;
  FName FStack_224;
  FName local_21c;
  FMetasoundFrontendVersionNumber local_214;
  FString local_208;
  undefined1 local_1f8 [8];
  TReferenceControllerBase<1> *local_1f0;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  undefined1 local_1d8 [8];
  TReferenceControllerBase<1> *local_1d0;
  code *local_1c8 [2];
  undefined **local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a0;
  code *local_198 [2];
  undefined **local_188;
  undefined1 *local_180;
  undefined8 local_170;
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  void *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  void *local_108;
  undefined4 local_100;
  undefined1 local_f8 [32];
  void *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_b8;
  undefined4 local_b0;
  FGuid local_a8;
  undefined1 local_98 [16];
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  pFVar8 = (FNodeClassRegistry *)0x0;
  pFVar6 = (FName *)(**(code **)(this->_padding_ + 0x118))();
  local_290._0_8_ = *pFVar6;
  local_290._8_8_ = pFVar6[1];
  local_290._16_8_ = pFVar6[2];
  local_290._24_8_ = pFVar6[3];
  local_290._32_8_ = pFVar6[4];
  FStack_268 = pFVar6[5];
  local_260 = pFVar6[6].ComparisonIndex.Value;
  local_258[0] = FMetasoundFrontendClassMetadata::GetType
                           ((FMetasoundFrontendClassMetadata *)local_290);
  local_23c = *param_1;
  local_244.ComparisonIndex.Value = local_290._16_4_;
  local_244.Number = local_290._20_4_;
  local_254.ComparisonIndex.Value = local_290._0_4_;
  local_254.Number = local_290._4_4_;
  FStack_24c.ComparisonIndex.Value = local_290._8_4_;
  FStack_24c.Number = local_290._12_4_;
  pFVar7 = FNodeClassRegistry::LazySingleton;
  if (FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) {
    pFVar7 = ::operator_new(0x182b0);
    if (pFVar7 != (FNodeClassRegistry *)0x0) {
      pFVar8 = FNodeClassRegistry::FNodeClassRegistry(pFVar7);
    }
    pFVar7 = pFVar8;
    FNodeClassRegistry::LazySingleton = pFVar8;
    if ((pFVar8 == (FNodeClassRegistry *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("nullptr != Registry",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                           ,0x2f3,
                           L"The metasound node registry should always be available if the metasound plugin is loaded"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar1)();
      return pTVar9;
    }
  }
  local_368._padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  local_368.ID = FrontendInvalidID;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_368.Metadata);
  local_368.Interface.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Interface.Inputs.ArrayNum = 0;
  local_368.Interface.Inputs.ArrayMax = 0;
  local_368.Interface.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Interface.Outputs.ArrayNum = 0;
  local_368.Interface.Outputs.ArrayMax = 0;
  local_368.Interface.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Interface.Environment.ArrayNum = 0;
  local_368.Interface.Environment.ArrayMax = 0;
  local_368.Interface.ChangeID.A = 0;
  local_368.Interface.ChangeID.B = 0;
  local_368.Interface.ChangeID.C = 0;
  local_368.Interface.ChangeID.D = 0;
  cVar4 = (**(code **)(*(longlong *)pFVar7 + 0x68))(pFVar7,local_258,&local_368);
  if (cVar4 == '\0') {
    FMetasoundFrontendClassName::ToString((FMetasoundFrontendClassName *)local_290,&local_2c0);
    FMetasoundFrontendVersionNumber::ToString(param_1,&local_2d0);
    if (1 < (byte)LogMetaSound._0_1_) {
      pFVar10 = FMetasoundFrontendClassMetadata::GetVersion
                          ((FMetasoundFrontendClassMetadata *)local_290);
      FMetasoundFrontendVersionNumber::ToString(pFVar10,&local_208);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
    }
    TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
              ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
               __return_storage_ptr__);
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
  }
  else {
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)local_168);
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)(local_168 + 0x10));
    local_148._0_8_ = (FScriptContainerElement *)0x0;
    local_148._8_8_ = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_11c = 0x80;
    local_118 = 0xffffffff;
    local_114 = 0;
    local_108 = (void *)0x0;
    local_100 = 0;
    local_f8._0_8_ = (FScriptContainerElement *)0x0;
    local_f8._8_8_ = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    local_cc = 0x80;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a8.A = 0;
    local_a8.B = 0;
    local_a8.C = 0;
    local_a8.D = 0;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
    plVar15 = *(longlong **)&(this->NodePtr).field_0x38;
    pcVar1 = *(code **)&(this->NodePtr).field_0x10;
    plVar13 = (longlong *)&(this->NodePtr).field_0x20;
    if (plVar15 != (longlong *)0x0) {
      plVar13 = plVar15;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    puVar12 = (undefined8 *)(*pcVar1)(uVar11);
    *(undefined8 **)&this->NodePtr = puVar12;
    if (puVar12 != (undefined8 *)0x0) {
      FInstancedStruct::operator=((FInstancedStruct *)local_168,(FInstancedStruct *)(puVar12 + 0xd))
      ;
      FInstancedStruct::operator=
                ((FInstancedStruct *)(local_168 + 0x10),(FInstancedStruct *)(puVar12 + 0xf));
      local_a8._0_8_ = *puVar12;
      local_a8._8_8_ = puVar12[1];
      local_1a0 = 0;
      local_1b8 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::`2'::<lambda_1>,1,0>
                   ::_vftable_;
      local_1b0 = local_148;
      local_1c8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_1>,void,TSharedRef<Metasound::Frontend::IInputController,1>_>
                     ::Call;
      (**(code **)(this->_padding_ + 0x38))(this,local_1c8);
      local_170 = 0;
      local_188 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::`2'::<lambda_2>,1,0>
                   ::_vftable_;
      local_180 = local_f8;
      local_198[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`Metasound::Frontend::FBaseNodeController::CaptureNodeInstanceReplacementData'::__l2::<lambda_2>,void,TSharedRef<Metasound::Frontend::IOutputController,1>_>
                     ::Call;
      (**(code **)(this->_padding_ + 0x50))(this,local_198);
    }
    puVar12 = (undefined8 *)(**(code **)(this->_padding_ + 0x178))(this,local_2a0);
    cVar4 = (**(code **)(*(longlong *)*puVar12 + 0x218))((longlong *)*puVar12,this);
    if (cVar4 == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3501407040784301307>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                         ,0x305,"GetOwningGraph()->RemoveNode(*this)");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar9 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar1)();
        return pTVar9;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_298)
      ;
      TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
                ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
                 __return_storage_ptr__);
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_298)
      ;
      local_230[0] = FMetasoundFrontendClassMetadata::GetType(&local_368.Metadata);
      local_22c = local_368.Metadata.ClassName.Namespace;
      FStack_224 = local_368.Metadata.ClassName.Name;
      local_21c = local_368.Metadata.ClassName.Variant;
      pFVar10 = FMetasoundFrontendClassMetadata::GetVersion(&local_368.Metadata);
      local_214 = *pFVar10;
      EVar5 = FMetasoundFrontendClassMetadata::GetType(&local_368.Metadata);
      if ((EVar5 == Graph) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNodeMetadata.GetType() != EMetasoundFrontendClassType::Graph",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                             ,0xa9,
                             L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar9 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar1)();
        return pTVar9;
      }
      puVar12 = (undefined8 *)(**(code **)(this->_padding_ + 0x178))(this,local_1f8);
      (**(code **)(*(longlong *)*puVar12 + 0x230))((longlong *)*puVar12,&local_2b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1f0)
      ;
      plVar13 = (longlong *)(**(code **)(*local_2b0 + 0x98))(local_2b0,local_98,local_230,1);
      UE::Core::Private::Function::CheckCallable((void *)plVar13[2]);
      pcVar1 = (code *)plVar13[2];
      plVar15 = plVar13 + 4;
      if ((longlong *)plVar13[7] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar13[7];
      }
      uVar11 = (**(code **)(*plVar15 + 8))(plVar15);
      lVar14 = (*pcVar1)(uVar11);
      *plVar13 = lVar14;
      if ((lVar14 == 0) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3501407040784301295>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                             ,0x311,
                             "Document->FindOrAddClass(RegistryKey, bRefreshFromRegistry).Get() != nullptr"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar9 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar1)();
        return pTVar9;
      }
      if (local_88 != 0) {
        plVar15 = local_78;
        if (local_60 != (longlong *)0x0) {
          plVar15 = local_60;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
      puVar12 = (undefined8 *)(**(code **)(this->_padding_ + 0x178))(this,local_1d8);
      local_1e8 = local_a8.A;
      uStack_1e4 = local_a8.B;
      uStack_1e0 = local_a8.C;
      uStack_1dc = local_a8.D;
      (**(code **)(*(longlong *)*puVar12 + 0x1f0))
                ((longlong *)*puVar12,&local_378,&local_368.Metadata,&local_1e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d0)
      ;
      cVar4 = (**(code **)(*(longlong *)local_378 + 0x18))();
      if (cVar4 == '\0') {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3501407040784301292>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                           ,0x314,"ReplacementNode->IsValid()");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar9 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar1)();
          return pTVar9;
        }
        TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
                  ((TSharedFromThis<Metasound::Frontend::INodeController,1> *)&this->_padding_,
                   __return_storage_ptr__);
      }
      else {
        ApplyNodeInstanceReplacementData
                  (this,&local_368,local_378,(FNodeInstanceReplacementData *)local_168,param_2,
                   param_3);
        __return_storage_ptr__->Object = local_378;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_370;
        if (local_370 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_370->SharedReferenceCount = (atomic<int>)((int)local_370->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_370)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2a8)
      ;
    }
    local_b0 = 0;
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FOutputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_f8,0,local_f8._8_4_);
    iVar2 = SUB84(local_f8._8_8_,4);
    local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)local_f8,0,(int *)(local_f8 + 0xc));
    }
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_d0 = 0;
    if (0x80 < local_cc) {
      local_cc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10),0);
    }
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    if ((FScriptContainerElement *)local_f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_f8._0_8_);
    }
    local_100 = 0;
    if (local_108 != (void *)0x0) {
      FMemory::Free(local_108);
    }
    TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,Metasound::Frontend::FBaseNodeController::FInputConnectionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_148,0,local_148._8_4_);
    iVar2 = SUB84(local_148._8_8_,4);
    local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x98,8,0,(ForAnyElementType *)local_148,0,(int *)(local_148 + 0xc));
    }
    local_118 = 0xffffffff;
    local_114 = 0;
    local_120 = 0;
    if (0x80 < local_11c) {
      local_11c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),0);
    }
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._0_8_);
    }
    FInstancedStruct::Reset((FInstancedStruct *)(local_168 + 0x10));
    FInstancedStruct::Reset((FInstancedStruct *)local_168);
  }
  if (local_368.Interface.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Interface.Environment.AllocatorInstance.Data);
  }
  if (local_368.Interface.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Interface.Outputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_368.Interface.Inputs.AllocatorInstance.Data,
             local_368.Interface.Inputs.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_368.Interface.Inputs.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_368.Interface.Inputs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetClassInterfaceOverride @ 14ae88ae0

void __thiscall
Metasound::Frontend::FBaseNodeController::SetClassInterfaceOverride
          (FBaseNodeController *this,TInstancedStruct<FMetasoundFrontendClassInterface> *param_1)

{
  TInstancedStruct<FMetasoundFrontendClassInterface> *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  FMetasoundFrontendNode *pFVar5;
  FMetasoundFrontendClass *this_01;
  FMetasoundFrontendClassInterface *pFVar6;
  longlong *plVar7;
  FBaseNodeController *local_res8;
  FBaseNodeController *local_res10;
  code *local_38;
  FBaseNodeController **local_30;
  code *local_28;
  FBaseNodeController **local_20;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar1 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar2 = *(code **)&(this->NodePtr).field_0x10;
  plVar7 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar1 != (longlong *)0x0) {
    plVar7 = plVar1;
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  pFVar5 = (FMetasoundFrontendNode *)(*pcVar2)(uVar4);
  *(FMetasoundFrontendNode **)&this->NodePtr = pFVar5;
  if (pFVar5 != (FMetasoundFrontendNode *)0x0) {
    this_00 = &pFVar5->ClassInterfaceOverride;
    if ((((pFVar5->ClassInterfaceOverride).InstancedStruct.StructMemory == (uchar *)0x0) ||
        ((this_00->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) &&
       (((param_1->InstancedStruct).StructMemory == (uchar *)0x0 ||
        ((param_1->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)))) {
      FInstancedStruct::operator=(&this_00->InstancedStruct,&param_1->InstancedStruct);
    }
    else {
      FInstancedStruct::operator=(&this_00->InstancedStruct,&param_1->InstancedStruct);
      UE::Core::Private::Function::CheckCallable(*(void **)&(this->ClassPtr).field_0x10);
      pcVar2 = *(code **)&(this->ClassPtr).field_0x10;
      plVar1 = *(longlong **)&(this->ClassPtr).field_0x38;
      plVar7 = (longlong *)&(this->ClassPtr).field_0x20;
      if (plVar1 != (longlong *)0x0) {
        plVar7 = plVar1;
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      this_01 = (FMetasoundFrontendClass *)(*pcVar2)(uVar4);
      *(FMetasoundFrontendClass **)&this->ClassPtr = this_01;
      if (this_01 == (FMetasoundFrontendClass *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3501407040784301073>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                           ,0x3ef,"Class");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        local_30 = &local_res8;
        local_38 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Metasound::Frontend::FBaseNodeController::SetClassInterfaceOverride'::__l11::<lambda_2>,void,FMetasoundFrontendVertex_const_&>
                   ::Call;
        local_20 = &local_res10;
        local_28 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Metasound::Frontend::FBaseNodeController::SetClassInterfaceOverride'::__l11::<lambda_1>,void,FMetasoundFrontendVertex_const_&>
                   ::Call;
        local_res8 = this;
        local_res10 = this;
        pFVar6 = FMetasoundFrontendClass::GetInterfaceForNode(this_01,pFVar5);
        FMetasoundFrontendNodeInterface::Update
                  (&pFVar5->Interface,pFVar6,
                   (TFunctionRef<void___cdecl(FMetasoundFrontendVertex_const_&)> *)&local_28,
                   (TFunctionRef<void___cdecl(FMetasoundFrontendVertex_const_&)> *)&local_38);
      }
    }
  }
  FInstancedStruct::Reset(&param_1->InstancedStruct);
  return;
}

// SetInputLiteral @ 14ae88c40

void __thiscall
Metasound::Frontend::FBaseNodeController::SetInputLiteral
          (FBaseNodeController *this,FMetasoundFrontendVertexLiteral *param_1)

{
  ForAnyElementType *pFVar1;
  FMetasoundFrontendClassInput *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  EMetasoundFrontendLiteralType EVar8;
  EMetasoundFrontendLiteralType EVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  FMetasoundFrontendVertex *pFVar13;
  FMetasoundFrontendClassInterface *pFVar14;
  FMetasoundFrontendLiteral *this_00;
  IDataTypeRegistry *pIVar15;
  longlong *plVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  FMetasoundFrontendClassInput *this_01;
  undefined1 local_res8 [8];
  undefined8 local_248;
  FText local_240;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined2 local_21c;
  undefined1 local_21a;
  undefined8 local_218;
  undefined2 local_210;
  undefined8 local_20c;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  FGuid local_1e8;
  FMetasoundFrontendLiteral local_1d8;
  FGuid local_178;
  FMetasoundFrontendLiteral local_168;
  FGuid local_110;
  FMetasoundFrontendLiteral local_100;
  <lambda_1> local_a8;
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar3 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar4 = *(code **)&(this->NodePtr).field_0x10;
  plVar16 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar3 != (longlong *)0x0) {
    plVar16 = plVar3;
  }
  uVar11 = (**(code **)(*plVar16 + 8))();
  lVar12 = (*pcVar4)(uVar11);
  *(longlong *)&this->NodePtr = lVar12;
  if (lVar12 == 0) {
    return;
  }
  local_1e8.A = (param_1->VertexID).A;
  local_1e8.B = (param_1->VertexID).B;
  local_1e8.C = (param_1->VertexID).C;
  local_1e8.D = (param_1->VertexID).D;
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_1d8,&param_1->Value);
  local_110.A = local_1e8.A;
  local_110.B = local_1e8.B;
  local_110.C = local_1e8.C;
  local_110.D = local_1e8.D;
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_100,&local_1d8);
  local_178.A = local_110.A;
  local_178.B = local_110.B;
  local_178.C = local_110.C;
  local_178.D = local_110.D;
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_168,&local_100);
  local_a8.InVertexLiteral.VertexID.A = local_178.A;
  local_a8.InVertexLiteral.VertexID.B = local_178.B;
  local_a8.InVertexLiteral.VertexID.C = local_178.C;
  local_a8.InVertexLiteral.VertexID.D = local_178.D;
  FMetasoundFrontendLiteral::FMetasoundFrontendLiteral(&local_a8.InVertexLiteral.Value,&local_168);
  pFVar13 = TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_Metasound::Frontend::FBaseNodeController::SetInputLiteral_::__l5::<lambda_1>_>
                      ((TArray<FMetasoundFrontendVertex,TSizedDefaultAllocator<32>_> *)
                       (lVar12 + 0x28),&local_a8);
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&local_168);
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&local_100);
  if (pFVar13 == (FMetasoundFrontendVertex *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3501407040784301973>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                       ,0x6b,"NodeInterface.Inputs.ContainsByPredicate(IsInputVertex)");
    if (bVar5) {
code_r0x00014ae88f7a:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar10 = *(int *)(lVar12 + 0x60);
    pFVar1 = (ForAnyElementType *)(lVar12 + 0x58);
    pFVar17 = pFVar1->Data;
    pFVar18 = pFVar17 + (longlong)iVar10 * 0x68;
    while( true ) {
      if (*(int *)(lVar12 + 0x60) != iVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendVertexLiteral,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar17 == pFVar18) {
        if ((((FMetasoundFrontendVertexLiteral *)pFVar1->Data <= param_1) &&
            (param_1 < (FMetasoundFrontendVertexLiteral *)pFVar1->Data + *(int *)(lVar12 + 100))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = *(int *)(lVar12 + 0x60);
        if (iVar10 == *(int *)(lVar12 + 100)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x868,pFVar1,(int *)(lVar12 + 100));
        }
        *(int *)(lVar12 + 0x60) = iVar10 + 1;
        uVar11 = *(undefined8 *)&(param_1->VertexID).C;
        pFVar18 = pFVar1->Data;
        pFVar17 = pFVar18 + (longlong)iVar10 * 0x68;
        *(undefined8 *)pFVar17 = *(undefined8 *)&param_1->VertexID;
        *(undefined8 *)(pFVar17 + 8) = uVar11;
        FMetasoundFrontendLiteral::FMetasoundFrontendLiteral
                  ((FMetasoundFrontendLiteral *)(pFVar18 + (longlong)iVar10 * 0x68 + 0x10),
                   &param_1->Value);
        goto LAB_14ae89038;
      }
      if (((*(uint *)(pFVar17 + 0xc) == (param_1->VertexID).D &&
           *(uint *)(pFVar17 + 8) == (param_1->VertexID).C) &&
          *(uint *)(pFVar17 + 4) == (param_1->VertexID).B) &&
          (param_1->VertexID).A == *(uint *)pFVar17) break;
      pFVar17 = pFVar17 + 0x68;
    }
    local_1f8 = *(undefined8 *)pFVar17;
    uStack_1f0 = *(undefined8 *)(pFVar17 + 8);
    bVar5 = false;
    pFVar14 = GetClassInterfaceForNode(this);
    if (pFVar14 != (FMetasoundFrontendClassInterface *)0x0) {
      this_01 = (FMetasoundFrontendClassInput *)(pFVar14->Inputs).AllocatorInstance.Data;
      pFVar2 = this_01 + (pFVar14->Inputs).ArrayNum;
      if (this_01 != pFVar2) {
        do {
          if (((uStack_1f0._4_4_ == *(int *)((longlong)&this_01->_padding_ + 4) &&
               (int)uStack_1f0 == (int)this_01->_padding_) &&
              local_1f8._4_4_ == *(int *)((longlong)&this_01->_padding_ + 4)) &&
              (int)local_1f8 == (int)this_01->_padding_) goto LAB_14ae88e4b;
          this_01 = this_01 + 1;
        } while (this_01 != pFVar2);
      }
      this_01 = (FMetasoundFrontendClassInput *)0x0;
LAB_14ae88e4b:
      if (this_01 != (FMetasoundFrontendClassInput *)0x0) {
        this_00 = FMetasoundFrontendClassInput::FindConstDefaultChecked(this_01,&DefaultPageID);
        bVar6 = FMetasoundFrontendLiteral::IsEqual(this_00,&param_1->Value);
        bVar5 = false;
        local_248 = 0;
        FText::FText(&local_240);
        local_230 = 0xc;
        local_228 = 0;
        local_220 = 0;
        local_21c = 0;
        local_21a = 0;
        local_218 = 0;
        local_210 = 0;
        local_20c = 0;
        pIVar15 = IDataTypeRegistry::Get();
        (**(code **)((longlong)*pIVar15 + 0x20))(pIVar15,&this_01->_padding_,&local_248);
        EVar9 = (EMetasoundFrontendLiteralType)local_230;
        bVar7 = FMetasoundFrontendLiteral::IsEqual
                          (this_00,(FMetasoundFrontendLiteral *)(pFVar17 + 0x10));
        if ((bVar7) && (EVar8 = FMetasoundFrontendLiteral::GetType(&param_1->Value), EVar9 == EVar8)
           ) {
          bVar5 = true;
        }
        if (local_240.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_240.TextData.Reference + 0x10))();
        }
        if (bVar6) {
          local_1f8 = *(undefined8 *)pFVar17;
          uStack_1f0 = *(undefined8 *)(pFVar17 + 8);
          (**(code **)(this->_padding_ + 0x110))(this,&local_1f8);
          goto LAB_14ae89038;
        }
      }
    }
    EVar9 = FMetasoundFrontendLiteral::GetType((FMetasoundFrontendLiteral *)(pFVar17 + 0x10));
    EVar8 = FMetasoundFrontendLiteral::GetType(&param_1->Value);
    if ((EVar9 == EVar8) || (bVar5)) {
      uVar11 = *(undefined8 *)&(param_1->VertexID).C;
      *(undefined8 *)pFVar17 = *(undefined8 *)&param_1->VertexID;
      *(undefined8 *)(pFVar17 + 8) = uVar11;
      FMetasoundFrontendLiteral::operator=
                ((FMetasoundFrontendLiteral *)(pFVar17 + 0x10),&param_1->Value);
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3501407040784301928>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                         ,0x98,"bIsMatchingType || bSettingFromClassDefaultLiteralToMatchingType");
      if (bVar5) goto code_r0x00014ae88f7a;
    }
  }
LAB_14ae89038:
  FMetasoundFrontendLiteral::~FMetasoundFrontendLiteral(&local_1d8);
  return;
}

// SetNodeConfiguration @ 14ae89200

void __thiscall
Metasound::Frontend::FBaseNodeController::SetNodeConfiguration
          (FBaseNodeController *this,TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *param_1)

{
  FInstancedStruct *this_00;
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  UScriptStruct *pUVar7;
  FMetasoundFrontendClass *pFVar8;
  TInstancedStruct<FMetasoundFrontendClassInterface> *pTVar9;
  longlong *plVar10;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res8;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_res10;
  TObjectPtr<UScriptStruct_const_>_u_0 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [16];
  
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->NodePtr).field_0x10);
  plVar2 = *(longlong **)&(this->NodePtr).field_0x38;
  pcVar3 = *(code **)&(this->NodePtr).field_0x10;
  plVar10 = (longlong *)&(this->NodePtr).field_0x20;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  uVar5 = (**(code **)(*plVar10 + 8))();
  lVar6 = (*pcVar3)(uVar5);
  *(longlong *)&this->NodePtr = lVar6;
  if (lVar6 == 0) goto LAB_14ae893ab;
  this_00 = (FInstancedStruct *)(lVar6 + 0x68);
  if (((*(longlong *)(lVar6 + 0x70) == 0) ||
      ((this_00->ScriptStruct).field0_0x0.DebugPtr == (UScriptStruct *)0x0)) &&
     (((param_1->InstancedStruct).StructMemory == (uchar *)0x0 ||
      ((param_1->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)))) {
    FInstancedStruct::operator=(this_00,&param_1->InstancedStruct);
    if (((*(longlong *)(lVar6 + 0x80) == 0) || (*(longlong *)(lVar6 + 0x78) == 0)) ||
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Node->ClassInterfaceOverride.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                           ,0x3d3,L""), !bVar4)) goto LAB_14ae893ab;
    goto code_r0x00014ae893aa;
  }
  FInstancedStruct::operator=(this_00,&param_1->InstancedStruct);
  plVar2 = *(longlong **)(lVar6 + 0x70);
  local_res8 = (TObjectPtr<UScriptStruct_const_>_u_0)(this_00->ScriptStruct).field0_0x0.DebugPtr;
  if ((plVar2 == (longlong *)0x0) || (local_res8.DebugPtr == (UScriptStruct *)0x0)) {
LAB_14ae89348:
    local_38.DebugPtr = (UScriptStruct *)0x0;
    uStack_30 = 0;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_38.ObjectPtr);
    SetClassInterfaceOverride
              (this,(TInstancedStruct<FMetasoundFrontendClassInterface> *)&local_38.ObjectPtr);
  }
  else {
    pUVar7 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
    if (local_res8.DebugPtr != pUVar7) {
      pUVar7 = FMetaSoundFrontendNodeConfiguration::StaticStruct();
      if (pUVar7 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar7->_padding_;
        if (((int)(local_res8.DebugPtr)->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)((local_res8.DebugPtr)->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) goto LAB_14ae892ef;
      }
      local_res10 = &local_res8;
      bVar4 = `UE::StructUtils::
              GetStructPtr<FMetaSoundFrontendNodeConfiguration,FMetaSoundFrontendNodeConfiguration>'
              ::__l7::<lambda_1>::operator()(&local_res10);
      if (!bVar4) goto LAB_14ae89348;
    }
LAB_14ae892ef:
    pFVar8 = TAccessPtr<FMetasoundFrontendClass_const_>::Get
                       ((TAccessPtr<FMetasoundFrontendClass_const_> *)&this->ClassPtr);
    if (pFVar8 == (FMetasoundFrontendClass *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3501407040784301117>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.cpp"
                         ,0x3c3,"Class");
      if (bVar4) {
code_r0x00014ae893aa:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      pTVar9 = (TInstancedStruct<FMetasoundFrontendClassInterface> *)
               (**(code **)(*plVar2 + 8))(plVar2,local_28,pFVar8);
      SetClassInterfaceOverride(this,pTVar9);
    }
  }
LAB_14ae893ab:
  FInstancedStruct::Reset(&param_1->InstancedStruct);
  return;
}

// SetNodeName @ 14ae893d0

void __thiscall
Metasound::Frontend::FBaseNodeController::SetNodeName(FBaseNodeController *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendNodeController.h"
                     ,0x4f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ShareAccess @ 14ae89a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FDocumentAccess * __thiscall
Metasound::Frontend::FBaseNodeController::ShareAccess
          (FBaseNodeController *this,FDocumentAccess *__return_storage_ptr__)

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
  *(undefined8 *)&__return_storage_ptr__->Node = *(undefined8 *)&this->NodePtr;
  local_58._0_8_ = *(undefined8 *)&(this->NodePtr).field_0x10;
  uStack_30 = (longlong *)0x0;
  if (local_58._0_8_ != 0) {
    puVar1 = *(undefined8 **)&(this->NodePtr).field_0x38;
    puVar10 = (undefined8 *)&(this->NodePtr).field_0x20;
    if (puVar1 != (undefined8 *)0x0) {
      puVar10 = puVar1;
    }
    (**(code **)*puVar10)(puVar10,local_58 + 0x10);
  }
  lVar4 = *(longlong *)&(__return_storage_ptr__->Node).field_0x10;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->Node).field_0x18;
  lVar6 = *(longlong *)&(__return_storage_ptr__->Node).field_0x20;
  lVar7 = *(longlong *)&(__return_storage_ptr__->Node).field_0x28;
  uVar2 = *(undefined8 *)&(__return_storage_ptr__->Node).field_0x30;
  plVar3 = *(longlong **)&(__return_storage_ptr__->Node).field_0x38;
  *(undefined8 *)&(__return_storage_ptr__->Node).field_0x10 = local_58._0_8_;
  *(undefined8 *)&(__return_storage_ptr__->Node).field_0x18 = local_58._8_8_;
  *(undefined4 *)&(__return_storage_ptr__->Node).field_0x20 = local_58._16_4_;
  *(undefined4 *)&(__return_storage_ptr__->Node).field_0x24 = local_58._20_4_;
  *(undefined4 *)&(__return_storage_ptr__->Node).field_0x28 = local_58._24_4_;
  *(undefined4 *)&(__return_storage_ptr__->Node).field_0x2c = local_58._28_4_;
  *(undefined4 *)&(__return_storage_ptr__->Node).field_0x30 = local_58._32_4_;
  *(undefined4 *)&(__return_storage_ptr__->Node).field_0x34 = local_58._36_4_;
  *(undefined4 *)&(__return_storage_ptr__->Node).field_0x38 = (undefined4)uStack_30;
  *(undefined4 *)&(__return_storage_ptr__->Node).field_0x3c = uStack_30._4_4_;
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
  FConstNodeAccessPtr::FConstNodeAccessPtr<FMetasoundFrontendNode>
            ((FConstNodeAccessPtr *)local_58,(TAccessPtr<FMetasoundFrontendNode> *)&this->NodePtr,
             Tag);
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
  FConstClassAccessPtr::operator=
            ((FConstClassAccessPtr *)&__return_storage_ptr__->_padding_,&this->ClassPtr);
  return __return_storage_ptr__;
}

// ShareAccess @ 14ae89c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConstDocumentAccess * __thiscall
Metasound::Frontend::FBaseNodeController::ShareAccess
          (FBaseNodeController *this,FConstDocumentAccess *__return_storage_ptr__)

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
  FConstNodeAccessPtr::FConstNodeAccessPtr<FMetasoundFrontendNode>
            ((FConstNodeAccessPtr *)local_58,(TAccessPtr<FMetasoundFrontendNode> *)&this->NodePtr,
             Tag);
  *(undefined8 *)&__return_storage_ptr__->ConstNode = local_58._0_8_;
  lVar7 = *(longlong *)&(__return_storage_ptr__->ConstNode).field_0x10;
  uVar8 = *(undefined8 *)&(__return_storage_ptr__->ConstNode).field_0x18;
  uVar1 = *(undefined4 *)&(__return_storage_ptr__->ConstNode).field_0x20;
  uVar2 = *(undefined4 *)&(__return_storage_ptr__->ConstNode).field_0x24;
  uVar3 = *(undefined4 *)&(__return_storage_ptr__->ConstNode).field_0x28;
  uVar4 = *(undefined4 *)&(__return_storage_ptr__->ConstNode).field_0x2c;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->ConstNode).field_0x30;
  plVar6 = *(longlong **)&(__return_storage_ptr__->ConstNode).field_0x38;
  *(undefined8 *)&(__return_storage_ptr__->ConstNode).field_0x10 = local_58._16_8_;
  *(undefined8 *)&(__return_storage_ptr__->ConstNode).field_0x18 = local_58._24_8_;
  *(undefined4 *)&(__return_storage_ptr__->ConstNode).field_0x20 = local_58._32_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstNode).field_0x24 = local_58._36_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstNode).field_0x28 = local_58._40_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstNode).field_0x2c = local_58._44_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstNode).field_0x30 = local_58._48_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstNode).field_0x34 = local_58._52_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstNode).field_0x38 = local_58._56_4_;
  *(undefined4 *)&(__return_storage_ptr__->ConstNode).field_0x3c = local_58._60_4_;
  local_58._32_4_ = uVar1;
  local_58._36_4_ = uVar2;
  local_58._40_4_ = uVar3;
  local_58._44_4_ = uVar4;
  local_58._48_8_ = uVar5;
  local_58._56_8_ = plVar6;
  local_58._16_8_ = lVar7;
  local_58._24_8_ = uVar8;
  if (lVar7 != 0) {
    plVar9 = (longlong *)(local_58 + 0x20);
    if (plVar6 != (longlong *)0x0) {
      plVar9 = plVar6;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  FConstClassAccessPtr::operator=(&__return_storage_ptr__->ConstClass,&this->ClassPtr);
  return __return_storage_ptr__;
}

// ShouldReplaceExistingNodeConfig @ 14ae8a910

bool __thiscall
Metasound::Frontend::FBaseNodeController::ShouldReplaceExistingNodeConfig
          (FBaseNodeController *this,TConstStructView<FMetaSoundFrontendNodeConfiguration> *param_1,
          TConstStructView<FMetaSoundFrontendNodeConfiguration> *param_2)

{
  return *(longlong *)param_1 != *(longlong *)param_2;
}

