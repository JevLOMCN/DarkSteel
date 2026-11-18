// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 6

// operator() @ 1464a0520

bool __thiscall
`FDependencyBuilder::BuildSelfDependencies'::__l2::<lambda_1>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FWeakObjectPtr *pFVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  undefined1 local_res10 [8];
  
  pUVar2 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UTickableTransformConstraint::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) && (pUVar2 != *(UObject **)this)) {
      pUVar6 = (UObject *)0x0;
      pUVar5 = pUVar6;
      if ((*(longlong *)&pUVar2[3].field_0x18 != 0) &&
         ((*(uint *)(*(longlong *)&pUVar2[3].field_0x18 + 8) >> 0x1e & 1) == 0)) {
        pFVar4 = (FWeakObjectPtr *)
                 (**(code **)(**(longlong **)&pUVar2[3].field_0x18 + 0x330))
                           (*(longlong **)&pUVar2[3].field_0x18,local_res10);
        pUVar5 = FWeakObjectPtr::Get(pFVar4);
      }
      if ((*(longlong *)&pUVar2[3].field_0x20 != 0) &&
         ((*(uint *)(*(longlong *)&pUVar2[3].field_0x20 + 8) >> 0x1e & 1) == 0)) {
        pFVar4 = (FWeakObjectPtr *)
                 (**(code **)(**(longlong **)&pUVar2[3].field_0x20 + 0x330))
                           (*(longlong **)&pUVar2[3].field_0x20,local_res10);
        pUVar6 = FWeakObjectPtr::Get(pFVar4);
      }
      if ((pUVar5 == *(UObject **)((longlong)this + 8)) &&
         (pUVar6 == *(UObject **)((longlong)this + 8))) {
        return true;
      }
      return false;
    }
  }
  return false;
}

// BuildAttachmentsDependencies @ 1464a5180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FDependencyBuilder::BuildAttachmentsDependencies
          (UWorld *param_1,UTickableTransformConstraint *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  char cVar7;
  <lambda_1> <Var8;
  FWeakObjectPtr *pFVar9;
  USceneComponent *this;
  UClass *pUVar10;
  TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
  *this_00;
  FTransformableInfo *pFVar11;
  undefined8 uVar12;
  UObject *pUVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  undefined1 auStackY_188 [32];
  undefined1 local_148;
  undefined1 local_147 [3];
  uint local_144;
  UTickableTransformConstraint *local_140;
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_138;
  undefined8 local_128;
  UWorld *local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_108;
  longlong local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  UTransformableHandle *local_d8;
  FName local_d0;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  code *local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_140 = param_2;
  local_120 = param_1;
  if (param_1 == (UWorld *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5431913450706043410>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\DependencyBuilder.cpp"
                       ,0x212,"InWorld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((param_2 != (UTickableTransformConstraint *)0x0) &&
          (cVar7 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2,1), cVar7 != '\0')) {
    local_d8 = (param_2->ChildTRSHandle).field0_0x0.DebugPtr;
    pFVar9 = (FWeakObjectPtr *)(**(code **)(local_d8->_padding_ + 0x330))(local_d8,&local_110);
    this = (USceneComponent *)FWeakObjectPtr::Get(pFVar9);
    if (this != (USceneComponent *)0x0) {
      pUVar10 = Z_Construct_UClass_USceneComponent_NoRegister();
      iVar1 = (int)pUVar10->_padding_;
      if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8)
          == &pUVar10->_padding_)) {
        local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.ArrayNum = 0;
        local_138.ArrayMax = 0;
        USceneComponent::GetChildrenComponents(this,true,&local_138);
        uVar14 = (ulonglong)local_138.ArrayNum;
        local_144 = local_138.ArrayNum;
        local_110 = local_138.AllocatorInstance.Data + uVar14 * 8;
        uVar17 = uVar14;
        FVar18.Data = local_138.AllocatorInstance.Data;
        while( true ) {
          pFVar5 = local_110;
          local_118 = FVar18.Data;
          if ((int)uVar14 != (int)uVar17) {
            `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_148);
          }
          if (FVar18.Data == pFVar5) break;
          lVar3 = *(longlong *)FVar18.Data;
          this_00 = (TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
                     *)FTransformableRegistry::Get();
          pUVar10 = *(UClass **)(lVar3 + 0x10);
          if ((pUVar10 != (UClass *)0x0) &&
             ((pFVar11 = TMapBase<UClass_*,FTransformableRegistry::FTransformableInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,FTransformableRegistry::FTransformableInfo,0>_>
                         ::Find(this_00,pUVar10), pFVar11 != (FTransformableInfo *)0x0 ||
              (pFVar11 = FTransformableRegistry::FindInfo
                                   ((FTransformableRegistry *)this_00,(UClass *)pUVar10->_padding_),
              pFVar11 != (FTransformableInfo *)0x0)))) {
            local_78 = *(code **)&pFVar11->GetHashFunc;
            local_50 = (longlong *)0x0;
            if (local_78 != (code *)0x0) {
              puVar15 = *(undefined8 **)&(pFVar11->GetHashFunc).field_0x28;
              if (puVar15 == (undefined8 *)0x0) {
                puVar15 = (undefined8 *)&(pFVar11->GetHashFunc).field_0x10;
              }
              (**(code **)*puVar15)(puVar15,local_68);
              if (local_78 != (code *)0x0) {
                local_128 = 0;
                local_f8 = lVar3;
                UE::Core::Private::Function::CheckCallable(local_78);
                pcVar4 = local_78;
                plVar16 = local_68;
                if (local_50 != (longlong *)0x0) {
                  plVar16 = local_50;
                }
                uVar12 = (**(code **)(*plVar16 + 8))();
                <Var8.ChildHash = (*pcVar4)(uVar12,&local_f8,&local_128);
                if (local_78 != (code *)0x0) {
                  plVar16 = local_68;
                  if (local_50 != (longlong *)0x0) {
                    plVar16 = local_50;
                  }
                  (**(code **)(*plVar16 + 0x10))();
                }
                if (<Var8.ChildHash != 0) {
                  ::Singleton.World = param_1;
                  FConstraintsManagerController::
                  GetConstraintsByPredicate<_FDependencyBuilder::BuildAttachmentsDependencies_::__l18::<lambda_1>_>
                            (&::Singleton,&local_108,<Var8,false);
                  iVar1 = local_108.ArrayNum;
                  uVar17 = (ulonglong)local_108.ArrayNum;
                  pFVar9 = (FWeakObjectPtr *)(local_108.AllocatorInstance.Data + uVar17 * 8);
                  FVar18.Data = local_108.AllocatorInstance.Data;
                  while( true ) {
                    if ((uint)uVar17 != iVar1) {
                      `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int,0>
                      ::operator!='::__l2::<lambda_1>::operator()(local_147);
                    }
                    if ((FWeakObjectPtr *)FVar18.Data == pFVar9) break;
                    ::Singleton.World = param_1;
                    pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
                    FConstraintsManagerController::SetConstraintsDependencies
                              (&::Singleton,(FGuid *)((longlong)&param_2->_padding_ + 4),
                               (FGuid *)&pUVar13[1].field_0x4);
                    pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)FVar18.Data);
                    if (pUVar13 != (UObject *)0x0) {
                      pUVar10 = UTickableTransformConstraint::StaticClass();
                      iVar2 = (int)pUVar10->_padding_;
                      if ((iVar2 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) +
                           (longlong)iVar2 * 8) == &pUVar10->_padding_)) {
                        lVar3 = *(longlong *)&pUVar13[3].field_0x20;
                        ::FString::FString(&local_88,AttachmentDependencyDesc);
                        if ((DependencyLocals::bDebugDependencies != false) &&
                           ((lVar3 != 0 && (2 < (byte)LogTemp._0_1_)))) {
                          local_f0.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18;
                          local_f0.Number = *(uint *)&pUVar13->field_0x1c;
                          ::FName::ToString(&local_f0,&local_98);
                          local_e8 = (FName)local_140->_padding_;
                          ::FName::ToString(&local_e8,&local_a8);
                          local_e0 = *(FName *)(lVar3 + 0x18);
                          ::FName::ToString(&local_e0,&local_b8);
                          local_d0 = (FName)local_d8->_padding_;
                          ::FName::ToString(&local_d0,&local_c8);
                          UE::Logging::Private::BasicLog<3>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogTemp);
                          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                          }
                          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                          }
                          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                          }
                          param_2 = local_140;
                          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_98.Data.AllocatorInstance.Data);
                            param_2 = local_140;
                          }
                        }
                        param_1 = local_120;
                        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_88.Data.AllocatorInstance.Data);
                          param_1 = local_120;
                        }
                      }
                    }
                    uVar17 = (ulonglong)(uint)local_108.ArrayNum;
                    FVar18.Data = FVar18.Data + 8;
                  }
                  if ((FWeakObjectPtr *)local_108.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
                    FMemory::Free(local_108.AllocatorInstance.Data);
                  }
                }
              }
            }
          }
          uVar14 = local_138._8_8_ & 0xffffffff;
          FVar18.Data = local_118 + 8;
          uVar17 = (ulonglong)local_144;
        }
        if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// BuildDependencies @ 1464a5650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FDependencyBuilder::BuildDependencies(UWorld *param_1,UTickableTransformConstraint *param_2)

{
  int iVar1;
  UTransformableHandle *pUVar2;
  UTransformableHandle *pUVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  UObject *pUVar10;
  FWeakObjectPtr *pFVar11;
  UObject *pUVar12;
  UTickableConstraint *pUVar13;
  UClass *pUVar14;
  FTickFunction *pFVar15;
  ulonglong uVar16;
  byte bVar17;
  ForAnyElementType this;
  undefined1 auStackY_178 [32];
  undefined1 local_147 [3];
  FWeakObjectPtr local_144;
  FWeakObjectPtr local_13c;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_130;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_120;
  FName local_110;
  UTickableTransformConstraint *local_108;
  UTransformableHandle *local_100;
  UTransformableHandle *local_f8;
  FName local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  FGuid local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 == (UWorld *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5431913450706043325>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\DependencyBuilder.cpp"
                       ,0x1bd,"InWorld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  else if ((param_2 != (UTickableTransformConstraint *)0x0) &&
          (cVar8 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2,1), cVar8 != '\0')) {
    if ((DependencyLocals::bDebugDependencies != false) && (2 < (byte)LogTemp._0_1_)) {
      local_110 = (FName)param_2->_padding_;
      ::FName::ToString(&local_110,&local_e8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    pUVar2 = (param_2->ChildTRSHandle).field0_0x0.DebugPtr;
    pUVar3 = (param_2->ParentTRSHandle).field0_0x0.DebugPtr;
    ::Singleton.World = param_1;
    local_100 = pUVar2;
    uVar9 = (**(code **)(pUVar2->_padding_ + 0x328))(pUVar2);
    FConstraintsManagerController::GetParentConstraints(&::Singleton,&local_120,uVar9,true);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_13c.ObjectIndex = 0;
    local_13c.ObjectSerialNumber = 0;
    local_108 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_13c,(FObjectPtr)&local_108);
    TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::Remove
              (&local_120,(TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)&local_13c);
    if (local_120.ArrayNum != 0) {
      uVar9 = 0;
      if ((int)(local_120.ArrayNum - 1U) < local_120.ArrayNum) {
        uVar9 = ~(local_120.ArrayNum - 1U) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (local_120.AllocatorInstance.Data +
                                    (longlong)(local_120.ArrayNum + -1) * 8));
      local_a8.A = *(uint *)&pUVar10[1].field_0x4;
      local_a8.B = *(uint *)&pUVar10[1].field_0x8;
      local_a8.C = *(uint *)&pUVar10[1].field_0xc;
      local_a8.D = *(uint *)&pUVar10[1].field_0x10;
      if ((DependencyLocals::bDebugDependencies != false) && (2 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      ::Singleton.World = param_1;
      FConstraintsManagerController::SetConstraintsDependencies
                (&::Singleton,&local_a8,(FGuid *)((longlong)&param_2->_padding_ + 4));
    }
    pFVar11 = (FWeakObjectPtr *)(**(code **)(pUVar3->_padding_ + 0x330))(pUVar3,local_b8);
    pUVar10 = FWeakObjectPtr::Get(pFVar11);
    pFVar11 = (FWeakObjectPtr *)(**(code **)(pUVar2->_padding_ + 0x330))(pUVar2,local_b0);
    pUVar12 = FWeakObjectPtr::Get(pFVar11);
    if ((pUVar10 == (UObject *)0x0) || (pUVar10 != pUVar12)) {
      bVar17 = 0;
      bVar6 = false;
    }
    else {
      bVar17 = 1;
      bVar6 = true;
      BuildSelfDependencies(param_1,param_2);
    }
    UTickableTransformConstraint::EnsurePrimaryDependency(param_2,param_1);
    local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ArrayNum = 0;
    local_130.ArrayMax = 0;
    UE::TransformConstraintUtil::GetChildrenConstraints
              (param_1,param_2,&local_130,(bool)(bVar17 ^ 1));
    iVar5 = local_130.ArrayNum;
    uVar16 = (ulonglong)local_130.ArrayNum;
    pFVar11 = (FWeakObjectPtr *)(local_130.AllocatorInstance.Data + uVar16 * 8);
    this.Data = local_130.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar16 != iVar5) {
        `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_147);
      }
      if ((FWeakObjectPtr *)this.Data == pFVar11) break;
      ::Singleton.World = param_1;
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      FConstraintsManagerController::SetConstraintsDependencies
                (&::Singleton,(FGuid *)((longlong)&param_2->_padding_ + 4),
                 (FGuid *)&pUVar10[1].field_0x4);
      pUVar13 = (UTickableConstraint *)FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      if (pUVar13 != (UTickableConstraint *)0x0) {
        pUVar14 = UTickableTransformConstraint::StaticClass();
        iVar1 = (int)pUVar14->_padding_;
        if ((iVar1 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar14->_padding_)) {
          pUVar2 = (UTransformableHandle *)pUVar13[1]._padding_;
          ::FString::FString(&local_c8,ChildDependencyDesc);
          DependencyLocals::LogDependency
                    (&local_c8,local_100,pUVar2,(UTickableConstraint *)param_2,pUVar13);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar16 = local_130._8_8_ & 0xffffffff;
      this.Data = this.Data + 8;
    }
    BuildAttachmentsDependencies(param_1,param_2);
    if (!bVar6) {
      BuildExternalDependencies(param_1,param_2);
    }
    pUVar2 = (param_2->ChildTRSHandle).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 != (UTransformableHandle *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UTransformableHandle *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
    }
    local_144.ObjectIndex = 0;
    local_144.ObjectSerialNumber = 0;
    local_f8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UTransformableHandle *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_144,(FObjectPtr)&local_f8);
    pUVar10 = FWeakObjectPtr::Get(&local_144);
    if ((pUVar10 != (UObject *)0x0) && ((*(uint *)&pUVar10->field_0x8 >> 0x1e & 1) == 0)) {
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      pUVar10 = FWeakObjectPtr::Get(&local_144);
      pFVar15 = (FTickFunction *)(**(code **)(*(longlong *)pUVar10 + 800))(pUVar10);
      bVar6 = FConstraintCycleChecker::HasPrerequisiteDependencyWith
                        (pFVar15,pFVar15,
                         (TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator>
                          *)local_98);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar5 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      if ((bVar6) && (2 < (byte)LogTemp._0_1_)) {
        local_f0 = (FName)param_2->_padding_;
        ::FName::ToString(&local_f0,&local_d8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
    }
    ::Singleton.World = param_1;
    FConstraintsManagerController::InvalidateEvaluationGraph(&::Singleton);
    if ((FWeakObjectPtr *)local_130.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// BuildExternalDependencies @ 1464a5c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDependencyBuilder::BuildExternalDependencies(UWorld *param_1,UTickableTransformConstraint *param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  UTransformableHandle *pUVar3;
  undefined8 uVar4;
  UTransformableHandle *pUVar5;
  undefined8 uVar6;
  longlong *plVar7;
  void *_Src;
  undefined8 uVar8;
  code *pcVar9;
  ForAnyElementType FVar10;
  UObject *pUVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  <lambda_2> <Var17;
  <lambda_1> <Var18;
  UConstraintSubsystem *pUVar19;
  TObjectPtr<UTransformableHandle>_u_0 TVar20;
  UClass *pUVar21;
  TObjectPtr<UTransformableHandle>_u_0 TVar22;
  FConstraintTickFunction *pFVar23;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar24;
  FConstraintTickFunction *pFVar25;
  TObjectPtr<UTransformableHandle>_u_0 TVar26;
  ULevel *pUVar27;
  FTickPrerequisite *pFVar28;
  byte bVar29;
  ForElementType<unsigned_int> FVar30;
  ulonglong uVar31;
  uint uVar32;
  ForAnyElementType FVar33;
  FWeakObjectPtr *this;
  <lambda_1> <Var34;
  longlong lVar35;
  FWeakObjectPtr *pFVar36;
  TObjectPtr<UTransformableHandle>_u_0 TVar37;
  TObjectPtr<UTransformableHandle>_u_0 TVar38;
  ulonglong uVar39;
  ulonglong *puVar40;
  uint uVar41;
  undefined1 auStackY_438 [32];
  UTickableTransformConstraint *local_3f0;
  <lambda_1> local_3e8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_3e0;
  undefined1 local_3d0;
  undefined1 local_3cf [3];
  uint local_3cc;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_3c8;
  FWeakObjectPtr local_3b8;
  UObject *local_3b0;
  TObjectPtr<UTransformableHandle>_u_0 local_3a8;
  ForAnyElementType local_3a0;
  int local_398;
  int local_394;
  FConstraintTickFunction *local_390;
  UObject *local_388;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_380;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_370;
  uint local_360;
  uint uStack_35c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_358;
  undefined4 local_350;
  undefined8 uStack_34c;
  undefined4 uStack_344;
  undefined1 local_338 [16];
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_328;
  TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_> local_318;
  longlong *local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_300;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  ULevel *local_2c0;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FSparseArrayAllocationInfo local_278;
  FString local_268;
  FString local_258;
  FName local_248;
  FName local_240;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_1f8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_1e8;
  <lambda_3> local_1d8;
  ForElementType<unsigned_int> local_1c8;
  uint local_1b0;
  int local_1ac;
  undefined1 local_1a8 [32];
  ForElementType<unsigned_int> local_188;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  FScriptContainerElement local_170 [8];
  ForAnyElementType local_168;
  uint local_160;
  ForElementType<unsigned_int> local_158;
  uint local_140;
  int local_13c;
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator> local_98
  ;
  ulonglong local_48;
  
  if (param_2 != (UTickableTransformConstraint *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStackY_438;
    local_3e8.InSecondary = (FTickFunction *)param_2;
    cVar12 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2,1);
    if (cVar12 != '\0') {
      local_3a8.ObjectPtr.field0_0x0 = *(FObjectPtr *)&(param_2->ParentTRSHandle).field0_0x0;
      pUVar3 = (param_2->ChildTRSHandle).field0_0x0.DebugPtr;
      <Var17.ParentTarget = DependencyLocals::GetHandleTarget(&param_2->ParentTRSHandle);
      local_3b0 = <Var17.ParentTarget;
      <Var18.ChildTarget = DependencyLocals::GetHandleTarget(&param_2->ChildTRSHandle);
      if ((<Var17.ParentTarget == (UObject *)0x0) || (<Var17.ParentTarget != <Var18.ChildTarget)) {
        ::Singleton.World = param_1;
        local_388 = <Var18.ChildTarget;
        pUVar19 = UConstraintSubsystem::Get();
        if (pUVar19 == (UConstraintSubsystem *)0x0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            atexit(`FConstraintsManagerController::
                   GetConstraintsByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l9::<lambda_1>_>'
                   ::__l5::_dynamic_atexit_destructor_for__Empty__);
            _Init_thread_footer(&::_TSS0);
          }
          local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          CopyToEmpty<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,int>
                    (&local_3c8,
                     (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)
                     ::Empty.AllocatorInstance.Data,::Empty.ArrayNum,0);
        }
        else {
          pTVar24 = UConstraintSubsystem::GetConstraints(pUVar19,&local_1f8,::Singleton.World);
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          FilterByPredicate<_FDependencyBuilder::BuildExternalDependencies_::__l9::<lambda_1>_>
                    (pTVar24,&local_380,<Var18);
          if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.AllocatorInstance.Data);
          }
          local_3c8.AllocatorInstance.Data = local_380.AllocatorInstance.Data;
          local_3c8.ArrayNum = local_380.ArrayNum;
          local_3c8.ArrayMax = local_380.ArrayMax;
          local_380.ArrayNum = 0;
          local_380.ArrayMax = 0;
          local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        TVar37.DebugPtr = (UTransformableHandle *)0x0;
        uVar14 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                 ::IndexOfByKey<UTickableTransformConstraint_*>
                           (&local_3c8,(UTickableTransformConstraint **)&local_3e8);
        local_3cc = uVar14;
        if (((int)uVar14 < 0) || (local_3c8.ArrayNum <= (int)uVar14)) {
          bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5431913450706043135>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\Transform\\DependencyBuilder.cpp"
                              ,0xff,"ChildTargetParentConstraints.IsValidIndex(ConstrainIndex)");
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        else {
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          RemoveAt(&local_3c8,uVar14,Default);
        }
        uVar41 = 0;
        local_3f0 = param_2;
        if (local_3c8.ArrayNum != 0) {
          local_1b0 = local_3c8.ArrayNum;
          local_1c8.SecondaryData = (ForElementType<unsigned_int>)0x0;
          uVar32 = local_3c8.ArrayNum + 0x1fU >> 5;
          local_1ac = 0x80;
          if (local_3c8.ArrayNum + 0x1fU >> 5 != 0) {
            if (4 < uVar32) {
              TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>
              ::ResizeAllocation(&local_1c8,0,uVar32,4);
              local_1ac = uVar32 << 5;
            }
            FVar30 = (ForElementType<unsigned_int>)&local_1c8;
            if (local_1c8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar30 = local_1c8.SecondaryData;
            }
            memset((void *)FVar30,0,(ulonglong)uVar32 << 2);
            uVar32 = local_1b0 & 0x8000001f;
            if ((int)uVar32 < 0) {
              uVar32 = (uVar32 - 1 | 0xffffffe0) + 1;
            }
            if (uVar32 != 0) {
              FVar30 = (ForElementType<unsigned_int>)&local_1c8;
              if (local_1c8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar30 = local_1c8.SecondaryData;
              }
              puVar1 = (uint *)((longlong)FVar30 +
                               (longlong)((int)(local_1b0 + ((int)local_1b0 >> 0x1f & 0x1fU)) >> 5)
                               * 4);
              *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar32 & 0x1f);
            }
          }
          local_390 = UTickableConstraint::GetTickFunction((UTickableConstraint *)param_2,param_1);
          local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_>::CopyToEmpty<FTickPrerequisite,int>
                    (&local_318,(FTickPrerequisite *)local_390->_padding_,(int)local_390->_padding_,
                     0);
          TVar22 = local_3a8;
          TVar26.DebugPtr = TVar37.DebugPtr;
          if (0 < local_3c8.ArrayNum) {
            do {
              uVar32 = TVar26._0_4_;
              uVar14 = 0;
              if ((int)uVar32 < local_3c8.ArrayNum) {
                uVar14 = ~uVar32 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              TVar20.DebugPtr =
                   (UTransformableHandle *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)
                                       (local_3c8.AllocatorInstance.Data + (longlong)(int)uVar32 * 8
                                       ));
              if (TVar20.DebugPtr == (UTransformableHandle *)0x0) {
LAB_1464a5fc9:
                TVar20.DebugPtr = TVar37.DebugPtr;
              }
              else {
                pUVar21 = UTickableTransformConstraint::StaticClass();
                iVar16 = (int)pUVar21->_padding_;
                if ((*(int *)((TVar20.DebugPtr)->_padding_ + 0x38) < iVar16) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)((TVar20.DebugPtr)->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
                    &pUVar21->_padding_)) goto LAB_1464a5fc9;
              }
              uVar4._0_4_ = ((TVar20.DebugPtr + 0x68)->ConstraintBindingID).Guid.B;
              uVar4._4_4_ = ((TVar20.DebugPtr + 0x68)->ConstraintBindingID).Guid.C;
              cVar12 = (**(code **)((TVar22.DebugPtr)->_padding_ + 0x338))(TVar22.DebugPtr,uVar4);
              bVar29 = TVar26._0_1_;
              if (cVar12 == '\0') {
                uVar6._0_4_ = ((TVar20.DebugPtr + 0x68)->ConstraintBindingID).Guid.B;
                uVar6._4_4_ = ((TVar20.DebugPtr + 0x68)->ConstraintBindingID).Guid.C;
                cVar12 = (**(code **)(pUVar3->_padding_ + 0x338))(pUVar3,uVar6);
                if (cVar12 != '\0') {
                  ::Singleton.World = param_1;
                  FConstraintsManagerController::SetConstraintsDependencies
                            (&::Singleton,&((TVar20.DebugPtr)->ConstraintBindingID).Guid,
                             (FGuid *)((longlong)&param_2->_padding_ + 4));
                  if ((((int)uVar32 < 0) || ((int)local_1b0 <= (int)uVar32)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5be,L""), bVar13)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar30 = (ForElementType<unsigned_int>)&local_1c8;
                  if (local_1c8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                    FVar30 = local_1c8.SecondaryData;
                  }
                  uVar14 = uVar32;
                  if ((int)uVar32 < 0) {
                    uVar14 = uVar32 + 0x1f;
                  }
                  puVar1 = (uint *)((longlong)FVar30 + (longlong)((int)uVar14 >> 5) * 4);
                  *puVar1 = *puVar1 | 1 << (bVar29 & 0x1f);
                  pUVar5 = *(UTransformableHandle **)&TVar20.DebugPtr[1].ConstraintBindingID.Guid.B;
                  ::FString::FString(&local_228,ExternalDependencyDesc);
                  DependencyLocals::LogDependency
                            (&local_228,pUVar5,pUVar3,(UTickableConstraint *)TVar20.DebugPtr,
                             (UTickableConstraint *)param_2);
                  FVar33.Data = local_228.Data.AllocatorInstance.Data;
                  goto LAB_1464a6188;
                }
              }
              else {
                ::Singleton.World = param_1;
                FConstraintsManagerController::SetConstraintsDependencies
                          (&::Singleton,&((TVar20.DebugPtr)->ConstraintBindingID).Guid,
                           (FGuid *)((longlong)&param_2->_padding_ + 4));
                if ((((int)uVar32 < 0) || ((int)local_1b0 <= (int)uVar32)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                FVar30 = (ForElementType<unsigned_int>)&local_1c8;
                if (local_1c8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar30 = local_1c8.SecondaryData;
                }
                uVar14 = uVar32;
                if ((int)uVar32 < 0) {
                  uVar14 = uVar32 + 0x1f;
                }
                puVar1 = (uint *)((longlong)FVar30 + (longlong)((int)uVar14 >> 5) * 4);
                *puVar1 = *puVar1 | 1 << (bVar29 & 0x1f);
                pUVar5 = *(UTransformableHandle **)&TVar20.DebugPtr[1].ConstraintBindingID.Guid.B;
                ::FString::FString(&local_238,ExternalDependencyDesc);
                DependencyLocals::LogDependency
                          (&local_238,pUVar5,TVar22.DebugPtr,(UTickableConstraint *)TVar20.DebugPtr,
                           (UTickableConstraint *)param_2);
                FVar33.Data = local_238.Data.AllocatorInstance.Data;
LAB_1464a6188:
                if (FVar33.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar33.Data);
                }
              }
              cVar12 = (**(code **)(**(longlong **)&TVar20.DebugPtr[1].bNotifying + 0x338))
                                 (*(longlong **)&TVar20.DebugPtr[1].bNotifying,pUVar3);
              if (cVar12 == '\0') {
                plVar7 = *(longlong **)&TVar20.DebugPtr[1].ConstraintBindingID.Guid.B;
                cVar12 = (**(code **)(*plVar7 + 0x338))(plVar7,pUVar3);
                if (cVar12 != '\0') {
                  ::Singleton.World = param_1;
                  FConstraintsManagerController::SetConstraintsDependencies
                            (&::Singleton,(FGuid *)((longlong)&param_2->_padding_ + 4),
                             &((TVar20.DebugPtr)->ConstraintBindingID).Guid);
                  if ((((int)uVar32 < 0) || ((int)local_1b0 <= (int)uVar32)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5be,L""), bVar13)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar30 = (ForElementType<unsigned_int>)&local_1c8;
                  if (local_1c8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                    FVar30 = local_1c8.SecondaryData;
                  }
                  uVar14 = uVar32;
                  if ((int)uVar32 < 0) {
                    uVar14 = uVar32 + 0x1f;
                  }
                  puVar1 = (uint *)((longlong)FVar30 + (longlong)((int)uVar14 >> 5) * 4);
                  *puVar1 = *puVar1 | 1 << (bVar29 & 0x1f);
                  pUVar5 = *(UTransformableHandle **)&TVar20.DebugPtr[1].ConstraintBindingID.Guid.B;
                  ::FString::FString(&local_208,ExternalDependencyDesc);
                  DependencyLocals::LogDependency
                            (&local_208,pUVar3,pUVar5,(UTickableConstraint *)param_2,
                             (UTickableConstraint *)TVar20.DebugPtr);
                  FVar33.Data = local_208.Data.AllocatorInstance.Data;
                  goto LAB_1464a6352;
                }
              }
              else {
                ::Singleton.World = param_1;
                FConstraintsManagerController::SetConstraintsDependencies
                          (&::Singleton,(FGuid *)((longlong)&param_2->_padding_ + 4),
                           &((TVar20.DebugPtr)->ConstraintBindingID).Guid);
                if ((((int)uVar32 < 0) || ((int)local_1b0 <= (int)uVar32)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                FVar30 = (ForElementType<unsigned_int>)&local_1c8;
                if (local_1c8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar30 = local_1c8.SecondaryData;
                }
                uVar14 = uVar32;
                if ((int)uVar32 < 0) {
                  uVar14 = uVar32 + 0x1f;
                }
                puVar1 = (uint *)((longlong)FVar30 + (longlong)((int)uVar14 >> 5) * 4);
                *puVar1 = *puVar1 | 1 << (bVar29 & 0x1f);
                pUVar5 = *(UTransformableHandle **)&TVar20.DebugPtr[1].bNotifying;
                ::FString::FString(&local_218,ExternalDependencyDesc);
                DependencyLocals::LogDependency
                          (&local_218,pUVar3,pUVar5,(UTickableConstraint *)param_2,
                           (UTickableConstraint *)TVar20.DebugPtr);
                FVar33.Data = local_218.Data.AllocatorInstance.Data;
LAB_1464a6352:
                if (FVar33.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar33.Data);
                }
              }
              TVar26._0_4_ = uVar32 + 1;
              TVar26._4_4_ = 0;
              uVar14 = local_3cc;
            } while ((int)TVar26._0_4_ < local_3c8.ArrayNum);
          }
          pFVar25 = local_390;
          iVar16 = (int)local_390->_padding_;
          if (((iVar16 == local_318.ArrayNum) &&
              (bVar13 = CompareItems<FTickPrerequisite,int>
                                  ((FTickPrerequisite *)local_390->_padding_,
                                   (FTickPrerequisite *)local_318.AllocatorInstance.Data,iVar16),
              bVar13)) &&
             ((uVar14 = uVar14 - 1, -1 < (int)uVar14 && ((int)uVar14 < (int)local_1b0)))) {
            do {
              if (((int)local_1b0 <= (int)uVar14) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FVar30 = (ForElementType<unsigned_int>)&local_1c8;
              if (local_1c8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar30 = local_1c8.SecondaryData;
              }
              uVar32 = uVar14;
              if ((int)uVar14 < 0) {
                uVar32 = uVar14 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar30 + (longlong)((int)uVar32 >> 5) * 4) >> (uVar14 & 0x1f)
                  & 1) == 0) {
                uVar32 = uVar41;
                if ((int)uVar14 < local_3c8.ArrayNum) {
                  uVar32 = ~uVar14 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                TVar22.DebugPtr =
                     (UTransformableHandle *)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)
                                         (local_3c8.AllocatorInstance.Data +
                                         (longlong)(int)uVar14 * 8));
                if (TVar22.DebugPtr == (UTransformableHandle *)0x0) {
LAB_1464a64ab:
                  TVar22.DebugPtr = TVar37.DebugPtr;
                }
                else {
                  pUVar21 = UTickableTransformConstraint::StaticClass();
                  iVar16 = (int)pUVar21->_padding_;
                  if ((*(int *)((TVar22.DebugPtr)->_padding_ + 0x38) < iVar16) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)((TVar22.DebugPtr)->_padding_ + 0x30) + (longlong)iVar16 * 8)
                      != &pUVar21->_padding_)) goto LAB_1464a64ab;
                }
                local_138._0_8_ = (FScriptContainerElement *)0x0;
                local_138._8_8_ = 0;
                local_118 = (void *)0x0;
                local_110 = 0;
                local_10c = 0x80;
                local_108 = 0xffffffff;
                local_104 = 0;
                local_f8 = (ForElementType<FSetElementId>)0x0;
                local_f0 = 0;
                pFVar23 = UTickableConstraint::GetTickFunction
                                    ((UTickableConstraint *)TVar22.DebugPtr,param_1);
                bVar13 = FConstraintCycleChecker::HasPrerequisiteDependencyWith
                                   ((FTickFunction *)pFVar25,(FTickFunction *)pFVar23,
                                    (TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator>
                                     *)local_138);
                if ((!bVar13) &&
                   (bVar13 = FConstraintCycleChecker::HasPrerequisiteDependencyWith
                                       ((FTickFunction *)pFVar23,(FTickFunction *)pFVar25,
                                        (TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator>
                                         *)local_138), <Var34.InSecondary = local_3e8.InSecondary,
                   !bVar13)) {
                  local_3f0 = (UTickableTransformConstraint *)local_3e8.InSecondary;
                  ::Singleton.World = param_1;
                  FConstraintsManagerController::SetConstraintsDependencies
                            (&::Singleton,&((TVar22.DebugPtr)->ConstraintBindingID).Guid,
                             (FGuid *)((longlong)&local_3e8.InSecondary[1]._padding_ + 4));
                  if ((DependencyLocals::bDebugDependencies != false) && (2 < (byte)LogTemp._0_1_))
                  {
                    local_2e0 = *(FName *)&((<Var34.InSecondary)->Prerequisites).ArrayNum;
                    ::FName::ToString(&local_2e0,&local_2a8);
                    local_2d8 = (FName)(TVar22.DebugPtr)->_padding_;
                    ::FName::ToString(&local_2d8,&local_2b8);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
                    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                    }
                    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
                    }
                  }
                  local_f0 = 0;
                  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
                    FMemory::Free((void *)local_f8);
                  }
                  bVar13 = local_138._12_4_ != 0;
                  local_138._8_8_ = (ulonglong)(uint)local_138._12_4_ << 0x20;
                  if (bVar13) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
                  }
                  local_108 = 0xffffffff;
                  local_104 = 0;
                  local_110 = 0;
                  if (0x80 < local_10c) {
                    local_10c = 0x80;
                    TBitArray<FDefaultBitArrayAllocator>::Realloc
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
                  }
                  if (local_118 != (void *)0x0) {
                    FMemory::Free(local_118);
                  }
                  if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free((void *)local_138._0_8_);
                  }
                  goto LAB_1464a6780;
                }
                local_f0 = 0;
                if (local_f8 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_f8);
                }
                bVar13 = local_138._12_4_ != 0;
                local_138._8_8_ = (ulonglong)(uint)local_138._12_4_ << 0x20;
                if (bVar13) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
                }
                local_108 = 0xffffffff;
                local_104 = 0;
                local_110 = 0;
                if (0x80 < local_10c) {
                  local_10c = 0x80;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
                }
                if (local_118 != (void *)0x0) {
                  FMemory::Free(local_118);
                }
                if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_138._0_8_);
                }
              }
              uVar14 = uVar14 - 1;
            } while (-1 < (int)uVar14);
            local_3f0 = (UTickableTransformConstraint *)local_3e8.InSecondary;
          }
LAB_1464a6780:
          if ((FTickPrerequisite *)local_318.AllocatorInstance.Data != (FTickPrerequisite *)0x0) {
            FMemory::Free(local_318.AllocatorInstance.Data);
          }
          <Var17.ParentTarget = local_3b0;
          if (local_1c8.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_1c8.SecondaryData);
            <Var17.ParentTarget = local_3b0;
          }
        }
        if (local_3c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c8.AllocatorInstance.Data);
        }
        ::Singleton.World = param_1;
        pUVar19 = UConstraintSubsystem::Get();
        if (pUVar19 == (UConstraintSubsystem *)0x0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            atexit(`FConstraintsManagerController::
                   GetConstraintsByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l64::<lambda_2>_>'
                   ::__l5::_dynamic_atexit_destructor_for__Empty__);
            _Init_thread_footer(&::_TSS0);
          }
          FVar33.Data = ::Empty.AllocatorInstance.Data;
          lVar35 = (longlong)::Empty.ArrayNum;
          local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3e0.ArrayNum = ::Empty.ArrayNum;
          if (::Empty.ArrayNum == 0) {
            local_3e0.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,::Empty.ArrayNum,0,&local_3e0.AllocatorInstance,::Empty.ArrayNum,
                       &local_3e0.ArrayMax);
            memcpy(local_3e0.AllocatorInstance.Data,FVar33.Data,lVar35 << 3);
          }
        }
        else {
          pTVar24 = UConstraintSubsystem::GetConstraints(pUVar19,&local_1e8,::Singleton.World);
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
          FilterByPredicate<_FDependencyBuilder::BuildExternalDependencies_::__l64::<lambda_2>_>
                    (pTVar24,&local_370,<Var17);
          if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.AllocatorInstance.Data);
          }
          local_3e0.ArrayNum = local_370.ArrayNum;
          local_3e0.AllocatorInstance.Data = local_370.AllocatorInstance.Data;
          local_3e0.ArrayMax = local_370.ArrayMax;
          local_370.ArrayNum = 0;
          local_370.ArrayMax = 0;
          local_370.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        FVar10.Data = local_3e0.AllocatorInstance.Data;
        pFVar2 = local_3e0.AllocatorInstance.Data + (longlong)local_3e0.ArrayNum * 8;
        for (FVar33.Data = local_3e0.AllocatorInstance.Data; FVar33.Data != pFVar2;
            FVar33.Data = FVar33.Data + 8) {
          bVar13 = TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>::
                   UEOpEquals<UTickableTransformConstraint,bool>
                             ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)FVar33.Data,
                              local_3f0);
          if (bVar13) {
            iVar16 = (int)((longlong)FVar33.Data - (longlong)FVar10.Data >> 3);
            if ((-1 < iVar16) && (iVar16 < local_3e0.ArrayNum)) {
              TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
              ::RemoveAt(&local_3e0,iVar16,Default);
            }
            goto LAB_1464a68f6;
          }
        }
        iVar16 = -1;
LAB_1464a68f6:
        if (local_3e0.ArrayNum != 0) {
          local_158.SecondaryData = (ForElementType<unsigned_int>)0x0;
          uVar14 = local_3e0.ArrayNum + 0x1fU >> 5;
          local_13c = 0x80;
          local_140 = local_3e0.ArrayNum;
          if (local_3e0.ArrayNum + 0x1fU >> 5 != 0) {
            if (4 < uVar14) {
              TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>
              ::ResizeAllocation(&local_158,0,uVar14,4);
              local_13c = uVar14 << 5;
            }
            FVar30 = (ForElementType<unsigned_int>)&local_158;
            if (local_158.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar30 = local_158.SecondaryData;
            }
            memset((void *)FVar30,0,(ulonglong)uVar14 << 2);
            uVar14 = local_140 & 0x8000001f;
            if ((int)uVar14 < 0) {
              uVar14 = (uVar14 - 1 | 0xffffffe0) + 1;
            }
            if (uVar14 != 0) {
              FVar30 = (ForElementType<unsigned_int>)&local_158;
              if (local_158.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar30 = local_158.SecondaryData;
              }
              puVar1 = (uint *)((longlong)FVar30 +
                               (longlong)((int)(local_140 + ((int)local_140 >> 0x1f & 0x1fU)) >> 5)
                               * 4);
              *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar14 & 0x1f);
            }
          }
          pFVar25 = UTickableConstraint::GetTickFunction((UTickableConstraint *)local_3f0,param_1);
          local_3a0.Data = (FScriptContainerElement *)0x0;
          local_398 = (int)pFVar25->_padding_;
          lVar35 = (longlong)local_398;
          _Src = (void *)pFVar25->_padding_;
          local_390 = pFVar25;
          if (local_398 == 0) {
            local_394 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_398,0,&local_3a0,local_398,&local_394);
            memcpy(local_3a0.Data,_Src,lVar35 << 4);
          }
          TVar22 = local_3a8;
          TVar20.DebugPtr = TVar37.DebugPtr;
          if (0 < local_3e0.ArrayNum) {
            do {
              uVar32 = TVar20._0_4_;
              uVar14 = uVar41;
              if ((int)uVar32 < local_3e0.ArrayNum) {
                uVar14 = ~uVar32 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              TVar26.DebugPtr =
                   (UTransformableHandle *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)
                                       (local_3e0.AllocatorInstance.Data + (longlong)(int)uVar32 * 8
                                       ));
              if (TVar26.DebugPtr == (UTransformableHandle *)0x0) {
LAB_1464a6b1b:
                TVar26.DebugPtr = TVar37.DebugPtr;
              }
              else {
                pUVar21 = UTickableTransformConstraint::StaticClass();
                iVar15 = (int)pUVar21->_padding_;
                if ((*(int *)((TVar26.DebugPtr)->_padding_ + 0x38) < iVar15) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)((TVar26.DebugPtr)->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
                    &pUVar21->_padding_)) goto LAB_1464a6b1b;
              }
              uVar8._0_4_ = ((TVar26.DebugPtr + 0x68)->ConstraintBindingID).Guid.B;
              uVar8._4_4_ = ((TVar26.DebugPtr + 0x68)->ConstraintBindingID).Guid.C;
              cVar12 = (**(code **)((TVar22.DebugPtr)->_padding_ + 0x338))(TVar22.DebugPtr,uVar8);
              if (cVar12 != '\0') {
                ::Singleton.World = param_1;
                FConstraintsManagerController::SetConstraintsDependencies
                          (&::Singleton,&((TVar26.DebugPtr)->ConstraintBindingID).Guid,
                           (FGuid *)((longlong)&local_3f0->_padding_ + 4));
                if ((((int)uVar32 < 0) || ((int)local_140 <= (int)uVar32)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                FVar30 = (ForElementType<unsigned_int>)&local_158;
                if (local_158.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar30 = local_158.SecondaryData;
                }
                uVar14 = uVar32;
                if ((int)uVar32 < 0) {
                  uVar14 = uVar32 + 0x1f;
                }
                puVar1 = (uint *)((longlong)FVar30 + (longlong)((int)uVar14 >> 5) * 4);
                *puVar1 = *puVar1 | 1 << (TVar20._0_1_ & 0x1f);
                pUVar3 = *(UTransformableHandle **)&TVar26.DebugPtr[1].ConstraintBindingID.Guid.B;
                ::FString::FString((FString *)local_338,ExternalDependencyDesc);
                DependencyLocals::LogDependency
                          ((FString *)local_338,pUVar3,TVar22.DebugPtr,
                           (UTickableConstraint *)TVar26.DebugPtr,(UTickableConstraint *)local_3f0);
                if ((FScriptContainerElement *)local_338._0_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_338._0_8_);
                }
              }
              TVar20._0_4_ = uVar32 + 1;
              TVar20._4_4_ = 0;
              pFVar25 = local_390;
            } while ((int)TVar20._0_4_ < local_3e0.ArrayNum);
          }
          iVar15 = (int)pFVar25->_padding_;
          if ((iVar15 == local_398) &&
             (bVar13 = CompareItems<FTickPrerequisite,int>
                                 ((FTickPrerequisite *)pFVar25->_padding_,
                                  (FTickPrerequisite *)local_3a0.Data,iVar15), bVar13)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          uVar14 = iVar16 - 1;
          if (((int)uVar14 < 0) || ((int)local_140 <= (int)uVar14)) {
            uVar14 = local_3e0.ArrayNum - 1;
          }
          if (((!bVar13) && (-1 < (int)uVar14)) && ((int)uVar14 < (int)local_140)) {
            do {
              if (((int)local_140 <= (int)uVar14) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FVar30 = (ForElementType<unsigned_int>)&local_158;
              if (local_158.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar30 = local_158.SecondaryData;
              }
              uVar32 = uVar14;
              if ((int)uVar14 < 0) {
                uVar32 = uVar14 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar30 + (longlong)((int)uVar32 >> 5) * 4) >> (uVar14 & 0x1f)
                  & 1) == 0) {
                uVar32 = uVar41;
                if ((int)uVar14 < local_3e0.ArrayNum) {
                  uVar32 = ~uVar14 >> 0x1f;
                }
                if ((uVar32 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                TVar22.DebugPtr =
                     (UTransformableHandle *)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)
                                         (local_3e0.AllocatorInstance.Data +
                                         (longlong)(int)uVar14 * 8));
                if (TVar22.DebugPtr == (UTransformableHandle *)0x0) {
LAB_1464a6d5b:
                  TVar22.DebugPtr = TVar37.DebugPtr;
                }
                else {
                  pUVar21 = UTickableTransformConstraint::StaticClass();
                  iVar16 = (int)pUVar21->_padding_;
                  if ((*(int *)((TVar22.DebugPtr)->_padding_ + 0x38) < iVar16) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)((TVar22.DebugPtr)->_padding_ + 0x30) + (longlong)iVar16 * 8)
                      != &pUVar21->_padding_)) goto LAB_1464a6d5b;
                }
                local_e8._0_8_ = (FScriptContainerElement *)0x0;
                local_e8._8_8_ = 0;
                local_c8 = (void *)0x0;
                local_c0 = 0;
                local_bc = 0x80;
                local_b8 = 0xffffffff;
                local_b4 = 0;
                local_a8 = (ForElementType<FSetElementId>)0x0;
                local_a0 = 0;
                pFVar23 = UTickableConstraint::GetTickFunction
                                    ((UTickableConstraint *)TVar22.DebugPtr,param_1);
                bVar13 = FConstraintCycleChecker::HasPrerequisiteDependencyWith
                                   ((FTickFunction *)pFVar25,(FTickFunction *)pFVar23,
                                    (TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator>
                                     *)local_e8);
                if ((!bVar13) &&
                   (bVar13 = FConstraintCycleChecker::HasPrerequisiteDependencyWith
                                       ((FTickFunction *)pFVar23,(FTickFunction *)pFVar25,
                                        (TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator>
                                         *)local_e8),
                   local_3f0 = (UTickableTransformConstraint *)local_3e8.InSecondary, !bVar13)) {
                  ::Singleton.World = param_1;
                  FConstraintsManagerController::SetConstraintsDependencies
                            (&::Singleton,&((TVar22.DebugPtr)->ConstraintBindingID).Guid,
                             (FGuid *)((longlong)&local_3e8.InSecondary[1]._padding_ + 4));
                  if ((DependencyLocals::bDebugDependencies != false) && (2 < (byte)LogTemp._0_1_))
                  {
                    local_2d0 = *(FName *)&(((FTickFunction *)local_3f0)->Prerequisites).ArrayNum;
                    ::FName::ToString(&local_2d0,&local_288);
                    local_2c8 = (FName)(TVar22.DebugPtr)->_padding_;
                    ::FName::ToString(&local_2c8,&local_298);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
                    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_298.Data.AllocatorInstance.Data);
                    }
                    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_288.Data.AllocatorInstance.Data);
                    }
                  }
                  local_a0 = 0;
                  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                    FMemory::Free((void *)local_a8);
                  }
                  bVar13 = local_e8._12_4_ != 0;
                  local_e8._8_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
                  if (bVar13) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
                  }
                  local_b8 = 0xffffffff;
                  local_b4 = 0;
                  local_c0 = 0;
                  if (0x80 < local_bc) {
                    local_bc = 0x80;
                    TBitArray<FDefaultBitArrayAllocator>::Realloc
                              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
                  }
                  if (local_c8 != (void *)0x0) {
                    FMemory::Free(local_c8);
                  }
                  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
                    FMemory::Free((void *)local_e8._0_8_);
                  }
                  break;
                }
                local_a0 = 0;
                if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_a8);
                }
                bVar13 = local_e8._12_4_ != 0;
                local_e8._8_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
                if (bVar13) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
                }
                local_b8 = 0xffffffff;
                local_b4 = 0;
                local_c0 = 0;
                if (0x80 < local_bc) {
                  local_bc = 0x80;
                  TBitArray<FDefaultBitArrayAllocator>::Realloc
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
                }
                if (local_c8 != (void *)0x0) {
                  FMemory::Free(local_c8);
                }
                if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_e8._0_8_);
                }
              }
              uVar14 = uVar14 - 1;
              local_3f0 = (UTickableTransformConstraint *)local_3e8.InSecondary;
            } while (-1 < (int)uVar14);
          }
          if ((FTickPrerequisite *)local_3a0.Data != (FTickPrerequisite *)0x0) {
            FMemory::Free(local_3a0.Data);
          }
          if (local_158.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_158.SecondaryData);
          }
        }
        if (local_3e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e0.AllocatorInstance.Data);
        }
        local_338._0_8_ = local_388;
        local_1d8.ChildTarget = local_388;
        ::Singleton.World = param_1;
        local_338._8_8_ = local_3f0;
        local_1d8.InConstraint = local_3f0;
        FConstraintsManagerController::
        GetConstraintsByPredicate<_FDependencyBuilder::BuildExternalDependencies_::__l108::<lambda_3>_>
                  (&::Singleton,&local_328,&local_1d8,false);
        local_3e8.InSecondary =
             (FTickFunction *)
             UTickableConstraint::GetTickFunction((UTickableConstraint *)local_3f0,param_1);
        uVar31 = (ulonglong)local_328.ArrayNum;
        local_3cc = local_328.ArrayNum;
        local_388 = (UObject *)(local_328.AllocatorInstance.Data + uVar31 * 8);
        uVar39 = uVar31;
        FVar33.Data = local_328.AllocatorInstance.Data;
        while( true ) {
          pUVar11 = local_388;
          local_3b0 = (UObject *)FVar33.Data;
          if ((int)uVar39 != (int)uVar31) {
            `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_3d0);
          }
          if ((UObject *)FVar33.Data == pUVar11) break;
          TVar22.DebugPtr =
               (UTransformableHandle *)FWeakObjectPtr::Get((FWeakObjectPtr *)FVar33.Data);
          if (TVar22.DebugPtr == (UTransformableHandle *)0x0) {
LAB_1464a7115:
            local_3a8.DebugPtr = (UTransformableHandle *)0x0;
            TVar22.DebugPtr = TVar37.DebugPtr;
          }
          else {
            local_3a8.DebugPtr = TVar22.DebugPtr;
            pUVar21 = UTickableTransformConstraint::StaticClass();
            iVar16 = (int)pUVar21->_padding_;
            if ((*(int *)((TVar22.DebugPtr)->_padding_ + 0x38) < iVar16) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)((TVar22.DebugPtr)->_padding_ + 0x30) + (longlong)iVar16 * 8) !=
                &pUVar21->_padding_)) goto LAB_1464a7115;
          }
          pUVar27 = UWorld::GetCurrentLevel(param_1);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar27 != (ULevel *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar27);
          }
          local_3b8.ObjectIndex = 0;
          local_3b8.ObjectSerialNumber = 0;
          local_2c0 = pUVar27;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar27 != (ULevel *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar27);
          }
          FWeakObjectPtr::operator=(&local_3b8,(FObjectPtr)&local_2c0);
          pFVar25 = TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
                    ::FindOrAddImpl<TWeakObjectPtr<ULevel,FWeakObjectPtr>_>
                              ((TMapBase<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction,0>_>
                                *)&((TVar22.DebugPtr)->ConstraintBindingID).ResolveParentIndex,
                               local_3b8.ObjectSerialNumber ^ local_3b8.ObjectIndex,
                               (TWeakObjectPtr<ULevel,FWeakObjectPtr> *)&local_3b8);
          <Var34.InSecondary = local_3e8.InSecondary;
          local_1a8._0_8_ = (FScriptContainerElement *)0x0;
          local_1a8._8_8_ = 0;
          local_188 = (ForElementType<unsigned_int>)0x0;
          local_180 = 0;
          local_17c = 0x80;
          local_178 = -1;
          local_174 = 0;
          local_168.Data = (FScriptContainerElement *)0x0;
          local_160 = 0;
          local_98.Elements._0_8_ = 0;
          local_98.Elements._8_8_ = 0;
          local_98.Elements._32_8_ = 0;
          local_98.Elements._40_4_ = 0;
          local_98.Elements._44_4_ = 0x80;
          local_98.Elements._48_4_ = 0xffffffff;
          local_98.Elements._52_4_ = 0;
          local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_98.HashSize = 0;
          if ((local_3e8.InSecondary == (FTickFunction *)0x0) ||
             (pFVar25 == (FConstraintTickFunction *)0x0)) {
LAB_1464a77ac:
            bVar13 = FConstraintCycleChecker::HasPrerequisiteDependencyWith
                               ((FTickFunction *)pFVar25,<Var34.InSecondary,&local_98);
            if (((!bVar13) &&
                (::Singleton.World = param_1,
                FConstraintsManagerController::SetConstraintsDependencies
                          (&::Singleton,(FGuid *)((longlong)&local_3f0->_padding_ + 4),
                           &((TVar22.DebugPtr)->ConstraintBindingID).Guid),
                DependencyLocals::bDebugDependencies != false)) && (2 < (byte)LogTemp._0_1_)) {
              local_240 = (FName)(TVar22.DebugPtr)->_padding_;
              ::FName::ToString(&local_240,&local_258);
              local_248 = (FName)local_3f0->_padding_;
              ::FName::ToString(&local_248,&local_268);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
              if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_268.Data.AllocatorInstance.Data);
              }
              if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_258.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            pFVar28 = TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_>::
                      FindByPredicate<_FConstraintCycleChecker::HasPrerequisiteDependencyWith_::__l2::<lambda_1>_>
                                ((TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_> *)
                                 &pFVar25->_padding_,local_3e8);
            if (pFVar28 == (FTickPrerequisite *)0x0) {
              uVar14 = ((uint)((ulonglong)pFVar25 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pFVar25 >> 4)) * -0x7a143595;
              uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
              if (local_1a8._8_4_ != local_174) {
                FVar33.Data = local_170;
                if (local_168.Data != (FScriptContainerElement *)0x0) {
                  FVar33.Data = local_168.Data;
                }
                for (iVar16 = *(int *)(FVar33.Data +
                                      (ulonglong)(local_160 - 1 & (uVar14 >> 0x10 ^ uVar14)) * 4);
                    iVar16 != -1; iVar16 = *(int *)(local_1a8._0_8_ + (longlong)iVar16 * 0x10 + 8))
                {
                  if (*(FConstraintTickFunction **)(local_1a8._0_8_ + (longlong)iVar16 * 0x10) ==
                      pFVar25) goto LAB_1464a77ac;
                }
              }
              if (local_174 == 0) {
                iVar16 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10,8,1,(ForAnyElementType *)local_1a8,(int *)(local_1a8 + 8),
                                    (int *)(local_1a8 + 0xc));
                iVar15 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                   ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),1);
                FVar30 = (ForElementType<unsigned_int>)((longlong)local_1a8 + 0x10);
                if (local_188 != (ForElementType<unsigned_int>)0x0) {
                  FVar30 = local_188;
                }
                bVar29 = (byte)iVar15 & 0x1f;
                if (iVar15 < 0) {
                  iVar15 = iVar15 + 0x1f;
                  bVar29 = bVar29 - 0x20;
                }
                puVar1 = (uint *)((longlong)FVar30 + (longlong)(iVar15 >> 5) * 4);
                *puVar1 = *puVar1 & ~(1 << (bVar29 & 0x1f));
                iVar15 = local_178;
              }
              else {
                local_174 = local_174 + -1;
                iVar15 = *(int *)(local_1a8._0_8_ + (longlong)local_178 * 0x10 + 4);
                iVar16 = local_178;
                if (local_174 != 0) {
                  *(undefined4 *)(local_1a8._0_8_ + (longlong)iVar15 * 0x10) = 0xffffffff;
                }
              }
              local_178 = iVar15;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_1a8,&local_278,iVar16);
              TVar22.DebugPtr = TVar37.DebugPtr;
              if (local_278.Pointer != (UTransformableHandle *)0x0) {
                *(FConstraintTickFunction **)local_278.Pointer = pFVar25;
                *(undefined4 *)((longlong)local_278.Pointer + 8) = 0xffffffff;
                TVar22 = (TObjectPtr<UTransformableHandle>_u_0)local_278.Pointer;
              }
              uVar39 = (TVar22.DebugPtr)->_padding_;
              uVar41 = local_1a8._8_4_ - local_174;
              uVar14 = ((uint)(uVar39 >> 0x14) & 0xffff ^ (uint)(uVar39 >> 4)) * -0x7a143595;
              uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
              uVar14 = uVar14 >> 0x10 ^ uVar14;
              if (uVar41 == 1) {
LAB_1464a7457:
                if (uVar41 < 4) goto LAB_1464a74a7;
                uVar39 = (ulonglong)((uVar41 >> 1) + 7) * 2 + 1;
                lVar35 = 0x3f;
                if (uVar39 != 0) {
                  for (; uVar39 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                  }
                }
                uVar32 = 1 << ((byte)lVar35 & 0x1f);
              }
              else {
                if (uVar41 != 0) {
                  FVar33.Data = local_170;
                  if (local_168.Data != (FScriptContainerElement *)0x0) {
                    FVar33.Data = local_168.Data;
                  }
                  for (iVar16 = *(int *)(FVar33.Data + (ulonglong)(local_160 - 1 & uVar14) * 4);
                      iVar16 != -1; iVar16 = *(int *)(local_1a8._0_8_ + (longlong)iVar16 * 0x10 + 8)
                      ) {
                    if (*(ulonglong *)(local_1a8._0_8_ + (longlong)iVar16 * 0x10) == uVar39) {
                      if (iVar16 != -1) {
                        *(ulonglong *)(local_1a8._0_8_ + (longlong)iVar16 * 0x10) = uVar39;
                        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::RemoveAtUninitialized
                                  ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                    *)local_1a8,local_278.Index,1);
                        goto LAB_1464a7737;
                      }
                      break;
                    }
                  }
                  goto LAB_1464a7457;
                }
LAB_1464a74a7:
                uVar32 = 1;
              }
              if (((int)uVar41 < 1) || ((int)uVar32 <= (int)local_160)) {
                uVar14 = local_160 - 1 & uVar14;
                *(uint *)((longlong)&(TVar22.DebugPtr)->_padding_ + 4) = uVar14;
                FVar33.Data = local_170;
                if (local_168.Data != (FScriptContainerElement *)0x0) {
                  FVar33.Data = local_168.Data;
                }
                lVar35 = (longlong)(int)(local_160 - 1 & uVar14);
                *(undefined4 *)&(TVar22.DebugPtr)->_padding_ =
                     *(undefined4 *)(FVar33.Data + lVar35 * 4);
                *(int *)(FVar33.Data + lVar35 * 4) = local_278.Index;
              }
              else {
                local_160 = uVar32;
                if (local_168.Data != (FScriptContainerElement *)0x0) {
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_168,0,0,4);
                }
                if (uVar32 != 0) {
                  uVar14 = uVar32;
                  if (uVar32 < 2) {
                    if (local_168.Data != (FScriptContainerElement *)0x0) {
                      uVar14 = 0;
                      goto LAB_1464a74fd;
                    }
                  }
                  else {
LAB_1464a74fd:
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_168,0,uVar14,4);
                  }
                  if (0 < (int)uVar32) {
                    uVar39 = (ulonglong)uVar32;
                    TVar22.DebugPtr = TVar37.DebugPtr;
                    do {
                      FVar33.Data = local_170;
                      if (local_168.Data != (FScriptContainerElement *)0x0) {
                        FVar33.Data = local_168.Data;
                      }
                      uVar31 = (ulonglong)TVar22.DebugPtr & (longlong)(int)uVar32 - 1U;
                      TVar22.DebugPtr =
                           (UTransformableHandle *)((longlong)&(TVar22.DebugPtr)->_padding_ + 1);
                      *(undefined4 *)(FVar33.Data + uVar31 * 4) = 0xffffffff;
                      uVar39 = uVar39 - 1;
                    } while (uVar39 != 0);
                  }
                }
                if (local_160 != 0) {
                  pTStack_358 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10);
                  local_360 = 0;
                  uStack_35c = 1;
                  uStack_34c = 0;
                  if (local_180 != 0) {
                    FVar30 = (ForElementType<unsigned_int>)((longlong)local_1a8 + 0x10);
                    if (local_188 != (ForElementType<unsigned_int>)0x0) {
                      FVar30 = local_188;
                    }
                    uVar14 = *(uint *)FVar30;
                    TVar22.DebugPtr = TVar37.DebugPtr;
                    TVar38.DebugPtr = TVar37.DebugPtr;
                    while (uVar14 == 0) {
                      TVar38._0_4_ = TVar38._0_4_ + 0x20;
                      TVar38._4_4_ = 0;
                      iVar16 = TVar22._0_4_;
                      TVar22._0_4_ = iVar16 + 1;
                      TVar22._4_4_ = 0;
                      uStack_34c = (ulonglong)TVar38._0_4_ << 0x20;
                      local_360 = TVar22._0_4_;
                      if ((int)(local_180 + -1 + (local_180 + -1 >> 0x1f & 0x1fU)) >> 5 <
                          (int)TVar22._0_4_) {
                        uStack_34c = CONCAT44(TVar38._0_4_,local_180);
                        goto LAB_1464a761c;
                      }
                      uVar14 = ((uint *)((longlong)FVar30 + 4))[iVar16];
                    }
                    uStack_35c = -uVar14 & uVar14;
                    uVar39 = (ulonglong)uStack_35c * 2 + 1;
                    lVar35 = 0x3f;
                    if (uVar39 != 0) {
                      for (; uVar39 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                      }
                    }
                    iVar16 = (int)lVar35 + -1 + TVar38._0_4_;
                    if (local_180 < iVar16) {
                      iVar16 = local_180;
                    }
                    uStack_34c._4_4_ = (int)((ulonglong)uStack_34c >> 0x20);
                    uStack_34c = CONCAT44(uStack_34c._4_4_,iVar16);
                  }
LAB_1464a761c:
                  local_350 = 0xffffffff;
                  local_308 = (longlong *)local_1a8;
                  local_300._padding_ = CONCAT44(uStack_35c,local_360);
                  local_300.UnvisitedBitMask = 0xffffffff;
                  local_300.CurrentBitIndex = (int)uStack_34c;
                  local_300.BaseBitIndex = uStack_34c._4_4_;
                  local_300._28_4_ = uStack_344;
                  local_300.Array = pTStack_358;
                  if ((int)uStack_34c < local_180) {
                    do {
                      puVar40 = (ulonglong *)
                                ((longlong)local_300.CurrentBitIndex * 0x10 + *local_308);
                      uVar14 = ((uint)(*puVar40 >> 0x14) & 0xffff ^ (uint)(*puVar40 >> 4)) *
                               -0x7a143595;
                      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
                      uVar14 = (uVar14 >> 0x10 ^ uVar14) & local_160 - 1;
                      *(uint *)((longlong)puVar40 + 0xc) = uVar14;
                      FVar33.Data = local_170;
                      if (local_168.Data != (FScriptContainerElement *)0x0) {
                        FVar33.Data = local_168.Data;
                      }
                      lVar35 = (longlong)(int)(local_160 - 1 & uVar14);
                      *(undefined4 *)(puVar40 + 1) = *(undefined4 *)(FVar33.Data + lVar35 * 4);
                      *(int *)(FVar33.Data + lVar35 * 4) = local_300.CurrentBitIndex;
                      local_300.UnvisitedBitMask =
                           local_300.UnvisitedBitMask & ~local_300._padding_._4_4_;
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_300);
                    } while (local_300.CurrentBitIndex < (local_300.Array)->NumBits);
                  }
                }
              }
LAB_1464a7737:
              iVar16 = (int)pFVar25->_padding_;
              this = (FWeakObjectPtr *)pFVar25->_padding_;
              pFVar36 = this + (longlong)iVar16 * 2;
              while( true ) {
                if ((int)pFVar25->_padding_ != iVar16) {
                  `TCheckedPointerIterator<FTickPrerequisite_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_3cf);
                }
                <Var34.InSecondary = local_3e8.InSecondary;
                TVar22 = local_3a8;
                if (this == pFVar36) goto LAB_1464a77ac;
                bVar13 = FWeakObjectPtr::IsValid(this,true,false);
                TVar22.DebugPtr = TVar37.DebugPtr;
                if (bVar13) {
                  TVar22.DebugPtr = ((TObjectPtr<UTransformableHandle>_u_0 *)(this + 1))->DebugPtr;
                }
                bVar13 = FConstraintCycleChecker::HasPrerequisiteDependencyWith
                                   (local_3e8.InSecondary,(FTickFunction *)TVar22.DebugPtr,
                                    (TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator>
                                     *)local_1a8);
                if (bVar13) break;
                this = this + 2;
              }
            }
          }
          local_98.HashSize = 0;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FTickFunction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FTickFunction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98.Elements);
          local_160 = 0;
          if (local_168.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data);
          }
          TSparseArray<TSparseSetElement<FTickFunction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FTickFunction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<FTickFunction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_1a8);
          uVar39 = (ulonglong)(uint)local_328.ArrayNum;
          FVar33.Data = (FScriptContainerElement *)((longlong)local_3b0 + 8);
          uVar31 = (ulonglong)local_3cc;
        }
        if ((FWeakObjectPtr *)local_328.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
          FMemory::Free(local_328.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// BuildSelfDependencies @ 1464a7e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FDependencyBuilder::BuildSelfDependencies(UWorld *param_1,UTickableTransformConstraint *param_2)

{
  int iVar1;
  UTransformableHandle *pUVar2;
  UTransformableHandle *pUVar3;
  UTransformableHandle *pUVar4;
  int iVar5;
  char cVar6;
  FWeakObjectPtr *pFVar7;
  UObject *pUVar8;
  UTickableConstraint *pUVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  ForAnyElementType this;
  undefined1 local_res10 [8];
  FWeakObjectPtr *local_res18;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [16];
  FString local_68;
  FString local_58;
  <lambda_1> local_48;
  
  if ((param_2 != (UTickableTransformConstraint *)0x0) &&
     (cVar6 = (**(code **)(param_2->_padding_ + 0x2c0))(param_2,1), cVar6 != '\0')) {
    pUVar2 = (param_2->ParentTRSHandle).field0_0x0.DebugPtr;
    pUVar3 = (param_2->ChildTRSHandle).field0_0x0.DebugPtr;
    if ((pUVar2 == (UTransformableHandle *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
      pUVar8 = (UObject *)0x0;
    }
    else {
      pUVar4 = (param_2->ParentTRSHandle).field0_0x0.DebugPtr;
      pFVar7 = (FWeakObjectPtr *)(**(code **)(pUVar4->_padding_ + 0x330))(pUVar4,local_res10);
      pUVar8 = FWeakObjectPtr::Get(pFVar7);
    }
    pUVar4 = (param_2->ChildTRSHandle).field0_0x0.DebugPtr;
    if ((pUVar4 == (UTransformableHandle *)0x0) || (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0)) {
      local_78._8_8_ = (UObject *)0x0;
    }
    else {
      pUVar4 = (param_2->ChildTRSHandle).field0_0x0.DebugPtr;
      pFVar7 = (FWeakObjectPtr *)(**(code **)(pUVar4->_padding_ + 0x330))(pUVar4,local_res10);
      local_78._8_8_ = FWeakObjectPtr::Get(pFVar7);
    }
    if ((pUVar8 != (UObject *)0x0) && (pUVar8 == (UObject *)local_78._8_8_)) {
      ::Singleton.World = param_1;
      local_78._0_8_ = param_2;
      local_48.InConstraint = param_2;
      local_48.SelfTarget = (UObject *)local_78._8_8_;
      FConstraintsManagerController::
      GetConstraintsByPredicate<_FDependencyBuilder::BuildSelfDependencies_::__l2::<lambda_1>_>
                (&::Singleton,&local_88,&local_48,false);
      iVar5 = local_88.ArrayNum;
      uVar11 = (ulonglong)local_88.ArrayNum;
      local_res18 = (FWeakObjectPtr *)(local_88.AllocatorInstance.Data + uVar11 * 8);
      this.Data = local_88.AllocatorInstance.Data;
      while( true ) {
        pFVar7 = local_res18;
        if ((uint)uVar11 != iVar5) {
          `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((FWeakObjectPtr *)this.Data == pFVar7) break;
        pUVar9 = (UTickableConstraint *)FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        if (pUVar9 == (UTickableConstraint *)0x0) {
LAB_1464a7f8e:
          pUVar9 = (UTickableConstraint *)0x0;
        }
        else {
          pUVar10 = UTickableTransformConstraint::StaticClass();
          iVar1 = (int)pUVar10->_padding_;
          if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar10->_padding_)) goto LAB_1464a7f8e;
        }
        cVar6 = (**(code **)(pUVar2->_padding_ + 0x338))(pUVar2,pUVar9[1]._padding_);
        if (cVar6 == '\0') {
          cVar6 = (**(code **)(pUVar3->_padding_ + 0x338))(pUVar3,pUVar9[1]._padding_);
          if (cVar6 != '\0') {
            ::Singleton.World = param_1;
            FConstraintsManagerController::SetConstraintsDependencies
                      (&::Singleton,&pUVar9->ConstraintID,
                       (FGuid *)((longlong)&param_2->_padding_ + 4));
            pUVar4 = (UTransformableHandle *)pUVar9[1]._padding_;
            ::FString::FString(&local_68,SelfDependencyDesc);
            DependencyLocals::LogDependency
                      (&local_68,pUVar4,pUVar3,pUVar9,(UTickableConstraint *)param_2);
            FVar12.Data = local_68.Data.AllocatorInstance.Data;
            goto LAB_1464a8061;
          }
        }
        else {
          ::Singleton.World = param_1;
          FConstraintsManagerController::SetConstraintsDependencies
                    (&::Singleton,&pUVar9->ConstraintID,(FGuid *)((longlong)&param_2->_padding_ + 4)
                    );
          pUVar4 = (UTransformableHandle *)pUVar9[1]._padding_;
          ::FString::FString((FString *)local_78,SelfDependencyDesc);
          DependencyLocals::LogDependency
                    ((FString *)local_78,pUVar4,pUVar2,pUVar9,(UTickableConstraint *)param_2);
          FVar12.Data = (FScriptContainerElement *)local_78._0_8_;
LAB_1464a8061:
          if ((UTickableTransformConstraint *)FVar12.Data != (UTickableTransformConstraint *)0x0) {
            FMemory::Free(FVar12.Data);
          }
        }
        cVar6 = (**(code **)(*(longlong *)pUVar9[1]._padding_ + 0x338))
                          ((longlong *)pUVar9[1]._padding_,pUVar3);
        if (cVar6 == '\0') {
          cVar6 = (**(code **)(*(longlong *)pUVar9[1]._padding_ + 0x338))
                            ((longlong *)pUVar9[1]._padding_,pUVar3);
          if (cVar6 != '\0') {
            ::Singleton.World = param_1;
            FConstraintsManagerController::SetConstraintsDependencies
                      (&::Singleton,(FGuid *)((longlong)&param_2->_padding_ + 4),
                       &pUVar9->ConstraintID);
            pUVar4 = (UTransformableHandle *)pUVar9[1]._padding_;
            ::FString::FString((FString *)&local_48,SelfDependencyDesc);
            DependencyLocals::LogDependency
                      ((FString *)&local_48,pUVar3,pUVar4,(UTickableConstraint *)param_2,pUVar9);
            FVar12.Data = (FScriptContainerElement *)local_48.InConstraint;
            goto LAB_1464a813b;
          }
        }
        else {
          ::Singleton.World = param_1;
          FConstraintsManagerController::SetConstraintsDependencies
                    (&::Singleton,(FGuid *)((longlong)&param_2->_padding_ + 4),&pUVar9->ConstraintID
                    );
          pUVar4 = (UTransformableHandle *)pUVar9[1]._padding_;
          ::FString::FString(&local_58,SelfDependencyDesc);
          DependencyLocals::LogDependency
                    (&local_58,pUVar3,pUVar4,(UTickableConstraint *)param_2,pUVar9);
          FVar12.Data = local_58.Data.AllocatorInstance.Data;
LAB_1464a813b:
          if ((UTickableTransformConstraint *)FVar12.Data != (UTickableTransformConstraint *)0x0) {
            FMemory::Free(FVar12.Data);
          }
        }
        uVar11 = (ulonglong)(uint)local_88.ArrayNum;
        this.Data = this.Data + 8;
      }
      if ((FWeakObjectPtr *)local_88.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogDependencies @ 1464b9820

bool __cdecl FDependencyBuilder::LogDependencies(void)

{
  return DependencyLocals::bDebugDependencies;
}

