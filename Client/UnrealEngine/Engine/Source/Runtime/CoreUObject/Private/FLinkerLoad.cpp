// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 156

// DeferExportCreation @ 141e94d50

bool __thiscall FLinkerLoad::DeferExportCreation(FLinkerLoad *this,int param_1,UObject *param_2)

{
  longlong *plVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  ELoaderType EVar8;
  int iVar9;
  UClass *this_00;
  UClass *pUVar10;
  FName FVar11;
  ULinkerPlaceholderExportObject *pUVar12;
  FLinkerLoad *pFVar13;
  FTlsAutoCleanup *pFVar14;
  TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_> *pTVar15;
  ForAnyElementType FVar16;
  longlong *plVar17;
  byte bVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 local_res8 [8];
  int local_res10;
  undefined1 local_res20 [8];
  FName local_f8;
  ULinkerPlaceholderExportObject *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  UClass *local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  code *local_70;
  undefined1 *local_68;
  undefined1 local_60 [40];
  
  uVar19 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  local_res10 = param_1;
  if ((uVar19 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  lVar20 = (longlong)param_1 * 0x68 + this->_padding_;
  local_d8 = lVar20;
  bVar6 = FBlueprintSupport::UseDeferredDependencyLoading();
  if ((((bVar6) && (bVar6 = FBlueprintSupport::IsDeferredExportCreationDisabled(), !bVar6)) &&
      (*(longlong *)(lVar20 + 0x40) == 0)) &&
     (this_00 = GetExportLoadClass(this,param_1), this_00 != (UClass *)0x0)) {
    if (param_2 != (UObject *)0x0) {
      pUVar10 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
      iVar9 = (int)pUVar10->_padding_;
      if ((iVar9 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar10->_padding_)) {
        local_c0 = (FName)this_00->_padding_;
        ::FName::ToString(&local_c0,&local_a0);
        ::FString::PrintfImpl(&local_b0,L"PLACEHOLDER-INST_of_%s");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_b0.Data.ArrayNum != 0) {
          FVar16.Data = local_b0.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_d0,(wchar_t *)FVar16.Data);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        FVar11 = (FName)Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
        local_d0 = MakeUniqueObjectName
                             ((UObject *)local_60,(UClass *)param_2,FVar11,
                              local_d0.ComparisonIndex.Value);
        local_d0 = *(FName *)local_d0;
        pUVar12 = NewObject<ULinkerPlaceholderExportObject>
                            (param_2,(UClass *)FVar11,local_d0,RF_Transient|RF_Public,(UObject *)0x0
                             ,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        UObject::SetLinker((UObject *)pUVar12,this,param_1,false,false);
        if ((param_1 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ExportIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x6d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        *(int *)&pUVar12->field_0x30 = param_1 + 1;
        *(ULinkerPlaceholderExportObject **)(lVar20 + 0x40) = pUVar12;
        FLinkerPlaceholderBase::SetupPlaceholderSubobject
                  ((FLinkerPlaceholderBase *)(param_2 + 1),pUVar12);
        goto LAB_141e94f57;
      }
    }
    if ((this_00->ClassFlags >> 7 & 1) == 0) {
      uVar19 = *(uint *)(lVar20 + 0x1c) >> 4;
      local_f8 = (FName)(CONCAT44(local_f8.Number,uVar19) & 0xffffffffffffff01);
      bVar18 = (byte)uVar19 & 1;
      if ((uVar19 & 1) != 0) {
        local_e8 = (longlong *)0x0;
        bVar6 = false;
        local_e0 = 0;
        (**(code **)(this_00->_padding_ + 0x3f8))(this_00,&local_e8);
        iVar9 = (int)local_e0;
        plVar1 = local_e8 + (int)local_e0;
        plVar17 = local_e8;
        while( true ) {
          if ((int)local_e0 != iVar9) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          param_1 = local_res10;
          if (plVar17 == plVar1) break;
          lVar20 = *plVar17;
          if (lVar20 != 0) {
            pUVar10 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
            iVar2 = (int)pUVar10->_padding_;
            if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar10->_padding_)) {
              pUVar10 = Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister();
              iVar2 = (int)pUVar10->_padding_;
              if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < iVar2) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
                  &pUVar10->_padding_)) {
                pUVar10 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
                iVar2 = (int)pUVar10->_padding_;
                if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < iVar2) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
                    &pUVar10->_padding_)) goto LAB_141e9504d;
              }
            }
            bVar6 = true;
          }
LAB_141e9504d:
          plVar17 = plVar17 + 1;
        }
        if (((this->LoadFlags & 0x100000) == 0) || (!bVar6)) {
          if (local_e8 == (longlong *)0x0) {
            return false;
          }
          FMemory::Free(local_e8);
          return false;
        }
        this->DeferredCDOIndex = local_res10;
        if (local_e8 != (longlong *)0x0) {
          FMemory::Free(local_e8);
        }
        lVar20 = local_d8;
        bVar18 = (byte)local_f8.ComparisonIndex.Value;
      }
      pUVar10 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
      iVar9 = (int)pUVar10->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar10->_padding_)) {
        pFVar13 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_00);
        pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
        if ((pFVar13 == (FLinkerLoad *)0x0) ||
           ((pFVar13->DeferredCDOIndex == -1 && (pFVar13->bForceBlueprintFinalization == false)))) {
          if (pUVar3 == (UObject *)0x0) {
            return false;
          }
          if ((*(uint *)&pUVar3->field_0x8 >> 0x15 & 1) != 0) {
            return false;
          }
          if ((*(uint *)&pUVar3->field_0x8 >> 0x13 & 1) == 0) {
            return false;
          }
        }
      }
      else {
        UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_00);
      }
      if (((((this->LoadFlags >> 0x14 & 1) != 0) || (this->DeferredCDOIndex != -1)) ||
          (this->bForceBlueprintFinalization != false)) && ((this->LoadFlags & 8) == 0)) {
        pUVar10 = (UClass *)this->_padding_;
        FVar11 = (FName)Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
        local_f8 = (FName)this_00->_padding_;
        ::FName::ToString(&local_f8,&local_80);
        ::FString::PrintfImpl(&local_90,L"PLACEHOLDER-INST_of_%s");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_90.Data.ArrayNum != 0) {
          FVar16.Data = local_90.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_c8,(wchar_t *)FVar16.Data);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        local_c8 = MakeUniqueObjectName
                             ((UObject *)(local_60 + 8),pUVar10,FVar11,
                              local_c8.ComparisonIndex.Value);
        local_c8 = *(FName *)local_c8;
        pUVar12 = NewObject<ULinkerPlaceholderExportObject>
                            ((UObject *)pUVar10,(UClass *)FVar11,local_c8,RF_Transient|RF_Public,
                             (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        if ((param_1 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ExportIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x6d,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        *(int *)&pUVar12->field_0x30 = param_1 + 1;
        UObject::SetLinker((UObject *)pUVar12,this,param_1,false,false);
        local_68 = local_res20;
        local_70 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<FResolvingExportTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        local_f0 = pUVar12;
        local_b8 = this_00;
        pFVar14 = FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_70,
                             &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FResolvingExportTracker>::GetTlsSlot(void)'
                              ::__l2::TlsSlot);
        uVar19 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4)) *
                 -0x7a143595;
        uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
        pTVar15 = TMapBase<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<UClass_*_const_&>
                            ((TMapBase<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,0>_>
                              *)(pFVar14 + 0xc),uVar19 >> 0x10 ^ uVar19,&local_b8);
        pFVar4 = (pTVar15->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_f0) &&
            ((FScriptContainerElement *)&local_f0 < pFVar4 + (longlong)pTVar15->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar9 = pTVar15->ArrayNum;
        if (iVar9 == pTVar15->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
        }
        pTVar15->ArrayNum = iVar9 + 1;
        *(ULinkerPlaceholderExportObject **)
         ((pTVar15->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_f0;
        *(ULinkerPlaceholderExportObject **)(lVar20 + 0x40) = pUVar12;
        local_a0.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
        if (bVar18 != 0) {
          UClass::SetDefaultObject(this_00,(UObject *)pUVar12);
          local_a0.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
        }
LAB_141e94f57:
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        return true;
      }
      bVar6 = IsExportBeingResolved(this,param_1);
      FScopedResolvingExportTracker::FScopedResolvingExportTracker
                ((FScopedResolvingExportTracker *)(local_60 + 0x10),this,param_1);
      if ((!bVar6) || (EVar8 = (*GetLoaderType)(), EVar8 != ZenLoader)) {
        ForceRegenerateClass(this,this_00);
      }
      FScopedResolvingExportTracker::~FScopedResolvingExportTracker
                ((FScopedResolvingExportTracker *)(local_60 + 0x10));
    }
  }
  return false;
}

// DeferPotentialCircularImport @ 141e957f0

bool __thiscall FLinkerLoad::DeferPotentialCircularImport(FLinkerLoad *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FName FVar7;
  FString *pFVar8;
  size_t sVar9;
  UObject *pUVar10;
  uint uVar11;
  FName *this_00;
  UClass *pUVar12;
  uint uVar13;
  wchar_t *pwVar14;
  uint uVar15;
  FScriptContainerElement *local_118;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  undefined4 uStack_fc;
  TStringView<wchar_t> local_f8;
  FString local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8 [8];
  
  bVar3 = FBlueprintSupport::UseDeferredDependencyLoading();
  if (!bVar3) {
    return false;
  }
  pUVar12 = (UClass *)0x0;
  uVar13 = 0;
  uVar11 = uVar13;
  if (param_1 < (int)this->_padding_) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  this_00 = (FName *)(this->_padding_ + (longlong)param_1 * 0x38);
  FVar7 = this_00[5];
  if (FVar7 != (FName)0x0) {
    pUVar5 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar7 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      FVar7 = this_00[5];
      pUVar5 = pUVar12;
      if (FVar7 != (FName)0x0) {
        pUVar6 = Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)((longlong)FVar7 + 0x10) + 0x38)) &&
           (pUVar5 = (UClass *)0x0,
           (longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)((longlong)FVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar6->_padding_)) {
          pUVar5 = (UClass *)((longlong)FVar7 + 0xe8);
          goto LAB_141e95911;
        }
      }
    }
    else {
      pUVar5 = (UClass *)((longlong)FVar7 + 0x208);
LAB_141e95911:
      bVar3 = true;
      if (pUVar5 == (UClass *)0x0) goto LAB_141e95d15;
      if ((this->LoadFlags & 0x100000) == 0) {
        uVar11 = this->DeferredCDOIndex;
        if (uVar11 != 0xffffffff) {
          uVar15 = uVar13;
          if ((int)uVar11 < (int)this->_padding_) {
            uVar15 = ~uVar11 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          iVar1 = *(int *)((longlong)(int)uVar11 * 0x68 + 0xc + this->_padding_);
          if (0 < iVar1) {
            uVar11 = iVar1 - 1;
            if ((int)uVar11 < (int)this->_padding_) {
              uVar13 = ~uVar11 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pUVar12 = *(UClass **)((longlong)(int)uVar11 * 0x68 + 0x40 + this->_padding_);
            if (pUVar12 != (UClass *)0x0) {
              pUVar6 = Z_Construct_UClass_UClass_NoRegister();
              iVar1 = (int)pUVar6->_padding_;
              if ((iVar1 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar1 * 8)
                  == &pUVar6->_padding_)) goto LAB_141e95a26;
            }
            pUVar12 = (UClass *)0x0;
          }
        }
LAB_141e95a26:
        ResolveDependencyPlaceholder(this,(FLinkerPlaceholderBase *)pUVar5,pUVar12,(FName)0x0);
        return false;
      }
    }
    bVar3 = pUVar5 == (UClass *)0x0;
    goto LAB_141e95d15;
  }
  if (((this->LoadFlags & 0x100000) != 0) && (bVar3 = IsImportNative(this,param_1), !bVar3)) {
    if (PRIVATE_GIsRunningCommandlet == false) {
      FVar7 = (FName)FindExistingImportObject
                               (param_1,(TArray<FObjectImport,TSizedDefaultAllocator<32>_> *)
                                        &this->_padding_);
      this_00[5] = FVar7;
      if (FVar7 != (FName)0x0) {
        return true;
      }
    }
    pFVar8 = ::FName::ToString((FName *)&this_00[1].Number,&local_e8);
    pwVar14 = L"";
    uVar11 = 0;
    if ((pFVar8->Data).ArrayNum == 0) {
      local_118 = (FScriptContainerElement *)0x15060d16c;
LAB_141e95ac8:
      sVar9 = wcslen((wchar_t *)local_118);
      uVar13 = (uint)sVar9;
    }
    else {
      local_118 = (pFVar8->Data).AllocatorInstance.Data;
      uVar13 = uVar11;
      if (local_118 != (FScriptContainerElement *)0x0) goto LAB_141e95ac8;
    }
    pUVar12 = Z_Construct_UClass_UPackage_NoRegister();
    local_f8._12_4_ = uStack_10c;
    local_f8.Size = uVar13;
    local_f8.DataPtr = (wchar_t *)local_118;
    pUVar10 = StaticFindObject(pUVar12,(UObject *)0x0,&local_f8,None);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (pUVar10 != (UObject *)0x0) {
      pFVar8 = ::FName::ToString((FName *)&this_00[2].Number,&local_c8);
      if ((pFVar8->Data).ArrayNum == 0) {
        local_108 = (FScriptContainerElement *)0x15060d16c;
LAB_141e95b3d:
        sVar9 = wcslen((wchar_t *)local_108);
        uVar13 = (uint)sVar9;
      }
      else {
        local_108 = (pFVar8->Data).AllocatorInstance.Data;
        uVar13 = uVar11;
        if (local_108 != (FScriptContainerElement *)0x0) goto LAB_141e95b3d;
      }
      pUVar12 = Z_Construct_UClass_UClass_NoRegister();
      local_d8._12_4_ = uStack_fc;
      local_d8.Size = uVar13;
      local_d8.DataPtr = (wchar_t *)local_108;
      pUVar12 = (UClass *)StaticFindObject(pUVar12,pUVar10,&local_d8,None);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (pUVar12 != (UClass *)0x0) {
        if ((pUVar12->ClassFlags >> 0x11 & 1) == 0) {
          pUVar5 = Z_Construct_UClass_UFunction_NoRegister();
          if (pUVar5 != (UClass *)0x0) {
            iVar1 = (int)pUVar5->_padding_;
            if (((int)pUVar12->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar5->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && ((int)this_00[1].ComparisonIndex.Value < 0)) {
              uVar13 = this_00[1].ComparisonIndex.Value;
              uVar15 = ~uVar13;
              bVar3 = DeferPotentialCircularImport(this,uVar15);
              if (bVar3) {
                if ((int)uVar15 < (int)this->_padding_) {
                  uVar11 = uVar13 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                pUVar10 = *(UObject **)((longlong)(int)uVar15 * 0x38 + 0x28 + this->_padding_);
                if (pUVar10 != (UObject *)0x0) {
                  pUVar5 = Z_Construct_UClass_UClass_NoRegister();
                  iVar1 = (int)pUVar5->_padding_;
                  if ((iVar1 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) +
                       (longlong)iVar1 * 8) == &pUVar5->_padding_)) {
                    pFVar8 = ::FName::ToString(this_00,local_a8);
                    if ((pFVar8->Data).ArrayNum != 0) {
                      pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
                    }
                    FVar7 = (FName)MakeImportPlaceholder<ULinkerPlaceholderFunction>
                                             (pUVar10,pUVar12,pwVar14,param_1);
                    this_00[5] = FVar7;
                    if (local_a8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a8[0].Data.AllocatorInstance.Data);
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pFVar8 = ::FName::ToString(this_00,&local_b8);
          if ((pFVar8->Data).ArrayNum != 0) {
            pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          FVar7 = (FName)MakeImportPlaceholder<ULinkerPlaceholderClass>
                                   ((UObject *)this->_padding_,pUVar12,pwVar14,param_1);
          this_00[5] = FVar7;
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  bVar3 = this_00[5] == (FName)0x0;
LAB_141e95d15:
  return !bVar3;
}

// FinalizeBlueprint @ 141e9a420

void __thiscall FLinkerLoad::FinalizeBlueprint(FLinkerLoad *this,UClass *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  UClass *this_00;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FLinkerLoad *pFVar8;
  UObjectBase *this_01;
  FScriptContainerElement *pFVar9;
  UObject *pUVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  
  bVar6 = FBlueprintSupport::UseDeferredDependencyLoading();
  if (!bVar6) {
    return;
  }
  uVar1 = this->LoadFlags;
  this->LoadFlags = uVar1 & 0xffefffff;
  this_00 = (UClass *)param_1->_padding_;
  if ((this_00 != (UClass *)0x0) &&
     (pFVar8 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_00),
     pFVar8 != (FLinkerLoad *)0x0)) {
    uVar2 = pFVar8->DeferredCDOIndex;
    if (uVar2 == 0xffffffff) {
      if (pFVar8->bForceBlueprintFinalization == false) goto LAB_141e9a568;
      this_01 = (UObjectBase *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    }
    else {
      uVar7 = 0;
      if ((int)uVar2 < (int)pFVar8->_padding_) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = *(UObjectBase **)((longlong)(int)uVar2 * 0x68 + 0x40 + pFVar8->_padding_);
    }
    if (((this_01 != (UObjectBase *)0x0) &&
        ((this_01->ObjectFlags & (RF_LoadCompleted|RF_NeedLoad)) == RF_NoFlags)) &&
       (bVar6 = FBlueprintSupport::IsDeferredDependencyPlaceholder((UObject *)this_01), !bVar6)) {
      if ((GEventDrivenLoaderEnabled != false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!GEventDrivenLoaderEnabled || !(1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                             ,0x7bb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UObjectBase::AtomicallySetFlags(this_01,RF_NeedLoad);
    }
    FinalizeBlueprint(pFVar8,this_00);
  }
LAB_141e9a568:
  ResolveAllImports(this);
  iVar3 = (param_1->Interfaces).ArrayNum;
  pFVar9 = (param_1->Interfaces).AllocatorInstance.Data;
  pFVar11 = pFVar9 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((param_1->Interfaces).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FImplementedInterface,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar9 == pFVar11) break;
    if (((*(UObjectBaseUtility **)pFVar9 != (UObjectBaseUtility *)0x0) &&
        (pFVar8 = UObjectBaseUtility::GetLinker(*(UObjectBaseUtility **)pFVar9),
        pFVar8 != (FLinkerLoad *)0x0)) &&
       ((pFVar8->DeferredCDOIndex != -1 || (pFVar8->bForceBlueprintFinalization != false)))) {
      bVar6 = FUnresolvedStructTracker::IsAssociatedStructUnresolved(pFVar8);
      if (bVar6) {
        ResolveDeferredDependencies(pFVar8,*(UStruct **)pFVar9);
      }
      FinalizeBlueprint(pFVar8,*(UClass **)pFVar9);
    }
    pFVar9 = pFVar9 + 0x10;
  }
  ResolveDeferredExports(this,param_1);
  uVar2 = this->DeferredCDOIndex;
  if (uVar2 == 0xffffffff) {
    if (this->bForceBlueprintFinalization == false) goto LAB_141e9a6dd;
    pUVar10 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  else {
    uVar7 = 0;
    if ((int)uVar2 < (int)this->_padding_) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar10 = *(UObject **)((longlong)(int)uVar2 * 0x68 + 0x40 + this->_padding_);
  }
  this->bForceBlueprintFinalization = false;
  this->DeferredCDOIndex = -1;
  FStructScriptLoader::ResolveDeferredScriptLoads(this);
  if (param_1->bCooked == false) {
    pUVar4 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
    bVar6 = RegenerateBlueprintClass(this,param_1,pUVar10);
    if ((bVar6) && (pUVar4 == (param_1->ClassDefaultObject).field0_0x0.DebugPtr)) {
      UClass::SetDefaultObject(param_1,pUVar10);
    }
  }
LAB_141e9a6dd:
  this->LoadFlags = uVar1;
  return;
}

// FindCDOExportIndex @ 141e9abe0

int __thiscall FLinkerLoad::FindCDOExportIndex(FLinkerLoad *this,UClass *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar4 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)param_1);
  uVar6 = 0;
  if (0 < (int)this->_padding_) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if ((((*(byte *)(lVar7 + 0x1c + this->_padding_) & 0x10) != 0) &&
          (iVar1 = *(int *)(lVar7 + 0xc + this->_padding_), 0 < iVar1)) && (iVar1 + -1 == iVar4)) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x68;
    } while ((int)uVar6 < (int)this->_padding_);
  }
  return -1;
}

// FindImport @ 141e9b0b0

UObject * __thiscall
FLinkerLoad::FindImport(FLinkerLoad *this,UClass *param_1,UObject *param_2,wchar_t *param_3)

{
  size_t sVar1;
  UObject *pUVar2;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_3);
    local_18.Size = (int)sVar1;
  }
  pUVar2 = StaticFindObject(param_1,param_2,&local_18,None);
  return pUVar2;
}

// FindImportFast @ 141e9b110

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
FLinkerLoad::FindImportFast(UClass *param_1,UObject *param_2,FName param_3,bool param_4)

{
  UObject *pUVar1;
  FString *pFVar2;
  size_t sVar3;
  FName local_res18 [2];
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_res18[0] = param_3;
  if (!param_4) {
    pUVar1 = StaticFindObjectFast(param_1,param_2,param_3,None,RF_NoFlags,Borrowed);
    return pUVar1;
  }
  pFVar2 = ::FName::ToString(local_res18,&local_18);
  if ((pFVar2->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_141e9b171;
  }
  sVar3 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar3;
LAB_141e9b171:
  pUVar1 = StaticFindFirstObject
                     (param_1,&local_28,EnsureIfAmbiguous|NativeFirst,Warning,L"FindImportFast");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pUVar1;
}

// ForceBlueprintFinalization @ 141e9e250

void __thiscall FLinkerLoad::ForceBlueprintFinalization(FLinkerLoad *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!bForceBlueprintFinalization",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                     ,0x985,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  return;
}

// ForceRegenerateClass @ 141e9e2b0

bool __thiscall FLinkerLoad::ForceRegenerateClass(FLinkerLoad *this,UClass *param_1)

{
  bool bVar1;
  FLinkerLoad *this_00;
  
  this_00 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_1);
  if (this_00 != (FLinkerLoad *)0x0) {
    Preload((FLinkerLoad *)&this->_padding_,(UObject *)param_1);
    bVar1 = FUnresolvedStructTracker::IsAssociatedStructUnresolved(this_00);
    if (bVar1) {
      ResolveDeferredDependencies(this_00,(UStruct *)param_1);
    }
    if ((this_00->DeferredCDOIndex != -1) || (this_00->bForceBlueprintFinalization != false)) {
      FinalizeBlueprint(this_00,param_1);
    }
    return true;
  }
  return false;
}

// HasPerformedFullExportResolvePass @ 141ea4ec0

bool __thiscall FLinkerLoad::HasPerformedFullExportResolvePass(FLinkerLoad *this)

{
  return false;
}

// HasUnresolvedDependencies @ 141ea4f30

bool __thiscall FLinkerLoad::HasUnresolvedDependencies(FLinkerLoad *this)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  FLinkerLoad *pFVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined1 auStackX_10 [8];
  int iStackX_18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&FUnresolvedStructTracker::UnresolvedStructsCritical);
  iVar11 = 0;
  uVar5 = 1;
  iVar12 = 0;
  uVar13 = FUnresolvedStructTracker::UnresolvedStructs.Elements._40_4_;
  uVar6 = 0;
  if (uVar13 != 0) {
    puVar14 = (uint *)&FUnresolvedStructTracker::UnresolvedStructs.Elements.field_0x10;
    if (FUnresolvedStructTracker::UnresolvedStructs.Elements._32_8_ != 0) {
      puVar14 = (uint *)FUnresolvedStructTracker::UnresolvedStructs.Elements._32_8_;
    }
    uVar6 = *puVar14;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar6 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_141ea8bcd;
      uVar6 = puVar14[lVar8 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar15 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStackX_18 = (int)lVar8;
    uVar6 = iVar12 + -1 + iStackX_18;
    if ((int)uVar13 < (int)uVar6) {
      uVar6 = uVar13;
    }
  }
LAB_141ea8bcd:
  bVar2 = FUnresolvedStructTracker::UnresolvedStructs.Elements._40_1_;
  uVar10 = uVar13 & 0xffffffe0;
  uVar15 = FUnresolvedStructTracker::UnresolvedStructs.Elements._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar5,iVar11);
  TStack_60.CurrentBitIndex = uVar6;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_60._28_4_ = uVar6;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       FUnresolvedStructTracker::UnresolvedStructs.Elements._8_4_ -
                       FUnresolvedStructTracker::UnresolvedStructs.Elements._52_4_);
  TStack_60.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       &FUnresolvedStructTracker::UnresolvedStructs.Elements.field_0x10;
  if (((int)uVar13 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  uVar6 = FUnresolvedStructTracker::UnresolvedStructs.Elements._40_4_;
  if (uVar13 != uVar6) {
    uVar15 = FUnresolvedStructTracker::UnresolvedStructs.Elements._40_8_ & 0xffffffff;
    lVar8 = 0x154b88000;
    if (FUnresolvedStructTracker::UnresolvedStructs.Elements._32_8_ != 0) {
      lVar8 = FUnresolvedStructTracker::UnresolvedStructs.Elements._32_8_;
    }
    uVar5 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar11 * 4);
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar11;
      uVar10 = uVar10 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_141ea8ce0;
      uVar5 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar15 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
    uVar15 = (ulonglong)uVar10;
  }
LAB_141ea8ce0:
  do {
    if (FUnresolvedStructTracker::UnresolvedStructs.Elements._8_4_ -
        FUnresolvedStructTracker::UnresolvedStructs.Elements._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar15) &&
       (TStack_60.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)
        &FUnresolvedStructTracker::UnresolvedStructs.Elements.field_0x10)) {
      bVar3 = false;
      goto LAB_141ea8d39;
    }
    pFVar7 = UObjectBaseUtility::GetLinker
                       (*(UObjectBaseUtility **)
                         (FUnresolvedStructTracker::UnresolvedStructs.Elements._0_8_ +
                         (longlong)TStack_60.CurrentBitIndex * 0x10));
    if (pFVar7 == this) {
      bVar3 = true;
LAB_141ea8d39:
      LeaveCriticalSection((LPCRITICAL_SECTION)&FUnresolvedStructTracker::UnresolvedStructsCritical)
      ;
      return bVar3;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// IsBlueprintFinalizationPending @ 141ea8d70

bool __thiscall FLinkerLoad::IsBlueprintFinalizationPending(FLinkerLoad *this)

{
  if ((this->DeferredCDOIndex == -1) && (this->bForceBlueprintFinalization == false)) {
    return false;
  }
  return true;
}

// IsExportBeingResolved @ 141ea8fc0

bool __thiscall FLinkerLoad::IsExportBeingResolved(FLinkerLoad *this,int param_1)

{
  longlong lVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FResolvingExportTracker *this_00;
  FTlsAutoCleanup *pFVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  code *local_38;
  undefined1 *local_30;
  code *local_28;
  undefined1 *local_20;
  
  uVar11 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_30 = local_res10;
  lVar1 = this->_padding_;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FResolvingExportTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this_00 = (FResolvingExportTracker *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FResolvingExportTracker>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  bVar6 = FResolvingExportTracker::IsLinkerExportBeingResolved(this_00,this,param_1);
  iVar13 = *(int *)((longlong)param_1 * 0x68 + lVar1 + 8);
  bVar4 = bVar6;
  if (!bVar6) {
    do {
      if (iVar13 < 1) {
        return bVar6;
      }
      uVar11 = iVar13 - 1;
      if (uVar11 == 0xffffffff) {
        return bVar6;
      }
      uVar7 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_20 = local_res8;
      local_28 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FResolvingExportTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      lVar1 = this->_padding_;
      pFVar9 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,
                          &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FResolvingExportTracker>::GetTlsSlot(void)'
                           ::__l2::TlsSlot);
      pTVar10 = TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                ::Find((TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                        *)(pFVar9 + 2),this);
      bVar4 = false;
      if (pTVar10 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
        if (*(int *)&(pTVar10->Elements).field_0x8 != *(int *)&(pTVar10->Elements).field_0x34) {
          FVar2 = (pTVar10->Hash).SecondaryData;
          FVar12 = (ForElementType<FSetElementId>)&pTVar10->Hash;
          if (FVar2 != (ForElementType<FSetElementId>)0x0) {
            FVar12 = FVar2;
          }
          iVar8 = *(int *)((longlong)FVar12 + (ulonglong)(pTVar10->HashSize - 1U & uVar11) * 4);
          if (iVar8 != -1) {
            do {
              if (*(uint *)(*(longlong *)&pTVar10->Elements + (longlong)iVar8 * 0xc) == uVar11)
              goto LAB_141ea915c;
              iVar8 = *(int *)(*(longlong *)&pTVar10->Elements + 4 + (longlong)iVar8 * 0xc);
            } while (iVar8 != -1);
          }
        }
        iVar8 = -1;
LAB_141ea915c:
        bVar4 = iVar8 != -1;
      }
      bVar4 = (bool)(bVar6 | bVar4);
      iVar13 = *(int *)((longlong)iVar13 * 0x68 + lVar1 + -0x60);
      bVar6 = false;
    } while (bVar4 == false);
  }
  return bVar4;
}

// PRIVATE_ForceLoadAllDependencies @ 141eaf720

void __cdecl FLinkerLoad::PRIVATE_ForceLoadAllDependencies(UPackage *param_1)

{
  FLinkerLoad *this;
  
  this = FindExistingLinkerForPackage(param_1);
  if (this != (FLinkerLoad *)0x0) {
    ResolveAllImports(this);
    return;
  }
  return;
}

// RegenerateBlueprintClass @ 141eb1130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FLinkerLoad::RegenerateBlueprintClass(FLinkerLoad *this,UClass *param_1,UObject *param_2)

{
  UObjectBase *this_00;
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  FResolvingExportTracker *pFVar8;
  FLinkerLoad *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  undefined1 auStackY_1a8 [32];
  undefined1 local_158 [8];
  ForAnyElementType local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined1 local_13f [7];
  longlong local_138;
  uint local_130;
  uint local_12c;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_128;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_118;
  FLinkerLoad *local_108;
  UObject *local_100;
  FScriptContainerElement *local_f8;
  UClass *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  FReferenceFinder local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_108 = this;
  local_100 = param_2;
  local_f0 = param_1;
  if ((param_1 == (UClass *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoadClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                         ,0x2c1,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if (((param_2 == (UObject *)0x0) || ((*(uint *)&param_2->field_0x8 & 0x10) == 0)) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2825597286833192254>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                         ,0x2c2,
                         "ClassDefaultObject && ClassDefaultObject->HasAnyFlags(RF_ClassDefaultObject)"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((param_1 == (UClass *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClassSourceObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                         ,0x2ce,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  pTVar2 = CVarEnableFullBlueprintPreloading.Ref;
  bVar3 = IsInParallelGameThread();
  uVar17 = 0;
  if (!bVar3) {
    bVar3 = IsInGameThread();
    uVar11 = 1;
    if (!bVar3) goto LAB_141eb121b;
  }
  uVar11 = uVar17;
LAB_141eb121b:
  if (pTVar2->ShadowedValue[uVar11] == false) {
    uVar14 = (uint)param_1->_padding_ >> 0x11 & 0xffffff01;
    local_130 = uVar14;
    UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_BeingRegenerated);
    if ((((char)uVar14 != '\0') && ((param_1->ClassDefaultObject).field0_0x0.DebugPtr != param_2))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bAlreadyRegenerating || (LoadClass->GetDefaultObject(false) == ClassDefaultObject)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                              ,0x32f,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    UClass::SetDefaultObject(param_1,param_2);
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    GetObjectsWithOuter((UObjectBase *)param_1,&local_128,true,RF_NoFlags,Borrowed);
    uVar11 = uVar17;
    uVar15 = uVar17;
    if (0 < local_128.ArrayNum) {
      do {
        uVar12 = (uint)uVar11;
        uVar5 = 0;
        if ((int)uVar12 < local_128.ArrayNum) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        Preload((FLinkerLoad *)&this->_padding_,
                *(UObject **)(local_128.AllocatorInstance.Data + uVar15));
        uVar11 = (ulonglong)(uVar12 + 1);
        param_2 = local_100;
        uVar15 = uVar15 + 8;
      } while ((int)(uVar12 + 1) < local_128.ArrayNum);
    }
    if (((uint)param_1->_padding_ >> 0x11 & 1) != 0) {
      Preload((FLinkerLoad *)&this->_padding_,(UObject *)param_1);
      UStruct::StaticLink((UStruct *)param_1,true);
      Preload((FLinkerLoad *)&this->_padding_,param_2);
      local_d0 = local_13f;
      local_d8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FResolvingExportTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar8 = (FResolvingExportTracker *)
               FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d8,
                          &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FResolvingExportTracker>::GetTlsSlot(void)'
                           ::__l2::TlsSlot);
      FResolvingExportTracker::ResolvePlaceholders(pFVar8,param_1);
      local_138 = param_1->_padding_;
      local_150.Data = (FScriptContainerElement *)0x0;
      local_148 = 0;
      FVar16.Data = local_150.Data;
      for (; (local_150.Data = FVar16.Data, local_138 != 0 &&
             ((*(uint *)(local_138 + 0xd4) & 0x40000) != 0));
          local_138 = *(longlong *)(local_138 + 0x40)) {
        if ((FVar16.Data <= (FScriptContainerElement *)&local_138) &&
           ((local_148._4_4_ = (int)((ulonglong)local_148 >> 0x20),
            lVar10 = (longlong)local_148._4_4_,
            (FScriptContainerElement *)&local_138 < FVar16.Data + lVar10 * 8 &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)))) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        if ((uint)local_148 == local_148._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_150,(int *)((longlong)&local_148 + 4));
          local_148 = CONCAT44(local_148._4_4_,iVar6);
        }
        lVar10 = (longlong)(int)(uint)local_148;
        local_148 = CONCAT44(local_148._4_4_,(uint)local_148 + 1);
        memmove(local_150.Data + 8,local_150.Data,lVar10 << 3);
        *(longlong *)local_150.Data = local_138;
        FVar16.Data = local_150.Data;
      }
      uVar11 = (ulonglong)(int)(uint)local_148;
      local_12c = (uint)local_148;
      pFVar13 = FVar16.Data + uVar11 * 8;
      local_f8 = pFVar13;
      while( true ) {
        if ((uint)local_148 != (int)uVar11) {
          local_158[0] = 0;
          `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_158);
        }
        param_1 = local_f0;
        if (FVar16.Data == pFVar13) break;
        pUVar7 = *(UClass **)FVar16.Data;
        if ((pUVar7 != (UClass *)0x0) && (((uint)pUVar7->_padding_ >> 0x11 & 1) != 0)) {
          if (((uint)pUVar7->_padding_ >> 0x15 & 1) == 0) {
            if ((GEventDrivenLoaderEnabled != false) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!GEventDrivenLoaderEnabled || !(1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                                   ,0x24b,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
            pFVar9 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)pUVar7);
            if (pFVar9 != (FLinkerLoad *)0x0) {
              UE::FRecursiveMutex::Lock(&pFVar9->Mutex);
              UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar7,RF_NeedLoad);
              Preload((FLinkerLoad *)&pFVar9->_padding_,(UObject *)pUVar7);
              UE::FRecursiveMutex::Unlock(&pFVar9->Mutex);
            }
          }
          local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.ArrayNum = 0;
          local_118.ArrayMax = 0;
          FReferenceFinder::FReferenceFinder
                    (&local_c8,&local_118,(UObject *)pUVar7,false,true,true,true);
          FReferenceFinder::FindReferences
                    (&local_c8,(UObject *)pUVar7,(UObject *)0x0,(FProperty *)0x0);
          uVar11 = uVar17;
          while ((uVar14 = (uint)uVar11, -1 < (int)uVar14 && ((int)uVar14 < local_118.ArrayNum))) {
            uVar5 = 0;
            if ((int)uVar14 < local_118.ArrayNum) {
              uVar5 = ~uVar14 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
            this_00 = *(UObjectBase **)
                       (local_118.AllocatorInstance.Data + (longlong)(int)uVar14 * 8);
            if ((this_00->ObjectFlags >> 0x15 & 1) == 0) {
              if ((GEventDrivenLoaderEnabled != false) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!GEventDrivenLoaderEnabled || !(1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                                     ,0x220,L""), bVar3)) {
                pcVar1 = (code *)swi(3);
                uVar4 = (*pcVar1)();
                return (bool)uVar4;
              }
              pFVar9 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_00);
              if (pFVar9 != (FLinkerLoad *)0x0) {
                UE::FRecursiveMutex::Lock(&pFVar9->Mutex);
                UObjectBase::AtomicallySetFlags(this_00,RF_NeedLoad);
                Preload((FLinkerLoad *)&pFVar9->_padding_,(UObject *)this_00);
                FPreloadMembersHelper::PreloadMembers((UObject *)this_00);
                UE::FRecursiveMutex::Unlock(&pFVar9->Mutex);
              }
            }
            uVar11 = (ulonglong)(uVar14 + 1);
          }
          FReferenceFinder::~FReferenceFinder(&local_c8);
          if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.AllocatorInstance.Data);
          }
          RegenerateBlueprintClass
                    (local_108,pUVar7,(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr);
          pFVar13 = local_f8;
        }
        uVar11 = (ulonglong)local_12c;
        FVar16.Data = FVar16.Data + 8;
      }
      FPreloadMembersHelper::PreloadObject((UObject *)local_f0);
      lVar10 = (**(code **)(param_1->_padding_ + 0x280))(param_1,param_1,local_100);
      if (lVar10 != 0) {
        UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_BeingRegenerated);
        UObjectBase::AtomicallyClearFlags
                  ((UObjectBase *)param_1,RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad);
      }
      uVar14 = local_130;
      if (local_150.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data);
        uVar14 = local_130;
      }
    }
    bVar3 = (bool)(~(byte)((uint)param_1->_padding_ >> 0x11) & 1);
    if ((char)uVar14 == '\0') {
      UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_BeingRegenerated);
    }
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
  }
  else {
    if (((uint)param_1->_padding_ >> 0x15 & 1) == 0) {
      UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_NeedLoad);
      Preload((FLinkerLoad *)&this->_padding_,(UObject *)param_1);
    }
    if (0 < (int)this->_padding_) {
      do {
        iVar6 = (int)uVar17;
        pUVar7 = GetExportLoadClass(this,iVar6);
        if (pUVar7 != (UClass *)0x0) {
          CreateExportAndPreload(this,iVar6,true);
        }
        uVar17 = (ulonglong)(iVar6 + 1U);
      } while ((int)(iVar6 + 1U) < (int)this->_padding_);
    }
    FPreloadMembersHelper::PreloadExternalNativeDependencies(param_2);
    UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_BeingRegenerated);
    (**(code **)(param_1->_padding_ + 0x280))(param_1,param_1,param_2);
    UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_BeingRegenerated);
    UObjectBase::AtomicallyClearFlags
              ((UObjectBase *)param_1,RF_NeedPostLoadSubobjects|RF_NeedPostLoad);
    local_e0 = &local_140;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FResolvingExportTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar8 = (FResolvingExportTracker *)
             FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_e8,
                        &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FResolvingExportTracker>::GetTlsSlot(void)'
                         ::__l2::TlsSlot);
    FResolvingExportTracker::ResolvePlaceholders(pFVar8,param_1);
    bVar3 = true;
  }
  return bVar3;
}

// RequestPlaceholderValue @ 141eb65a0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
FLinkerLoad::RequestPlaceholderValue
          (FLinkerLoad *this,FProperty *param_1,UClass *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  size_t sVar15;
  FLongPackagePathsSingleton *pFVar16;
  wchar_t *pwVar17;
  ULinkerPlaceholderClass *pUVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  wchar_t *pwVar21;
  int iVar22;
  FPackageIndex local_f8 [2];
  longlong *local_f0;
  FName local_e8 [2];
  TStringView<wchar_t> local_d8;
  undefined1 local_c8 [12];
  FName local_bc;
  FString local_b0;
  FString local_a0;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FName *local_78;
  longlong **local_70;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FString local_48 [2];
  
  local_f0 = (longlong *)0x0;
  bVar7 = FBlueprintSupport::UseDeferredDependencyLoading();
  if ((!bVar7) || ((this->LoadFlags & 0x100000) == 0)) goto LAB_141eb69cf;
  ::FName::FName(local_e8,param_3);
  uVar8 = ::GetTypeHash(local_e8[0].ComparisonIndex.Value);
  if (*(int *)&(this->ImportPlaceholders).field_0x8 !=
      *(int *)&(this->ImportPlaceholders).field_0x34) {
    puVar20 = *(undefined1 **)&(this->ImportPlaceholders).field_0x40;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->ImportPlaceholders).field_0x38;
    }
    iVar9 = *(int *)(puVar20 +
                    (ulonglong)
                    (*(int *)&(this->ImportPlaceholders).field_0x48 - 1U &
                    local_e8[0].Number + uVar8) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)&(this->ImportPlaceholders).field_0x0;
      do {
        lVar2 = lVar3 + (longlong)iVar9 * 0x18;
        if (*(FName *)(lVar3 + (longlong)iVar9 * 0x18) == local_e8[0]) {
          puVar19 = (undefined8 *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar19 = (undefined8 *)0x0;
          }
          if (puVar19 != (undefined8 *)0x0) {
            local_f0 = (longlong *)*puVar19;
            goto LAB_141eb69cf;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x10);
      } while (iVar9 != -1);
    }
  }
  pUVar11 = Z_Construct_UClass_UClass_NoRegister();
  if (pUVar11 == (UClass *)0x0) goto LAB_141eb69cf;
  iVar9 = (int)pUVar11->_padding_;
  if (((int)param_2->_padding_ < iVar9) ||
     ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar9 * 8) != &pUVar11->_padding_)
     ) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (!bVar7) goto LAB_141eb69cf;
  pUVar11 = param_2;
  if (((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 10 & 1) != 0)) &&
     (param_1[1]._padding_ != 0)) {
    pUVar13 = *(UClass **)(param_1[1]._padding_ + 0x10);
    pUVar12 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&param_1[1]._padding_,pUVar12);
    if ((bVar7) && (param_1[1]._padding_ != 0)) {
      pUVar13 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1[1]._padding_ + 0x214));
    }
    if (pUVar13 != (UClass *)0x0) {
      pUVar11 = pUVar13;
      if (param_2 != (UClass *)0x0) {
        iVar9 = (int)param_2->_padding_;
        if (((int)pUVar13->_padding_ < iVar9) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar9 * 8) !=
            &param_2->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) goto LAB_141eb680f;
      }
      local_c8._4_8_ = param_2->_padding_;
      ::FName::ToString((FName *)(local_c8 + 4),&local_a0);
      local_bc = (FName)pUVar13->_padding_;
      ::FName::ToString(&local_bc,&local_b0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueType->IsChildOf(ObjectType)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                         ,0xa07,
                         L"Requesting an import placeholder object for a class value type (%s) that is not a derivative of the required object type (%s)."
                        );
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pUVar14 = (UObject *)(*pcVar4)();
        return pUVar14;
      }
    }
  }
LAB_141eb680f:
  iVar22 = 0;
  iVar9 = iVar22;
  local_d8.DataPtr = param_3;
  if (param_3 != (wchar_t *)0x0) {
    sVar15 = wcslen(param_3);
    iVar9 = (int)sVar15;
  }
  local_d8.Size = iVar9;
  pFVar16 = FLongPackagePathsSingleton::Get();
  uVar5 = local_d8._8_8_;
  pwVar21 = local_d8.DataPtr;
  local_88 = (pFVar16->ScriptRootPath).Data.AllocatorInstance.Data;
  iVar10 = (pFVar16->ScriptRootPath).Data.ArrayNum;
  iStack_80 = iVar10 + -1;
  if (iVar10 == 0) {
    iStack_80 = iVar22;
  }
  local_68._12_4_ = uStack_7c;
  local_68.Size = iStack_80;
  local_68.DataPtr = (wchar_t *)local_88;
  bVar7 = FPathViews::IsParentPathOf(&local_68,&local_d8);
  uVar6 = local_d8._8_8_;
  if ((!bVar7) && ((pUVar11->ClassFlags & CLASS_NeedsDeferredDependencyLoading) != CLASS_None)) {
    local_f8[0].Index = 0;
    local_58.DataPtr = pwVar21;
    local_d8.Size = (int)uVar5;
    local_d8._12_4_ = SUB84(uVar5,4);
    local_58.Size = local_d8.Size;
    local_58._12_4_ = local_d8._12_4_;
    local_d8._8_8_ = uVar6;
    bVar7 = FindImport(this,&local_58,local_f8);
    if (bVar7) {
      pwVar17 = param_3 + iVar9;
      do {
        if (param_3 == pwVar17) goto LAB_141eb68da;
        pwVar1 = pwVar17 + -1;
        pwVar17 = pwVar17 + -1;
      } while ((*pwVar1 != L':') && (*pwVar1 != L'.'));
      iVar10 = (int)((longlong)pwVar17 - (longlong)param_3 >> 1) + 1;
      if (iVar10 < 0) {
        iVar10 = iVar22;
      }
      if (iVar9 < iVar10) {
        iVar10 = iVar9;
      }
      pwVar21 = param_3 + iVar10;
LAB_141eb68da:
      if ((-1 < local_f8[0].Index) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsImport()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                             ,0x55,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pUVar14 = (UObject *)(*pcVar4)();
        return pUVar14;
      }
      pUVar18 = MakeImportPlaceholder<ULinkerPlaceholderClass>
                          ((UObject *)this->_padding_,pUVar11,pwVar21,-1 - local_f8[0].Index);
      local_f0 = (longlong *)&pUVar18->field_0x208;
      if (pUVar18 == (ULinkerPlaceholderClass *)0x0) {
        local_f0 = (longlong *)0x0;
      }
      local_78 = local_e8;
      local_70 = &local_f0;
      TSet<TTuple<FName,FLinkerPlaceholderBase_*>,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FLinkerPlaceholderBase_*_const_&>_>
                ((TSet<TTuple<FName,FLinkerPlaceholderBase_*>,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>,FDefaultSetAllocator>
                  *)&this->ImportPlaceholders,
                 (TPairInitializer<FName_const_&,FLinkerPlaceholderBase_*_const_&> *)local_c8,
                 (bool *)&local_78);
    }
    else if (1 < (byte)LogBlueprintSupport._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this->_padding_,local_48,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintSupport);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
    }
  }
LAB_141eb69cf:
  if (local_f0 == (longlong *)0x0) {
    return (UObject *)0x0;
  }
  pUVar14 = (UObject *)(**(code **)(*local_f0 + 0x18))();
  return pUVar14;
}

// ResetDeferredLoadingState @ 141eb72a0

void __thiscall FLinkerLoad::ResetDeferredLoadingState(FLinkerLoad *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FName,FLinkerPlaceholderBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>_>
  *this_00;
  int iVar3;
  bool bVar4;
  uint uVar5;
  FTlsAutoCleanup *pFVar6;
  undefined1 local_res8 [8];
  FLinkerLoad *local_res10;
  code *local_28;
  undefined1 *local_20;
  
  this->DeferredCDOIndex = -1;
  this->bForceBlueprintFinalization = false;
  piVar1 = &(this->ResolvingPlaceholderStack).ArrayMax;
  (this->ResolvingPlaceholderStack).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ResolvingPlaceholderStack).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->ImportPlaceholders;
  bVar4 = 1 < *(int *)&(this->ImportPlaceholders).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,FLinkerPlaceholderBase_*>,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FLinkerPlaceholderBase_*>,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar2 = &(this->ImportPlaceholders).field_0xc;
  *(undefined4 *)&(this->ImportPlaceholders).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->ImportPlaceholders).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImportPlaceholders).field_0x34 = 0;
  iVar3 = *(int *)&(this->ImportPlaceholders).field_0x2c;
  *(undefined4 *)&(this->ImportPlaceholders).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->ImportPlaceholders).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ImportPlaceholders).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->ImportPlaceholders).field_0x48 = 1;
    TSet<TTuple<FName,FLinkerPlaceholderBase_*>,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FLinkerPlaceholderBase_*>,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this->LoadFlags = this->LoadFlags & 0xffefffff;
  local_20 = local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FResolvingExportTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FResolvingExportTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  local_res10 = this;
  if (*(int *)(pFVar6 + 3) != *(int *)&pFVar6[8].field_0x4) {
    uVar5 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    TSet<TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FLinkerLoad_const_*>
              ((TSet<TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)(pFVar6 + 2),uVar5 >> 0x10 ^ uVar5,&local_res10);
  }
  TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<ULinkerPlaceholderExportObject_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)(pFVar6 + 0xc));
  FUnresolvedStructTracker::Reset(this);
  return;
}

// ResolveAllImports @ 141eb7d40

void __thiscall FLinkerLoad::ResolveAllImports(FLinkerLoad *this)

{
  code *pcVar1;
  bool bVar2;
  UStruct *pUVar3;
  FLinkerLoad *this_00;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = (int)this->_padding_;
  uVar7 = 0;
  if (0 < iVar6) {
    do {
      if ((this->DeferredCDOIndex == -1) && (this->bForceBlueprintFinalization == false)) {
        return;
      }
      uVar4 = 0;
      if ((int)uVar7 < iVar6) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = (UStruct *)CreateImport(this,uVar7);
      EnterCriticalSection((LPCRITICAL_SECTION)&FUnresolvedStructTracker::UnresolvedStructsCritical)
      ;
      uVar4 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      if (FUnresolvedStructTracker::UnresolvedStructs.Elements._8_4_ !=
          FUnresolvedStructTracker::UnresolvedStructs.Elements._52_4_) {
        FVar5 = (ForElementType<FSetElementId>)0x154b88028;
        if (FUnresolvedStructTracker::UnresolvedStructs.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar5 = FUnresolvedStructTracker::UnresolvedStructs.Hash.SecondaryData;
        }
        for (iVar6 = *(int *)((longlong)FVar5 +
                             (ulonglong)
                             (FUnresolvedStructTracker::UnresolvedStructs.HashSize - 1U &
                             (uVar4 >> 0x10 ^ uVar4)) * 4); iVar6 != -1;
            iVar6 = *(int *)(FUnresolvedStructTracker::UnresolvedStructs.Elements._0_8_ + 8 +
                            (longlong)iVar6 * 0x10)) {
          if (*(UStruct **)
               (FUnresolvedStructTracker::UnresolvedStructs.Elements._0_8_ + (longlong)iVar6 * 0x10)
              == pUVar3) {
            LeaveCriticalSection
                      ((LPCRITICAL_SECTION)&FUnresolvedStructTracker::UnresolvedStructsCritical);
            if ((iVar6 != -1) &&
               (this_00 = FindExistingLinkerForImport(this,uVar7), this_00 != (FLinkerLoad *)0x0)) {
              ResolveDeferredDependencies(this_00,pUVar3);
            }
            goto LAB_141eb7e72;
          }
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&FUnresolvedStructTracker::UnresolvedStructsCritical)
      ;
LAB_141eb7e72:
      iVar6 = (int)this->_padding_;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar6);
  }
  return;
}

// ResolveDeferredDependencies @ 141eb8230

void __thiscall FLinkerLoad::ResolveDeferredDependencies(FLinkerLoad *this,UStruct *param_1)

{
  int *piVar1;
  TArray<FLinkerPlaceholderBase_*,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FLinkerPlaceholderBase *pFVar4;
  longlong lVar5;
  UField *this_00;
  FName FVar6;
  UStruct *pUVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  FLinkerLoad *pFVar13;
  UClass *pUVar14;
  longlong lVar15;
  UClass *pUVar16;
  longlong lVar17;
  uint uVar18;
  UObject *local_res18;
  undefined8 local_res20;
  UStruct *local_90;
  FName local_88;
  TIterator local_80;
  
  UE::FRecursiveMutex::Lock(&this->Mutex);
  uVar3 = this->LoadFlags;
  this->LoadFlags = uVar3 & 0xffefffff;
  EnterCriticalSection((LPCRITICAL_SECTION)&FUnresolvedStructTracker::UnresolvedStructsCritical);
  local_90 = param_1;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
            (&FUnresolvedStructTracker::UnresolvedStructs,&local_res18,(bool *)&local_90);
  LeaveCriticalSection((LPCRITICAL_SECTION)&FUnresolvedStructTracker::UnresolvedStructsCritical);
  if (param_1 != (UStruct *)0x0) {
    pUVar12 = Z_Construct_UClass_UClass_NoRegister();
    iVar11 = (int)pUVar12->_padding_;
    if ((iVar11 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (pUVar16 = (UClass *)param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar11 * 8)
       == &pUVar12->_padding_)) goto LAB_141eb82e1;
  }
  pUVar16 = (UClass *)0x0;
LAB_141eb82e1:
  uVar18 = 0;
  if (0 < (this->ResolvingPlaceholderStack).ArrayNum) {
    pTVar2 = &this->ResolvingPlaceholderStack;
    if (((this->ResolvingPlaceholderStack).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(int *)(*(longlong *)(pTVar2->AllocatorInstance).Data + 8) == 0) {
      uVar18 = (uint)this->_padding_;
    }
    if (0 < (this->ResolvingPlaceholderStack).ArrayNum) {
      do {
        if (((this->ResolvingPlaceholderStack).ArrayNum < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = *(FLinkerPlaceholderBase **)
                  ((pTVar2->AllocatorInstance).Data +
                  (longlong)(this->ResolvingPlaceholderStack).ArrayNum * 8 + -8);
        piVar1 = &(this->ResolvingPlaceholderStack).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->ResolvingPlaceholderStack).ArrayNum,
                   &(this->ResolvingPlaceholderStack).ArrayMax);
        local_res20 = 0;
        ResolveDependencyPlaceholder(this,pFVar4,pUVar16,(FName)0x0);
      } while (0 < (this->ResolvingPlaceholderStack).ArrayNum);
    }
  }
  if ((int)uVar18 < (int)this->_padding_) {
    lVar15 = (longlong)(int)uVar18 * 0x38;
    do {
      bVar9 = FUnresolvedStructTracker::IsAssociatedStructUnresolved(this);
      if (!bVar9) break;
      uVar10 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar17 = this->_padding_ + lVar15;
      pFVar13 = *(FLinkerLoad **)(lVar17 + 0x30);
      if (((pFVar13 != (FLinkerLoad *)0x0) ||
          ((*(UObjectBaseUtility **)(lVar17 + 0x28) != (UObjectBaseUtility *)0x0 &&
           (pFVar13 = UObjectBaseUtility::GetLinker(*(UObjectBaseUtility **)(lVar17 + 0x28)),
           pFVar13 != (FLinkerLoad *)0x0)))) &&
         ((pFVar13->_padding_ != 0 && ((*(uint *)(pFVar13->_padding_ + 8) & 0x8080000) == 0)))) {
        LoadPackageInternal((UPackage *)0x0,&pFVar13->PackagePath,this->LoadFlags & 0x2082,this,
                            (FArchive *)0x0,(FLinkerInstancingContext *)0x0,(FPackagePath *)0x0);
      }
      lVar5 = *(longlong *)(lVar17 + 0x28);
      if (lVar5 == 0) {
LAB_141eb8519:
        this_00 = *(UField **)(lVar17 + 0x28);
        if (this_00 != (UField *)0x0) {
          pUVar12 = Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister();
          iVar11 = (int)pUVar12->_padding_;
          if ((iVar11 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
              &pUVar12->_padding_)) {
            pUVar12 = UField::GetOwnerClass(this_00);
            if (pUVar12 != (UClass *)0x0) {
              pUVar14 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
              iVar11 = (int)pUVar14->_padding_;
              if ((iVar11 <= *(int *)(pUVar12->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar11 * 8)
                  == &pUVar14->_padding_)) {
                ResolveDependencyPlaceholder
                          (this,(FLinkerPlaceholderBase *)(pUVar12 + 1),pUVar16,(FName)0x0);
              }
            }
            ResolveDependencyPlaceholder
                      (this,(FLinkerPlaceholderBase *)&this_00[4].Next,pUVar16,(FName)0x0);
            goto LAB_141eb85f6;
          }
        }
        pUVar7 = *(UStruct **)(lVar17 + 0x28);
        if (pUVar7 != (UStruct *)0x0) {
          pUVar12 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar11 = (int)pUVar12->_padding_;
          if (((iVar11 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
               &pUVar12->_padding_)) && (pFVar13 != (FLinkerLoad *)0x0)) {
            ResolveDeferredDependencies(pFVar13,pUVar7);
          }
        }
      }
      else {
        pUVar12 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
        iVar11 = (int)pUVar12->_padding_;
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar11) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar11 * 8) !=
            &pUVar12->_padding_)) goto LAB_141eb8519;
        ResolveDependencyPlaceholder
                  (this,(FLinkerPlaceholderBase *)(lVar5 + 0x208),pUVar16,(FName)0x0);
      }
LAB_141eb85f6:
      uVar18 = uVar18 + 1;
      lVar15 = lVar15 + 0x38;
    } while ((int)uVar18 < (int)this->_padding_);
  }
  iVar11 = *(int *)&(this->ImportPlaceholders).field_0x8 -
           *(int *)&(this->ImportPlaceholders).field_0x34;
  while (0 < iVar11) {
    TSet<TTuple<FName,FLinkerPlaceholderBase_*>,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              (&local_80,
               (TSet<TTuple<FName,FLinkerPlaceholderBase_*>,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>,FDefaultSetAllocator>
                *)&this->ImportPlaceholders);
    lVar15 = (longlong)(int)((ulonglong)local_80._padding_ >> 0x20);
    FVar6 = *(FName *)(*(longlong *)local_80._padding_ + lVar15 * 0x18);
    ResolveDependencyPlaceholder
              (this,*(FLinkerPlaceholderBase **)
                     (*(longlong *)local_80._padding_ + 8 + lVar15 * 0x18),pUVar16,FVar6);
    local_88 = FVar6;
    if (*(int *)&(this->ImportPlaceholders).field_0x8 !=
        *(int *)&(this->ImportPlaceholders).field_0x34) {
      uVar18 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
      TSet<TTuple<FName,FLinkerPlaceholderBase_*>,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FLinkerPlaceholderBase_*>,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>,FDefaultSetAllocator>
                           *)&this->ImportPlaceholders,FVar6.Number + uVar18,&local_88);
    }
    iVar11 = *(int *)&(this->ImportPlaceholders).field_0x8 -
             *(int *)&(this->ImportPlaceholders).field_0x34;
  }
  pUVar7 = (param_1->SuperStruct).field0_0x0.DebugPtr;
  if (((pUVar7 != (UStruct *)0x0) &&
      (pFVar13 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)pUVar7),
      pFVar13 != (FLinkerLoad *)0x0)) &&
     (bVar9 = FUnresolvedStructTracker::IsAssociatedStructUnresolved(pFVar13), bVar9)) {
    ResolveDeferredDependencies(pFVar13,pUVar7);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&FUnresolvedStructTracker::UnresolvedStructsCritical);
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
            (&FUnresolvedStructTracker::UnresolvedStructs,(UObject *)param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&FUnresolvedStructTracker::UnresolvedStructsCritical);
  this->LoadFlags = uVar3;
  UE::FRecursiveMutex::Unlock(&this->Mutex);
  return;
}

// ResolveDeferredExports @ 141eb8740

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FLinkerLoad::ResolveDeferredExports(FLinkerLoad *this,UClass *param_1)

{
  EObjectFlags EVar1;
  ULinkerPlaceholderExportObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  UClass *pUVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  UObject *pUVar11;
  FUObjectItem *pFVar12;
  FTlsAutoCleanup *pFVar13;
  FTlsAutoCleanup *pFVar14;
  FDeferredInitializationTrackerBase *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  UObjectBase *this_01;
  ForAnyElementType FVar19;
  FObjectExport *pFVar20;
  ulonglong uVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_d8 [2];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_bf [7];
  uint local_b8 [2];
  uint local_b0;
  int local_ac;
  UObjectBase *local_a8;
  int local_a0 [2];
  FLinkerLoad *local_98;
  FScriptContainerElement *local_90;
  FScopedResolvingExportTracker local_88;
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  undefined1 *local_60;
  code *local_58;
  undefined1 *local_50;
  
  uVar16 = this->DeferredCDOIndex;
  uVar18 = 0;
  if (uVar16 == 0xffffffff) {
    if (this->bForceBlueprintFinalization == false) {
      return;
    }
  }
  else {
    uVar7 = uVar18;
    if ((int)uVar16 < (int)this->_padding_) {
      uVar7 = ~uVar16 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar2 = *(ULinkerPlaceholderExportObject **)
              ((longlong)(int)uVar16 * 0x68 + 0x40 + this->_padding_);
    if (pUVar2 != (ULinkerPlaceholderExportObject *)0x0) {
      pUVar10 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
      iVar8 = (int)pUVar10->_padding_;
      if ((iVar8 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar10->_padding_)) {
        UClass::SetDefaultObject(param_1,(UObject *)0x0);
        UObject::SetLinker((UObject *)pUVar2,(FLinkerLoad *)0x0,-1,true,false);
        uVar16 = this->DeferredCDOIndex;
        uVar7 = uVar18;
        if ((int)uVar16 < (int)this->_padding_) {
          uVar7 = ~uVar16 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FObjectExport::ResetObject
                  ((FObjectExport *)((longlong)(int)uVar16 * 0x68 + this->_padding_));
        pUVar11 = CreateExport(this,this->DeferredCDOIndex);
        (**(code **)(*(longlong *)&pUVar2->field_0x28 + 0x10))(&pUVar2->field_0x28,pUVar11);
        ResolvedDeferredSubobjects(this,pUVar2);
        UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)pUVar2);
      }
    }
  }
  uVar16 = this->DeferredCDOIndex;
  if (uVar16 == 0xffffffff) {
    this_01 = (UObjectBase *)(param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  }
  else {
    if ((int)uVar16 < (int)this->_padding_) {
      uVar18 = ~uVar16 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = *(UObjectBase **)((longlong)(int)uVar16 * 0x68 + 0x40 + this->_padding_);
  }
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_a8 = this_01;
  bVar6 = FBlueprintSupport::IsDeferredExportCreationDisabled();
  if (!bVar6) {
    this->LoadFlags = this->LoadFlags | 8;
    local_d8[0] = 0;
    if (0 < (int)this->_padding_) {
      do {
        uVar16 = local_d8[0];
        if ((this->DeferredCDOIndex == -1) && (this->bForceBlueprintFinalization == false)) break;
        uVar18 = 0;
        if ((int)local_d8[0] < (int)this->_padding_) {
          uVar18 = ~local_d8[0] >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar20 = (FObjectExport *)((longlong)(int)uVar16 * 0x68 + this->_padding_);
        pUVar2 = (ULinkerPlaceholderExportObject *)pFVar20->Object;
        if (pUVar2 != (ULinkerPlaceholderExportObject *)0x0) {
          pUVar10 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
          iVar8 = (int)pUVar10->_padding_;
          if ((iVar8 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
              &pUVar10->_padding_)) {
            if ((pFVar20->ClassIndex).Index < 1) {
              if (*(longlong *)&pUVar2->field_0xf0 == 0) {
                pUVar10 = GetExportLoadClass(this,local_d8[0]);
                uVar16 = local_d8[0];
                if (pUVar10 != (UClass *)0x0) {
                  local_70 = local_res20;
                  local_88.TrackedExport = local_d8[0];
                  local_78 = UE::Core::Private::Function::
                             TFunctionRefCaller<`TThreadSingleton<FResolvingExportTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                             ::Call;
                  local_88.TrackedLinker = this;
                  pFVar13 = FThreadSingletonInitializer::Get
                                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,
                                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FResolvingExportTracker>::GetTlsSlot(void)'
                                        ::__l2::TlsSlot);
                  local_b8[0] = uVar16;
                  uVar16 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4))
                           * -0x7a143595;
                  uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
                  local_98 = this;
                  this_00 = TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                            ::FindOrAddImpl<FLinkerLoad_*_const_&>
                                      ((TMapBase<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                                        *)(pFVar13 + 2),uVar16 >> 0x10 ^ uVar16,&local_98);
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (this_00,local_a0,(bool *)local_b8);
                  ForceRegenerateClass(this,pUVar10);
                  if (pUVar2 != (ULinkerPlaceholderExportObject *)pFVar20->Object) {
                    FScopedResolvingExportTracker::~FScopedResolvingExportTracker(&local_88);
                    goto LAB_141eb8be7;
                  }
                  FScopedResolvingExportTracker::~FScopedResolvingExportTracker(&local_88);
                }
                UObject::SetLinker((UObject *)pUVar2,(FLinkerLoad *)0x0,-1,true,false);
                FObjectExport::ResetObject(pFVar20);
                pUVar11 = CreateExport(this,local_d8[0]);
                (**(code **)(*(longlong *)&pUVar2->field_0x28 + 0x10))(&pUVar2->field_0x28,pUVar11);
                ResolvedDeferredSubobjects(this,pUVar2);
                UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)pUVar2);
                if (pUVar11 != (UObject *)0x0) {
                  Preload((FLinkerLoad *)&this->_padding_,pUVar11);
                }
              }
            }
            else {
              if (((local_d0.Data <= (FScriptContainerElement *)local_d8) &&
                  ((FScriptContainerElement *)local_d8 <
                   local_d0.Data + (longlong)local_c8._4_4_ * 4)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar8 = (uint)local_c8;
              if ((uint)local_c8 == local_c8._4_4_) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_d0,(int *)((longlong)&local_c8 + 4));
              }
              local_c8 = CONCAT44(local_c8._4_4_,iVar8 + 1);
              *(uint *)(local_d0.Data + (longlong)iVar8 * 4) = local_d8[0];
            }
          }
        }
LAB_141eb8be7:
        local_d8[0] = local_d8[0] + 1;
      } while ((int)local_d8[0] < (int)this->_padding_);
    }
    this->LoadFlags = this->LoadFlags & 0xfffffff7;
  }
  uVar17 = 0;
  if (this->DeferredCDOIndex == -1) {
    if (this->bForceBlueprintFinalization == false) goto LAB_141eb90a1;
  }
  else {
    EVar1 = this_01->ObjectFlags;
    UObjectBase::AtomicallyClearFlags(this_01,RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad)
    ;
    UObject::SetLinker((UObject *)this_01,this,this->DeferredCDOIndex,false,false);
    if ((((~(byte)(EVar1 >> 0x1e) & 1) == 0) &&
        ((this_01->ObjectFlags & EVar1 & RF_MirroredGarbage) != (EVar1 & RF_MirroredGarbage))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(NewFlags & RF_MirroredGarbage) || (GetFlags() & (NewFlags & RF_MirroredGarbage)) == (NewFlags & RF_MirroredGarbage)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                           ,0x4b,
                           L"RF_MirroredGarbage can not be set through SetFlags function. Use MarkAsGarbage() instead"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UObjectBase::AtomicallySetFlags(this_01,EVar1);
  }
  Preload((FLinkerLoad *)&this->_padding_,(UObject *)this_01);
  uVar21 = uVar17;
  if (0 < (int)this->_padding_) {
    do {
      uVar18 = (uint)uVar17;
      uVar16 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = this->_padding_;
      for (uVar16 = *(uint *)(lVar3 + 8 + uVar21); 0 < (int)uVar16;
          uVar16 = *(uint *)((ulonglong)uVar16 * 0x68 + -0x60 + this->_padding_)) {
        uVar7 = uVar16 - 1;
        if (uVar7 == this->DeferredCDOIndex) {
          if (*(longlong *)(lVar3 + 0x40 + uVar21) == 0) {
            CreateExport(this,uVar18);
          }
          pUVar11 = *(UObject **)(lVar3 + 0x40 + uVar21);
          if (pUVar11 != (UObject *)0x0) {
            Preload((FLinkerLoad *)&this->_padding_,pUVar11);
          }
          break;
        }
        uVar9 = 0;
        if ((int)uVar7 < (int)this->_padding_) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar17 = (ulonglong)(uVar18 + 1);
      uVar21 = uVar21 + 0x68;
    } while ((int)(uVar18 + 1) < (int)this->_padding_);
  }
  uVar21 = (ulonglong)(int)(uint)local_c8;
  local_ac = this->DeferredCDOIndex;
  this->DeferredCDOIndex = -1;
  local_b0 = (uint)local_c8;
  local_90 = local_d0.Data + uVar21 * 4;
  uVar17 = uVar21;
  FVar19.Data = local_d0.Data;
  while( true ) {
    pFVar5 = local_90;
    if ((int)uVar21 != (int)uVar17) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar19.Data == pFVar5) break;
    uVar16 = *(uint *)FVar19.Data;
    uVar18 = 0;
    if ((int)uVar16 < (int)this->_padding_) {
      uVar18 = ~uVar16 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar20 = (FObjectExport *)((longlong)(int)uVar16 * 0x68 + this->_padding_);
    pUVar2 = (ULinkerPlaceholderExportObject *)pFVar20->Object;
    if (pUVar2 == (ULinkerPlaceholderExportObject *)0x0) {
LAB_141eb8ff6:
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2825597286833190618>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                         ,0x926,"PlaceholderExport");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pUVar10 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
      iVar8 = (int)pUVar10->_padding_;
      if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar10->_padding_)) goto LAB_141eb8ff6;
      bVar6 = FLinkerPlaceholderBase::IsMarkedResolved
                        ((FLinkerPlaceholderBase *)&pUVar2->field_0x28);
      if (!bVar6) {
        UObject::SetLinker((UObject *)pUVar2,(FLinkerLoad *)0x0,-1,true,bVar6);
        FObjectExport::ResetObject(pFVar20);
        pUVar11 = CreateExport(this,uVar16);
        (**(code **)(*(longlong *)&pUVar2->field_0x28 + 0x10))(&pUVar2->field_0x28,pUVar11);
        ResolvedDeferredSubobjects(this,pUVar2);
        pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc);
        if ((((ulonglong)((pFVar12->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e & 1) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsRooted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                               ,0xb8,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar2,RF_MirroredGarbage);
        pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc);
        do {
          lVar3 = (pFVar12->field0_0x0).FlagsAndRefCount;
          uVar16 = (uint)((ulonglong)lVar3 >> 0x20);
          if ((uVar16 >> 0x15 & 1) != 0) break;
          if (((ulonglong)pFVar12 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar6 = lVar3 == (pFVar12->field0_0x0).FlagsAndRefCount;
          if (bVar6) {
            (pFVar12->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)uVar16 << 0x20 | (longlong)(int)lVar3 | 0x20000000000000;
          }
          UNLOCK();
        } while (!bVar6);
        pFVar12 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc);
        FUObjectItem::ClearRootFlags(pFVar12,Async);
        if (pUVar11 != (UObject *)0x0) {
          Preload((FLinkerLoad *)&this->_padding_,pUVar11);
        }
      }
    }
    uVar21 = local_c8 & 0xffffffff;
    FVar19.Data = FVar19.Data + 4;
    uVar17 = (ulonglong)local_b0;
  }
  this->DeferredCDOIndex = local_ac;
  local_60 = &local_c0;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FDeferredCdoInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar13 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredCdoInitializationTracker>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  local_50 = local_bf;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FDeferredSubObjInitializationTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar14 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_58,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FDeferredSubObjInitializationTracker>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  pFVar15 = (FDeferredInitializationTrackerBase *)(pFVar13 + -0x21);
  if (pFVar13 == (FTlsAutoCleanup *)0x0) {
    pFVar15 = (FDeferredInitializationTrackerBase *)0x0;
  }
  FDeferredInitializationTrackerBase::ResolveArchetypeInstances(pFVar15,(UObject *)local_a8);
  pFVar15 = (FDeferredInitializationTrackerBase *)(pFVar14 + -0x21);
  if (pFVar14 == (FTlsAutoCleanup *)0x0) {
    pFVar15 = (FDeferredInitializationTrackerBase *)0x0;
  }
  FDeferredInitializationTrackerBase::ResolveArchetypeInstances(pFVar15,(UObject *)local_a8);
LAB_141eb90a1:
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  return;
}

// ResolveDependencyPlaceholder @ 141eb9320

int __thiscall
FLinkerLoad::ResolveDependencyPlaceholder
          (FLinkerLoad *this,FLinkerPlaceholderBase *param_1,UClass *param_2,FName param_3)

{
  int *piVar1;
  TArray<FLinkerPlaceholderBase_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  longlong lVar4;
  code *pcVar5;
  FLinkerPlaceholderBase *pFVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  UObject *pUVar13;
  FString *pFVar14;
  size_t sVar15;
  UClass *pUVar16;
  UObject *pUVar17;
  ulonglong uVar18;
  uint uVar19;
  wchar_t *pwVar20;
  FScriptContainerElement *pFVar21;
  uint *puVar22;
  FScriptContainerElement *pFVar23;
  wchar_t *pwVar24;
  FLinkerPlaceholderBase *local_res10;
  UClass *local_res18;
  undefined1 local_158 [8];
  FName local_150;
  uint local_148;
  uint local_144;
  UObject *local_140;
  TStringView<wchar_t> local_138;
  TMap<FName,FLinkerPlaceholderBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>_>
  *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  int local_100;
  FName local_f8 [2];
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TMap<FName,FLinkerPlaceholderBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  TStringView<wchar_t> local_a8;
  FString local_98;
  uint local_7c;
  FString local_78;
  FString local_68 [2];
  undefined4 local_3c;
  
  local_144 = this->LoadFlags;
  pTVar2 = &this->ResolvingPlaceholderStack;
  this->LoadFlags = local_144 & 0xffefffff;
  pFVar21 = (pTVar2->AllocatorInstance).Data;
  local_res10 = param_1;
  local_res18 = param_2;
  if (((pFVar21 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar21 + (longlong)(this->ResolvingPlaceholderStack).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    iVar9 = (*pcVar5)();
    return iVar9;
  }
  iVar9 = (this->ResolvingPlaceholderStack).ArrayNum;
  if (iVar9 == (this->ResolvingPlaceholderStack).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,&(this->ResolvingPlaceholderStack).ArrayMax)
    ;
  }
  (this->ResolvingPlaceholderStack).ArrayNum = iVar9 + 1;
  *(FLinkerPlaceholderBase **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_res10
  ;
  pUVar13 = (UObject *)(**(code **)(local_res10->_padding_ + 0x18))();
  pFVar6 = local_res10;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  iVar9 = (local_res10->PackageIndex).Index;
  local_140 = pUVar13;
  if (iVar9 != 0) {
    if ((-1 < iVar9) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsImport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x55,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
    uVar12 = (pFVar6->PackageIndex).Index;
    uVar19 = ~uVar12;
    uVar10 = 0;
    if ((int)uVar19 < (int)this->_padding_) {
      uVar10 = uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
    pUVar17 = *(UObject **)((longlong)(int)uVar19 * 0x38 + 0x28 + this->_padding_);
    if ((pUVar17 == (UObject *)0x0) || (pUVar17 == pUVar13)) {
      *(undefined8 *)((longlong)(int)uVar19 * 0x38 + 0x28 + this->_padding_) = 0;
      pUVar17 = CreateImport(this,uVar19);
    }
    goto LAB_141eb96e1;
  }
  local_150 = param_3;
  bVar8 = ::FName::IsWithinBounds(param_3.ComparisonIndex.Value);
  pFVar6 = local_res10;
  iVar9 = 0;
  if ((!bVar8) ||
     (TStack_120.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           CONCAT44(TStack_120.Array._4_4_,TStack_120.Array._0_4_), param_3 == (FName)0x0)) {
    local_128 = &this->ImportPlaceholders;
    iVar11 = *(int *)&(this->ImportPlaceholders).field_0x28;
    local_c8 = &(this->ImportPlaceholders).field_0x10;
    uStack_cc = 1;
    local_b8 = 0;
    TStack_120.CurrentBitIndex = local_b8;
    if (iVar11 != 0) {
      puVar22 = *(uint **)&(this->ImportPlaceholders).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)local_c8;
      }
      uVar12 = *puVar22;
      iVar9 = 0;
      local_b8 = 0;
      while (uVar12 == 0) {
        iVar9 = iVar9 + 1;
        local_b8 = local_b8 + 0x20;
        TStack_120.CurrentBitIndex = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_141eb94df;
        uVar12 = puVar22[iVar9];
      }
      uStack_cc = ~(uVar12 - 1) & uVar12;
      uVar18 = (ulonglong)uStack_cc * 2 + 1;
      lVar4 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_100 = (int)lVar4;
      TStack_120.CurrentBitIndex = local_100 + -1 + local_b8;
      if (iVar11 < TStack_120.CurrentBitIndex) {
        TStack_120.CurrentBitIndex = iVar11;
      }
    }
LAB_141eb94df:
    uStack_b4 = local_3c;
    uStack_c0 = 0xffffffff;
    TStack_120.UnvisitedBitMask = 0xffffffff;
    TStack_120._padding_ = CONCAT44(uStack_cc,iVar9);
    TStack_120._28_4_ = local_3c;
    TStack_120.BaseBitIndex = local_b8;
    local_d8 = local_128;
    iStack_d0 = iVar9;
    iStack_bc = TStack_120.CurrentBitIndex;
    TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
    if (TStack_120.CurrentBitIndex < *(int *)&(this->ImportPlaceholders).field_0x28) {
      do {
        pFVar3 = (FName *)(*(longlong *)local_128 + (longlong)TStack_120.CurrentBitIndex * 0x18);
        if (*(FLinkerPlaceholderBase **)
             (*(longlong *)local_128 + 8 + (longlong)TStack_120.CurrentBitIndex * 0x18) == pFVar6) {
          if (pFVar3 != (FName *)0x0) {
            local_150 = *pFVar3;
          }
          break;
        }
        TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
    }
  }
  local_138.DataPtr = (wchar_t *)0x0;
  local_138._8_8_ = (ulonglong)local_7c << 0x20;
  pFVar14 = ::FName::ToString(&local_150,&local_98);
  if ((pFVar14->Data).ArrayNum == 0) {
    local_e8 = (FScriptContainerElement *)0x15060d16c;
LAB_141eb95c8:
    sVar15 = wcslen((wchar_t *)local_e8);
    iStack_e0 = (int)sVar15;
  }
  else {
    local_e8 = (pFVar14->Data).AllocatorInstance.Data;
    iStack_e0 = 0;
    if (local_e8 != (FScriptContainerElement *)0x0) goto LAB_141eb95c8;
  }
  pUVar16 = Z_Construct_UClass_UObject_NoRegister();
  local_a8._12_4_ = uStack_dc;
  local_a8.Size = iStack_e0;
  local_a8.DataPtr = (wchar_t *)local_e8;
  pUVar17 = StaticLoadObject(pUVar16,(UObject *)0x0,&local_a8,&local_138,0x4002,(UPackageMap *)0x0,
                             true,(FLinkerInstancingContext *)0x0);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
LAB_141eb96e1:
  pwVar24 = L"";
  iVar9 = 0;
  if (local_res18 != (UClass *)0x0) {
    local_148 = (local_res18->Interfaces).ArrayNum;
    uVar18 = (ulonglong)(int)local_148;
    pFVar21 = (local_res18->Interfaces).AllocatorInstance.Data;
    pFVar23 = pFVar21 + uVar18 * 0x10;
    while( true ) {
      if ((local_res18->Interfaces).ArrayNum != (int)uVar18) {
        local_158[0] = 0;
        `TCheckedPointerIterator<FImplementedInterface,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_158);
      }
      if (pFVar21 == pFVar23) break;
      if (local_140 == *(UObject **)pFVar21) {
        iVar9 = iVar9 + 1;
        if (pUVar17 == (UObject *)0x0) {
          pUVar13 = (UObject *)0x0;
        }
        else {
          pUVar16 = Z_Construct_UClass_UClass_NoRegister();
          iVar11 = (int)pUVar16->_padding_;
          if ((*(int *)(*(longlong *)&pUVar17->field_0x10 + 0x38) < iVar11) ||
             (pUVar13 = pUVar17,
             (longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar17->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
             &pUVar16->_padding_)) {
            pFVar14 = GetTypeName<UClass>(&local_78);
            if ((pFVar14->Data).ArrayNum == 0) {
              pwVar20 = L"";
            }
            else {
              pwVar20 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
            }
            pFVar14 = GetFullNameForCastLogError<UObject>(local_68,pUVar17);
            if ((pFVar14->Data).ArrayNum != 0) {
              pwVar24 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar24,pwVar20);
          }
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        *(UObject **)pFVar21 = pUVar13;
      }
      uVar18 = (ulonglong)local_148;
      pFVar21 = pFVar21 + 0x10;
    }
  }
  iVar11 = (**(code **)(local_res10->_padding_ + 0x10))(local_res10,pUVar17);
  if (0 < (this->ResolvingPlaceholderStack).ArrayNum) {
    if ((this->ResolvingPlaceholderStack).ArrayNum < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
    }
    piVar1 = &(this->ResolvingPlaceholderStack).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&pTVar2->AllocatorInstance,(this->ResolvingPlaceholderStack).ArrayNum,
               &(this->ResolvingPlaceholderStack).ArrayMax);
  }
  FVar7 = local_150;
  local_f8[0] = local_150;
  if (*(int *)&(this->ImportPlaceholders).field_0x8 !=
      *(int *)&(this->ImportPlaceholders).field_0x34) {
    uVar12 = ::GetTypeHash(local_150.ComparisonIndex);
    TSet<TTuple<FName,FLinkerPlaceholderBase_*>,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FLinkerPlaceholderBase_*>,TDefaultMapHashableKeyFuncs<FName,FLinkerPlaceholderBase_*,0>,FDefaultSetAllocator>
                         *)&this->ImportPlaceholders,FVar7.Number + uVar12,local_f8);
  }
  this->LoadFlags = local_144;
  return iVar9 + iVar11;
}

// ResolvePlaceholder @ 141eb98e0

void __thiscall
FLinkerLoad::ResolvePlaceholder(FLinkerLoad *this,ULinkerPlaceholderExportObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObject *pUVar4;
  uint uVar5;
  
  if (*(int *)&param_1->field_0x30 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsExport()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                       ,0x5b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = *(int *)&param_1->field_0x30 - 1;
  UObject::SetLinker((UObject *)param_1,(FLinkerLoad *)0x0,-1,true,false);
  uVar3 = 0;
  if ((int)uVar5 < (int)this->_padding_) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)((longlong)(int)uVar5 * 0x68 + 0x40 + this->_padding_) = 0;
  pUVar4 = CreateExport(this,uVar5);
  (**(code **)(*(longlong *)&param_1->field_0x28 + 0x10))(&param_1->field_0x28,pUVar4);
  UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)param_1);
  ResolvedDeferredSubobjects(this,param_1);
  if (pUVar4 != (UObject *)0x0) {
    Preload((FLinkerLoad *)&this->_padding_,pUVar4);
  }
  return;
}

// ResolvedDeferredSubobjects @ 141eb9d50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FLinkerLoad::ResolvedDeferredSubobjects(FLinkerLoad *this,ULinkerPlaceholderExportObject *param_1)

{
  undefined8 *puVar1;
  ULinkerPlaceholderExportObject *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FUObjectItem *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 local_res18 [8];
  uint local_res20;
  
  bVar4 = FLinkerPlaceholderBase::IsMarkedResolved((FLinkerPlaceholderBase *)&param_1->field_0x28);
  if ((!bVar4) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2825597286833190553>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Blueprint\\BlueprintSupport.cpp"
                         ,0x967,"OwningPlaceholder->IsMarkedResolved()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res20 = *(uint *)&param_1->field_0xe8;
  uVar8 = (ulonglong)(int)local_res20;
  puVar10 = *(undefined8 **)&param_1->field_0xe0;
  puVar1 = puVar10 + uVar8;
  do {
    if (*(int *)&param_1->field_0xe8 != (int)uVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<ULinkerPlaceholderExportObject_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (puVar10 == puVar1) {
      return;
    }
    this_00 = (ULinkerPlaceholderExportObject *)*puVar10;
    if ((*(int *)&this_00->field_0x30 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsExport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x5b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = *(int *)&this_00->field_0x30 - 1;
    UObject::SetLinker((UObject *)this_00,(FLinkerLoad *)0x0,-1,true,false);
    uVar7 = 0;
    if ((int)uVar9 < (int)this->_padding_) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FObjectExport::ResetObject((FObjectExport *)((longlong)(int)uVar9 * 0x68 + this->_padding_));
    pUVar5 = CreateExport(this,uVar9);
    (**(code **)(*(longlong *)&this_00->field_0x28 + 0x10))(&this_00->field_0x28,pUVar5);
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_00->field_0xc);
    if ((((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsRooted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                           ,0xb8,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_MirroredGarbage);
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_00->field_0xc);
    do {
      lVar2 = (pFVar6->field0_0x0).FlagsAndRefCount;
      uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
      if ((uVar7 >> 0x15 & 1) != 0) break;
      if (((ulonglong)pFVar6 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar4 = lVar2 == (pFVar6->field0_0x0).FlagsAndRefCount;
      if (bVar4) {
        (pFVar6->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar7 << 0x20 | (longlong)(int)lVar2 | 0x20000000000000;
      }
      UNLOCK();
    } while (!bVar4);
    pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_00->field_0xc);
    FUObjectItem::ClearRootFlags(pFVar6,Async);
    ResolvedDeferredSubobjects(this,this_00);
    if (pUVar5 != (UObject *)0x0) {
      Preload((FLinkerLoad *)&this->_padding_,pUVar5);
    }
    uVar8 = (ulonglong)local_res20;
    puVar10 = puVar10 + 1;
  } while( true );
}

// Precache @ 141f03910

bool __thiscall FLinkerLoad::Precache(FLinkerLoad *this,long64 param_1,long64 param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f0391a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x1f0))();
  return (bool)uVar1;
}

// GetDebugName @ 141f346d0

FString * __thiscall FLinkerLoad::GetDebugName(FLinkerLoad *this,FString *__return_storage_ptr__)

{
  FPackagePath::GetDebugName(&this->PackagePath,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 142094fa0

void __cdecl `FLinkerLoad::CreateLinker'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 142094fb0

void __cdecl `FLinkerLoad::Tick'::__l19::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// <lambda_invoker_cdecl> @ 142094fc0

void __cdecl `FLinkerLoad::CreateLoader'::__l15::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// FLinkerLoad @ 1420a1ed0

/* WARNING: Enum "Type": Some values do not have unique names */

FLinkerLoad * __thiscall
FLinkerLoad::FLinkerLoad
          (FLinkerLoad *this,UPackage *param_1,FPackagePath *param_2,uint param_3,
          FLinkerInstancingContext *param_4)

{
  FPackagePath *this_00;
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  EPackageExtension EVar5;
  DWORD DVar6;
  FLinkerLoad *pFVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_LinkerCount> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_LiveLinkerCount> FVar12;
  FLinkerManager *pFVar13;
  FLinkerLoad *local_res8;
  FName local_res10;
  FLLMScope local_res20 [2];
  FName local_b8;
  FName local_b0;
  FLinkerLoad *local_a8;
  FName local_a0;
  FMemScope local_98;
  FStatMessage local_90;
  FStatMessage local_80;
  FString local_70;
  FAssetLog local_60;
  FName local_48;
  FName local_40;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FLinker__6B_;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)param_1;
  FPackageFileSummary::FPackageFileSummary((FPackageFileSummary *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LinkerRoot",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Linker.cpp"
                         ,0xac,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FLinkerLoad *)(*pcVar3)();
    return pFVar7;
  }
  if (((GIsClient != false) ||
      ((GIsServer != false && (*(undefined1 *)&this->_padding_ = 1, GIsClient != false)))) &&
     (GIsServer == false)) {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  FArchiveState::FArchiveState((FArchiveState *)&this->_padding_);
  this->LoadFlags = param_3;
  this->_padding_ = (longlong)&_vftable__for__FLinker__;
  this_00 = &this->PackagePath;
  this->bHaveImportsBeenVerified = false;
  this->_padding_ = (longlong)&_vftable__for__FArchiveUObject__;
  this->TemplateForGetArchetypeFromLoader = (UObject *)0x0;
  this->bForceSimpleIndexToObject = false;
  this->bLockoutLegacyOperations = false;
  (this->Mutex).State = (atomic<unsigned_int>)0x0;
  (this->Mutex).ThreadId = (atomic<unsigned_int>)0x0;
  this->bIsAsyncLoader = false;
  this->bIsDestroyingLoader = false;
  this->StructuredArchive = (FStructuredArchive *)0x0;
  this->StructuredArchiveFormatter = (FBinaryArchiveFormatter *)0x0;
  (this->StructuredArchiveRootRecord).bIsSet = false;
  (this->ExportReaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExportReaders).ArrayNum = 0;
  (this->ExportReaders).ArrayMax = 0;
  FPackagePath::FPackagePath(this_00,param_2);
  this->Loader = (FArchive *)0x0;
  (this->InstancingContext).SharedData.Object = (param_4->SharedData).Object;
  (this->InstancingContext).SharedData.SharedReferenceCount.ReferenceController =
       (param_4->SharedData).SharedReferenceCount.ReferenceController;
  (param_4->SharedData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_4->SharedData).Object = (FSharedLinkerInstancingContextData *)0x0;
  (this->PackageTrailer).Ptr = (FPackageTrailer *)0x0;
  *(undefined8 *)&(this->ImportsToVerifyOnCreate).Elements = 0;
  *(undefined8 *)&(this->ImportsToVerifyOnCreate).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ImportsToVerifyOnCreate).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ImportsToVerifyOnCreate).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ImportsToVerifyOnCreate).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ImportsToVerifyOnCreate).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImportsToVerifyOnCreate).Elements.field_0x34 = 0;
  (this->ImportsToVerifyOnCreate).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ImportsToVerifyOnCreate).HashSize = 0;
  this->bHasSerializedImportTypeHierarchies = false;
  this->AsyncRoot = (void *)0x0;
  (this->ExportHash).Ptr = (int *)0x0;
  (this->PreloadDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreloadDependencies).ArrayNum = 0;
  (this->PreloadDependencies).ArrayMax = 0;
  (this->ExternalReadDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalReadDependencies).ArrayNum = 0;
  (this->ExternalReadDependencies).ArrayMax = 0;
  this->SoftObjectPathListIndex = 0;
  this->GatherableTextDataMapIndex = 0;
  this->ImportMapIndex = 0;
  this->ExportMapIndex = 0;
  this->DependsMapIndex = 0;
  this->ExportHashIndex = 0;
  puVar1 = &this->field_0x468;
  this->bHasSerializedPackageFileSummary = false;
  this->bLoaderNeedsEngineVersionChecks = true;
  this->bUseFullTimeLimit = false;
  this->bUseTimeLimit = false;
  this->bTimeLimitExceeded = false;
  this->bIsGatheringDependencies = false;
  this->bHasFinishedInitialization = false;
  this->bHasFoundExistingExports = false;
  this->bFixupExportMapDone = false;
  this->bHasAppliedInstancingContext = false;
  this->bHasRelocatedReferences = false;
  this->bHasPopulatedInstancingContext = false;
  this->bHasFixedUpImportMap = false;
  this->bHasSerializedPreloadDependencies = false;
  this->bHasConstructedExportsReaders = false;
  this->bHasSerializedPackageTrailer = false;
  this->IsTimeLimitExceededCallCount = 0;
  this->TimeLimit = 0.0;
  this->TickStartTime = 0.0;
  this->bForceBlueprintFinalization = false;
  this->DeferredCDOIndex = -1;
  (this->ResolvingPlaceholderStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResolvingPlaceholderStack).ArrayNum = 0;
  (this->ResolvingPlaceholderStack).ArrayMax = 0;
  *(undefined8 *)&this->ImportPlaceholders = 0;
  *(undefined8 *)&(this->ImportPlaceholders).field_0x8 = 0;
  *(undefined8 *)&(this->ImportPlaceholders).field_0x20 = 0;
  *(undefined4 *)&(this->ImportPlaceholders).field_0x28 = 0;
  *(undefined4 *)&(this->ImportPlaceholders).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImportPlaceholders).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImportPlaceholders).field_0x34 = 0;
  *(undefined8 *)&(this->ImportPlaceholders).field_0x40 = 0;
  *(undefined4 *)&(this->ImportPlaceholders).field_0x48 = 0;
  FLLMScope::FLLMScope
            (local_res20,LLMTagDeclaration_UObject_Linker.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_UObject_Linker.UniqueName;
  FMemScope::FMemScope(&local_98,&local_res10,true);
  EVar5 = FPackagePath::GetHeaderExtension(this_00);
  if ((EVar5 == Unspecified) && (1 < (byte)LogPackageName._0_1_)) {
    ::FString::PrintfImpl
              (&local_70,L"PackagePath is missing header extension when assigned to LinkerLoad");
    local_60.Path = (wchar_t *)0x0;
    local_60.Object = (UObject *)0x0;
    local_60.PackagePath = this_00;
    UE::Core::Private::RecordAssetLog
              ((FName *)&LogPackageName.field_0x4,Error,&local_60,&local_70,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x4b3);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  FVar9 = StatPtr_STAT_LinkerCount;
  if (StatPtr_STAT_LinkerCount == (FThreadSafeStaticStat<FStat_STAT_LinkerCount>)0x0) {
    pFVar8 = ::FName::FName(&local_48,"STAT_LinkerCount");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_LinkerCount>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerCount,*pFVar8,
                       L"Linker Count","STATGROUP_LinkerCount","STATCAT_Advanced",L"Linker Count",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar9;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    local_90.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_90.StatData.Pad[0] = '\x01';
    local_90.StatData.Pad[1] = '\0';
    local_90.StatData.Pad[2] = '\0';
    local_90.StatData.Pad[3] = '\0';
    local_90.StatData.Pad[4] = '\0';
    local_90.StatData.Pad[5] = '\0';
    local_90.StatData.Pad[6] = '\0';
    local_90.StatData.Pad[7] = '\0';
    local_b8 = FVar2;
    local_90.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_90);
    FStatsTrace::Add(&local_b8,1);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  FVar12 = StatPtr_STAT_LiveLinkerCount;
  if (StatPtr_STAT_LiveLinkerCount == (FThreadSafeStaticStat<FStat_STAT_LiveLinkerCount>)0x0) {
    pFVar8 = ::FName::FName(&local_40,"STAT_LiveLinkerCount");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_LiveLinkerCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLinkerCount,*pFVar8,
                        L"Live Linker Count","STATGROUP_LinkerCount","STATCAT_Advanced",
                        L"Linker Count",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar12;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar10 == (FThreadStats *)0x0) {
      pFVar11 = FThreadStatsPool::Get();
      pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
    }
    local_80.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_80.StatData.Pad[0] = '\x01';
    local_80.StatData.Pad[1] = '\0';
    local_80.StatData.Pad[2] = '\0';
    local_80.StatData.Pad[3] = '\0';
    local_80.StatData.Pad[4] = '\0';
    local_80.StatData.Pad[5] = '\0';
    local_80.StatData.Pad[6] = '\0';
    local_80.StatData.Pad[7] = '\0';
    local_b0 = FVar2;
    local_80.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar10,&local_80);
    FStatsTrace::Add(&local_b0,1);
    if (pFVar10->ScopeCount == 0) {
      FThreadStats::Flush(pFVar10,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar10,false,false);
    }
  }
  pFVar13 = FLinkerManager::Get();
  lpCriticalSection = &pFVar13->LiveLinkersCritical;
  local_a8 = this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::
  Emplace<FLinkerLoad_*_const_&>(&pFVar13->LiveLinkers,&local_res8,(bool *)&local_a8);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DVar6 = GetCurrentThreadId();
  this->OwnerThread = DVar6;
  FPackagePath::GetPackageFName(this_00);
  FVar2 = *(FName *)(this->_padding_ + 0x18);
  if (FVar2 != local_a0) {
    FLinkerInstancingContext::BuildPackageMapping(&this->InstancingContext,local_a0,FVar2);
  }
  FLoadTimeProfilerTracePrivate::OutputNewLinker(this);
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope(local_res20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedData).SharedReferenceCount.ReferenceController);
  return this;
}

// ~FLinkerLoad @ 1420a46f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLinkerLoad::~FLinkerLoad(FLinkerLoad *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FSetElementId> FVar4;
  FPackageTrailer *pFVar5;
  code *pcVar6;
  bool bVar7;
  FLinkerManager *pFVar8;
  uint *puVar9;
  FTlsAutoCleanup *pFVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_LiveLinkerCount> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  FStatMessage local_48;
  code *local_38;
  undefined1 *local_30;
  
  this->_padding_ = (longlong)&_vftable__for__FLinker__;
  this->_padding_ = (longlong)&_vftable__for__FArchiveUObject__;
  FLoadTimeProfilerTracePrivate::OutputDestroyLinker(this);
  pFVar8 = FLinkerManager::Get();
  lpCriticalSection = &pFVar8->LiveLinkersCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Remove
            (&pFVar8->LiveLinkers,this);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  puVar9 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar10 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar9);
  if (pFVar10[4].field_0x1 == '\0') {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
  }
  Detach(this);
  FVar12 = StatPtr_STAT_LiveLinkerCount;
  if (StatPtr_STAT_LiveLinkerCount == (FThreadSafeStaticStat<FStat_STAT_LiveLinkerCount>)0x0) {
    pFVar11 = ::FName::FName(local_res18,"STAT_LiveLinkerCount");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_LiveLinkerCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLinkerCount,*pFVar11,
                        L"Live Linker Count","STATGROUP_LinkerCount","STATCAT_Advanced",
                        L"Linker Count",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar12;
  local_res10 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_48.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_48.StatData.Pad[0] = '\x01';
    local_48.StatData.Pad[1] = '\0';
    local_48.StatData.Pad[2] = '\0';
    local_48.StatData.Pad[3] = '\0';
    local_48.StatData.Pad[4] = '\0';
    local_48.StatData.Pad[5] = '\0';
    local_48.StatData.Pad[6] = '\0';
    local_48.StatData.Pad[7] = '\0';
    local_res10 = FVar1;
    local_48.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_48);
    FStatsTrace::Add(&local_res10,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  if (this->Loader != (FArchive *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Loader == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x4da,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->StructuredArchive != (FStructuredArchive *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructuredArchive == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x4db,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->StructuredArchiveFormatter != (FBinaryArchiveFormatter *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructuredArchiveFormatter == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x4dc,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  *(undefined4 *)&(this->ImportPlaceholders).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ImportPlaceholders).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLinkerPlaceholderBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLinkerPlaceholderBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLinkerPlaceholderBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ImportPlaceholders);
  pFVar3 = (this->ResolvingPlaceholderStack).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TFunction<bool___cdecl(double)>,int>
            ((TFunction<bool___cdecl(double)> *)
             (this->ExternalReadDependencies).AllocatorInstance.Data,
             (this->ExternalReadDependencies).ArrayNum);
  pFVar3 = (this->ExternalReadDependencies).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PreloadDependencies).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  operator_delete__((this->ExportHash).Ptr);
  (this->ImportsToVerifyOnCreate).HashSize = 0;
  FVar4 = (this->ImportsToVerifyOnCreate).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ImportsToVerifyOnCreate).Elements);
  pFVar5 = (this->PackageTrailer).Ptr;
  if (pFVar5 != (FPackageTrailer *)0x0) {
    pFVar3 = (pFVar5->Header).PayloadLookupTable.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar5,0x30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstancingContext).SharedData.SharedReferenceCount.ReferenceController);
  pFVar3 = (this->ExportReaders).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FArchive::~FArchive((FArchive *)&this->_padding_);
  FLinker::~FLinker((FLinker *)this);
  return;
}

// operator<< @ 1420a5760

FArchive * __thiscall FLinkerLoad::operator<<(FLinkerLoad *this,UObject **param_1)

{
  code *pcVar1;
  FPackageIndex FVar2;
  bool bVar3;
  FArchive *pFVar4;
  FObjectImport *pFVar5;
  UObject *pUVar6;
  uint uVar7;
  uint uVar8;
  FPackageIndex local_res8 [2];
  
  local_res8[0].Index = 0;
  ::operator<<((FArchive *)this,local_res8);
  FVar2.Index = local_res8[0].Index;
  if ((GEventDrivenLoaderEnabled == false) || ((char)this->_padding_ == '\0')) {
    pUVar6 = IndexToObject((FLinkerLoad *)&this[-1]._padding_,local_res8[0]);
    *param_1 = pUVar6;
  }
  else {
    if (((this->_padding_ & 1) == 0) || (this->_padding_ == 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading() && AsyncRoot",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0x11fd,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FArchive *)(*pcVar1)();
        return pFVar4;
      }
    }
    if (FVar2.Index == 0) {
      *param_1 = (UObject *)0x0;
    }
    else if (FVar2.Index < 1) {
      pFVar5 = FLinkerTables::Imp((FLinkerTables *)&this[-1]._padding_,FVar2);
      *param_1 = pFVar5->XObject;
    }
    else {
      uVar7 = FVar2.Index - 1;
      if (((int)uVar7 < 0) || ((int)this[-1]._padding_ <= (int)uVar7)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index.IsExport() && ExportMap.IsValidIndex(Index.ToExport())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                           ,0xaa,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FArchive *)(*pcVar1)();
          return pFVar4;
        }
      }
      uVar8 = 0;
      if ((int)uVar7 < (int)this[-1]._padding_) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FArchive *)(*pcVar1)();
          return pFVar4;
        }
      }
      *param_1 = *(UObject **)((longlong)(int)uVar7 * 0x68 + 0x40 + this[-1]._padding_);
    }
  }
  return (FArchive *)this;
}

// operator<< @ 1420a58c0

FArchive * __thiscall FLinkerLoad::operator<<(FLinkerLoad *this,FLazyObjectPtr *param_1)

{
  FGuid local_18;
  
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
  ::operator<<((FArchive *)this,&local_18);
  *(undefined8 *)param_1 = 0;
  *(uint *)&param_1->field_0x8 = local_18.A;
  *(uint *)&param_1->field_0xc = local_18.B;
  *(uint *)&param_1->field_0x10 = local_18.C;
  *(uint *)&param_1->field_0x14 = local_18.D;
  return (FArchive *)this;
}

// operator<< @ 1420a5910

FArchive * __thiscall FLinkerLoad::operator<<(FLinkerLoad *this,FObjectPtr *param_1)

{
  code *pcVar1;
  FPackageIndex FVar2;
  bool bVar3;
  FArchive *pFVar4;
  FObjectImport *pFVar5;
  UObject *pUVar6;
  uint uVar7;
  uint uVar8;
  FPackageIndex local_res8 [2];
  
  pUVar6 = (UObject *)0x0;
  local_res8[0].Index = 0;
  ::operator<<((FArchive *)this,local_res8);
  FVar2.Index = local_res8[0].Index;
  if ((GEventDrivenLoaderEnabled == false) || ((char)this->_padding_ == '\0')) {
    pUVar6 = IndexToObject((FLinkerLoad *)&this[-1]._padding_,local_res8[0]);
  }
  else {
    if (((this->_padding_ & 1) == 0) || (this->_padding_ == 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading() && AsyncRoot",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0x11fd,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FArchive *)(*pcVar1)();
        return pFVar4;
      }
    }
    if (FVar2.Index != 0) {
      if (FVar2.Index < 1) {
        pFVar5 = FLinkerTables::Imp((FLinkerTables *)&this[-1]._padding_,FVar2);
        pUVar6 = pFVar5->XObject;
      }
      else {
        uVar7 = FVar2.Index - 1;
        if (((int)uVar7 < 0) || ((int)this[-1]._padding_ <= (int)uVar7)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index.IsExport() && ExportMap.IsValidIndex(Index.ToExport())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                             ,0xaa,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FArchive *)(*pcVar1)();
            return pFVar4;
          }
        }
        uVar8 = 0;
        if ((int)uVar7 < (int)this[-1]._padding_) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            pFVar4 = (FArchive *)(*pcVar1)();
            return pFVar4;
          }
        }
        pUVar6 = *(UObject **)((longlong)(int)uVar7 * 0x68 + 0x40 + this[-1]._padding_);
      }
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar6 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
  }
  (param_1->field0_0x0).Handle = pUVar6;
  return (FArchive *)this;
}

// operator<< @ 1420a5aa0

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall FLinkerLoad::operator<<(FLinkerLoad *this,FSoftObjectPath *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FArchive *pFVar4;
  longlong lVar5;
  uint uVar6;
  uint local_res8 [2];
  FString local_58;
  FAssetLog local_48;
  FSoftObjectPath local_30;
  
  if (*(int *)&this[-1].field_0x468 < 1) {
    FArchiveUObject::SerializeSoftObjectPath((FArchive *)this,param_1);
    FLinkerInstancingContext::FixupSoftObjectPath
              ((FLinkerInstancingContext *)&this->_padding_,param_1);
  }
  else {
    plVar1 = (longlong *)this->_padding_;
    local_res8[0] = 0xffffffff;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    lVar5 = (longlong)(int)local_res8[0];
    if (((int)local_res8[0] < 0) || (*(int *)&this[-1].field_0x468 <= (int)local_res8[0])) {
      local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_30.AssetPath.PackageName.Number = 0;
      local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_30.AssetPath.AssetName.Number = 0;
      local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.SubPathString.Data.ArrayNum = 0;
      local_30.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::operator=(param_1,&local_30);
      if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
      }
      if (1 < (byte)LogLinker._0_1_) {
        ::FString::PrintfImpl
                  (&local_58,
                   L"Serialization error - FSoftObjectPath are serialized as an index recorded in the package header, the current deserialized index has value %i, outside of the valid range [0, %i)."
                  );
        local_48.PackagePath = (FPackagePath *)&this->_padding_;
        local_48.Path = (wchar_t *)0x0;
        local_48.Object = (UObject *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogLinker.field_0x4,Error,&local_48,&local_58,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x1956);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      FArchiveState::SetCriticalError((FArchiveState *)this);
    }
    else {
      uVar6 = 0;
      if ((int)local_res8[0] < *(int *)&this[-1].field_0x468) {
        uVar6 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FArchive *)(*pcVar2)();
        return pFVar4;
      }
      FSoftObjectPath::operator=
                (param_1,(FSoftObjectPath *)(lVar5 * 0x20 + *(longlong *)&this[-1].DependsMapIndex))
      ;
    }
  }
  return (FArchive *)this;
}

// operator<< @ 1420a5ca0

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __thiscall FLinkerLoad::operator<<(FLinkerLoad *this,FName *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res8 [2];
  uint local_res18 [4];
  FString local_40;
  FAssetLog local_30;
  
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  local_res8[0] = 0;
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  lVar7 = (longlong)(int)local_res18[0];
  if (((int)local_res18[0] < 0) || (this[-1].ImportMapIndex <= (int)local_res18[0])) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
    if (1 < (byte)LogLinker._0_1_) {
      ::FString::PrintfImpl
                (&local_40,
                 L"Serialization error - FName are serialized as an index recorded in the package header, the current deserialized index has value %i, outside of the valid range [0, %i)."
                );
      local_30.PackagePath = (FPackagePath *)&this->_padding_;
      local_30.Path = (wchar_t *)0x0;
      local_30.Object = (UObject *)0x0;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogLinker.field_0x4,Error,&local_30,&local_40,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                 ,0x195d);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    FArchiveState::SetCriticalError((FArchiveState *)this);
  }
  else {
    uVar6 = 0;
    if ((int)local_res18[0] < this[-1].ImportMapIndex) {
      uVar6 = ~local_res18[0] >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar3.Number = local_res8[0];
    FVar3.ComparisonIndex.Value =
         *(uint *)(*(longlong *)&this[-1].SoftObjectPathListIndex + lVar7 * 4);
    *param_1 = FVar3;
  }
  return (FArchive *)this;
}

// operator() @ 1420a7530

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

UPackage * __thiscall
`FLinkerLoad::VerifyImportInner'::__l2::<lambda_1>::operator()
          (void *this,FObjectImport *param_1,TOptional<FScopedSlowTask> *param_2)

{
  FName FVar1;
  FAdditionalInfo *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  UPackage *pUVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  UClass *pUVar10;
  FLinkerLoad *this_00;
  FString *pFVar11;
  FPackagePath *pFVar12;
  FLinkerLoad *pFVar13;
  FName FVar14;
  wchar_t *pwVar15;
  FLinkerLoad *pFVar16;
  FLinkerLoad *pFVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FLLMScope local_res20 [2];
  FName local_138;
  FName local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [4];
  FName local_114;
  FTlsAutoCleanup local_108;
  FMemScope local_100;
  FMemScope local_f8;
  FName *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined1 *local_d0;
  FString local_c8;
  FPackagePath local_b8;
  FCoreRedirectObjectName local_a8;
  FAssetLog local_90;
  FString local_78;
  FString local_68;
  FString local_58;
  FPackagePath local_48;
  
  FLLMScope::FLLMScope(local_res20,UObject,false,None,Default,true);
  FMemScope::FMemScope(&local_f8,UObject,true);
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_UObject_FLinkerLoad.UniqueName,false,None,Default,true);
  local_114 = LLMTagDeclaration_UObject_FLinkerLoad.UniqueName;
  FMemScope::FMemScope(&local_100,&local_114,true);
  FVar1 = param_1->ClassName;
  FVar6 = FNameEntryId::FromValidEName((EName)local_118);
  FVar14.Number = 0;
  FVar14.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  if ((FVar1 != FVar14) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Import.ClassName == NAME_Package || Import.HasPackageName()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0xe94,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar7 = (UPackage *)(*pcVar4)();
    return pUVar7;
  }
  uVar18 = *(uint *)(*(longlong *)this + 0x350) & 0x2082;
  puVar8 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_d0 = local_res8;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar9 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d8,puVar8);
  local_108 = pFVar9[0x2f];
  local_138 = (FName)param_1->_padding_;
  FLinkerInstancingContext::RemapPackage
            ((FLinkerInstancingContext *)(*(longlong *)this + 0x3b8),&local_130);
  FVar1 = local_130;
  local_f0 = &local_138;
  local_e8 = *(undefined4 *)((longlong)this + 8);
  local_e0 = *(undefined8 *)this;
  pUVar10 = Z_Construct_UClass_UPackage_NoRegister();
  pFVar13 = (FLinkerLoad *)0x0;
  pFVar17 = (FLinkerLoad *)0x0;
  this_00 = (FLinkerLoad *)
            StaticFindObjectFast(pUVar10,(UObject *)0x0,FVar1,None,RF_NoFlags,Borrowed);
  if ((*(uint *)(*(longlong *)this + 0x350) & 0x200) != 0) {
    if (this_00 == (FLinkerLoad *)0x0) {
      ``FLinkerLoad::VerifyImportInner'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
                (&local_f0);
    }
    else {
      pFVar2 = ((TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> *)
               &this_00->_padding_)->Ptr;
      pFVar13 = this_00;
      if (pFVar2 == (FAdditionalInfo *)0x0) {
        param_1->SourceLinker = (FLinkerLoad *)0x0;
      }
      else {
        pFVar17 = pFVar2->LinkerLoad;
        param_1->SourceLinker = pFVar17;
        if (pFVar17 != (FLinkerLoad *)0x0) goto LAB_1420a79c3;
      }
      if (((uint)*(atomic<unsigned_int> *)((longlong)&this_00->_padding_ + 4) >> 9 & 1) != 0) {
        param_1->XObject = (UObject *)this_00;
        uVar18 = *(uint *)((longlong)this + 8);
        lVar3 = *(longlong *)this;
        if (((int)uVar18 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ImportIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x67,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pUVar7 = (UPackage *)(*pcVar4)();
          return pUVar7;
        }
        StaticFindAllImportObjects
                  ((TArray<FObjectImport,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 8),
                   (FPackageIndex)~uVar18,(FPackagePath *)(lVar3 + 0x3a0));
      }
    }
    goto LAB_1420a79c3;
  }
  if ((this_00 == (FLinkerLoad *)0x0) ||
     (bVar5 = UPackage::IsFullyLoaded((UPackage *)this_00), !bVar5)) {
    bVar5 = ``FLinkerLoad::VerifyImportInner'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
            operator()(&local_f0);
    if (bVar5) goto LAB_1420a79c3;
    uVar18 = uVar18 | *(uint *)(*(longlong *)this + 0x350) & 0x100000;
    pFVar16 = pFVar13;
    if (local_138 != local_130) {
      pFVar11 = ::FName::ToString(&local_130,&local_78);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      this_00 = (FLinkerLoad *)CreatePackage(pwVar15);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      pFVar16 = (FLinkerLoad *)(*(longlong *)this + 0x3b8);
    }
    FPackagePath::FromPackageNameChecked(&local_b8,local_138);
    this_00 = (FLinkerLoad *)
              LoadPackageInternal((UPackage *)this_00,&local_b8,uVar18 | 0x100,*(FLinkerLoad **)this
                                  ,(FArchive *)0x0,(FLinkerInstancingContext *)pFVar16,
                                  (FPackagePath *)0x0);
  }
  if ((this_00 == (FLinkerLoad *)0x0) ||
     ((*(uint *)((longlong)&this_00->_padding_ + 4) >> 0x10 & 1) != 0)) {
    local_120 = 0;
    local_a8.ObjectName.ComparisonIndex.Value = 0;
    local_a8.ObjectName.Number = 0;
    local_a8.OuterName.ComparisonIndex.Value = 0;
    local_a8.OuterName.Number = 0;
    local_a8.PackageName = local_138;
    local_128 = 0;
    bVar5 = FCoreRedirects::IsKnownMissing(Type_Package,&local_a8);
    pFVar13 = pFVar17;
    if ((bVar5) || (FLinkerLoad::AddKnownMissingPackage(local_138), (byte)LogLinker._0_1_ < 3))
    goto LAB_1420a79c3;
    FLinkerTables::GetImportFullName
              ((FLinkerTables *)(*(longlong *)this + 8),&local_58,*(int *)((longlong)this + 8));
    ::FString::PrintfImpl
              (&local_c8,L"VerifyImport: Failed to load package for import object \'%s\'");
    local_90.PackagePath = (FPackagePath *)(*(longlong *)this + 0x3a0);
    local_90.Path = (wchar_t *)0x0;
    local_90.Object = (UObject *)0x0;
    UE::Core::Private::RecordAssetLog
              ((FName *)&LogLinker.field_0x4,Warning,&local_90,&local_c8,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0xf11);
    local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  else {
    bVar5 = FLinkerLoad::IsPackageReferenceAllowed(*(FLinkerLoad **)this,(UPackage *)this_00);
    if (bVar5) {
      if ((*(byte *)(*(longlong *)this + 0x469) & 8) != 0) {
        uVar18 = uVar18 | 0x80;
      }
      bVar5 = UPackage::IsFullyLoaded((UPackage *)this_00);
      if (bVar5) {
        if (this_00->_padding_ != 0) {
          pFVar13 = *(FLinkerLoad **)(this_00->_padding_ + 0x20);
        }
        param_1->SourceLinker = pFVar13;
        pFVar13 = this_00;
      }
      else {
        lVar3 = *(longlong *)this;
        pFVar12 = FPackagePath::FromPackageNameChecked(&local_48,local_138);
        pFVar13 = GetPackageLinker((UPackage *)this_00,pFVar12,uVar18,(UPackageMap *)0x0,
                                   (FArchive *)0x0,(FUObjectSerializeContext **)&local_108,
                                   (FLinkerLoad *)0x0,(FLinkerInstancingContext *)(lVar3 + 0x3b8));
        param_1->SourceLinker = pFVar13;
        pFVar13 = this_00;
      }
      goto LAB_1420a79c3;
    }
    pFVar13 = pFVar17;
    if ((byte)LogLinker._0_1_ < 3) goto LAB_1420a79c3;
    FLinkerTables::GetImportFullName
              ((FLinkerTables *)(*(longlong *)this + 8),&local_68,*(int *)((longlong)this + 8));
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
  }
  pFVar13 = pFVar17;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_1420a79c3:
  FMemScope::~FMemScope(&local_100);
  FLLMScope::~FLLMScope(local_res10);
  FMemScope::~FMemScope(&local_f8);
  FLLMScope::~FLLMScope(local_res20);
  return (UPackage *)pFVar13;
}

// operator() @ 1420a7a20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>::operator()(void *this)

{
  FMessageLog *this_00;
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FName local_res8;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  ::FName::FName(&local_res8,"LoadErrors");
  this_00 = FMessageLog::FMessageLog(&local_38,&local_res8);
  pFVar1 = FText::FromString(&local_58,this);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"Core",L"LinkerLoad_PkgSumCorrupted",
                      L"The summary for the package \'{0}\' is invalid. Check that the file is of the expected type and not corrupted."
                     );
  pFVar3 = FTextFormat::FTextFormat(&local_48,pFVar2,Default);
  pFVar1 = FText::Format<FText>(&local_78,pFVar3,pFVar1);
  FMessageLog::Error(this_00,&local_88,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// operator() @ 1420a7b10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>::operator()(void *this)

{
  FMessageLog *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FName local_res8;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  ::FName::FName(&local_res8,"LoadErrors");
  pFVar1 = FMessageLog::FMessageLog(&local_38,&local_res8);
  pFVar1 = FMessageLog::SuppressLoggingToOutputLog(pFVar1,true);
  pFVar2 = FText::FromString(&local_58,this);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"Core",L"LinkerLoad_InvalidCustomVersion",
                      L"Package {0} was saved with an invalid custom version and cannot be loaded, see output log for details"
                     );
  pFVar4 = FTextFormat::FTextFormat(&local_48,pFVar3,Default);
  pFVar2 = FText::Format<FText>(&local_78,pFVar4,pFVar2);
  FMessageLog::Error(pFVar1,&local_88,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// operator() @ 1420a7c00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall `FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>::operator()(void *this)

{
  FMessageLog *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FName local_res8;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  ::FName::FName(&local_res8,"LoadErrors");
  pFVar1 = FMessageLog::FMessageLog(&local_38,&local_res8);
  pFVar1 = FMessageLog::SuppressLoggingToOutputLog(pFVar1,true);
  pFVar2 = FText::FromString(&local_58,this);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"Core",L"LinkerLoad_CorruptTrailer",
                      L"Package {0} has a corrupted package trailer");
  pFVar4 = FTextFormat::FTextFormat(&local_48,pFVar3,Default);
  pFVar2 = FText::Format<FText>(&local_78,pFVar4,pFVar2);
  FMessageLog::Error(pFVar1,&local_88,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// operator() @ 1420a7cf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
`FLinkerLoad::CreateExport'::__l241::<lambda_1>::operator()(void *this,UClass *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ForAnyElementType *pFVar4;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar5;
  UObjectBase *this_00;
  longlong lVar6;
  FUObjectItem *pFVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 local_res10 [8];
  longlong local_res18;
  
  if ((param_1 != (UClass *)0x0) &&
     (pFVar7 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4)),
     ((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0)) {
    local_res18 = param_1->_padding_;
    puVar2 = *(undefined8 **)((longlong)this + 0x10);
    UE::Core::Private::Function::CheckCallable((void *)*puVar2);
    pcVar3 = (code *)*puVar2;
    plVar9 = puVar2 + 2;
    if ((longlong *)puVar2[5] != (longlong *)0x0) {
      plVar9 = (longlong *)puVar2[5];
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar3)(uVar8);
    pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
    iVar1 = *(int *)((longlong)&pFVar4[1].Data + 4);
    *(undefined4 *)&pFVar4[1].Data = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
    }
    pTVar5 = *(TArray<UObject_*,TSizedDefaultAllocator<32>_> **)((longlong)this + 8);
    if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(param_1);
    }
    GetObjectsWithOuter((UObjectBase *)(param_1->ClassDefaultObject).field0_0x0.DebugPtr,pTVar5,
                        false,RF_NoFlags,Native);
    plVar9 = *(longlong **)((longlong)this + 8);
    puVar10 = (undefined8 *)*plVar9;
    lVar6 = plVar9[1];
    puVar2 = puVar10 + (int)lVar6;
    while( true ) {
      if ((int)plVar9[1] != (int)lVar6) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (puVar10 == puVar2) break;
      this_00 = (UObjectBase *)*puVar10;
      if (((this_00->ObjectFlags >> 0x13 & 1) != 0) &&
         (((this_00->ObjectFlags >> 10 & 1) != 0 || ((this_00->ObjectFlags >> 0x15 & 1) == 0)))) {
        UObjectBase::AtomicallySetFlags(this_00,RF_NeedLoad);
        FLinkerLoad::Preload((FLinkerLoad *)(*(longlong *)this + 0x2c0),(UObject *)this_00);
      }
      puVar10 = puVar10 + 1;
    }
  }
  return;
}

// operator() @ 1420a7e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>::operator()(void *this)

{
  int iVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FMessageLog *this_00;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  undefined1 auStackY_178 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_138;
  FName local_128;
  FTextFormat local_120;
  FText local_110;
  TSharedRef<FTokenizedMessage,1> local_100;
  FText local_f0;
  FText local_e0;
  FTextFormat local_d0;
  FMessageLog local_c0;
  FFormatArgumentValue local_88;
  undefined4 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  ::FName::FName(&local_128,"LoadErrors");
  this_00 = FMessageLog::FMessageLog(&local_c0,&local_128);
  iVar1 = *(int *)((longlong)this + 0x10);
  pFVar5 = FText::FromString(&local_e0,this);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_f0,L"Core",L"LinkerLoad_PkgVersionTooOld",
                      L"The package \'{0}\' was saved with an older version which is not backwards compatible with the current process. Min Required Version: {1}  Package Version: {2}"
                     );
  pFVar7 = FTextFormat::FTextFormat(&local_d0,pFVar6,Default);
  local_88.Type = Text;
  FText::FText((FText *)&local_88.TextValue,pFVar5);
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_60 = 0xd6;
  local_68 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 3;
  local_40 = (longlong)iVar1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,3,0,&local_138.AllocatorInstance,3,&local_138.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_138.AllocatorInstance.Data,&local_88,3);
  local_120.TextFormatData.Object = (pFVar7->TextFormatData).Object;
  local_120.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_120.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_120.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_120.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(&local_110,&local_120,&local_138);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  if ((FFormatArgumentValue *)local_138.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_88.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
  pIVar2 = (pFVar5->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FMessageLog::Warning(this_00,&local_100,&local_110);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
  }
  if (local_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_c0);
  return;
}

// operator() @ 1420a80b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>::operator()(void *this)

{
  FMessageLog *pFVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FName local_res8;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  ::FName::FName(&local_res8,"LoadErrors");
  pFVar1 = FMessageLog::FMessageLog(&local_38,&local_res8);
  pFVar1 = FMessageLog::SuppressLoggingToOutputLog(pFVar1,true);
  pFVar2 = FText::FromString(&local_58,this);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"Core",L"LinkerLoad_NewCustomVersion",
                      L"Package {0} was saved with a newer custom version than the current engine and cannot be loaded, see output log for details"
                     );
  pFVar4 = FTextFormat::FTextFormat(&local_48,pFVar3,Default);
  pFVar2 = FText::Format<FText>(&local_78,pFVar4,pFVar2);
  FMessageLog::Error(pFVar1,&local_88,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// operator() @ 1420a81a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>::operator()(void *this)

{
  bool bVar1;
  bool bVar2;
  FMessageLog *this_00;
  FString *pFVar3;
  FText *pFVar4;
  FEngineVersion *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res8;
  TSharedRef<FTokenizedMessage,1> local_e8;
  FText local_d8;
  FText local_c8;
  FString local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  FMessageLog local_58;
  
  ::FName::FName(&local_res8,"LoadErrors");
  this_00 = FMessageLog::FMessageLog(&local_58,&local_res8);
  bVar1 = FEngineVersionBase::IsLicenseeVersion((FEngineVersionBase *)((longlong)this + 0x10));
  pFVar3 = FEngineVersion::ToString((FEngineVersion *)((longlong)this + 0x10),&local_a8,Branch);
  pFVar4 = FText::FromString(&local_98,pFVar3);
  pFVar5 = FEngineVersion::Current();
  bVar2 = FEngineVersionBase::IsLicenseeVersion((FEngineVersionBase *)pFVar5);
  pFVar5 = FEngineVersion::Current();
  pFVar3 = FEngineVersion::ToString(pFVar5,&local_b8,Branch);
  pFVar6 = FText::FromString(&local_88,pFVar3);
  pFVar7 = FText::FromString(&local_78,this);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_c8,L"Core",L"LinkerLoad_EngineVersionIncompatible",
                      L"Package \'{0}\' has been saved with a newer engine version and can\'t be loaded. Current EngineVersion: {1} (Licensee={2}). Package EngineVersion: {3} (Licensee={4})"
                     );
  pFVar9 = FTextFormat::FTextFormat(&local_68,pFVar8,Default);
  pFVar4 = FText::Format<FText,FText,bool,FText,bool>
                     (&local_d8,pFVar9,pFVar7,pFVar6,bVar2,pFVar4,bVar1);
  FMessageLog::Warning(this_00,&local_e8,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FMessageLog::~FMessageLog(&local_58);
  return;
}

// operator() @ 1420a8350

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>::operator()(void *this)

{
  int iVar1;
  int iVar2;
  FMessageLog *this_00;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  int iVar6;
  int iVar7;
  FName local_res8;
  TSharedRef<FTokenizedMessage,1> local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FMessageLog local_48;
  
  ::FName::FName(&local_res8,"LoadErrors");
  this_00 = FMessageLog::FMessageLog(&local_48,&local_res8);
  iVar6 = *(int *)((longlong)this + 0x20);
  iVar1 = *(int *)((longlong)this + 0x24);
  iVar2 = *(int *)((longlong)this + 0x18);
  if (iVar6 < 1000) {
    iVar6 = *(int *)((longlong)this + 0x1c);
  }
  iVar7 = *(int *)((longlong)this + 0x14);
  if (iVar7 < 1000) {
    iVar7 = *(int *)((longlong)this + 0x10);
  }
  pFVar3 = FText::FromString(&local_68,this);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"Core",L"LinkerLoad_PkgVersionTooNew",
                      L"Package \'{0}\' contains a newer version than the current process supports. PackageVersion {1}, MaxExpected {2} : LicenseePackageVersion {3}, MaxExpected {4}."
                     );
  pFVar5 = FTextFormat::FTextFormat(&local_58,pFVar4,Default);
  pFVar3 = FText::Format<FText,int,int,int,int>(&local_88,pFVar5,pFVar3,iVar7,iVar6,iVar2,iVar1);
  FMessageLog::Warning(this_00,&local_98,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_48);
  return;
}

// operator() @ 1420a8490

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>::operator()(void *this)

{
  FMessageLog *this_00;
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FName local_res8;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  ::FName::FName(&local_res8,"LoadErrors");
  this_00 = FMessageLog::FMessageLog(&local_38,&local_res8);
  pFVar1 = FText::FromString(&local_58,this);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"Core",L"LinkerLoad_InvalidEditorOnlyData",
                      L"Unable to load package \'{0}\'. Package contains EditorOnly data which is not supported by the current build."
                     );
  pFVar3 = FTextFormat::FTextFormat(&local_48,pFVar2,Default);
  pFVar1 = FText::Format<FText>(&local_78,pFVar3,pFVar1);
  FMessageLog::Warning(this_00,&local_88,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// operator() @ 1420a8580

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>::operator()(void *this)

{
  FMessageLog *this_00;
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FName local_res8;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  ::FName::FName(&local_res8,"LoadErrors");
  this_00 = FMessageLog::FMessageLog(&local_38,&local_res8);
  pFVar1 = FText::FromString(&local_58,this);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"Core",L"LinkerLoad_InvalidCookedData",
                      L"Unable to load package \'{0}\'. Package contains cooked data which is not supported by the current build. Enable \'Allow Cooked Content In The Editor\' in Project Settings under \'Engine - Cooker\' section to load it."
                     );
  pFVar3 = FTextFormat::FTextFormat(&local_48,pFVar2,Default);
  pFVar1 = FText::Format<FText>(&local_78,pFVar3,pFVar1);
  FMessageLog::Warning(this_00,&local_88,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// operator() @ 1420a8670

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>::operator()(void *this)

{
  FMessageLog *this_00;
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FName local_res8;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  ::FName::FName(&local_res8,"LoadErrors");
  this_00 = FMessageLog::FMessageLog(&local_38,&local_res8);
  pFVar1 = FText::FromString(&local_58,this);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"Core",L"LinkerLoad_PkgTagCorrupted",
                      L"Unable to load package \'{0}\'. The end of package tag is not valid. Check that the file is of the expected type and not corrupted."
                     );
  pFVar3 = FTextFormat::FTextFormat(&local_48,pFVar2,Default);
  pFVar1 = FText::Format<FText>(&local_78,pFVar3,pFVar1);
  FMessageLog::Error(this_00,&local_88,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// AddGameNameRedirect @ 1420a9250

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl FLinkerLoad::AddGameNameRedirect(FName param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType local_88;
  undefined8 local_80;
  FCoreRedirect *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FString local_68;
  TArrayView<FCoreRedirect_const_,int> local_58;
  FCoreRedirectObjectName local_48;
  FCoreRedirectObjectName local_30;
  
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_48.ObjectName.ComparisonIndex.Value = 0;
  local_48.ObjectName.Number = 0;
  local_48.OuterName.ComparisonIndex.Value = 0;
  local_48.OuterName.Number = 0;
  local_30.ObjectName.ComparisonIndex.Value = 0;
  local_30.ObjectName.Number = 0;
  local_30.OuterName.ComparisonIndex.Value = 0;
  local_30.OuterName.Number = 0;
  local_48.PackageName = param_2;
  local_30.PackageName = param_1;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x8a0,&local_88,(int *)((longlong)&local_80 + 4));
  local_80 = CONCAT44(local_80._4_4_,iVar3 + 1);
  FCoreRedirect::FCoreRedirect
            ((FCoreRedirect *)(local_88.Data + (longlong)iVar3 * 0xa0),Type_Package,&local_30,
             &local_48);
  ::FString::FString(&local_68,L"AddGameNameRedirect");
  iStack_70 = (int)local_80;
  local_78 = (FCoreRedirect *)local_88.Data;
  if ((int)local_80 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_58._12_4_ = uStack_6c;
  local_58.ArrayNum = iStack_70;
  local_58.DataPtr = local_78;
  FCoreRedirects::AddRedirectList(&local_58,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FCoreRedirect,int>((FCoreRedirect *)local_88.Data,(int)local_80);
  if ((FCoreRedirect *)local_88.Data != (FCoreRedirect *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// AddKnownMissingPackage @ 1420a9370

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl FLinkerLoad::AddKnownMissingPackage(FName param_1)

{
  FCoreRedirectObjectName local_28;
  
  local_28.ObjectName.ComparisonIndex.Value = 0;
  local_28.ObjectName.Number = 0;
  local_28.OuterName.ComparisonIndex.Value = 0;
  local_28.OuterName.Number = 0;
  local_28.PackageName = param_1;
  FCoreRedirects::AddKnownMissing(Type_Package,&local_28,Option_MissingLoad);
  return;
}

// ApplyInstancingContext @ 1420aa290

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::ApplyInstancingContext(FLinkerLoad *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::ApplyInstancingContext(void)_::_2_::FStat_STAT_LinkerLoad_ApplyInstancingContext>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FSoftObjectPath *pFVar12;
  FNameEntryId FVar13;
  FSoftObjectPath *pFVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FVar13.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_LinkerLoad_ApplyInstancingContext ==
          (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::ApplyInstancingContext(void)_::_2_::FStat_STAT_LinkerLoad_ApplyInstancingContext>
           )0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_LinkerLoad_ApplyInstancingContext");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_ApplyInstancingContext,
                   *pFVar7,L"FLinkerLoad::ApplyInstancingContext","STATGROUP_LinkerLoad",
                   "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_STAT_LinkerLoad_ApplyInstancingContext;
  if (StatPtr_STAT_LinkerLoad_ApplyInstancingContext ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::ApplyInstancingContext(void)_::_2_::FStat_STAT_LinkerLoad_ApplyInstancingContext>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_LinkerLoad_ApplyInstancingContext");
    FVar8 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::ApplyInstancingContext(void)_::_2_::FStat_STAT_LinkerLoad_ApplyInstancingContext>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_LinkerLoad_ApplyInstancingContext,*pFVar7,
                         L"FLinkerLoad::ApplyInstancingContext","STATGROUP_LinkerLoad",
                         "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x974);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar13.Value = FVar10.Value;
      goto LAB_1420aa41a;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_1420aa41a:
  if (!this->bHasAppliedInstancingContext) {
    pFVar12 = (FSoftObjectPath *)this->_padding_;
    iVar2 = (int)this->_padding_;
    pFVar14 = pFVar12 + iVar2;
    while( true ) {
      if ((int)this->_padding_ != iVar2) {
        `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar12 == pFVar14) break;
      FLinkerInstancingContext::FixupSoftObjectPath(&this->InstancingContext,pFVar12);
      pFVar12 = pFVar12 + 1;
    }
    this->bHasAppliedInstancingContext = true;
  }
  bVar6 = IsTimeLimitExceeded(this,L"applying the instancing context to the SoftObjectPathList",1);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return bVar6 + LINKER_Loaded;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar6 + LINKER_Loaded;
}

// AttachExternalReadDependency @ 1420aa8a0

bool __thiscall
FLinkerLoad::AttachExternalReadDependency
          (FLinkerLoad *this,TFunction<bool___cdecl(double)> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  plVar7 = &this->_padding_;
  if (((TFunction<bool___cdecl(double)> *)*plVar7 <= param_1) &&
     (param_1 < (TFunction<bool___cdecl(double)> *)*plVar7 +
                *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,(ForAnyElementType *)plVar7,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  plVar7 = (longlong *)(*plVar7 + (longlong)iVar5 * 0x30);
  *plVar7 = *(longlong *)param_1;
  plVar7[5] = 0;
  if (*plVar7 != 0) {
    puVar6 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar6)();
  }
  return true;
}

// BadNameIndexError @ 1420aa990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLinkerLoad::BadNameIndexError(FLinkerLoad *this,int param_1)

{
  FString local_38;
  FAssetLog local_28;
  
  if (1 < (byte)LogLinker._0_1_) {
    ::FString::PrintfImpl
              (&local_38,
               L"Serialization error - FName are serialized as an index recorded in the package header, the current deserialized index has value %i, outside of the valid range [0, %i)."
              );
    local_28.PackagePath = &this->PackagePath;
    local_28.Path = (wchar_t *)0x0;
    local_28.Object = (UObject *)0x0;
    UE::Core::Private::RecordAssetLog
              ((FName *)&LogLinker.field_0x4,Error,&local_28,&local_38,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x195d);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// BadSoftObjectPathError @ 1420aaa20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLinkerLoad::BadSoftObjectPathError(FLinkerLoad *this,int param_1)

{
  FString local_38;
  FAssetLog local_28;
  
  if (1 < (byte)LogLinker._0_1_) {
    ::FString::PrintfImpl
              (&local_38,
               L"Serialization error - FSoftObjectPath are serialized as an index recorded in the package header, the current deserialized index has value %i, outside of the valid range [0, %i)."
              );
    local_28.PackagePath = &this->PackagePath;
    local_28.Path = (wchar_t *)0x0;
    local_28.Object = (UObject *)0x0;
    UE::Core::Private::RecordAssetLog
              ((FName *)&LogLinker.field_0x4,Error,&local_28,&local_38,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x1956);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// BuildPathName @ 1420ab190

void __thiscall FLinkerLoad::BuildPathName(FLinkerLoad *this,FString *param_1,FPackageIndex param_2)

{
  int iVar1;
  FObjectResource *this_00;
  FString *pFVar2;
  int iVar3;
  FString local_18;
  
  if (param_2.Index != 0) {
    this_00 = FLinkerTables::ImpExp((FLinkerTables *)&this->_padding_,param_2);
    BuildPathName(this,param_1,(FPackageIndex)(this_00->OuterIndex).Index);
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    if (0 < iVar3) {
      ::FString::AppendChar(param_1,L'.');
    }
    pFVar2 = ::FName::ToString(&this_00->ObjectName,&local_18);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CreateActiveRedirectsMap @ 1420abe90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl FLinkerLoad::CreateActiveRedirectsMap(FString *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  FName FVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FConfigSection *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *pTVar16;
  FCoreRedirect *pFVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  longlong *plVar22;
  bool local_res10 [8];
  int local_res18;
  ForAnyElementType local_778;
  undefined8 local_770;
  FName local_768;
  FName local_760;
  FName local_758;
  FName local_750;
  FString local_748;
  FString local_738;
  FName local_728;
  FName local_720;
  FName local_718;
  FName local_710;
  FName local_708;
  FName local_700;
  FString local_6f8;
  FName local_6e8;
  FName local_6e0;
  FName local_6d8;
  FName local_6d0;
  FName local_6c8;
  FName local_6c0;
  FName local_6b8;
  FName local_6b0;
  FString local_6a8;
  FString local_698;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  FString local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  FString local_630;
  FDeferredMessageLog local_620;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FConfigSection *local_508;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_500;
  FConfigSection *local_4e0;
  int iStack_4d8;
  uint uStack_4d4;
  longlong *local_4d0;
  undefined4 uStack_4c8;
  int iStack_4c4;
  int local_4c0;
  int iStack_4bc;
  initializer_list<FFormatArgumentValue> local_4a8;
  FTextFormat local_498;
  FText local_488;
  FString *local_478;
  FString *local_470;
  FString local_468;
  FCoreRedirect *local_458;
  int iStack_450;
  undefined4 uStack_44c;
  FString local_448;
  FString local_438;
  FCoreRedirectObjectName local_428;
  FCoreRedirectObjectName local_410;
  undefined1 local_3f8 [16];
  FText local_3e8;
  undefined4 local_3d8;
  FText local_3c8;
  FFormatArgumentValue local_3b8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  TSharedRef<FTokenizedMessage,1> local_328;
  FText local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  TArrayView<FCoreRedirect_const_,int> local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  FString local_58;
  FString local_48;
  
  bActiveRedirectsMapInitialized = true;
  if (GConfig == (FConfigCacheIni *)0x0) {
    if (2 < (byte)LogLinker._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_______ACTIVE_CL_15083e2d8,
                 (FLogCategoryBase *)&LogLinker);
      return;
    }
  }
  else {
    pFVar9 = FConfigCacheIni::GetSection(GConfig,L"/Script/Engine.Engine",false,param_1);
    if (pFVar9 != (FConfigSection *)0x0) {
      iVar7 = 0;
      local_778.Data = (FScriptContainerElement *)0x0;
      local_770 = 0;
      FDeferredMessageLog::FDeferredMessageLog(&local_620,&NAME_LoadErrors);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&ActiveClassRedirectsKey,L"ActiveClassRedirects");
        _Init_thread_footer(&::_TSS0);
      }
      iVar8 = (int)pFVar9->_padding_;
      TStack_500.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pFVar9->_padding_;
      iStack_4d8 = 0;
      uStack_4d4 = 1;
      iStack_4c4 = iVar7;
      local_4c0 = iVar7;
      if (iVar8 != 0) {
        plVar22 = (longlong *)pFVar9->_padding_;
        if ((longlong *)pFVar9->_padding_ == (longlong *)0x0) {
          plVar22 = (longlong *)TStack_500.Array;
        }
        uVar2 = (uint)*plVar22;
        iStack_4d8 = 0;
        while (uVar2 == 0) {
          lVar18 = (longlong)iStack_4d8;
          local_4c0 = local_4c0 + 0x20;
          iStack_4d8 = iStack_4d8 + 1;
          iStack_4c4 = iVar8;
          if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_4d8)
          goto LAB_1420abfd1;
          uVar2 = *(uint *)((longlong)plVar22 + lVar18 * 4 + 4);
        }
        uStack_4d4 = -uVar2 & uVar2;
        uVar1 = (ulonglong)uStack_4d4 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_res18 = (int)lVar18;
        iStack_4c4 = local_res18 + -1 + local_4c0;
        if (iVar8 < iStack_4c4) {
          iStack_4c4 = iVar8;
        }
      }
LAB_1420abfd1:
      uStack_4c8 = 0xffffffff;
      TStack_500._padding_ = CONCAT44(uStack_4d4,iStack_4d8);
      TStack_500.UnvisitedBitMask = 0xffffffff;
      TStack_500._28_4_ = iStack_4c4;
      TStack_500.BaseBitIndex = local_4c0;
      local_508 = pFVar9;
      local_4e0 = pFVar9;
      local_4d0 = (longlong *)TStack_500.Array;
      iStack_4bc = iStack_4c4;
      TStack_500.CurrentBitIndex = iStack_4c4;
      if (iStack_4c4 < iVar8) {
        do {
          pFVar9 = local_508;
          lVar21 = (longlong)TStack_500.CurrentBitIndex;
          lVar18 = (longlong)TStack_500.CurrentBitIndex * 0x28;
          FVar3 = *(FName *)(local_508->_padding_ + (longlong)TStack_500.CurrentBitIndex * 0x28);
          if (FVar3 == ActiveClassRedirectsKey) {
            local_760.ComparisonIndex.Value = 0;
            local_760.Number = 0;
            local_768.ComparisonIndex.Value = 0;
            local_768.Number = 0;
            lVar21 = lVar21 * 0x28;
            local_6e8.ComparisonIndex.Value = 0;
            local_6e8.Number = 0;
            local_720.ComparisonIndex.Value = 0;
            local_720.Number = 0;
            local_728.ComparisonIndex.Value = 0;
            local_728.Number = 0;
            local_6d8.ComparisonIndex.Value = 0;
            local_6d8.Number = 0;
            local_6e0.ComparisonIndex.Value = 0;
            local_6e0.Number = 0;
            local_res10[0] = false;
            pFVar10 = FConfigValue::GetValue
                                ((FConfigValue *)(local_508->_padding_ + 8 + lVar21),&local_208);
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            FParse::Bool(pwVar19,L"InstanceOnly=",local_res10);
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
            }
            pFVar10 = FConfigValue::GetValue
                                ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21),&local_d8);
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            FParse::Value(pwVar19,L"ObjectName=",&local_6e8);
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            pFVar10 = FConfigValue::GetValue
                                ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21),&local_c8);
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            FParse::Value(pwVar19,L"OldClassName=",&local_760);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            pFVar10 = FConfigValue::GetValue
                                ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21),&local_b8);
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            FParse::Value(pwVar19,L"NewClassName=",&local_768);
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            pFVar10 = FConfigValue::GetValue
                                ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21),&local_a8);
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            FParse::Value(pwVar19,L"OldSubobjName=",&local_720);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            pFVar10 = FConfigValue::GetValue
                                ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21),
                                 (FString *)&local_3b8);
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            FParse::Value(pwVar19,L"NewSubobjName=",&local_728);
            if ((FScriptContainerElement *)local_3b8._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_3b8._0_8_);
            }
            pFVar10 = FConfigValue::GetValue
                                ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21),
                                 (FString *)((longlong)&local_3b8 + 0x10));
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            FParse::Value(pwVar19,L"NewClassClass=",&local_6d8);
            if (local_3b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              FMemory::Free((void *)local_3b8.TextValue.field0_0x0.TypedValue.TextData.Reference);
            }
            pFVar10 = FConfigValue::GetValue
                                ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21),&local_398);
            if ((pFVar10->Data).ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
            }
            FParse::Value(pwVar19,L"NewClassPackage=",&local_6e0);
            if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_398.Data.AllocatorInstance.Data);
            }
            if (local_728 == (FName)0x0) {
              if (local_720 == (FName)0x0) {
                if (local_res10[0] == false) {
                  if (local_6e8 == (FName)0x0) {
                    pFVar10 = ::FName::ToString(&local_768,&local_338);
                    iVar7 = ::FString::Find(pFVar10,L".",1,CaseSensitive,FromStart,-1);
                    pFVar10 = ::FName::ToString(&local_768,&local_348);
                    iVar8 = ::FString::Find(pFVar10,L".",1,CaseSensitive,FromEnd,-1);
                    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_348.Data.AllocatorInstance.Data);
                    }
                    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_338.Data.AllocatorInstance.Data);
                    }
                    if (iVar7 == iVar8) {
                      pFVar10 = ::FName::ToString(&local_768,&local_2f8);
                      pFVar11 = ::FName::ToString(&local_760,&local_308);
                      iVar7 = (int)local_770;
                      if ((int)local_770 == local_770._4_4_) {
                        iVar7 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x8a0,&local_778,(int *)((longlong)&local_770 + 4));
                      }
                      local_770 = CONCAT44(local_770._4_4_,iVar7 + 1);
                      local_5c8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data
                      ;
                      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_5c8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
                      local_5c8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
                      (pFVar10->Data).ArrayNum = 0;
                      (pFVar10->Data).ArrayMax = 0;
                      local_5b8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data
                      ;
                      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_5b8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
                      local_5b8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
                      (pFVar11->Data).ArrayNum = 0;
                      (pFVar11->Data).ArrayMax = 0;
                      pFVar17 = FCoreRedirect::FCoreRedirect
                                          ((FCoreRedirect *)
                                           (local_778.Data + (longlong)iVar7 * 0xa0),Type_Class,
                                           &local_5b8,&local_5c8);
                      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_308.Data.AllocatorInstance.Data);
                      }
                      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
                      }
                      if ((local_6d8 == (FName)0x0) && (local_6e0 == (FName)0x0)) {
                        pFVar10 = ::FName::ToString(&(pFVar17->NewName).ObjectName,&local_2e8);
                        bVar6 = ::FString::StartsWith(pFVar10,L"E",1,CaseSensitive);
                        if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
                        }
                        if (bVar6) {
                          pFVar10 = ::FName::ToString(&local_768,&local_2c8);
                          pFVar11 = ::FName::ToString(&local_760,&local_2d8);
                          iVar7 = (int)local_770;
                          if ((int)local_770 == local_770._4_4_) {
                            iVar7 = UE::Core::Private::
                                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                              (0x8a0,&local_778,(int *)((longlong)&local_770 + 4));
                          }
                          local_770 = CONCAT44(local_770._4_4_,iVar7 + 1);
                          local_5a8.Data.AllocatorInstance.Data =
                               (pFVar10->Data).AllocatorInstance.Data;
                          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_5a8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
                          local_5a8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
                          (pFVar10->Data).ArrayNum = 0;
                          (pFVar10->Data).ArrayMax = 0;
                          local_598.Data.AllocatorInstance.Data =
                               (pFVar11->Data).AllocatorInstance.Data;
                          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_598.Data.ArrayNum = (pFVar11->Data).ArrayNum;
                          local_598.Data.ArrayMax = (pFVar11->Data).ArrayMax;
                          (pFVar11->Data).ArrayNum = 0;
                          (pFVar11->Data).ArrayMax = 0;
                          FCoreRedirect::FCoreRedirect
                                    ((FCoreRedirect *)(local_778.Data + (longlong)iVar7 * 0xa0),
                                     Type_Enum,&local_598,&local_5a8);
                          FVar20.Data = local_2c8.Data.AllocatorInstance.Data;
                          if (local_2d8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
                            FVar20.Data = local_2c8.Data.AllocatorInstance.Data;
                          }
                        }
                        else {
                          pFVar10 = ::FName::ToString(&local_768,&local_2a8);
                          pFVar11 = ::FName::ToString(&local_760,&local_2b8);
                          iVar7 = (int)local_770;
                          if ((int)local_770 == local_770._4_4_) {
                            iVar7 = UE::Core::Private::
                                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                              (0x8a0,&local_778,(int *)((longlong)&local_770 + 4));
                          }
                          local_770 = CONCAT44(local_770._4_4_,iVar7 + 1);
                          local_588.Data.AllocatorInstance.Data =
                               (pFVar10->Data).AllocatorInstance.Data;
                          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_588.Data.ArrayNum = (pFVar10->Data).ArrayNum;
                          local_588.Data.ArrayMax = (pFVar10->Data).ArrayMax;
                          (pFVar10->Data).ArrayNum = 0;
                          (pFVar10->Data).ArrayMax = 0;
                          local_578.Data.AllocatorInstance.Data =
                               (pFVar11->Data).AllocatorInstance.Data;
                          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_578.Data.ArrayNum = (pFVar11->Data).ArrayNum;
                          local_578.Data.ArrayMax = (pFVar11->Data).ArrayMax;
                          (pFVar11->Data).ArrayNum = 0;
                          (pFVar11->Data).ArrayMax = 0;
                          FCoreRedirect::FCoreRedirect
                                    ((FCoreRedirect *)(local_778.Data + (longlong)iVar7 * 0xa0),
                                     Type_Struct,&local_578,&local_588);
                          FVar20.Data = local_2a8.Data.AllocatorInstance.Data;
                          if (local_2b8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                            FVar20.Data = local_2a8.Data.AllocatorInstance.Data;
                          }
                        }
                        goto LAB_1420ad828;
                      }
                      (pFVar17->OverrideClassName).ObjectName = local_6d8;
                      (pFVar17->OverrideClassName).OuterName.ComparisonIndex = 0;
                      (pFVar17->OverrideClassName).OuterName.Number = 0;
                      (pFVar17->OverrideClassName).PackageName = local_6e0;
                      local_688 = 0;
                    }
                    else {
                      pFVar12 = FText::FromName(&local_88,&local_768);
                      pFVar13 = FText::FromName(&local_78,&ActiveClassRedirectsKey);
                      pFVar14 = FText::AsLocalizable_Advanced_LocText
                                          (&local_318,L"LinkerLoad",L"NestedRenameDisallowed",
                                           L"{0} cannot contain a rename of nested objects for \'{1}\'; if you want to leave the outer alone, just specify the name with no path"
                                          );
                      pFVar15 = FTextFormat::FTextFormat(&local_68,pFVar14,Default);
                      local_3f8._0_4_ = 4;
                      FText::FText(&local_3e8,pFVar13);
                      if ((local_3e8.TextData.Reference == (ITextData *)0x0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsSet()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                             ,0xbd,
                                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                            ), bVar6)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      local_3d8 = 4;
                      FText::FText(&local_3c8,pFVar12);
                      if ((local_3c8.TextData.Reference == (ITextData *)0x0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsSet()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                             ,0xbd,
                                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                            ), bVar6)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      local_4a8._First = (FFormatArgumentValue *)local_3f8;
                      local_4a8._Last = &local_3b8;
                      pTVar16 = TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_>::
                                TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_>
                                          (&local_5d8,&local_4a8);
                      local_498.TextFormatData.Object = (pFVar15->TextFormatData).Object;
                      local_498.TextFormatData.SharedReferenceCount.ReferenceController =
                           (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
                      if (local_498.TextFormatData.SharedReferenceCount.ReferenceController !=
                          (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        (local_498.TextFormatData.SharedReferenceCount.ReferenceController)->
                        SharedReferenceCount =
                             (atomic<int>)
                             ((int)(local_498.TextFormatData.SharedReferenceCount.
                                   ReferenceController)->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      FText::Format(&local_488,&local_498,pTVar16);
                      DestructItems<FFormatArgumentValue,int>
                                ((FFormatArgumentValue *)local_5d8.AllocatorInstance.Data,
                                 local_5d8.ArrayNum);
                      if ((FFormatArgumentValue *)local_5d8.AllocatorInstance.Data !=
                          (FFormatArgumentValue *)0x0) {
                        FMemory::Free(local_5d8.AllocatorInstance.Data);
                      }
                      if (local_3c8.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_3c8.TextData.Reference + 0x10))();
                      }
                      if (local_3e8.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController)
                      ;
                      pIVar4 = (pFVar13->TextData).Reference;
                      if (pIVar4 != (ITextData *)0x0) {
                        (**(code **)((longlong)*pIVar4 + 0x10))();
                      }
                      pIVar4 = (pFVar12->TextData).Reference;
                      if (pIVar4 != (ITextData *)0x0) {
                        (**(code **)((longlong)*pIVar4 + 0x10))();
                      }
                      FDeferredMessageLog::Error(&local_620,&local_328,&local_488);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_328.SharedReferenceCount.ReferenceController);
                      if (local_488.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_488.TextData.Reference + 0x10))();
                      }
                      if (local_318.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
                      }
                    }
                  }
                  else if (2 < (byte)LogLinker._0_1_) {
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
                  }
                  goto LAB_1420ad832;
                }
                if (local_768 == (FName)0x0) {
                  pFVar10 = ::FName::ToString(&local_768,&local_378);
                  pFVar11 = ::FName::ToString(&local_760,&local_388);
                  iVar7 = (int)local_770;
                  if ((int)local_770 == local_770._4_4_) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x8a0,&local_778,(int *)((longlong)&local_770 + 4));
                  }
                  local_770 = CONCAT44(local_770._4_4_,iVar7 + 1);
                  local_618.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
                  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_618.Data.ArrayNum = (pFVar10->Data).ArrayNum;
                  local_618.Data.ArrayMax = (pFVar10->Data).ArrayMax;
                  (pFVar10->Data).ArrayNum = 0;
                  (pFVar10->Data).ArrayMax = 0;
                  local_608.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
                  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_608.Data.ArrayNum = (pFVar11->Data).ArrayNum;
                  local_608.Data.ArrayMax = (pFVar11->Data).ArrayMax;
                  (pFVar11->Data).ArrayNum = 0;
                  (pFVar11->Data).ArrayMax = 0;
                  FCoreRedirect::FCoreRedirect
                            ((FCoreRedirect *)(local_778.Data + (longlong)iVar7 * 0xa0),
                             Category_Removed|Category_InstanceOnly|Type_Class,&local_608,&local_618
                            );
                  FVar20.Data = local_378.Data.AllocatorInstance.Data;
                  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_388.Data.AllocatorInstance.Data);
                    FVar20.Data = local_378.Data.AllocatorInstance.Data;
                  }
                }
                else {
                  pFVar10 = ::FName::ToString(&local_768,&local_358);
                  pFVar11 = ::FName::ToString(&local_760,&local_368);
                  iVar7 = (int)local_770;
                  if ((int)local_770 == local_770._4_4_) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x8a0,&local_778,(int *)((longlong)&local_770 + 4));
                  }
                  local_770 = CONCAT44(local_770._4_4_,iVar7 + 1);
                  local_5f8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
                  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_5f8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
                  local_5f8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
                  (pFVar10->Data).ArrayNum = 0;
                  (pFVar10->Data).ArrayMax = 0;
                  local_5e8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
                  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_5e8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
                  local_5e8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
                  (pFVar11->Data).ArrayNum = 0;
                  (pFVar11->Data).ArrayMax = 0;
                  FCoreRedirect::FCoreRedirect
                            ((FCoreRedirect *)(local_778.Data + (longlong)iVar7 * 0xa0),
                             Category_InstanceOnly|Type_Class,&local_5e8,&local_5f8);
                  FVar20.Data = local_358.Data.AllocatorInstance.Data;
                  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_368.Data.AllocatorInstance.Data);
                    FVar20.Data = local_358.Data.AllocatorInstance.Data;
                  }
                }
                goto LAB_1420ad828;
              }
LAB_1420acabd:
              if (local_760 == (FName)0x0) goto LAB_1420acac4;
            }
            else {
              if (local_720 != (FName)0x0) goto LAB_1420acabd;
LAB_1420acac4:
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("OldSubobjName != NAME_None && OldClassName != NAME_None",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                 ,0x124,L"");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            pFVar10 = ::FName::ToString(&local_760,&local_288);
            pFVar11 = ::FName::ToString(&local_760,&local_298);
            iVar7 = (int)local_770;
            if ((int)local_770 == local_770._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8a0,&local_778,(int *)((longlong)&local_770 + 4));
            }
            local_770 = CONCAT44(local_770._4_4_,iVar7 + 1);
            local_650.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
            pFVar17 = (FCoreRedirect *)(local_778.Data + (longlong)iVar7 * 0xa0);
            (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_650.Data.ArrayNum = (pFVar10->Data).ArrayNum;
            local_650.Data.ArrayMax = (pFVar10->Data).ArrayMax;
            (pFVar10->Data).ArrayNum = 0;
            (pFVar10->Data).ArrayMax = 0;
            local_660.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_660.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_660.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
            pFVar17->RedirectFlags = Type_Class;
            FCoreRedirectObjectName::FCoreRedirectObjectName(&pFVar17->OldName,&local_660);
            FCoreRedirectObjectName::FCoreRedirectObjectName(&pFVar17->NewName,&local_650);
            (pFVar17->OverrideClassName).ObjectName.ComparisonIndex = 0;
            (pFVar17->OverrideClassName).ObjectName.Number = 0;
            *(undefined8 *)&(pFVar17->ValueChanges).field_0x0 = 0;
            *(undefined8 *)&(pFVar17->ValueChanges).field_0x8 = 0;
            *(undefined8 *)&(pFVar17->ValueChanges).field_0x20 = 0;
            (pFVar17->OverrideClassName).OuterName.ComparisonIndex = 0;
            (pFVar17->OverrideClassName).OuterName.Number = 0;
            (pFVar17->OverrideClassName).PackageName.ComparisonIndex = 0;
            (pFVar17->OverrideClassName).PackageName.Number = 0;
            *(undefined4 *)&(pFVar17->ValueChanges).field_0x28 = 0;
            *(undefined4 *)&(pFVar17->ValueChanges).field_0x2c = 0x80;
            *(undefined4 *)&(pFVar17->ValueChanges).field_0x30 = 0xffffffff;
            *(undefined4 *)&(pFVar17->ValueChanges).field_0x34 = 0;
            *(undefined8 *)&(pFVar17->ValueChanges).field_0x40 = 0;
            *(undefined4 *)&(pFVar17->ValueChanges).field_0x48 = 0;
            FCoreRedirect::NormalizeNewName(pFVar17);
            if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_660.Data.AllocatorInstance.Data);
            }
            if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_650.Data.AllocatorInstance.Data);
            }
            if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_298.Data.AllocatorInstance.Data);
            }
            if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_288.Data.AllocatorInstance.Data);
            }
            pFVar10 = ::FName::ToString(&local_728,&local_268);
            local_478 = ::FName::ToString(&local_720,&local_278);
            local_470 = pFVar10;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                      ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&pFVar17->ValueChanges,
                       (TPairInitializer<FString_&&,FString_&&> *)&stack0x00000020,
                       (bool *)&local_478);
            FVar20.Data = local_268.Data.AllocatorInstance.Data;
            if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_278.Data.AllocatorInstance.Data);
              FVar20.Data = local_268.Data.AllocatorInstance.Data;
            }
LAB_1420ad828:
            if (FVar20.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar20.Data);
            }
          }
          else {
            bVar6 = ::FName::Equals(FVar3,L"ActiveGameNameRedirects");
            if (bVar6) {
              local_6c8.ComparisonIndex.Value = 0;
              local_6c8.Number = 0;
              local_6d0.ComparisonIndex.Value = 0;
              local_6d0.Number = 0;
              pFVar10 = FConfigValue::GetValue
                                  ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21 * 0x28),
                                   &local_258);
              if ((pFVar10->Data).ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
              }
              FParse::Value(pwVar19,L"OldGameName=",&local_6c8);
              if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_258.Data.AllocatorInstance.Data);
              }
              pFVar10 = FConfigValue::GetValue
                                  ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21 * 0x28),
                                   &local_248);
              if ((pFVar10->Data).ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
              }
              FParse::Value(pwVar19,L"NewGameName=",&local_6d0);
              if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.Data.AllocatorInstance.Data);
              }
              pFVar10 = ::FName::ToString(&local_6d0,&local_228);
              pFVar11 = ::FName::ToString(&local_6c8,&local_238);
              iVar7 = (int)local_770;
              if ((int)local_770 == local_770._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x8a0,&local_778,(int *)((longlong)&local_770 + 4));
              }
              local_770 = CONCAT44(local_770._4_4_,iVar7 + 1);
              local_630.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
              pFVar17 = (FCoreRedirect *)(local_778.Data + (longlong)iVar7 * 0xa0);
              (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_630.Data.ArrayNum = (pFVar10->Data).ArrayNum;
              local_630.Data.ArrayMax = (pFVar10->Data).ArrayMax;
              (pFVar10->Data).ArrayNum = 0;
              (pFVar10->Data).ArrayMax = 0;
              local_640.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
              (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_640.Data.ArrayNum = (pFVar11->Data).ArrayNum;
              local_640.Data.ArrayMax = (pFVar11->Data).ArrayMax;
              (pFVar11->Data).ArrayNum = 0;
              (pFVar11->Data).ArrayMax = 0;
              pFVar17->RedirectFlags = Type_Package;
              FCoreRedirectObjectName::FCoreRedirectObjectName(&pFVar17->OldName,&local_640);
              FCoreRedirectObjectName::FCoreRedirectObjectName(&pFVar17->NewName,&local_630);
              (pFVar17->OverrideClassName).ObjectName.ComparisonIndex = 0;
              (pFVar17->OverrideClassName).ObjectName.Number = 0;
              (pFVar17->OverrideClassName).OuterName.ComparisonIndex = 0;
              (pFVar17->OverrideClassName).OuterName.Number = 0;
              (pFVar17->OverrideClassName).PackageName.ComparisonIndex = 0;
              (pFVar17->OverrideClassName).PackageName.Number = 0;
              *(undefined8 *)&pFVar17->ValueChanges = 0;
              *(undefined8 *)&(pFVar17->ValueChanges).field_0x8 = 0;
              *(undefined8 *)&(pFVar17->ValueChanges).field_0x20 = 0;
              *(undefined4 *)&(pFVar17->ValueChanges).field_0x28 = 0;
              *(undefined4 *)&(pFVar17->ValueChanges).field_0x2c = 0x80;
              *(undefined4 *)&(pFVar17->ValueChanges).field_0x30 = 0xffffffff;
              *(undefined4 *)&(pFVar17->ValueChanges).field_0x34 = 0;
              *(undefined8 *)&(pFVar17->ValueChanges).field_0x40 = 0;
              *(undefined4 *)&(pFVar17->ValueChanges).field_0x48 = 0;
              FCoreRedirect::NormalizeNewName(pFVar17);
              if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_640.Data.AllocatorInstance.Data);
              }
              if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_630.Data.AllocatorInstance.Data);
              }
              FVar20.Data = local_228.Data.AllocatorInstance.Data;
              if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_238.Data.AllocatorInstance.Data);
                FVar20.Data = local_228.Data.AllocatorInstance.Data;
              }
              goto LAB_1420ad828;
            }
            bVar6 = ::FName::Equals(*(FName *)(lVar18 + pFVar9->_padding_),L"ActiveStructRedirects")
            ;
            if (bVar6) {
              local_6b8.ComparisonIndex.Value = 0;
              local_6b8.Number = 0;
              local_6c0.ComparisonIndex.Value = 0;
              local_6c0.Number = 0;
              pFVar10 = FConfigValue::GetValue
                                  ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21 * 0x28),
                                   &local_218);
              if ((pFVar10->Data).ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
              }
              FParse::Value(pwVar19,L"OldStructName=",&local_6b8);
              if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data.AllocatorInstance.Data);
              }
              pFVar10 = FConfigValue::GetValue
                                  ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21 * 0x28),
                                   &local_128);
              if ((pFVar10->Data).ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
              }
              FParse::Value(pwVar19,L"NewStructName=",&local_6c0);
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
              pFVar10 = ::FName::ToString(&local_6c0,&local_1e8);
              pFVar11 = ::FName::ToString(&local_6b8,&local_1f8);
              iVar7 = (int)local_770;
              if ((int)local_770 == local_770._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x8a0,&local_778,(int *)((longlong)&local_770 + 4));
              }
              local_770 = CONCAT44(local_770._4_4_,iVar7 + 1);
              local_568.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
              (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_568.Data.ArrayNum = (pFVar10->Data).ArrayNum;
              local_568.Data.ArrayMax = (pFVar10->Data).ArrayMax;
              (pFVar10->Data).ArrayNum = 0;
              (pFVar10->Data).ArrayMax = 0;
              local_558.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
              (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_558.Data.ArrayNum = (pFVar11->Data).ArrayNum;
              local_558.Data.ArrayMax = (pFVar11->Data).ArrayMax;
              (pFVar11->Data).ArrayNum = 0;
              (pFVar11->Data).ArrayMax = 0;
              FCoreRedirect::FCoreRedirect
                        ((FCoreRedirect *)(local_778.Data + (longlong)iVar7 * 0xa0),Type_Struct,
                         &local_558,&local_568);
              FVar20.Data = local_1e8.Data.AllocatorInstance.Data;
              if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
                FVar20.Data = local_1e8.Data.AllocatorInstance.Data;
              }
              goto LAB_1420ad828;
            }
            bVar6 = ::FName::Equals(*(FName *)(lVar18 + pFVar9->_padding_),L"ActivePluginRedirects")
            ;
            if (bVar6) {
              local_738.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_738.Data.ArrayNum = 0;
              local_738.Data.ArrayMax = 0;
              local_748.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_748.Data.ArrayNum = 0;
              local_748.Data.ArrayMax = 0;
              pFVar10 = FConfigValue::GetValue
                                  ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21 * 0x28),
                                   &local_1d8);
              if ((pFVar10->Data).ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
              }
              FParse::Value(pwVar19,L"OldPluginName=",&local_738,true,(wchar_t **)0x0);
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              pFVar10 = FConfigValue::GetValue
                                  ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21 * 0x28),
                                   &local_1c8);
              if ((pFVar10->Data).ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
              }
              FParse::Value(pwVar19,L"NewPluginName=",&local_748,true,(wchar_t **)0x0);
              if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
              pFVar10 = ::FString::FString(&local_1a8,L"/");
              pFVar11 = ::FString::FString(&local_1b8,L"/");
              ::FString::ConcatFF(&local_468,pFVar11,&local_738);
              ::FString::ConcatFF(&local_698,&local_468,pFVar10);
              if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_738.Data.AllocatorInstance.Data);
              }
              local_738.Data.AllocatorInstance.Data = local_698.Data.AllocatorInstance.Data;
              local_738.Data.ArrayNum = local_698.Data.ArrayNum;
              local_738.Data.ArrayMax = local_698.Data.ArrayMax;
              local_698.Data.ArrayNum = 0;
              local_698.Data.ArrayMax = 0;
              local_698.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_468.Data.AllocatorInstance.Data);
              }
              if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
              }
              if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
              }
              pFVar10 = ::FString::FString(&local_188,L"/");
              pFVar11 = ::FString::FString(&local_198,L"/");
              ::FString::ConcatFF(&local_438,pFVar11,&local_748);
              ::FString::ConcatFF(&local_6a8,&local_438,pFVar10);
              if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_748.Data.AllocatorInstance.Data);
              }
              local_748.Data.AllocatorInstance.Data = local_6a8.Data.AllocatorInstance.Data;
              local_748.Data.ArrayNum = local_6a8.Data.ArrayNum;
              local_748.Data.ArrayMax = local_6a8.Data.ArrayMax;
              local_6a8.Data.ArrayNum = 0;
              local_6a8.Data.ArrayMax = 0;
              local_6a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_438.Data.AllocatorInstance.Data);
              }
              if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_198.Data.AllocatorInstance.Data);
              }
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
              iVar7 = (int)local_770;
              if ((int)local_770 == local_770._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x8a0,&local_778,(int *)((longlong)&local_770 + 4));
              }
              local_770 = CONCAT44(local_770._4_4_,iVar7 + 1);
              pFVar17 = (FCoreRedirect *)(local_778.Data + (longlong)iVar7 * 0xa0);
              pFVar10 = ::FString::FString(&local_58,&local_748);
              pFVar11 = ::FString::FString(&local_48,&local_738);
              FCoreRedirect::FCoreRedirect
                        (pFVar17,Option_MatchSubstring|Type_Package,pFVar11,pFVar10);
              FVar20.Data = local_738.Data.AllocatorInstance.Data;
              if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_748.Data.AllocatorInstance.Data);
                FVar20.Data = local_738.Data.AllocatorInstance.Data;
              }
              goto LAB_1420ad828;
            }
            bVar6 = ::FName::Equals(*(FName *)(lVar18 + pFVar9->_padding_),L"KnownMissingPackages");
            if (bVar6) {
              local_6b0.ComparisonIndex.Value = 0;
              local_6b0.Number = 0;
              pFVar10 = FConfigValue::GetValue
                                  ((FConfigValue *)(pFVar9->_padding_ + (lVar21 * 5 + 1) * 8),
                                   &local_178);
              if ((pFVar10->Data).ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
              }
              FParse::Value(pwVar19,L"PackageName=",&local_6b0);
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
              pFVar10 = ::FName::ToString(&local_6b0,&local_168);
              iVar7 = (int)local_770;
              if ((int)local_770 == local_770._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x8a0,&local_778,(int *)((longlong)&local_770 + 4));
              }
              local_548.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_770 = CONCAT44(local_770._4_4_,iVar7 + 1);
              local_548.Data.ArrayNum = 0;
              local_548.Data.ArrayMax = 0;
              local_538.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
              (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_538.Data.ArrayNum = (pFVar10->Data).ArrayNum;
              local_538.Data.ArrayMax = (pFVar10->Data).ArrayMax;
              (pFVar10->Data).ArrayNum = 0;
              (pFVar10->Data).ArrayMax = 0;
              FCoreRedirect::FCoreRedirect
                        ((FCoreRedirect *)(local_778.Data + (longlong)iVar7 * 0xa0),
                         Category_Removed|Type_Package,&local_538,&local_548);
              FVar20.Data = local_168.Data.AllocatorInstance.Data;
              goto LAB_1420ad828;
            }
            bVar6 = ::FName::Equals(*(FName *)(lVar18 + pFVar9->_padding_),
                                    L"TaggedPropertyRedirects");
            if (bVar6) {
              local_758.ComparisonIndex.Value = 0;
              local_758.Number = 0;
              local_710.ComparisonIndex.Value = 0;
              local_710.Number = 0;
              lVar21 = lVar21 * 0x28;
              local_718.ComparisonIndex.Value = 0;
              local_718.Number = 0;
              pFVar10 = FConfigValue::GetValue
                                  ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21),&local_158);
              if ((pFVar10->Data).ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
              }
              FParse::Value(pwVar19,L"ClassName=",&local_758);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              pFVar10 = FConfigValue::GetValue
                                  ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21),&local_148);
              if ((pFVar10->Data).ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
              }
              FParse::Value(pwVar19,L"OldPropertyName=",&local_710);
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
              pFVar10 = FConfigValue::GetValue
                                  ((FConfigValue *)(pFVar9->_padding_ + 8 + lVar21),&local_138);
              if ((pFVar10->Data).ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
              }
              FParse::Value(pwVar19,L"NewPropertyName=",&local_718);
              if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_138.Data.AllocatorInstance.Data);
              }
              if ((((local_758 == (FName)0x0) || (local_710 == (FName)0x0)) ||
                  (local_718 == (FName)0x0)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ClassName != NAME_None && OldPropertyName != NAME_None && NewPropertyName != NAME_None"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                     ,0x189,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_428.ObjectName = local_718;
              local_428.OuterName = local_758;
              local_410.OuterName = local_758;
              local_428.PackageName.ComparisonIndex.Value = 0;
              local_428.PackageName.Number = 0;
              local_410.PackageName.ComparisonIndex.Value = 0;
              local_410.PackageName.Number = 0;
              local_410.ObjectName = local_710;
              local_680 = 0;
              local_678 = 0;
              iVar7 = (int)local_770;
              if ((int)local_770 == local_770._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x8a0,&local_778,(int *)((longlong)&local_770 + 4));
              }
              local_770 = CONCAT44(local_770._4_4_,iVar7 + 1);
              FCoreRedirect::FCoreRedirect
                        ((FCoreRedirect *)(local_778.Data + (longlong)iVar7 * 0xa0),Type_Property,
                         &local_410,&local_428);
            }
            else {
              bVar6 = ::FName::Equals(*(FName *)(lVar18 + pFVar9->_padding_),L"EnumRedirects");
              if (bVar6) {
                FConfigValue::GetValue((FConfigValue *)(pFVar9->_padding_ + 8 + lVar18),&local_6f8);
                local_750.ComparisonIndex.Value = 0;
                local_750.Number = 0;
                FVar20.Data = (FScriptContainerElement *)L"";
                if (local_6f8.Data.ArrayNum != 0) {
                  FVar20.Data = local_6f8.Data.AllocatorInstance.Data;
                }
                local_700.ComparisonIndex.Value = 0;
                local_700.Number = 0;
                local_708.ComparisonIndex.Value = 0;
                local_708.Number = 0;
                local_670.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_670.Data.ArrayNum = 0;
                local_670.Data.ArrayMax = 0;
                FParse::Value((wchar_t *)FVar20.Data,L"EnumName=",&local_750);
                FVar20.Data = (FScriptContainerElement *)L"";
                if (local_6f8.Data.ArrayNum != 0) {
                  FVar20.Data = local_6f8.Data.AllocatorInstance.Data;
                }
                bVar6 = FParse::Value((wchar_t *)FVar20.Data,L"OldEnumEntry=",&local_700);
                if (bVar6) {
                  FVar20.Data = (FScriptContainerElement *)L"";
                  if (local_6f8.Data.ArrayNum != 0) {
                    FVar20.Data = local_6f8.Data.AllocatorInstance.Data;
                  }
                  FParse::Value((wchar_t *)FVar20.Data,L"NewEnumEntry=",&local_708);
                  if ((((local_750 == (FName)0x0) || (local_700 == (FName)0x0)) ||
                      (local_708 == (FName)0x0)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("EnumName != NAME_None && OldEnumEntry != NAME_None && NewEnumEntry != NAME_None"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                         ,0x19b,L""), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  pFVar10 = ::FName::ToString(&local_750,&local_118);
                  pFVar11 = ::FName::ToString(&local_750,&local_98);
                  iVar7 = (int)local_770;
                  if ((int)local_770 == local_770._4_4_) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x8a0,&local_778,(int *)((longlong)&local_770 + 4));
                  }
                  local_770 = CONCAT44(local_770._4_4_,iVar7 + 1);
                  local_528.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
                  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_528.Data.ArrayNum = (pFVar10->Data).ArrayNum;
                  local_528.Data.ArrayMax = (pFVar10->Data).ArrayMax;
                  (pFVar10->Data).ArrayNum = 0;
                  (pFVar10->Data).ArrayMax = 0;
                  local_518.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
                  (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_518.Data.ArrayNum = (pFVar11->Data).ArrayNum;
                  local_518.Data.ArrayMax = (pFVar11->Data).ArrayMax;
                  (pFVar11->Data).ArrayNum = 0;
                  (pFVar11->Data).ArrayMax = 0;
                  pFVar17 = FCoreRedirect::FCoreRedirect
                                      ((FCoreRedirect *)(local_778.Data + (longlong)iVar7 * 0xa0),
                                       Type_Enum,&local_518,&local_528);
                  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_98.Data.AllocatorInstance.Data);
                  }
                  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_118.Data.AllocatorInstance.Data);
                  }
                  pFVar10 = ::FName::ToString(&local_708,&local_f8);
                  pFVar11 = ::FName::ToString(&local_700,&local_108);
                  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  ::Emplace<FString,FString>
                            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                              *)&pFVar17->ValueChanges,pFVar11,pFVar10);
                  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_108.Data.AllocatorInstance.Data);
                  }
                  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                  }
                }
                else {
                  FVar20.Data = (FScriptContainerElement *)L"";
                  if (local_6f8.Data.ArrayNum != 0) {
                    FVar20.Data = local_6f8.Data.AllocatorInstance.Data;
                  }
                  bVar6 = FParse::Value((wchar_t *)FVar20.Data,L"OldEnumSubstring=",&local_670,true,
                                        (wchar_t **)0x0);
                  if ((bVar6) && (2 < (byte)LogLinker._0_1_)) {
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
                  }
                }
                FVar20.Data = local_6f8.Data.AllocatorInstance.Data;
                if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_670.Data.AllocatorInstance.Data);
                  FVar20.Data = local_6f8.Data.AllocatorInstance.Data;
                }
                goto LAB_1420ad828;
              }
            }
          }
LAB_1420ad832:
          TStack_500.UnvisitedBitMask = TStack_500.UnvisitedBitMask & ~TStack_500._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_500);
        } while (TStack_500.CurrentBitIndex < (int)*(longlong *)&(TStack_500.Array)->NumBits);
      }
      ::FString::PrintfImpl(&local_448,L"ActiveClassRedirects %s");
      iStack_450 = (int)local_770;
      local_458 = (FCoreRedirect *)local_778.Data;
      if (((int)local_770 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_e8._12_4_ = uStack_44c;
      local_e8.ArrayNum = iStack_450;
      local_e8.DataPtr = local_458;
      FCoreRedirects::AddRedirectList(&local_e8,&local_448);
      if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_448.Data.AllocatorInstance.Data);
      }
      DestructItems<FCoreRedirect,int>((FCoreRedirect *)local_778.Data,(int)local_770);
      if ((FCoreRedirect *)local_778.Data != (FCoreRedirect *)0x0) {
        FMemory::Free(local_778.Data);
      }
    }
  }
  return;
}

// CreateExport @ 1420ad9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall FLinkerLoad::CreateExport(FLinkerLoad *this,int param_1)

{
  byte *pbVar1;
  FWindowsRecursiveMutex *pFVar2;
  byte bVar3;
  int iVar4;
  FTlsAutoCleanup this_00;
  longlong lVar5;
  UObjectBaseUtility *this_01;
  code *pcVar6;
  bool bVar7;
  ELoaderType EVar8;
  bool bVar9;
  uint uVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  UClass *pUVar15;
  FString *pFVar16;
  FName FVar17;
  FLinkerLoad *pFVar18;
  FObjectImport *pFVar19;
  FText *pFVar20;
  FTextFormat *pFVar21;
  FName FVar22;
  FLinkerManager *pFVar23;
  UPackage *pUVar24;
  FName FVar25;
  FUObjectItem *pFVar26;
  UPackage *pUVar27;
  UStruct *pUVar28;
  wchar_t *pwVar29;
  longlong *plVar30;
  uint uVar31;
  ForAnyElementType FVar32;
  FName *this_02;
  EObjectFlags EVar33;
  longlong lVar34;
  FName FVar35;
  undefined1 auStackY_6f8 [32];
  FName local_6c0;
  undefined1 local_6b0;
  undefined1 local_6af;
  undefined1 local_6ae [2];
  undefined4 local_6ac;
  FScriptContainerElement *local_6a8;
  UObject *local_6a0;
  FString local_698;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_688
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_678
  ;
  FDeferredMessageLog local_668;
  FName local_660;
  undefined8 local_658;
  FTlsAutoCleanup *local_650;
  FTlsAutoCleanup local_648;
  FScriptContainerElement *local_640;
  undefined8 local_638;
  FString local_630;
  FLinkerLoad *local_620;
  FName local_618;
  undefined1 local_610 [4];
  FName local_60c;
  FCreateExportScope local_600;
  FName local_5f8;
  UStruct *local_5f0;
  FLinkerLoad *local_5e8;
  FTlsAutoCleanup local_5e0;
  undefined8 local_5d8;
  undefined1 local_5d0 [8];
  undefined1 local_5c8 [4];
  FName local_5c4;
  FLinkerLoad *local_5b8;
  FString local_5b0;
  FString local_5a0;
  FString local_590;
  FString local_580;
  FString local_570;
  FString local_560;
  FLinkerLoad *local_550;
  FScriptContainerElement **ppFStack_548;
  undefined1 *local_540;
  code *local_538;
  undefined1 *local_530;
  code *local_528;
  undefined1 *local_520;
  code *local_518;
  undefined1 *local_510;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FAssetLog local_478;
  FAssetLog local_460;
  FAssetLog local_448;
  FAssetLog local_430;
  FFormatArgumentValue local_418;
  FFormatArgumentValue local_3f8;
  FFormatArgumentValue local_3d8;
  FFormatArgumentValue local_3b8;
  FFormatArgumentValue local_398;
  FText local_378;
  FText local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  undefined1 local_2d8 [8];
  FText local_2d0;
  FText local_2c0;
  FText local_2b0;
  FText local_2a0;
  FText local_290;
  TSharedRef<FTokenizedMessage,1> local_280;
  FText local_270;
  FText local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FText local_200;
  FText local_1f0;
  TSharedRef<FTokenizedMessage,1> local_1e0;
  FString local_1d0;
  TSharedRef<FTokenizedMessage,1> local_1c0;
  FTextFormat local_1b0;
  FTextFormat local_1a0;
  FTextFormat local_190;
  undefined1 local_178 [128];
  undefined1 local_f8 [128];
  undefined1 local_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  FVar35.ComparisonIndex.Value = 0;
  FVar35.Number = 0;
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
  local_6ac = 0;
  puVar11 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_530 = &local_6b0;
  local_538 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar12 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_538,puVar11);
  local_5e0 = pFVar12[0x2f];
  local_5d8 = *(undefined8 *)((longlong)local_5e0 + 0x58);
  local_6ac = *(undefined4 *)((longlong)local_5e0 + 0x50);
  *(FLinkerLoad **)((longlong)local_5e0 + 0x58) = this;
  *(int *)((longlong)local_5e0 + 0x50) = param_1;
  FDeferredMessageLog::FDeferredMessageLog(&local_668,&NAME_LoadErrors);
  uVar31 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar31 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar13 = (UObject *)(*pcVar6)();
    return pUVar13;
  }
  lVar34 = (longlong)param_1 * 0x68;
  this_02 = (FName *)(this->_padding_ + lVar34);
  if ((((((this_02[8] == (FName)0x0) && (bVar3 = (byte)this_02[9].Number, -1 < (char)bVar3)) &&
        ((this_02[9].Number & 0x100) == 0)) &&
       (((char)this->_padding_ == '\0' || ((bVar3 & 4) == 0)))) &&
      ((*(char *)((longlong)&this->_padding_ + 1) == '\0' || ((bVar3 & 2) == 0)))) &&
     (this_02[2].ComparisonIndex.Value != 0)) {
    puVar11 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_520 = &local_6af;
    local_528 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    local_650 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_528,puVar11);
    local_648 = local_650[8];
    local_650[8] = (FTlsAutoCleanup)this->AsyncRoot;
    puVar11 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_510 = local_6ae;
    local_518 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar12 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_518,puVar11);
    this_00 = pFVar12[0x2f];
    if (((GEventDrivenLoaderEnabled != false) && (this->bLockoutLegacyOperations != false)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GEventDrivenLoaderEnabled || !bLockoutLegacyOperations || !(1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0x145e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pUVar13 = (UObject *)(*pcVar6)();
      return pUVar13;
    }
    local_6a8 = (FScriptContainerElement *)0x0;
    if (((*this_02 == (FName)0x0) && ((~(byte)this_02[3].Number & 1) == 0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Export.ObjectName!=NAME_None || !(Export.ObjectFlags&RF_Public)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0x145f,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pUVar13 = (UObject *)(*pcVar6)();
      return pUVar13;
    }
    if (((this->_padding_ & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0x1460,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pUVar13 = (UObject *)(*pcVar6)();
      return pUVar13;
    }
    uVar31 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar31 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pUVar13 = (UObject *)(*pcVar6)();
      return pUVar13;
    }
    lVar5 = this->_padding_;
    if ((*(int *)(lVar5 + 0xc + lVar34) < 0) && ((this->LoadFlags & 0x100000) == 0)) {
      VerifyImport(this,~*(uint *)(lVar5 + 0xc + lVar34));
    }
    pUVar14 = (UClass *)IndexToObject(this,(FPackageIndex)*(int *)(lVar5 + 0xc + lVar34));
    FVar25 = FVar35;
    if (pUVar14 == (UClass *)0x0) {
LAB_1420adcb9:
      if (this_02[1].Number == 0) {
        pUVar14 = Z_Construct_UClass_UClass_NoRegister();
        if ((pUVar14 == (UClass *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("LoadClass",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                               ,0x1480,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pUVar13 = (UObject *)(*pcVar6)();
          return pUVar13;
        }
        goto LAB_1420ade40;
      }
      *(byte *)&this_02[9].Number = (byte)this_02[9].Number | 0x80;
      uVar31 = this_02[1].ComparisonIndex.Value;
      if (uVar31 == 0) {
        pFVar16 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this->_padding_,&local_240,(UObject *)0x0,None);
        FVar32.Data = (pFVar16->Data).AllocatorInstance.Data;
        (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar16->Data).ArrayNum = 0;
        (pFVar16->Data).ArrayMax = 0;
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
      }
      else if ((int)uVar31 < 0) {
        FLinkerTables::GetImportFullName((FLinkerTables *)&this->_padding_,&local_698,~uVar31);
        FVar32.Data = local_698.Data.AllocatorInstance.Data;
      }
      else if ((int)uVar31 < 1) {
        FVar32.Data = (FScriptContainerElement *)0x0;
      }
      else {
        FLinker::GetExportFullName((FLinker *)this,&local_698,uVar31 - 1,(wchar_t *)0x0,false);
        FVar32.Data = local_698.Data.AllocatorInstance.Data;
      }
      FVar17 = FLinkerTables::GetClassName
                         ((FLinkerTables *)&this->_padding_,(FPackageIndex)(int)local_2d8);
      ::FName::ToString((FName *)FVar17,&local_5b0);
      if ((2 < (byte)LogLinker._0_1_) && ((this_02[3].Number & 1) != 0)) {
        ::FName::ToString(this_02,&local_230);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
      }
      if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
      }
      if (FVar32.Data == (FScriptContainerElement *)0x0) goto LAB_1420af641;
LAB_1420af63c:
      FMemory::Free(FVar32.Data);
      FVar25 = FVar35;
    }
    else {
      pUVar15 = Z_Construct_UClass_UClass_NoRegister();
      iVar4 = (int)pUVar15->_padding_;
      if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar15->_padding_)) goto LAB_1420adcb9;
LAB_1420ade40:
      if (this_02[2].Number == 0) {
LAB_1420adf34:
        if ((this_02[3].Number & 4) != 0) {
          pUVar15 = Z_Construct_UClass_UField_NoRegister();
          if (pUVar15 != (UClass *)0x0) {
            iVar4 = (int)pUVar15->_padding_;
            if (((int)pUVar14->_padding_ < iVar4) ||
               ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar4 * 8) !=
                &pUVar15->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) goto LAB_1420ae04b;
          }
          if (2 < (byte)LogLinker._0_1_) {
            ::FName::ToString(this_02,&local_220);
            local_5c4 = (FName)pUVar14->_padding_;
            ::FName::ToString(&local_5c4,&local_5a0);
            ::FString::PrintfImpl
                      (&local_508,L"%s %s has RF_MarkAsNative set but is not a UField derived class"
                      );
            local_478.PackagePath = &this->PackagePath;
            local_478.Path = (wchar_t *)0x0;
            local_478.Object = (UObject *)0x0;
            UE::Core::Private::RecordAssetLog
                      ((FName *)&LogLinker.field_0x4,Warning,&local_478,&local_508,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x14e4);
            if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_508.Data.AllocatorInstance.Data);
            }
            if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
            }
            if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_220.Data.AllocatorInstance.Data);
            }
          }
          this_02[3].Number = this_02[3].Number & 0xfffffffb;
        }
LAB_1420ae04b:
        local_6c0.ComparisonIndex.Value = 0;
        local_6c0.Number = 0;
        if (this_02[1].ComparisonIndex.Value == 0) {
          if ((this_02[9].Number & 1) == 0) {
            local_6c0 = (FName)this->_padding_;
          }
          else {
            pFVar16 = ::FName::ToString(this_02,&local_210);
            if ((pFVar16->Data).ArrayNum == 0) {
              pwVar29 = L"";
            }
            else {
              pwVar29 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
            }
            FVar25 = (FName)CreatePackage(pwVar29);
            this_02[8] = FVar25;
            if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_210.Data.AllocatorInstance.Data);
            }
            if ((this_02[8] == (FName)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Export.Object",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                   ,0x14f4,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              pUVar13 = (UObject *)(*pcVar6)();
              return pUVar13;
            }
            *(int *)((longlong)this_00 + 8) = *(int *)((longlong)this_00 + 8) + 1;
            pFVar23 = FLinkerManager::Get();
            pFVar2 = &pFVar23->LoadersWithForcedExportsCritical;
            local_5b8 = this;
            if (pFVar2 == (FWindowsRecursiveMutex *)0x0) goto LAB_1420af652;
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
            TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::
            Emplace<FLinkerLoad_*_const_&>
                      (&pFVar23->LoadersWithForcedExports,(FLinkerLoad **)local_610,
                       (bool *)&local_5b8);
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          }
        }
        else {
          local_6c0 = (FName)IndexToObject(this,(FPackageIndex)this_02[1].ComparisonIndex.Value);
        }
        if ((pUVar14->ClassFlags >> 0x1c & 1) == 0) {
LAB_1420ae173:
          if (((uint)pUVar14->_padding_ >> 10 & 1) != 0) {
            Preload((FLinkerLoad *)&this->_padding_,(UObject *)pUVar14);
LAB_1420ae1f1:
            if ((int)pUVar14->ClassFlags < 0) {
              if ((int)this_02[1].Number < 0) {
                pFVar19 = FLinkerTables::Imp((FLinkerTables *)&this->_padding_,
                                             (FPackageIndex)this_02[1].Number);
                pFVar19->XObject = (UObject *)0x0;
              }
              pUVar14 = (UClass *)IndexToObject(this,(FPackageIndex)this_02[1].Number);
            }
            goto LAB_1420ae21e;
          }
          FVar25 = this_02[8];
          if (FVar25 == (FName)0x0) {
            bVar7 = DeferExportCreation(this,param_1,(UObject *)local_6c0);
            if (bVar7) {
              FVar17 = this_02[8];
              local_650[8] = local_648;
              goto LAB_1420af2cf;
            }
            goto LAB_1420ae1f1;
          }
          pUVar15 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
          lVar34 = *(longlong *)((longlong)FVar25 + 0x10);
          iVar4 = (int)pUVar15->_padding_;
          if ((*(int *)(lVar34 + 0x38) < iVar4) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar34 + 0x30) + (longlong)iVar4 * 8) !=
              &pUVar15->_padding_)) goto LAB_1420ae1f1;
LAB_1420ae892:
          FVar17 = this_02[8];
          local_650[8] = local_648;
          goto LAB_1420af2cf;
        }
        if (local_6c0 != (FName)0x0) {
          pUVar15 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
          iVar4 = (int)pUVar15->_padding_;
          if ((iVar4 <= *(int *)(*(longlong *)((longlong)local_6c0 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)local_6c0 + 0x10) + 0x30) +
               (longlong)iVar4 * 8) == &pUVar15->_padding_)) goto LAB_1420ae173;
        }
LAB_1420ae21e:
        if (((pUVar14->ClassFlags >> 3 & 1) != 0) && ((this_02[3].Number & 0x30) == 0)) {
          local_688.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_688.Pairs.ArrayNum = 0;
          local_688.Pairs.ArrayMax = 0;
          pFVar20 = FPackagePath::GetDebugNameText(&this->PackagePath,&local_200);
          local_3f8.Type = Text;
          FText::FText((FText *)&local_3f8.TextValue,pFVar20);
          if ((local_3f8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pUVar13 = (UObject *)(*pcVar6)();
            return pUVar13;
          }
          ::FString::FString(&local_4f8,L"PackageName");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_688,&local_4f8,&local_3f8);
          if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
          }
          if (local_3f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_3f8.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_200.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
          }
          pFVar20 = FText::FromName(&local_2b0,this_02);
          local_3d8.Type = Text;
          FText::FText((FText *)&local_3d8.TextValue,pFVar20);
          if ((local_3d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pUVar13 = (UObject *)(*pcVar6)();
            return pUVar13;
          }
          ::FString::FString(&local_4e8,L"ObjectName");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_688,&local_4e8,&local_3d8);
          if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
          }
          if (local_3d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_3d8.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_2b0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2b0.TextData.Reference + 0x10))();
          }
          pFVar16 = UObjectBaseUtility::GetPathName
                              ((UObjectBaseUtility *)pUVar14,&local_1d0,(UObject *)0x0);
          pFVar20 = FText::FromString(&local_1f0,pFVar16);
          local_418.Type = Text;
          FText::FText((FText *)&local_418.TextValue,pFVar20);
          if ((local_418.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pUVar13 = (UObject *)(*pcVar6)();
            return pUVar13;
          }
          ::FString::FString(&local_4d8,L"ClassName");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_688,&local_4d8,&local_418);
          if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
          }
          if (local_418.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_418.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_1f0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
          }
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
          pFVar20 = FText::AsLocalizable_Advanced_LocText
                              (&local_368,L"LinkerLoad",L"LoadingTransientInstance",
                               L"Attempting to load an instance of a transient class from disk - Package:\'{PackageName}\'  Object:\'{ObjectName}\'  Class:\'{ClassName}\'"
                              );
          pFVar21 = FTextFormat::FTextFormat(&local_190,pFVar20,Default);
          pFVar20 = FText::Format(&local_378,pFVar21,&local_688);
          FDeferredMessageLog::Warning(&local_668,&local_1c0,pFVar20);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c0.SharedReferenceCount.ReferenceController);
          if (local_378.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
          }
          if (local_368.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
          }
          DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                    ((TTuple<FString,FFormatArgumentValue> *)local_688.Pairs.AllocatorInstance.Data,
                     local_688.Pairs.ArrayNum);
          if ((TTuple<FString,FFormatArgumentValue> *)local_688.Pairs.AllocatorInstance.Data !=
              (TTuple<FString,FFormatArgumentValue> *)0x0) {
            FMemory::Free(local_688.Pairs.AllocatorInstance.Data);
          }
        }
        FVar25 = this_02[8];
        if (FVar25 != (FName)0x0) {
          local_650[8] = local_648;
          FVar17 = FVar25;
          goto LAB_1420af2cf;
        }
        FVar25 = FVar17;
        if ((char)this_02[9].Number < '\0') goto LAB_1420af641;
        FVar22 = FVar35;
        if ((int)this_02[1].ComparisonIndex.Value < 1) {
          if (local_6c0 != (FName)0x0) goto LAB_1420ae5f1;
        }
        else if (local_6c0 == (FName)0x0) {
          uVar10 = FPackageIndex::ToExport((FPackageIndex *)(this_02 + 1));
          uVar31 = 0;
          if ((int)uVar10 < (int)this->_padding_) {
            uVar31 = ~uVar10 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pUVar13 = (UObject *)(*pcVar6)();
            return pUVar13;
          }
          if ((*(byte *)((longlong)(int)uVar10 * 0x68 + 0x4d + this->_padding_) & 1) != 0) {
            pbVar1 = (byte *)((longlong)&this_02[9].Number + 1);
            *pbVar1 = *pbVar1 | 1;
            local_650[8] = local_648;
            FVar17 = FVar35;
            goto LAB_1420af2cf;
          }
        }
        else {
LAB_1420ae5f1:
          pUVar15 = UObjectRedirector::GetPrivateStaticClass();
          iVar4 = (int)pUVar15->_padding_;
          if ((iVar4 <= *(int *)(*(longlong *)((longlong)local_6c0 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)((longlong)local_6c0 + 0x10) + 0x30) +
               (longlong)iVar4 * 8) == &pUVar15->_padding_)) {
            FVar22 = local_6c0;
          }
        }
        if ((local_6c0 == (FName)0x0) || (FVar22 != (FName)0x0)) {
          *(byte *)&this_02[9].Number = (byte)this_02[9].Number | 0x80;
          bVar7 = this_02[1].ComparisonIndex.Value != 0;
          if (bVar7) {
            pFVar16 = FLinker::GetFullImpExpName
                                ((FLinker *)this,&local_2e8,
                                 (FPackageIndex)this_02[1].ComparisonIndex.Value);
          }
          else {
            pFVar16 = UObjectBaseUtility::GetFullName
                                ((UObjectBaseUtility *)this->_padding_,&local_250,(UObject *)0x0,
                                 None);
          }
          local_630.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_630.Data.ArrayNum = (pFVar16->Data).ArrayNum;
          local_630.Data.ArrayMax = (pFVar16->Data).ArrayMax;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
          if ((bVar7) && (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
          }
          if ((!bVar7) && (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          local_678.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_678.Pairs.ArrayNum = 0;
          local_678.Pairs.ArrayMax = 0;
          pFVar20 = FText::FromName(&local_2d0,this_02);
          local_3b8.Type = Text;
          FText::FText((FText *)&local_3b8.TextValue,pFVar20);
          if ((local_3b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pUVar13 = (UObject *)(*pcVar6)();
            return pUVar13;
          }
          ::FString::FString(&local_498,L"ObjectName");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_678,&local_498,&local_3b8);
          if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_498.Data.AllocatorInstance.Data);
          }
          if (local_3b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_3b8.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_2d0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2d0.TextData.Reference + 0x10))();
          }
          pFVar20 = FText::FromString(&local_2c0,&local_630);
          local_398.Type = Text;
          FText::FText((FText *)&local_398.TextValue,pFVar20);
          if ((local_398.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            pUVar13 = (UObject *)(*pcVar6)();
            return pUVar13;
          }
          ::FString::FString(&local_488,L"OuterName");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_678,&local_488,&local_398);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          if (local_398.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_398.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_2c0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2c0.TextData.Reference + 0x10))();
          }
          if (FVar22 == (FName)0x0) {
            pFVar20 = FText::AsLocalizable_Advanced_LocText
                                (&local_260,L"LinkerLoad",L"CreateExportFailedToLoadOuter",
                                 L"CreateExport: Failed to load Outer for resource \'{ObjectName}\': {OuterName}"
                                );
            pFVar21 = FTextFormat::FTextFormat(&local_1a0,pFVar20,Default);
            pFVar20 = FText::Format(&local_270,pFVar21,&local_678);
            FDeferredMessageLog::Warning(&local_668,&local_280,pFVar20);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_280.SharedReferenceCount.ReferenceController);
            if (local_270.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_270.TextData.Reference + 0x10))();
            }
          }
          else {
            pFVar20 = FText::AsLocalizable_Advanced_LocText
                                (&local_290,L"LinkerLoad",
                                 L"CreateExportFailedToLoadOuterIsRedirector",
                                 L"CreateExport: Failed to load Outer for resource because it is a redirector \'{ObjectName}\': {OuterName}"
                                );
            pFVar21 = FTextFormat::FTextFormat(&local_1b0,pFVar20,Default);
            pFVar20 = FText::Format(&local_2a0,pFVar21,&local_678);
            FDeferredMessageLog::Warning(&local_668,&local_1e0,pFVar20);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1e0.SharedReferenceCount.ReferenceController);
            local_260.TextData.Reference = local_290.TextData.Reference;
            if (local_2a0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2a0.TextData.Reference + 0x10))();
              local_260.TextData.Reference = local_290.TextData.Reference;
            }
          }
          if (local_260.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_260.TextData.Reference + 0x10))();
          }
          DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                    ((TTuple<FString,FFormatArgumentValue> *)local_678.Pairs.AllocatorInstance.Data,
                     local_678.Pairs.ArrayNum);
          FVar32.Data = local_630.Data.AllocatorInstance.Data;
          FVar25 = FVar35;
          if ((TTuple<FString,FFormatArgumentValue> *)local_678.Pairs.AllocatorInstance.Data !=
              (TTuple<FString,FFormatArgumentValue> *)0x0) {
            FMemory::Free(local_678.Pairs.AllocatorInstance.Data);
            FVar32.Data = local_630.Data.AllocatorInstance.Data;
          }
LAB_1420af637:
          FVar35 = FVar25;
          if (FVar32.Data != (FScriptContainerElement *)0x0) goto LAB_1420af63c;
          goto LAB_1420af641;
        }
        local_6a0 = UObject::GetArchetypeFromRequiredInfo
                              (pUVar14,(UObject *)local_6c0,*this_02,this_02[3].Number);
        if (local_6a0 == (UObject *)0x0) {
          ::FName::ToString(this_02,&local_348);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar14,&local_358,(UObject *)0x0);
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Template",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                             ,0x1575,L"Failed to get template for class %s. ExportName=%s");
          if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
          }
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pUVar13 = (UObject *)(*pcVar6)();
            return pUVar13;
          }
        }
        pUVar13 = local_6a0;
        EVar8 = (*GetLoaderType)();
        if (EVar8 == ZenLoader) {
          Preload((FLinkerLoad *)&this->_padding_,pUVar13);
        }
        UObject::ConditionalPostLoadSubobjects(pUVar13,(FObjectInstancingGraph *)0x0);
        FVar22 = (FName)StaticFindObjectFastInternal
                                  ((UClass *)0x0,(UObject *)local_6c0,*this_02,ExactClass,RF_NoFlags
                                   ,Borrowed);
        if ((this_02[8] != (FName)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Export.Object == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                               ,0x1586,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pUVar13 = (UObject *)(*pcVar6)();
          return pUVar13;
        }
        if ((FVar22 != (FName)0x0) && (*(UClass **)((longlong)FVar22 + 0x10) == pUVar14)) {
          this_02[8] = FVar22;
        }
        if (this_02[8] != (FName)0x0) {
          if ((this_02[9].Number & 1) != 0) {
            *(int *)((longlong)this_00 + 8) = *(int *)((longlong)this_00 + 8) + 1;
            pFVar23 = FLinkerManager::Get();
            pFVar2 = &pFVar23->LoadersWithForcedExportsCritical;
            local_620 = this;
            if (pFVar2 == (FWindowsRecursiveMutex *)0x0) goto LAB_1420af652;
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
            TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::
            Emplace<FLinkerLoad_*_const_&>
                      (&pFVar23->LoadersWithForcedExports,(FLinkerLoad **)local_5d0,
                       (bool *)&local_620);
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
            FVar17 = this_02[8];
            local_650[8] = local_648;
            goto LAB_1420af2cf;
          }
          UObject::SetLinker((UObject *)this_02[8],this,param_1,true,false);
          if ((int)this_02[1].ComparisonIndex.Value < 0) {
            UObjectBase::SetExternalPackage((UObjectBase *)this_02[8],(UPackage *)this->_padding_);
          }
          FUObjectSerializeContext::AddLoadedObject
                    ((FUObjectSerializeContext *)this_00,(UObject *)this_02[8]);
          if (((*(uint *)((longlong)this_02[8] + 8) >> 0x15 & 1) == 0) &&
             ((bVar7 = UPackage::IsFullyLoaded((UPackage *)this->_padding_), !bVar7 ||
              (bVar7 = IsBlueprintFinalizationPending(this), bVar7)))) {
            if ((GEventDrivenLoaderEnabled != false) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!GEventDrivenLoaderEnabled || !(1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                   ,0x15a3,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              pUVar13 = (UObject *)(*pcVar6)();
              return pUVar13;
            }
            EVar33 = RF_WasLoaded|RF_NeedPostLoad|RF_NeedLoad;
            if ((*(uint *)((longlong)this_02[8] + 8) >> 4 & 1) == 0) {
              EVar33 = RF_WasLoaded|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad;
            }
            UObjectBaseUtility::SetFlags((UObjectBaseUtility *)this_02[8],EVar33);
          }
          goto LAB_1420ae892;
        }
        if (FVar22 != (FName)0x0) {
          this_01 = *(UObjectBaseUtility **)((longlong)FVar22 + 0x10);
          iVar4 = (int)pUVar14->_padding_;
          if ((*(int *)&this_01[1].field_0x10 < iVar4) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&this_01[1].field_0x8 + (longlong)iVar4 * 8)
              != &pUVar14->_padding_)) {
            if (0x3f1 < (int)((ulonglong)this->_padding_ >> 0x20)) {
              if (4 < (byte)LogLinker._0_1_) {
                pFVar16 = UObjectBaseUtility::GetPathName(this_01,&local_318,(UObject *)0x0);
                if ((pFVar16->Data).ArrayNum == 0) {
                  local_6a8 = (FScriptContainerElement *)0x15060d16c;
                }
                else {
                  local_6a8 = (pFVar16->Data).AllocatorInstance.Data;
                }
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)pUVar14,&local_328,(UObject *)0x0);
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)FVar22,&local_338,(UObject *)0x0);
                ::FString::PrintfImpl
                          (&local_4c8,L"Object changed type on load: %s had class %s but is now %s")
                ;
                local_460.PackagePath = &this->PackagePath;
                local_460.Path = (wchar_t *)0x0;
                local_460.Object = (UObject *)0x0;
                UE::Core::Private::RecordAssetLog
                          ((FName *)&LogLinker.field_0x4,Log,&local_460,&local_4c8,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0x15cf);
                if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
                }
                if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_338.Data.AllocatorInstance.Data);
                }
                if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_328.Data.AllocatorInstance.Data);
                }
                if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_318.Data.AllocatorInstance.Data);
                }
              }
              this_02[8] = FVar22;
              UObject::SetLinker((UObject *)FVar22,this,param_1,true,false);
              UObjectBaseUtility::SetFlags
                        ((UObjectBaseUtility *)this_02[8],
                         RF_WasLoaded|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad);
              FUObjectSerializeContext::AddLoadedObject
                        ((FUObjectSerializeContext *)this_00,(UObject *)this_02[8]);
              local_650[8] = local_648;
              FVar17 = FVar22;
              goto LAB_1420af2cf;
            }
            if ((byte)LogLinker._0_1_ < 2) goto LAB_1420af641;
            local_618.ComparisonIndex.Value = *(uint *)&this_01->field_0x18;
            local_618.Number = *(uint *)&this_01->field_0x1c;
            ::FName::ToString(&local_618,&local_570);
            local_660 = *(FName *)((longlong)local_6c0 + 0x18);
            ::FName::ToString(&local_660,&local_580);
            local_660 = (FName)L"";
            if (local_580.Data.ArrayNum != 0) {
              local_660 = (FName)local_580.Data.AllocatorInstance.Data;
            }
            ::FName::ToString(this_02,&local_308);
            local_60c = (FName)pUVar14->_padding_;
            ::FName::ToString(&local_60c,&local_590);
            ::FString::PrintfImpl
                      (&local_4b8,
                       L"Failed import: class \'%s\' name \'%s\' outer \'%s\'. There is another object (of \'%s\' class) at the path."
                      );
            local_448.PackagePath = &this->PackagePath;
            local_448.Path = (wchar_t *)0x0;
            local_448.Object = (UObject *)0x0;
            UE::Core::Private::RecordAssetLog
                      ((FName *)&LogLinker.field_0x4,Error,&local_448,&local_4b8,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x15da);
            if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
            }
            if (local_590.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_590.Data.AllocatorInstance.Data);
            }
            if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_308.Data.AllocatorInstance.Data);
            }
            FVar32.Data = local_570.Data.AllocatorInstance.Data;
            FVar25 = FVar35;
            if ((FName)local_580.Data.AllocatorInstance.Data != (FName)0x0) {
              FMemory::Free(local_580.Data.AllocatorInstance.Data);
              FVar32.Data = local_570.Data.AllocatorInstance.Data;
            }
            goto LAB_1420af637;
          }
        }
        EVar33 = this_02[3].Number;
        if ((((GVerifyObjectReferencesOnly == false) ||
             ((EVar33 & RF_ClassDefaultObject) != RF_NoFlags)) ||
            ((*(uint *)(this->_padding_ + 0x2c) >> 0x15 & 1) != 0)) ||
           (bVar7 = UObjectBaseUtility::IsTemplate
                              ((UObjectBaseUtility *)local_6c0,RF_ClassDefaultObject), bVar7)) {
LAB_1420aec4f:
          EVar33 = EVar33 | (RF_WasLoaded|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad);
        }
        else {
          pUVar15 = Z_Construct_UClass_UField_NoRegister();
          if (pUVar15 != (UClass *)0x0) {
            iVar4 = (int)pUVar15->_padding_;
            if (((int)pUVar14->_padding_ < iVar4) ||
               ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar4 * 8) !=
                &pUVar15->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) goto LAB_1420aec4f;
          }
          pUVar15 = UObjectRedirector::GetPrivateStaticClass();
          if (pUVar15 != (UClass *)0x0) {
            iVar4 = (int)pUVar15->_padding_;
            if (((int)pUVar14->_padding_ < iVar4) ||
               ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar4 * 8) !=
                &pUVar15->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) goto LAB_1420aec4f;
          }
        }
        FVar35 = *this_02;
        if ((EVar33 & RF_ClassDefaultObject) != RF_NoFlags) {
          ppFStack_548 = &local_640;
          local_640 = (FScriptContainerElement *)0x0;
          local_540 = local_78;
          local_638 = 0;
          local_78._0_8_ = (_func___cdecl_void_void_ptr_UClass_ptr_ptr *)0x0;
          local_50 = (longlong *)0x0;
          local_550 = this;
          local_50 = FMemory::Malloc(0x20,8);
          *local_50 = (longlong)
                      &UE::Core::Private::Function::
                       TFunction_OwnedObject<`FLinkerLoad::CreateExport'::`241'::<lambda_1>,0,1>::
                       _vftable_;
          local_50[1] = (longlong)local_550;
          local_50[2] = (longlong)ppFStack_548;
          local_50[3] = (longlong)local_540;
          if (local_50 + 1 != (longlong *)0x0) {
            local_78._0_8_ =
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`FLinkerLoad::CreateExport'::__l241::<lambda_1>,void,UClass_*>::
                 Call;
          }
          UE::Core::Private::Function::
          TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UClass_*)>
          ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(UClass_*)>
                        *)local_78,(UClass *)pUVar14->_padding_);
          FVar25 = this_02[8];
          if (FVar25 != (FName)0x0) {
            FVar32.Data = local_640;
            if ((_func___cdecl_void_void_ptr_UClass_ptr_ptr *)local_78._0_8_ !=
                (_func___cdecl_void_void_ptr_UClass_ptr_ptr *)0x0) {
              plVar30 = (longlong *)(local_78 + 0x10);
              if (local_50 != (longlong *)0x0) {
                plVar30 = local_50;
              }
              (**(code **)(*plVar30 + 0x10))();
              FVar32.Data = local_640;
            }
            goto LAB_1420af637;
          }
          if ((_func___cdecl_void_void_ptr_UClass_ptr_ptr *)local_78._0_8_ !=
              (_func___cdecl_void_void_ptr_UClass_ptr_ptr *)0x0) {
            plVar30 = (longlong *)(local_78 + 0x10);
            if (local_50 != (longlong *)0x0) {
              plVar30 = local_50;
            }
            (**(code **)(*plVar30 + 0x10))();
          }
          if (local_640 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_640);
          }
        }
        pUVar13 = local_6a0;
        if (((this_02[9].Number & 0x20) != 0) &&
           (bVar7 = UObjectBaseUtility::IsA<UClass>(*(UObjectBaseUtility **)&local_6a0->field_0x20),
           bVar7)) {
          *(byte *)&this_02[9].Number = (byte)this_02[9].Number & 0xdf;
        }
        if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar14);
        }
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_178,pUVar14);
        local_178._8_4_ = local_6c0.ComparisonIndex.Value;
        local_178._12_4_ = local_6c0.Number;
        local_178._40_8_ = pUVar13;
        local_178._16_8_ = FVar35;
        local_178._24_4_ = EVar33;
        if ((int)this_02[1].ComparisonIndex.Value < 0) {
          local_178._56_8_ = this->_padding_;
          if ((UPackage *)local_178._56_8_ != (UPackage *)0x0) {
            pUVar24 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)local_6c0);
            uVar31 = (uint)pUVar24->PackageFlagsPrivate & 0x100000;
            if ((atomic<unsigned_int>)
                (uVar31 | (uint)*(atomic<unsigned_int> *)(local_178._56_8_ + 0x2c)) !=
                *(atomic<unsigned_int> *)(local_178._56_8_ + 0x2c)) {
              LOCK();
              *(atomic<unsigned_int> *)(local_178._56_8_ + 0x2c) =
                   (atomic<unsigned_int>)
                   ((uint)*(atomic<unsigned_int> *)(local_178._56_8_ + 0x2c) | uVar31);
              UNLOCK();
            }
            UObjectBaseUtility::GetPackage((UObjectBaseUtility *)local_6c0);
          }
        }
        else {
          local_178._56_8_ = (UPackage *)0x0;
        }
        FLoadTimeProfilerTracePrivate::FCreateExportScope::FCreateExportScope
                  (&local_600,this,(UObject **)(this_02 + 8));
        FVar25 = (FName)StaticConstructObject_Internal
                                  ((FStaticConstructObjectParameters *)local_178);
        this_02[8] = FVar25;
        FLoadTimeProfilerTracePrivate::FCreateExportScope::~FCreateExportScope(&local_600);
        if ((GIsInitialLoad != false) || (GUObjectArray.OpenForDisregardForGC != false)) {
          pFVar26 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)((longlong)this_02[8] + 0xc));
          FUObjectItem::ThisThreadAtomicallySetFlag(pFVar26,RootSet);
        }
        FVar25 = *this_02;
        pUVar14 = *(UClass **)((longlong)this_02[8] + 0x10);
        if (FVar35 != FVar25) {
          pUVar13 = *(UObject **)((longlong)this_02[8] + 0x20);
          local_658 = 0;
          if (FVar25 == (FName)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      (pUVar13,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
          }
          pUVar15 = UObjectRedirector::GetPrivateStaticClass();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_f8,pUVar15);
          local_f8._48_8_ = (FObjectInstancingGraph *)0x0;
          local_f8._56_8_ = (UPackage *)0x0;
          local_f8._24_4_ = RF_Standalone|RF_Public;
          local_f8._40_8_ = (UObject *)0x0;
          local_f8[0x20] = false;
          local_f8._8_8_ = pUVar13;
          local_f8._16_8_ = FVar25;
          pUVar13 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
          if (local_f8._64_8_ != 0) {
            plVar30 = (longlong *)(local_f8 + 0x50);
            if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
              plVar30 = (longlong *)local_f8._104_8_;
            }
            (**(code **)(*plVar30 + 0x10))();
          }
          uVar31 = this_02[8].Number;
          *(uint *)&pUVar13[1].field_0x0 = this_02[8].ComparisonIndex.Value;
          *(uint *)&pUVar13[1].field_0x4 = uVar31;
        }
        if (this_02[8] != (FName)0x0) {
          if ((((this_02[3].Number & 0x10) == 0) || ((pUVar14->ClassFlags >> 0x12 & 1) == 0)) ||
             ((*(uint *)(pUVar14->_padding_ + 0xd4) >> 0x11 & 1) == 0)) {
            bVar7 = false;
LAB_1420aef87:
            if ((!bVar7) || (bVar9 = IsBlueprintFinalizationPending(this), !bVar9)) {
              if ((pUVar14->bCooked == false) && (bVar7)) {
                pUVar24 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar14);
                pUVar27 = GetTransientPackage();
                if (pUVar24 != pUVar27) {
                  EVar33 = *(EObjectFlags *)((longlong)this_02[8] + 8);
                  UObjectBaseUtility::ClearFlags
                            ((UObjectBaseUtility *)this_02[8],
                             RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad);
                  UObject::SetLinker((UObject *)this_02[8],this,param_1,false,false);
                  UObjectBaseUtility::SetFlags((UObjectBaseUtility *)this_02[8],EVar33);
                  bVar7 = RegenerateBlueprintClass(this,pUVar14,(UObject *)this_02[8]);
                  if (!bVar7) goto LAB_1420af186;
                  FVar25 = this_02[8];
                  goto LAB_1420af028;
                }
              }
              UObject::SetLinker((UObject *)this_02[8],this,param_1,true,false);
              FUObjectSerializeContext::AddLoadedObject
                        ((FUObjectSerializeContext *)this_00,(UObject *)this_02[8]);
              goto LAB_1420af186;
            }
            FVar25 = this_02[8];
          }
          else {
            bVar7 = true;
            if ((this->LoadFlags & 0x100000) == 0) goto LAB_1420aef87;
            this->DeferredCDOIndex = param_1;
            FVar25 = this_02[8];
          }
LAB_1420af028:
          if (local_178._64_8_ != 0) {
            plVar30 = (longlong *)(local_178 + 0x50);
            if ((longlong *)local_178._104_8_ != (longlong *)0x0) {
              plVar30 = (longlong *)local_178._104_8_;
            }
            (**(code **)(*plVar30 + 0x10))();
            local_650[8] = local_648;
            FVar17 = FVar25;
            goto LAB_1420af2cf;
          }
          goto LAB_1420af641;
        }
        if (2 < (byte)LogLinker._0_1_) {
          ::FName::ToString(this_02,&local_2f8);
          local_5f8 = (FName)pUVar14->_padding_;
          ::FName::ToString(&local_5f8,&local_560);
          ::FString::PrintfImpl
                    (&local_4a8,L"FLinker::CreatedExport failed to construct object %s %s");
          local_430.PackagePath = &this->PackagePath;
          local_430.Path = (wchar_t *)0x0;
          local_430.Object = (UObject *)0x0;
          UE::Core::Private::RecordAssetLog
                    ((FName *)&LogLinker.field_0x4,Warning,&local_430,&local_4a8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                     ,0x168d);
          if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
          }
          if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_560.Data.AllocatorInstance.Data);
          }
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
        }
LAB_1420af186:
        if (this_02[8] != (FName)0x0) {
          pUVar28 = UE::CoreUObject::Private::DynamicCast<UStruct_*,UObject>((UObject *)this_02[8]);
          if (pUVar28 != (UStruct *)0x0) {
            if (this_02[2].Number != 0) {
              pUVar13 = IndexToObject(this,(FPackageIndex)this_02[2].Number);
              if (pUVar13 != (UObject *)0x0) {
                pUVar14 = Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister();
                iVar4 = (int)pUVar14->_padding_;
                if ((iVar4 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar4 * 8)
                    == &pUVar14->_padding_)) {
                  local_5f0 = pUVar28;
                  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::
                  Emplace<UStruct_*_const_&>
                            ((TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator> *)
                             (pUVar13 + 0xf),(UStruct **)(local_5d0 + 4),(bool *)&local_5f0);
                  goto LAB_1420af21a;
                }
              }
              pcVar6 = *(code **)(pUVar28->_padding_ + 800);
              pUVar13 = IndexToObject(this,(FPackageIndex)this_02[2].Number);
              (*pcVar6)(pUVar28,pUVar13);
            }
LAB_1420af21a:
            pUVar14 = Cast<UClass,UObject>((UObject *)this_02[8]);
            if (pUVar14 != (UClass *)0x0) {
              (**(code **)(pUVar14->_padding_ + 0x2b8))
                        (pUVar14,*(uint *)(pUVar14->_padding_ + 0xd4) >> 0x11);
            }
          }
          if ((this_02[9].Number & 1) != 0) {
            *(int *)((longlong)this_00 + 8) = *(int *)((longlong)this_00 + 8) + 1;
            pFVar23 = FLinkerManager::Get();
            pFVar2 = &pFVar23->LoadersWithForcedExportsCritical;
            local_5e8 = this;
            if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
LAB_1420af652:
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
            TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::
            Emplace<FLinkerLoad_*_const_&>
                      (&pFVar23->LoadersWithForcedExports,(FLinkerLoad **)local_5c8,
                       (bool *)&local_5e8);
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
          }
        }
        if (local_178._64_8_ != 0) {
          plVar30 = (longlong *)(local_178 + 0x50);
          if ((longlong *)local_178._104_8_ != (longlong *)0x0) {
            plVar30 = (longlong *)local_178._104_8_;
          }
          (**(code **)(*plVar30 + 0x10))();
        }
        local_650[8] = local_648;
        goto LAB_1420af2c5;
      }
      pUVar13 = IndexToObject(this,(FPackageIndex)this_02[2].Number);
      if (pUVar13 != (UObject *)0x0) {
        if (((((*(uint *)&pUVar13->field_0x8 >> 0x15 & 1) == 0) &&
             (pFVar26 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar13->field_0xc),
             ((ulonglong)((pFVar26->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) == 0)) &&
            (pFVar18 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)pUVar13),
            pFVar18 != (FLinkerLoad *)0x0)) &&
           ((((int)this_02[2].Number < 0 &&
             (bVar7 = UObjectBaseUtility::IsA<UClass>((UObjectBaseUtility *)pUVar13), bVar7)) &&
            (*(longlong *)&pUVar13[6].field_0x20 == 0)))) {
          if ((GEventDrivenLoaderEnabled != false) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GEventDrivenLoaderEnabled || !(1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                 ,0x14d7,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            pUVar13 = (UObject *)(*pcVar6)();
            return pUVar13;
          }
          UObjectBaseUtility::SetFlags((UObjectBaseUtility *)pUVar13,RF_NeedLoad);
          Preload((FLinkerLoad *)&this->_padding_,pUVar13);
        }
        goto LAB_1420adf34;
      }
      pUVar15 = Z_Construct_UClass_UFunction_NoRegister();
      if (pUVar15 != (UClass *)0x0) {
        iVar4 = (int)pUVar15->_padding_;
        if (((int)pUVar14->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar14->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar15->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          this_02[2].Number = 0;
          goto LAB_1420adf34;
        }
      }
    }
LAB_1420af641:
    local_650[8] = local_648;
    FVar17 = FVar25;
  }
  else {
LAB_1420af2c5:
    if (-1 < (char)this_02[9].Number) {
      FVar17 = this_02[8];
    }
  }
LAB_1420af2cf:
  *(undefined8 *)((longlong)local_5e0 + 0x58) = local_5d8;
  *(undefined4 *)((longlong)local_5e0 + 0x50) = local_6ac;
  return (UObject *)FVar17;
}

// CreateExportAndPreload @ 1420af660

UObject * __thiscall FLinkerLoad::CreateExportAndPreload(FLinkerLoad *this,int param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  UObject *this_00;
  UClass *pUVar3;
  
  this_00 = CreateExport(this,param_1);
  if (this_00 != (UObject *)0x0) {
    if (!param_2) {
      pUVar3 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if (((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar3->_padding_)) &&
         (bVar2 = UObjectBaseUtility::IsTemplate
                            ((UObjectBaseUtility *)this_00,RF_ArchetypeObject|RF_ClassDefaultObject)
         , !bVar2)) {
        pUVar3 = UObjectRedirector::GetPrivateStaticClass();
        iVar1 = (int)pUVar3->_padding_;
        if (*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) {
          return this_00;
        }
        if ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_) {
          return this_00;
        }
      }
    }
    Preload((FLinkerLoad *)&this->_padding_,this_00);
  }
  return this_00;
}

// CreateExportHash @ 1420af710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::CreateExportHash(FLinkerLoad *this)

{
  TUniquePtr<int_[0],TDefaultDelete<int_[0]>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  ELinkerStatus EVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::CreateExportHash(void)_::_2_::FStat_STAT_LinkerLoad_CreateExportHash>
  FVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  FNameEntryId FVar17;
  FName FVar18;
  uint *puVar19;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  uint local_res20;
  uint uStackX_24;
  FName local_48;
  FName local_40;
  FName local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_LinkerLoad_CreateExportHash ==
        (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::CreateExportHash(void)_::_2_::FStat_STAT_LinkerLoad_CreateExportHash>
         )0x0) {
      pFVar12 = ::FName::FName(&local_48,"STAT_LinkerLoad_CreateExportHash");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_CreateExportHash,*pFVar12,
                 L"FLinkerLoad::CreateExportHash","STATGROUP_LinkerLoad","STATCAT_Advanced",
                 L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_LinkerLoad_CreateExportHash;
  if (StatPtr_STAT_LinkerLoad_CreateExportHash ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::CreateExportHash(void)_::_2_::FStat_STAT_LinkerLoad_CreateExportHash>
       )0x0) {
    pFVar12 = ::FName::FName(&local_40,"STAT_LinkerLoad_CreateExportHash");
    FVar13 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::CreateExportHash(void)_::_2_::FStat_STAT_LinkerLoad_CreateExportHash>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_CreateExportHash,
                          *pFVar12,L"FLinkerLoad::CreateExportHash","STATGROUP_LinkerLoad",
                          "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar3 = false;
  bVar5 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar11 = FVar18.Number;
  if ((FVar17.Value == 0) && (uVar11 == 0)) {
LAB_1420af881:
    bVar4 = false;
    FVar18 = local_38;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar17.Value;
        local_res18.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0xb50);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1420af881;
    local_res20 = FVar17.Value;
    uStackX_24 = uVar11;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar4 = true;
  }
  if (GEventDrivenLoaderEnabled == false) {
    if (this->ExportHashIndex == 0) {
      pTVar1 = &this->ExportHash;
      piVar14 = operator_new__(0x400);
      piVar15 = pTVar1->Ptr;
      pTVar1->Ptr = piVar14;
      operator_delete__(piVar15);
      uVar7 = _UNK_15060db28;
      uVar6 = ___xmm_ffffffffffffffffffffffffffffffff;
      piVar15 = pTVar1->Ptr;
      if ((pTVar1 < piVar15) || (piVar15 + 0xff < pTVar1)) {
        lVar16 = 8;
        do {
          *(undefined8 *)piVar15 = uVar6;
          *(undefined8 *)(piVar15 + 2) = uVar7;
          *(undefined8 *)(piVar15 + 4) = uVar6;
          *(undefined8 *)(piVar15 + 6) = uVar7;
          *(undefined8 *)(piVar15 + 8) = uVar6;
          *(undefined8 *)(piVar15 + 10) = uVar7;
          *(undefined8 *)(piVar15 + 0xc) = uVar6;
          *(undefined8 *)(piVar15 + 0xe) = uVar7;
          *(undefined8 *)(piVar15 + 0x10) = uVar6;
          *(undefined8 *)(piVar15 + 0x12) = uVar7;
          *(undefined8 *)(piVar15 + 0x14) = uVar6;
          *(undefined8 *)(piVar15 + 0x16) = uVar7;
          *(undefined8 *)(piVar15 + 0x18) = uVar6;
          *(undefined8 *)(piVar15 + 0x1a) = uVar7;
          *(undefined8 *)(piVar15 + 0x1c) = uVar6;
          *(undefined8 *)(piVar15 + 0x1e) = uVar7;
          lVar16 = lVar16 + -1;
          piVar15 = piVar15 + 0x20;
        } while (lVar16 != 0);
      }
      else {
        lVar16 = 0;
        do {
          *(undefined4 *)(lVar16 + (longlong)pTVar1->Ptr) = 0xffffffff;
          lVar16 = lVar16 + 4;
        } while (lVar16 < 0x400);
      }
    }
    if (this->ExportHashIndex < (int)this->_padding_) {
      do {
        bVar8 = IsTimeLimitExceeded(this,L"creating export hash",100);
        if (bVar8) break;
        uVar11 = this->ExportHashIndex;
        uVar9 = 0;
        if ((int)uVar11 < (int)this->_padding_) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          EVar10 = (*pcVar2)();
          return EVar10;
        }
        puVar19 = (uint *)((longlong)(int)uVar11 * 0x68 + this->_padding_);
        uVar11 = ::GetTypeHash((FNameEntryId)*puVar19);
        puVar19[0x12] = (this->ExportHash).Ptr[uVar11 & 0xff];
        (this->ExportHash).Ptr[uVar11 & 0xff] = this->ExportHashIndex;
        this->ExportHashIndex = this->ExportHashIndex + 1;
      } while (this->ExportHashIndex < (int)this->_padding_);
    }
    if (this->ExportHashIndex == (int)this->_padding_) {
      EVar10 = LINKER_Loaded;
      bVar8 = IsTimeLimitExceeded(this,L"creating export hash",1);
      if (!bVar8) goto LAB_1420afa32;
    }
    EVar10 = LINKER_TimedOut;
  }
  else {
    EVar10 = LINKER_Loaded;
  }
LAB_1420afa32:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return EVar10;
}

// CreateImport @ 1420afb10

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall FLinkerLoad::CreateImport(FLinkerLoad *this,int param_1)

{
  longlong *plVar1;
  int *piVar2;
  FWindowsRecursiveMutex *pFVar3;
  undefined4 uVar4;
  FTlsAutoCleanup FVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UObject *pUVar13;
  uint *puVar14;
  FTlsAutoCleanup *pFVar15;
  FUObjectItem *pFVar16;
  UPackage *pUVar17;
  UClass *pUVar18;
  FString *pFVar19;
  FName this_00;
  FObjectImport *pFVar20;
  FLinkerLoad *this_01;
  FLinkerManager *pFVar21;
  FName FVar22;
  FName FVar23;
  FPackageIndex FVar24;
  ForElementType<FSetElementId> FVar25;
  FName FVar26;
  FName *this_02;
  FScriptContainerElement *local_res8;
  uint local_res10;
  FScriptContainerElement *local_res18;
  uint local_res20 [2];
  FName local_230;
  FName local_228;
  FString local_220;
  FString local_210;
  undefined1 local_200 [8];
  FLinkerLoad *local_1f8;
  FLinkerLoad *local_1f0;
  FLinkerTables *local_1e8;
  FTlsAutoCleanup local_1e0;
  undefined8 local_1d8;
  code *local_1d0;
  FScriptContainerElement **local_1c8;
  FString local_1c0;
  FString local_1b0;
  code *local_1a0;
  FScriptContainerElement **local_198;
  FString local_190;
  FAssetLog local_180;
  FAssetLog local_168;
  FAssetLog local_150;
  FName local_138;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  FVar23.ComparisonIndex.Value = 0;
  FVar23.Number = 0;
  local_res8 = (FScriptContainerElement *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res10 = param_1;
  if (((GEventDrivenLoaderEnabled) && (this->bLockoutLegacyOperations != false)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!GEventDrivenLoaderEnabled || !bLockoutLegacyOperations || !(1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                          ,0x16eb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pUVar13 = (UObject *)(*pcVar8)();
    return pUVar13;
  }
  puVar14 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_198 = &local_res8;
  local_1a0 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar15 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1a0,puVar14);
  plVar1 = &this->_padding_;
  local_1e0 = pFVar15[0x2f];
  local_1d8 = *(undefined8 *)((longlong)local_1e0 + 0x48);
  uVar4 = *(undefined4 *)((longlong)local_1e0 + 0x40);
  *(FLinkerLoad **)((longlong)local_1e0 + 0x48) = this;
  *(int *)((longlong)local_1e0 + 0x40) = param_1;
  uVar11 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  local_1e8 = (FLinkerTables *)plVar1;
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    pUVar13 = (UObject *)(*pcVar8)();
    return pUVar13;
  }
  this_02 = (FName *)(*plVar1 + (longlong)param_1 * 0x38);
  DeferPotentialCircularImport(this,param_1);
  if ((this_02[5] != (FName)0x0) &&
     (pFVar16 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)this_02[5] + 0xc)),
     ((ulonglong)((pFVar16->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0)) {
    if (2 < (byte)LogLinker._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this_02[5],&local_120,(UObject *)0x0,None);
      ::FString::PrintfImpl(&local_190,L"Unreachable object found when creating import %s");
      local_180.PackagePath = &this->PackagePath;
      local_180.Path = (wchar_t *)0x0;
      local_180.Object = (UObject *)0x0;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogLinker.field_0x4,Warning,&local_180,&local_190,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                 ,0x16fb);
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    this_02[5].ComparisonIndex = 0;
    this_02[5].Number = 0;
  }
  if ((this_02[5] == (FName)0x0) && (*this_02 != (FName)0x0)) {
    puVar14 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_1c8 = &local_res18;
    local_1d0 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar15 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1d0,puVar14);
    FVar5 = pFVar15[0x2f];
    if ((PRIVATE_GIsRunningCommandlet == false) &&
       ((pUVar17 = FindObjectFast<UPackage>
                             ((UObject *)0x0,*(FName *)&this_02[1].Number,None,RF_NoFlags),
        pUVar17 != (UPackage *)0x0 &&
        (pUVar18 = FindObjectFast<UClass>
                             ((UObject *)pUVar17,*(FName *)&this_02[2].Number,None,RF_NoFlags),
        pUVar18 != (UClass *)0x0)))) {
      Preload((FLinkerLoad *)&this->_padding_,(UObject *)pUVar18);
      if ((pUVar18->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar18);
      }
      FVar24.Index = this_02[1].ComparisonIndex.Value;
      if (FVar24.Index != 0) {
        if (FVar24.Index < 0) {
          pFVar20 = FLinkerTables::Imp((FLinkerTables *)&this->_padding_,FVar24);
          pUVar17 = (UPackage *)pFVar20->XObject;
          if (pUVar17 != (UPackage *)0x0) goto LAB_1420b0044;
          if (pFVar20->_padding_ != 0) {
            FVar24.Index = this_02[1].ComparisonIndex.Value;
            goto LAB_1420afed0;
          }
          FLinkerInstancingContext::RemapPackage(&this->InstancingContext,&local_228);
          if (local_228 == (FName)0x0) {
            pUVar17 = (UPackage *)0x0;
            FVar22 = FVar23;
          }
          else {
            FVar22.ComparisonIndex.Value = 2;
            FVar22.Number = 0;
            pFVar19 = ::FName::ToString(&local_228,&local_100);
            if ((pFVar19->Data).ArrayNum == 0) {
              pUVar17 = CreatePackage(L"");
            }
            else {
              pUVar17 = CreatePackage((wchar_t *)(pFVar19->Data).AllocatorInstance.Data);
            }
          }
          if ((FVar22 != (FName)0x0) &&
             (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          bVar10 = IsPackageReferenceAllowed(this,pUVar17);
          if (bVar10) goto LAB_1420afedb;
        }
        else {
LAB_1420afed0:
          pUVar17 = (UPackage *)IndexToObject(this,FVar24);
LAB_1420afedb:
          if (pUVar17 != (UPackage *)0x0) {
LAB_1420b0044:
            this_00 = (FName)FindImportFast(pUVar18,(UObject *)pUVar17,*this_02,false);
            goto LAB_1420b0058;
          }
        }
        uVar11 = this_02[1].ComparisonIndex.Value;
        if (uVar11 == 0) {
          bVar9 = true;
          bVar10 = false;
          pFVar19 = UObjectBaseUtility::GetFullName
                              ((UObjectBaseUtility *)this->_padding_,&local_f0,(UObject *)0x0,None);
        }
        else {
          bVar9 = false;
          bVar10 = true;
          if ((int)uVar11 < 0) {
            FLinkerTables::GetImportFullName((FLinkerTables *)&this->_padding_,&local_210,~uVar11);
          }
          else if ((int)uVar11 < 1) {
            local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_210.Data.ArrayNum = 0;
          }
          else {
            FLinker::GetExportFullName((FLinker *)this,&local_210,uVar11 - 1,(wchar_t *)0x0,false);
          }
          pFVar19 = &local_210;
        }
        pFVar6 = (pFVar19->Data).AllocatorInstance.Data;
        (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar19->Data).ArrayNum = 0;
        (pFVar19->Data).ArrayMax = 0;
        if ((bVar10) && (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
        if ((bVar9) && (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (5 < (byte)LogLinker._0_1_) {
          ::FName::ToString(this_02,&local_e0);
          ::FString::PrintfImpl
                    (&local_1c0,L"CreateImport: Failed to load Outer for resource \'%s\': %s");
          local_168.PackagePath = &this->PackagePath;
          local_168.Path = (wchar_t *)0x0;
          local_168.Object = (UObject *)0x0;
          UE::Core::Private::RecordAssetLog
                    ((FName *)&LogLinker.field_0x4,Verbose,&local_168,&local_1c0,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                     ,0x1748);
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        goto LAB_1420b060a;
      }
      FLinkerInstancingContext::RemapPackage(&this->InstancingContext,&local_230);
      if (local_230 == (FName)0x0) {
        this_00.ComparisonIndex.Value = 0;
        this_00.Number = 0;
        FVar26 = FVar23;
      }
      else {
        FVar26.ComparisonIndex.Value = 1;
        FVar26.Number = 0;
        pFVar19 = ::FName::ToString(&local_230,&local_110);
        if ((pFVar19->Data).ArrayNum == 0) {
          this_00 = (FName)CreatePackage(L"");
        }
        else {
          this_00 = (FName)CreatePackage((wchar_t *)(pFVar19->Data).AllocatorInstance.Data);
        }
      }
      if ((FVar26 != (FName)0x0) &&
         (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      bVar10 = IsPackageReferenceAllowed(this,(UPackage *)this_00);
      param_1 = local_res10;
      if (bVar10) {
LAB_1420b0058:
        param_1 = local_res10;
        if ((this_00 != (FName)0x0) &&
           ((this_01 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_00),
            this_01 == (FLinkerLoad *)0x0 ||
            (bVar10 = IsBlueprintFinalizationPending(this_01), param_1 = local_res10, !bVar10)))) {
          this_02[5] = this_00;
          piVar2 = (int *)((longlong)FVar5 + 4);
          *piVar2 = *piVar2 + 1;
          pFVar21 = FLinkerManager::Get();
          pFVar3 = &pFVar21->LoadersWithNewImportsCritical;
          local_1f8 = this;
          if (pFVar3 == (FWindowsRecursiveMutex *)0x0) goto LAB_1420b0634;
          EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
          TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::
          Emplace<FLinkerLoad_*_const_&>
                    (&pFVar21->LoadersWithNewImports,(FLinkerLoad **)local_200,(bool *)&local_1f8);
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
          param_1 = local_res10;
        }
      }
    }
    if (this_02[5] == (FName)0x0) {
      if (this_02[6] == (FName)0x0) {
        VerifyImport(this,param_1);
      }
      if (this_02[3].Number != 0xffffffff) {
        if ((this_02[6] == (FName)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Import.SourceLinker",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                ,0x176b,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          pUVar13 = (UObject *)(*pcVar8)();
          return pUVar13;
        }
        FVar22 = (FName)CreateExport((FLinkerLoad *)this_02[6],this_02[3].Number);
        this_02[5] = FVar22;
        piVar2 = (int *)((longlong)FVar5 + 4);
        *piVar2 = *piVar2 + 1;
        pFVar21 = FLinkerManager::Get();
        pFVar3 = &pFVar21->LoadersWithNewImportsCritical;
        local_1f0 = this;
        if (pFVar3 == (FWindowsRecursiveMutex *)0x0) {
LAB_1420b0634:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
        TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::
        Emplace<FLinkerLoad_*_const_&>
                  (&pFVar21->LoadersWithNewImports,(FLinkerLoad **)(local_200 + 4),
                   (bool *)&local_1f0);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
      }
      if (this_02[5] == (FName)0x0) {
        uVar11 = this_02[1].ComparisonIndex.Value;
        if (uVar11 == 0) {
          bVar9 = true;
          bVar10 = false;
          pFVar19 = UObjectBaseUtility::GetFullName
                              ((UObjectBaseUtility *)this->_padding_,&local_d0,(UObject *)0x0,None);
        }
        else {
          bVar9 = false;
          bVar10 = true;
          if ((int)uVar11 < 0) {
            FLinkerTables::GetImportFullName(local_1e8,&local_220,~uVar11);
          }
          else if ((int)uVar11 < 1) {
            local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_220.Data.ArrayNum = 0;
          }
          else {
            FLinker::GetExportFullName((FLinker *)this,&local_220,uVar11 - 1,(wchar_t *)0x0,false);
          }
          pFVar19 = &local_220;
        }
        pFVar6 = (pFVar19->Data).AllocatorInstance.Data;
        (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar19->Data).ArrayNum = 0;
        (pFVar19->Data).ArrayMax = 0;
        if ((bVar10) && (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
        if ((bVar9) && (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        }
        if (5 < (byte)LogLinker._0_1_) {
          ::FName::ToString(this_02,&local_c0);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
        }
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        goto LAB_1420b0606;
      }
    }
    if (*(int *)&(this->ImportsToVerifyOnCreate).Elements.field_0x8 !=
        *(int *)&(this->ImportsToVerifyOnCreate).Elements.field_0x34) {
      FVar25 = (this->ImportsToVerifyOnCreate).Hash.SecondaryData;
      if (FVar25 == (ForElementType<FSetElementId>)0x0) {
        FVar25 = (ForElementType<FSetElementId>)&(this->ImportsToVerifyOnCreate).Hash;
      }
      iVar12 = *(int *)((longlong)FVar25 +
                       (ulonglong)((this->ImportsToVerifyOnCreate).HashSize - 1U & local_res10) * 4)
      ;
      if (iVar12 != -1) {
        lVar7 = *(longlong *)&(this->ImportsToVerifyOnCreate).Elements;
        do {
          if (*(uint *)(lVar7 + (longlong)iVar12 * 0xc) == local_res10) {
            FVar22 = FLinkerInstancingContext::RemapPackage(&this->InstancingContext,&local_138);
            pUVar17 = FindObjectFast<UPackage>((UObject *)0x0,*(FName *)FVar22,None,RF_NoFlags);
            if (pUVar17 == (UPackage *)0x0) goto LAB_1420b03fa;
            FVar22 = (FName)FindObjectFast<UObject>
                                      ((UObject *)pUVar17,*(FName *)&this_02[2].Number,None,
                                       RF_NoFlags);
            if (FVar22 == (FName)0x0) {
LAB_1420b0374:
              if (FVar22 != (FName)0x0) {
                pUVar18 = UObjectRedirector::GetPrivateStaticClass();
                iVar12 = (int)pUVar18->_padding_;
                if ((iVar12 <= *(int *)(*(longlong *)((longlong)FVar22 + 0x10) + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)((longlong)FVar22 + 0x10) + 0x30) +
                     (longlong)iVar12 * 8) == &pUVar18->_padding_)) {
                  FVar22 = *(FName *)((longlong)FVar22 + 0x28);
                  if (FVar22 == (FName)0x0) {
LAB_1420b03cf:
                    FVar22 = FVar23;
                  }
                  else {
                    pUVar18 = Z_Construct_UClass_UClass_NoRegister();
                    iVar12 = (int)pUVar18->_padding_;
                    if ((*(int *)(*(longlong *)((longlong)FVar22 + 0x10) + 0x38) < iVar12) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)((longlong)FVar22 + 0x10) + 0x30) +
                         (longlong)iVar12 * 8) != &pUVar18->_padding_)) goto LAB_1420b03cf;
                  }
                  if (FVar22 != (FName)0x0) goto LAB_1420b03d7;
                }
              }
LAB_1420b03fa:
              if (2 < (byte)LogLinker._0_1_) {
                FVar23 = FLinkerTables::GetExportClassName
                                   ((FLinkerTables *)((longlong)this_02[6] + 8),(int)local_130);
                pFVar19 = ::FName::ToString((FName *)FVar23,local_60);
                if ((pFVar19->Data).ArrayNum == 0) {
                  local_res8 = (FScriptContainerElement *)0x15060d16c;
                }
                else {
                  local_res8 = (pFVar19->Data).AllocatorInstance.Data;
                }
                FVar23 = GetExportClassPackage((FLinkerLoad *)this_02[6],(int)local_128);
                pFVar19 = ::FName::ToString((FName *)FVar23,&local_70);
                if ((pFVar19->Data).ArrayNum == 0) {
                  local_res18 = (FScriptContainerElement *)0x15060d16c;
                }
                else {
                  local_res18 = (pFVar19->Data).AllocatorInstance.Data;
                }
                ::FName::ToString((FName *)&this_02[2].Number,&local_80);
                ::FName::ToString((FName *)&this_02[1].Number,&local_90);
                FPackagePath::GetPackageName
                          ((FPackagePath *)((longlong)this_02[6] + 0x3a0),&local_a0);
                ::FName::ToString(this_02,&local_b0);
                ::FString::PrintfImpl
                          (&local_1b0,
                           L"Resolved import with name \'%s\' from \'%s\' with a different class: import class \'%s.%s\', package class \'%s.%s\'. Resave to fix."
                          );
                local_150.PackagePath = &this->PackagePath;
                local_150.Path = (wchar_t *)0x0;
                local_150.Object = (UObject *)0x0;
                UE::Core::Private::RecordAssetLog
                          ((FName *)&LogLinker.field_0x4,Warning,&local_150,&local_1b0,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0x17ac);
                if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                }
                if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                }
                if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                }
                if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_90.Data.AllocatorInstance.Data);
                }
                if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_80.Data.AllocatorInstance.Data);
                }
                if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_70.Data.AllocatorInstance.Data);
                }
                if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              pUVar18 = Z_Construct_UClass_UClass_NoRegister();
              iVar12 = (int)pUVar18->_padding_;
              if ((*(int *)(*(longlong *)((longlong)FVar22 + 0x10) + 0x38) < iVar12) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)((longlong)FVar22 + 0x10) + 0x30) +
                   (longlong)iVar12 * 8) != &pUVar18->_padding_)) goto LAB_1420b0374;
LAB_1420b03d7:
              if ((*(int *)(*(longlong *)((longlong)this_02[5] + 0x10) + 0x38) <
                   *(int *)((longlong)FVar22 + 0x38)) ||
                 (*(undefined1 **)
                   (*(longlong *)(*(longlong *)((longlong)this_02[5] + 0x10) + 0x30) +
                   (longlong)*(int *)((longlong)FVar22 + 0x38) * 8) !=
                  (undefined1 *)((longlong)FVar22 + 0x30))) goto LAB_1420b03fa;
            }
            local_res20[0] = local_res10;
            if (*(int *)&(this->ImportsToVerifyOnCreate).Elements.field_0x8 !=
                *(int *)&(this->ImportsToVerifyOnCreate).Elements.field_0x34) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                        (&this->ImportsToVerifyOnCreate,local_res10,(int *)local_res20);
            }
            break;
          }
          iVar12 = *(int *)(lVar7 + 4 + (longlong)iVar12 * 0xc);
        } while (iVar12 != -1);
      }
    }
  }
LAB_1420b0606:
  FVar23 = this_02[5];
LAB_1420b060a:
  *(undefined8 *)((longlong)local_1e0 + 0x48) = local_1d8;
  *(undefined4 *)((longlong)local_1e0 + 0x40) = uVar4;
  return (UObject *)FVar23;
}

// CreateImportClassAndPackage @ 1420b0640

bool __thiscall
FLinkerLoad::CreateImportClassAndPackage
          (FLinkerLoad *this,FName param_1,FName param_2,FPackageIndex *param_3,
          FPackageIndex *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  FNameEntryId FVar10;
  int iVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  FName *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong local_80;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined8 local_40;
  
  uVar13 = 0;
  bVar8 = false;
  if (0 < (int)this->_padding_) {
    plVar1 = &this->_padding_;
    plVar2 = &this->_padding_;
    local_80 = 0;
    do {
      if (param_2 != (FName)0x0) {
        uVar14 = ~uVar13 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar13 < (int)*plVar2) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar4 = *(ulonglong *)(*plVar1 + 0x14 + local_80);
        FVar10 = FNameEntryId::FromValidEName((EName)local_58);
        if (uVar4 == *(uint *)CONCAT44(extraout_var,FVar10.Value)) {
          uVar9 = 0;
          if ((int)uVar13 < (int)*plVar2) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if (*(FName *)(local_80 + *plVar1) == param_2) {
            bVar8 = true;
            if (((int)uVar13 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ImportIndex >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                   ,0x67,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            param_4->Index = ~uVar13;
          }
        }
      }
      uVar9 = 0;
      if ((int)uVar13 < (int)*plVar2) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (*(FName *)(local_80 + *plVar1) == param_1) {
        uVar9 = 0;
        if ((int)uVar13 < (int)*plVar2) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar4 = *(ulonglong *)(local_80 + 0x14 + *plVar1);
        FVar10 = FNameEntryId::FromValidEName((EName)local_54);
        if (uVar4 == *(uint *)CONCAT44(extraout_var_00,FVar10.Value)) {
          if (((int)uVar13 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ImportIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x67,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          param_3->Index = ~uVar13;
          uVar9 = 0;
          if ((int)uVar13 < (int)this->_padding_) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          param_4->Index = *(int *)((longlong)(int)uVar13 * 0x38 + 8 + this->_padding_);
          return true;
        }
      }
      local_80 = local_80 + 0x38;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)this->_padding_);
    if (bVar8) goto LAB_1420b0a40;
  }
  iVar11 = (int)this->_padding_;
  if (iVar11 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,(ForAnyElementType *)&this->_padding_,
                        (int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar11 + 1;
  pFVar12 = (FName *)(this->_padding_ + (longlong)iVar11 * 0x38);
  DefaultConstructItems<FObjectImport,int>(pFVar12,1);
  FVar10 = FNameEntryId::FromValidEName((EName)local_50);
  *(ulonglong *)&pFVar12[2].Number = (ulonglong)*(uint *)CONCAT44(extraout_var_01,FVar10.Value);
  FLazyName::Resolve(&GLongCoreUObjectPackageName);
  *pFVar12 = param_2;
  *(undefined8 *)&pFVar12[1].Number = local_48;
  pFVar12[1].ComparisonIndex.Value = 0;
  pFVar12[5].ComparisonIndex = 0;
  pFVar12[5].Number = 0;
  pFVar12[6].ComparisonIndex = 0;
  pFVar12[6].Number = 0;
  pFVar12[3].Number = 0xffffffff;
  uVar13 = (int)this->_padding_ - 1;
  if (((int)uVar13 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImportIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x67,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  param_4->Index = ~uVar13;
LAB_1420b0a40:
  iVar11 = (int)this->_padding_;
  piVar3 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar11 == *piVar3) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,(ForAnyElementType *)&this->_padding_,piVar3);
    *(int *)&this->_padding_ = iVar11;
  }
  *(int *)&this->_padding_ = iVar11 + 1;
  pFVar12 = (FName *)((longlong)iVar11 * 0x38 + this->_padding_);
  DefaultConstructItems<FObjectImport,int>(pFVar12,1);
  FVar10 = FNameEntryId::FromValidEName((EName)local_4c);
  *(ulonglong *)&pFVar12[2].Number = (ulonglong)*(uint *)CONCAT44(extraout_var_02,FVar10.Value);
  FLazyName::Resolve(&GLongCoreUObjectPackageName);
  *(undefined8 *)&pFVar12[1].Number = local_40;
  *pFVar12 = param_1;
  pFVar12[1].ComparisonIndex.Value = param_4->Index;
  pFVar12[5].ComparisonIndex = 0;
  pFVar12[5].Number = 0;
  pFVar12[6].ComparisonIndex = 0;
  pFVar12[6].Number = 0;
  pFVar12[3].Number = 0xffffffff;
  uVar13 = (int)this->_padding_ - 1;
  if (((int)uVar13 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImportIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x67,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  param_3->Index = ~uVar13;
  return true;
}

// CreateLinker @ 1420b0b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FLinkerLoad * __cdecl
FLinkerLoad::CreateLinker
          (FUObjectSerializeContext *param_1,UPackage *param_2,FPackagePath *param_3,uint param_4,
          FArchive *param_5,FLinkerInstancingContext *param_6)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  ELinkerStatus EVar5;
  uint uVar6;
  FLinkerLoad *pFVar7;
  undefined ***pppuVar8;
  uint uVar9;
  longlong lVar10;
  FLinkerLoad *pFVar11;
  undefined1 auStackY_d8 [32];
  FLLMScope local_a8;
  FName local_a4;
  FMemScope local_98;
  FDestructionSentinel local_90;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if ((param_1 == (FUObjectSerializeContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoadContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0x211,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FLinkerLoad *)(*pcVar1)();
    return pFVar7;
  }
  FLLMScope::FLLMScope
            (&local_a8,LLMTagDeclaration_UObject_Linker.UniqueName,false,None,Default,true);
  local_a4 = LLMTagDeclaration_UObject_Linker.UniqueName;
  FMemScope::FMemScope(&local_98,&local_a4,true);
  local_68 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_60 = `FLinkerLoad::CreateLinker'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  pFVar7 = CreateLinkerAsync(param_1,param_2,param_3,param_4 & 0xffefffff,param_6,
                             (TFunction<void___cdecl(void)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar8 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar8 = local_50;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  uVar9 = pFVar7->LoadFlags;
  pFVar7->LoadFlags = uVar9 | param_4 & 0x100000;
  if (param_5 != (FArchive *)0x0) {
    if ((pFVar7->Loader != (FArchive *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Linker->Loader",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0x233,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FLinkerLoad *)(*pcVar1)();
      return pFVar7;
    }
    SetLoader(pFVar7,param_5,true);
    ResetStatusInfo(pFVar7);
  }
  pFVar11 = param_1->SerializedPackageLinker;
  param_1->SerializedPackageLinker = pFVar7;
  EVar5 = Tick(pFVar7,0.0,false,false,
               (TMap<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
                *)0x0);
  param_1->SerializedPackageLinker = pFVar11;
  pFVar7->LoadFlags = uVar9;
  pFVar11 = (FLinkerLoad *)0x0;
  if (EVar5 != LINKER_Failed) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreUObjectDelegates::PackageCreatedForLoad,(FWriteAccessScope *)&local_90);
    bVar2 = false;
    FCoreUObjectDelegates::PackageCreatedForLoad._28_4_ =
         FCoreUObjectDelegates::PackageCreatedForLoad._28_4_ + 1;
    uVar9 = FCoreUObjectDelegates::PackageCreatedForLoad._16_4_ - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (int)FCoreUObjectDelegates::PackageCreatedForLoad._16_4_) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar7 = (FLinkerLoad *)(*pcVar1)();
          return pFVar7;
        }
        if (((*(int *)(lVar10 + 8 + FCoreUObjectDelegates::PackageCreatedForLoad._8_8_) == 0) ||
            (*(longlong **)(lVar10 + FCoreUObjectDelegates::PackageCreatedForLoad._8_8_) ==
             (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)
                                   (lVar10 + FCoreUObjectDelegates::PackageCreatedForLoad._8_8_) +
                                0x68))(), cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    FCoreUObjectDelegates::PackageCreatedForLoad._28_4_ =
         FCoreUObjectDelegates::PackageCreatedForLoad._28_4_ + -1;
    if (bVar2) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FCoreUObjectDelegates::PackageCreatedForLoad,false);
    }
    pFVar11 = pFVar7;
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
  }
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope(&local_a8);
  return pFVar11;
}

// CreateLinkerAsync @ 1420b0e20

/* WARNING: Enum "Type": Some values do not have unique names */

FLinkerLoad * __cdecl
FLinkerLoad::CreateLinkerAsync
          (FUObjectSerializeContext *param_1,UPackage *param_2,FPackagePath *param_3,uint param_4,
          FLinkerInstancingContext *param_5,TFunction<void___cdecl(void)> *param_6)

{
  FAdditionalInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  FLinkerLoad *pFVar4;
  FLinkerLoad *this;
  FLinkerInstancingContext *pFVar5;
  FLinkerLoad *this_00;
  FLinkerLoad *pFVar6;
  FString local_c8;
  FLinkerInstancingContext local_b8;
  FString local_a8;
  FString local_98;
  FLinkerInstancingContext local_88;
  FString local_78;
  FLinkerInstancingContext local_68;
  FAssetLog local_58;
  FAssetLog local_40;
  
  pFVar4 = (FLinkerLoad *)0x0;
  if ((param_2 == (UPackage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0x359,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLinkerLoad *)(*pcVar2)();
    return pFVar4;
  }
  this_00 = pFVar4;
  if (param_2 != (UPackage *)0x0) {
    pFVar1 = (param_2->AdditionalInfo).Ptr;
    if (pFVar1 == (FAdditionalInfo *)0x0) {
      this_00 = (FLinkerLoad *)0x0;
    }
    else {
      this_00 = pFVar1->LinkerLoad;
    }
  }
  if (this_00 == (FLinkerLoad *)0x0) {
    if (GEventDrivenLoaderEnabled != false) {
      param_4 = param_4 | 1;
    }
    this = ::operator_new(0x4f0);
    this_00 = pFVar4;
    pFVar6 = pFVar4;
    if (this != (FLinkerLoad *)0x0) {
      if (param_5 == (FLinkerInstancingContext *)0x0) {
        pFVar5 = FLinkerInstancingContext::FLinkerInstancingContext(&local_68);
        pFVar6 = (FLinkerLoad *)&DAT_00000002;
        local_88.SharedData.Object = (pFVar5->SharedData).Object;
      }
      else {
        local_88.SharedData.Object = (param_5->SharedData).Object;
        local_b8.SharedData.SharedReferenceCount.ReferenceController =
             (param_5->SharedData).SharedReferenceCount.ReferenceController;
        if (local_b8.SharedData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_b8.SharedData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar5 = &local_b8;
        pFVar6 = (FLinkerLoad *)&DAT_00000001;
        local_b8.SharedData.Object = local_88.SharedData.Object;
      }
      local_88.SharedData.SharedReferenceCount.ReferenceController =
           (pFVar5->SharedData).SharedReferenceCount.ReferenceController;
      if (local_88.SharedData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      this_00 = FLinkerLoad(this,param_2,param_3,param_4,&local_88);
    }
    if (((ulonglong)pFVar6 & 2) != 0) {
      pFVar6 = (FLinkerLoad *)(ulonglong)((uint)pFVar6 & 0xfffffffd);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedData.SharedReferenceCount.ReferenceController);
    }
    if (((ulonglong)pFVar6 & 1) != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedData.SharedReferenceCount.ReferenceController);
    }
    UPackage::SetLinker(param_2,this_00);
    if ((GEventDrivenLoaderEnabled != false) && (this_00 != (FLinkerLoad *)0x0)) {
      CreateLoader(this_00,param_6);
    }
  }
  else if (GEventDrivenLoaderEnabled == false) {
    if (4 < (byte)LogStreaming._0_1_) {
      ::FString::PrintfImpl(&local_98,L"FLinkerLoad::CreateLinkerAsync: Found existing linker");
      local_40.Path = (wchar_t *)0x0;
      local_40.PackagePath = (FPackagePath *)0x0;
      local_40.Object = (UObject *)param_2;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogStreaming.field_0x4,Log,&local_40,&local_98,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                 ,0x365);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    ::FString::PrintfImpl(&local_a8,L"FLinkerLoad::CreateLinkerAsync: Found existing linker");
    local_58.Path = (wchar_t *)0x0;
    local_58.PackagePath = (FPackagePath *)0x0;
    local_58.Object = (UObject *)param_2;
    UE::Core::Private::RecordAssetLog
              ((FName *)&LogStreaming.field_0x4,Fatal,&local_58,&local_a8,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x361);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (!bVar3) {
      FWindowsPlatformMisc::PromptForRemoteDebugging(false);
    }
    bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FLinkerLoad *)(*pcVar2)();
      return pFVar4;
    }
    ::FString::PrintfImpl(&local_c8,L"FLinkerLoad::CreateLinkerAsync: Found existing linker");
    FAssetMsg::FormatPathForAssetLog(&local_78,(UObject *)param_2);
    ::FDebug::AssertFailed
              ("",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x361,L"%s: %s");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = (param_2->AdditionalInfo).Ptr;
  if (pFVar1 != (FAdditionalInfo *)0x0) {
    pFVar4 = pFVar1->LinkerLoad;
  }
  if ((pFVar4 != this_00) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent->GetLinker() == Linker",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0x378,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FLinkerLoad *)(*pcVar2)();
    return pFVar4;
  }
  return this_00;
}

// CreateLoader @ 1420b1150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall
FLinkerLoad::CreateLoader(FLinkerLoad *this,TFunction<void___cdecl(void)> *param_1)

{
  ELoadError EVar1;
  EPackageFormat EVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  ELinkerStatus EVar8;
  FAsyncArchive *this_00;
  FAsyncArchive *pFVar9;
  IPackageResourceManager *this_01;
  FOpenPackageResult *pFVar10;
  FString *pFVar11;
  ulong64 uVar12;
  void *pvVar13;
  FBufferReaderBase *pFVar14;
  longlong lVar15;
  undefined ***pppuVar16;
  longlong *plVar17;
  FAsyncArchive *pFVar18;
  FAsyncArchive *pFVar19;
  TFunction<void___cdecl(void)> *pTVar20;
  wchar_t *pwVar21;
  undefined1 auStackY_198 [32];
  bool local_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FAssetLog local_130;
  FAssetLog local_118;
  FAssetLog local_100;
  FOpenPackageResult local_e8;
  FString local_d8;
  FString local_c8;
  FOpenPackageResult local_b8;
  code *local_a8 [2];
  undefined **local_98;
  code *local_90;
  undefined ***local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar18 = (FAsyncArchive *)0x0;
  if ((!bActiveRedirectsMapInitialized) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bActiveRedirectsMapInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0x523,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar8 = (*pcVar3)();
    return EVar8;
  }
  if (this->Loader == (FArchive *)0x0) {
    if (GSkipAsyncLoaderForCookedData == 0) {
      local_168 = true;
      this_00 = ::operator_new(0x1f0);
      pFVar9 = pFVar18;
      pFVar19 = pFVar18;
      if (this_00 != (FAsyncArchive *)0x0) {
        if (GEventDrivenLoaderEnabled == false) {
          local_80 = (undefined ***)0x0;
          local_98 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
          pTVar20 = (TFunction<void___cdecl(void)> *)local_a8;
          pFVar19 = (FAsyncArchive *)&DAT_00000002;
          local_90 = `FLinkerLoad::CreateLoader'::__l15::<lambda_1>::<lambda_invoker_cdecl>;
          local_a8[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>
                        ::Call;
        }
        else {
          local_78._0_8_ = *(undefined8 *)param_1;
          local_78._40_8_ = *(undefined8 *)&param_1->field_0x28;
          *(undefined8 *)&param_1->field_0x28 = 0;
          local_78._32_8_ = *(undefined8 *)&param_1->field_0x20;
          local_78._16_8_ = *(undefined8 *)&param_1->field_0x10;
          local_78._24_8_ = *(undefined8 *)&param_1->field_0x18;
          if (local_78._0_8_ != 0) {
            *(undefined8 *)param_1 = 0;
          }
          pTVar20 = (TFunction<void___cdecl(void)> *)local_78;
          pFVar19 = (FAsyncArchive *)&DAT_00000001;
        }
        pFVar9 = FAsyncArchive::FAsyncArchive(this_00,&this->PackagePath,this,pTVar20);
      }
      if ((((ulonglong)pFVar19 & 2) != 0) &&
         (pFVar19 = (FAsyncArchive *)(ulonglong)((uint)pFVar19 & 0xfffffffd),
         local_a8[0] != (code *)0x0)) {
        pppuVar16 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar16 = local_80;
        }
        (*(code *)(*pppuVar16)[2])();
      }
      if ((((ulonglong)pFVar19 & 1) != 0) && (local_78._0_8_ != 0)) {
        plVar17 = (longlong *)(local_78 + 0x10);
        if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_78._40_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      this->Loader = (FArchive *)pFVar9;
      if (((this->LoadFlags & 0x800000) == 0) && (pFVar9->bNeedsEngineVersionChecks != false)) {
        bVar5 = 0x80;
      }
      else {
        bVar5 = 0;
      }
      this->bLoaderNeedsEngineVersionChecks = false;
      this->field_0x469 = this->field_0x469 | bVar5;
      if ((pFVar9->field_0x29 & 2) != 0) {
        EVar1 = pFVar9->LoadError;
        DestroyLoader(this);
        local_168 = false;
        if (EVar1 != UnsupportedFormat) {
          if ((byte)LogLinker._0_1_ < 3) {
            return LINKER_Failed;
          }
          ::FString::PrintfImpl(&local_160,L"Error opening file.");
          local_130.PackagePath = &this->PackagePath;
          local_130.Path = (wchar_t *)0x0;
          local_130.Object = (UObject *)0x0;
          UE::Core::Private::RecordAssetLog
                    ((FName *)&LogLinker.field_0x4,Warning,&local_130,&local_160,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                     ,0x544);
          goto LAB_1420b17c3;
        }
      }
    }
    else {
      local_168 = false;
    }
    bVar4 = false;
    if (this->Loader == (FArchive *)0x0) {
      this_01 = IPackageResourceManager::Get();
      pFVar10 = IPackageResourceManager::OpenReadPackage
                          (this_01,&local_e8,&this->PackagePath,(FPackagePath *)0x0);
      if (&local_b8 != pFVar10) {
        pFVar18 = (FAsyncArchive *)(pFVar10->Archive).Ptr;
        (pFVar10->Archive).Ptr = (FArchive *)0x0;
      }
      EVar2 = pFVar10->Format;
      bVar6 = pFVar10->bNeedsEngineVersionChecks;
      if (local_e8.Archive.Ptr != (FArchive *)0x0) {
        (*(code *)**(undefined8 **)local_e8.Archive.Ptr)(local_e8.Archive.Ptr,1);
      }
      this->Loader = (FArchive *)pFVar18;
      if (((this->LoadFlags & 0x800000) == 0) && (bVar6 != false)) {
        bVar5 = 0x80;
      }
      else {
        bVar5 = 0;
      }
      this->bLoaderNeedsEngineVersionChecks = false;
      this->field_0x469 = this->field_0x469 | bVar5;
      if (pFVar18 != (FAsyncArchive *)0x0) {
        if ((pFVar18->field_0x29 & 2) == 0) {
          if ((EVar2 != Binary) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("OpenResult.Format == EPackageFormat::Binary",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                 ,0x57c,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            EVar8 = (*pcVar3)();
            return EVar8;
          }
          goto LAB_1420b1445;
        }
        DestroyLoader(this);
      }
      if ((byte)LogLinker._0_1_ < 3) {
        return LINKER_Failed;
      }
      ::FString::PrintfImpl(&local_150,L"Error opening file.");
      local_118.Path = (wchar_t *)0x0;
      local_118.Object = (UObject *)0x0;
      local_118.PackagePath = &this->PackagePath;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogLinker.field_0x4,Warning,&local_118,&local_150,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                 ,0x55e);
      local_160.Data.AllocatorInstance.Data = local_150.Data.AllocatorInstance.Data;
      goto LAB_1420b17c3;
    }
LAB_1420b1445:
    this->_padding_ = *(longlong *)&this->Loader->field_0x8;
    pFVar11 = FPackagePath::GetLocalFullPath(&this->PackagePath,&local_d8);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    bVar6 = FSHA1::GetFileSHAHash(pwVar21,(uchar *)0x0,true);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (((this->LoadFlags & 0x8000) != 0) || (bVar6)) {
      uVar12 = (**(code **)(*(longlong *)this->Loader + 0x30))();
      pvVar13 = FMemory::Malloc(uVar12,0);
      (**(code **)(*(longlong *)this->Loader + 0x188))(this->Loader,pvVar13,uVar12);
      DestroyLoader(this);
      if (bVar6) {
        pFVar14 = ::operator_new(200);
        if (pFVar14 == (FBufferReaderBase *)0x0) {
          pFVar14 = (FBufferReaderBase *)0x0;
        }
        else {
          bVar4 = true;
          pFVar11 = FPackagePath::GetLocalFullPath(&this->PackagePath,&local_c8);
          if ((pFVar11->Data).ArrayNum == 0) {
            pwVar21 = L"";
          }
          else {
            pwVar21 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
          }
          FBufferReaderBase::FBufferReaderBase(pFVar14,pvVar13,uVar12,true,true);
          pFVar14->_padding_ = (longlong)&___7FBufferReaderWithSHA__6B_;
          ::FString::FString((FString *)(pFVar14 + 1),pwVar21);
          *(undefined1 *)&pFVar14[1]._padding_ = 0;
        }
        this->Loader = (FArchive *)pFVar14;
        if ((bVar4) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar14 = ::operator_new(0xb0);
        if (pFVar14 == (FBufferReaderBase *)0x0) {
          pFVar14 = (FBufferReaderBase *)0x0;
        }
        else {
          FBufferReaderBase::FBufferReaderBase(pFVar14,pvVar13,uVar12,true,true);
          pFVar14->_padding_ = (longlong)&___7FBufferReader__6B_;
        }
        this->Loader = (FArchive *)pFVar14;
      }
      local_168 = false;
    }
    this->bIsAsyncLoader = local_168;
    SetLoader(this,this->Loader,this->bLoaderNeedsEngineVersionChecks);
    if ((this->Loader == (FArchive *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Loader",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0x5a0,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
    if (((this->Loader->field_0x29 & 2) != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Loader->IsError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0x5a1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
    ResetStatusInfo(this);
LAB_1420b16eb:
    if (GEventDrivenLoaderEnabled != false) {
      return LINKER_TimedOut;
    }
  }
  else if (GEventDrivenLoaderEnabled != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x5ad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar8 = (*pcVar3)();
      return EVar8;
    }
    goto LAB_1420b16eb;
  }
  if (!this->bHasSerializedPackageFileSummary) {
    if (this->bIsAsyncLoader == false) {
      lVar15 = (**(code **)(*(longlong *)this->Loader + 0x30))();
      if (lVar15 < 1) {
        DestroyLoader(this);
        if ((byte)LogLinker._0_1_ < 3) {
          return LINKER_Failed;
        }
        ::FString::PrintfImpl(&local_140,L"Error opening file.");
        local_100.PackagePath = &this->PackagePath;
        local_100.Path = (wchar_t *)0x0;
        local_100.Object = (UObject *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogLinker.field_0x4,Warning,&local_100,&local_140,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x5c2);
        local_160.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
LAB_1420b17c3:
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        return LINKER_Failed;
      }
      if (MinimumReadSize < lVar15) {
        lVar15 = MinimumReadSize;
      }
      if ((lVar15 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrecacheSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                             ,0x5cc,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar8 = (*pcVar3)();
        return EVar8;
      }
      cVar7 = (**(code **)(*(longlong *)this->Loader + 0x1f0))(this->Loader,0,lVar15);
    }
    else {
      cVar7 = FAsyncArchive::ReadyToStartReadingHeader
                        ((FAsyncArchive *)this->Loader,this->bUseTimeLimit,this->bUseFullTimeLimit,
                         this->TickStartTime,(double)this->TimeLimit);
    }
    if (cVar7 == '\0') {
      return LINKER_TimedOut;
    }
  }
  bVar4 = IsTimeLimitExceeded(this,L"creating loader",1);
  if (bVar4) {
    return LINKER_TimedOut;
  }
  return LINKER_Loaded;
}

// DestroyLoader @ 1420b2600

void __thiscall FLinkerLoad::DestroyLoader(FLinkerLoad *this)

{
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bIsDestroyingLoader != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsDestroyingLoader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x1835,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->bIsDestroyingLoader = true;
  pFVar1 = this->Loader;
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    this->Loader = (FArchive *)0x0;
  }
  this->bIsDestroyingLoader = false;
  return;
}

// Detach @ 1420b2690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLinkerLoad::Detach(FLinkerLoad *this)

{
  FWindowsRecursiveMutex *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FTlsAutoCleanup FVar5;
  longlong *plVar6;
  void *pvVar7;
  FBinaryArchiveFormatter *this_00;
  FArchive *pFVar8;
  code *pcVar9;
  bool bVar10;
  FLinkerManager *pFVar11;
  uint *puVar12;
  FTlsAutoCleanup *pFVar13;
  FLinkerLoad *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FTlsAutoCleanup local_res20;
  FLinkerLoad *local_58;
  code *local_50;
  undefined1 *local_48;
  
  DetachExports(this);
  pFVar11 = FLinkerManager::Get();
  pFVar1 = &pFVar11->ObjectLoadersCritical;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Remove
              (&pFVar11->ObjectLoaders,this);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar1 = &pFVar11->LoadersWithNewImportsCritical;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Remove
                (&pFVar11->LoadersWithNewImports,this);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      puVar12 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
      local_48 = local_res18;
      local_50 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar13 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_50,puVar12);
      FVar5 = pFVar13[0x2f];
      local_res20 = FVar5;
      local_58 = this;
      if (((*(FLinkerLoad ***)((longlong)FVar5 + 0x20) <= &local_58) &&
          (&local_58 < *(FLinkerLoad ***)((longlong)FVar5 + 0x20) + *(int *)((longlong)FVar5 + 0x2c)
          )) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar4 = *(int *)((longlong)FVar5 + 0x28);
      if (iVar4 != 0) {
        plVar6 = *(longlong **)((longlong)FVar5 + 0x20);
        iVar19 = 0;
        bVar10 = (FLinkerLoad *)*plVar6 != local_58;
        lVar15 = 0;
        pFVar14 = local_58;
        iVar17 = 0;
        do {
          iVar18 = iVar17;
          do {
            lVar15 = lVar15 + 1;
            iVar18 = iVar18 + 1;
            if (iVar4 <= lVar15) break;
          } while (bVar10 == ((FLinkerLoad *)plVar6[lVar15] != pFVar14));
          if (bVar10 != false) {
            if (iVar19 != iVar17) {
              memmove(plVar6 + iVar19,plVar6 + iVar17,(longlong)(iVar18 - iVar17) << 3);
              pFVar14 = local_58;
            }
            iVar19 = iVar19 + (iVar18 - iVar17);
          }
          bVar10 = (bool)(bVar10 ^ 1);
          iVar17 = iVar18;
        } while (lVar15 < iVar4);
        *(int *)((longlong)local_res20 + 0x28) = iVar19;
      }
      if (this->StructuredArchive != (FStructuredArchive *)0x0) {
        ::operator_delete(this->StructuredArchive,8);
      }
      this->StructuredArchive = (FStructuredArchive *)0x0;
      pFVar16 = (this->ExportReaders).AllocatorInstance.Data;
      iVar4 = (this->ExportReaders).ArrayNum;
      pFVar3 = pFVar16 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this->ExportReaders).ArrayNum != iVar4) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FStructuredArchiveChildReader_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar16 == pFVar3) break;
        pvVar7 = *(void **)pFVar16;
        if (pvVar7 != (void *)0x0) {
          if (*(void **)((longlong)pvVar7 + 8) != (void *)0x0) {
            ::operator_delete(*(void **)((longlong)pvVar7 + 8),8);
          }
          ::operator_delete(pvVar7,0x20);
        }
        pFVar16 = pFVar16 + 8;
      }
      piVar2 = &(this->ExportReaders).ArrayMax;
      (this->ExportReaders).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->ExportReaders).AllocatorInstance,0,piVar2);
      }
      this_00 = this->StructuredArchiveFormatter;
      if (this_00 != (FBinaryArchiveFormatter *)0x0) {
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(this_00);
        ::operator_delete(this_00,0x10);
      }
      this->StructuredArchiveFormatter = (FBinaryArchiveFormatter *)0x0;
      if ((this->bIsDestroyingLoader != false) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!bIsDestroyingLoader",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                              ,0x1835,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this->bIsDestroyingLoader = true;
      pFVar8 = this->Loader;
      if (pFVar8 != (FArchive *)0x0) {
        (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
        this->Loader = (FArchive *)0x0;
      }
      this->bIsDestroyingLoader = false;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)&this->_padding_,0,piVar2);
      }
      DestructItems<FGatherableTextData,int>
                ((FGatherableTextData *)this->_padding_,(int)this->_padding_);
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,0,(ForAnyElementType *)&this->_padding_,0,piVar2);
      }
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,(ForAnyElementType *)&this->_padding_,0,piVar2);
      }
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,0,(ForAnyElementType *)&this->_padding_,0,piVar2);
      }
      ResetDeferredLoadingState(this);
      if ((UPackage *)this->_padding_ != (UPackage *)0x0) {
        UPackage::SetLinker((UPackage *)this->_padding_,(FLinkerLoad *)0x0);
        lVar15 = *(longlong *)(this->_padding_ + 0x48);
        if (lVar15 != 0) {
          FCustomVersionContainer::Empty((FCustomVersionContainer *)(lVar15 + 0x10));
        }
        this->_padding_ = 0;
      }
      if ((1 < (byte)LogStreaming._0_1_) && (this->AsyncRoot != (void *)0x0)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DetachExport @ 1420b2b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLinkerLoad::DetachExport(FLinkerLoad *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FName FVar6;
  FLinkerLoad *pFVar7;
  FString *pFVar8;
  FName *this_00;
  FName local_res8;
  undefined4 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FAssetLog local_1b8;
  FAssetLog local_1a0;
  FAssetLog local_188;
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  bVar3 = false;
  local_res10 = 0;
  uVar4 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (FName *)((longlong)param_1 * 0x68 + this->_padding_);
  if ((this_00[8] == (FName)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Export.Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0x180c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = UObjectBase::IsValidLowLevel((UObjectBase *)this_00[8]);
  if (!bVar2) {
    ::FName::ToString(this_00,&local_140);
    FVar6 = FLinkerTables::GetExportClassName((FLinkerTables *)&this->_padding_,(int)local_res18);
    ::FName::ToString((FName *)FVar6,&local_150);
    ::FString::PrintfImpl(&local_1e8,L"Linker object %s %s is invalid");
    local_1b8.Path = (wchar_t *)0x0;
    local_1b8.Object = (UObject *)0x0;
    local_1b8.PackagePath = &this->PackagePath;
    UE::Core::Private::RecordAssetLog
              ((FName *)&LogLinker.field_0x4,Fatal,&local_1b8,&local_1e8,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x180f);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (!bVar2) {
      FWindowsPlatformMisc::PromptForRemoteDebugging(false);
    }
    bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ::FName::ToString(this_00,&local_110);
    FVar6 = FLinkerTables::GetExportClassName((FLinkerTables *)&this->_padding_,(int)local_res20);
    ::FName::ToString((FName *)FVar6,&local_120);
    ::FString::PrintfImpl(&local_218,L"Linker object %s %s is invalid");
    FAssetMsg::FormatPathForAssetLog(&local_130,&this->PackagePath);
    ::FDebug::AssertFailed
              ("",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x180f,L"%s: %s");
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_00[8]);
  if (pFVar7 != this) {
    FVar6 = this_00[8];
    if (4 < (byte)LogLinker._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)FVar6,&local_100,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogLinker._0_1_) {
        pFVar7 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)FVar6);
        if (pFVar7 != (FLinkerLoad *)0x0) {
          pFVar7 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)FVar6);
          pFVar8 = UObjectBaseUtility::GetFullName
                             ((UObjectBaseUtility *)pFVar7->_padding_,&local_f0,(UObject *)0x0,None)
          ;
          if ((pFVar8->Data).ArrayNum == 0) {
            bVar3 = true;
          }
          else {
            bVar3 = true;
          }
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
        if ((bVar3) && (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogLinker._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this->_padding_,&local_e0,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    ::FName::ToString(this_00,&local_c0);
    FVar6 = FLinkerTables::GetExportClassName((FLinkerTables *)&this->_padding_,(int)local_170);
    ::FName::ToString((FName *)FVar6,&local_d0);
    ::FString::PrintfImpl(&local_1d8,L"Linker object %s %s mislinked!");
    local_1a0.Path = (wchar_t *)0x0;
    local_1a0.Object = (UObject *)0x0;
    local_1a0.PackagePath = &this->PackagePath;
    UE::Core::Private::RecordAssetLog
              ((FName *)&LogLinker.field_0x4,Fatal,&local_1a0,&local_1d8,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x181b);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (!bVar3) {
      FWindowsPlatformMisc::PromptForRemoteDebugging(false);
    }
    bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ::FName::ToString(this_00,&local_90);
    FVar6 = FLinkerTables::GetExportClassName((FLinkerTables *)&this->_padding_,(int)local_168);
    ::FName::ToString((FName *)FVar6,&local_a0);
    ::FString::PrintfImpl(&local_208,L"Linker object %s %s mislinked!");
    FAssetMsg::FormatPathForAssetLog(&local_b0,&this->PackagePath);
    ::FDebug::AssertFailed
              ("",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x181b,L"%s: %s");
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  iVar5 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)this_00[8]);
  if (iVar5 == -1) {
    if (2 < (byte)LogLinker._0_1_) {
      ::FName::ToString(this_00,&local_70);
      FVar6 = FLinkerTables::GetExportClassName((FLinkerTables *)&this->_padding_,(int)local_160);
      ::FName::ToString((FName *)FVar6,&local_80);
      ::FString::PrintfImpl(&local_1c8,L"Linker object %s %s was already detached.");
      local_188.Path = (wchar_t *)0x0;
      local_188.PackagePath = &this->PackagePath;
      local_188.Object = (UObject *)0x0;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogLinker.field_0x4,Warning,&local_188,&local_1c8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                 ,0x1821);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar5 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)this_00[8]);
    if (iVar5 != param_1) {
      UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)this_00[8]);
      local_res8 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res8,&local_1f8);
      FVar6 = FLinkerTables::GetExportClassName((FLinkerTables *)&this->_padding_,(int)local_158);
      ::FName::ToString((FName *)FVar6,local_60);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Export.Object->GetLinkerIndex() == i",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0x1825,
                         L"Mismatched linker index in FLinkerLoad::DetachExport for %s in %s. Linker index was supposed to be %d, was %d"
                        );
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  UObject::SetLinker((UObject *)this_00[8],(FLinkerLoad *)0x0,-1,true,false);
  return;
}

// DetachExports @ 1420b32a0

void __thiscall FLinkerLoad::DetachExports(FLinkerLoad *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (int)this->_padding_) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (int)this->_padding_) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(longlong *)(lVar5 + 0x40 + this->_padding_) != 0) {
        DetachExport(this,uVar4);
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x68;
    } while ((int)uVar4 < (int)this->_padding_);
  }
  return;
}

// DetachLoader @ 1420b3340

void __thiscall FLinkerLoad::DetachLoader(FLinkerLoad *this)

{
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bIsDestroyingLoader != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsDestroyingLoader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x1835,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->bIsDestroyingLoader = true;
  pFVar1 = this->Loader;
  if (pFVar1 != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    this->Loader = (FArchive *)0x0;
  }
  this->bIsDestroyingLoader = false;
  return;
}

// FinalizeCreation @ 1420b4f90

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall
FLinkerLoad::FinalizeCreation
          (FLinkerLoad *this,
          TMap<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ELinkerStatus EVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FinalizeCreation(TMap<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>_*)_::_2_::FStat_STAT_LinkerLoad_FinalizeCreation>
  FVar9;
  FLinkerManager *pFVar10;
  FObjectExport *pFVar11;
  FNameEntryId FVar12;
  FPackageIndex FVar13;
  uint uVar14;
  FName FVar15;
  FColor_u_0 local_res8 [4];
  uint local_res18;
  uint uStackX_1c;
  FLinkerLoad *local_res20;
  FName local_98;
  FName local_90;
  TPairInitializer<TTuple<FName,FPackageIndex>_&&,FPackageIndex_const_&> local_80;
  FName local_70;
  longlong local_68;
  int local_60;
  longlong *local_58;
  uint *local_50;
  FName local_48;
  FName local_40;
  
  uVar14 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_LinkerLoad_FinalizeCreation ==
          (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FinalizeCreation(TMap<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>_*)_::_2_::FStat_STAT_LinkerLoad_FinalizeCreation>
           )0x0) {
        pFVar8 = ::FName::FName(&local_48,"STAT_LinkerLoad_FinalizeCreation");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_FinalizeCreation,*pFVar8,
                   L"FLinkerLoad::FinalizeCreation","STATGROUP_LinkerLoad","STATCAT_Advanced",
                   L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_LinkerLoad_FinalizeCreation;
  if (StatPtr_STAT_LinkerLoad_FinalizeCreation ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FinalizeCreation(TMap<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>_*)_::_2_::FStat_STAT_LinkerLoad_FinalizeCreation>
       )0x0) {
    pFVar8 = ::FName::FName(&local_40,"STAT_LinkerLoad_FinalizeCreation");
    FVar9 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FinalizeCreation(TMap<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>_*)_::_2_::FStat_STAT_LinkerLoad_FinalizeCreation>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_FinalizeCreation,
                         *pFVar8,L"FLinkerLoad::FinalizeCreation","STATGROUP_LinkerLoad",
                         "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar15 = *(FName *)FVar9;
  bVar2 = false;
  bVar4 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar12 = FVar15.ComparisonIndex.Value;
  uVar7 = FVar15.Number;
  if ((FVar12.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar12.Value;
        local_98.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0xba0);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar12.Value;
      uStackX_1c = uVar7;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar3 = true;
      goto LAB_1420b5106;
    }
  }
  bVar3 = false;
  FVar15 = local_90;
LAB_1420b5106:
  if (!this->bHasFinishedInitialization) {
    pFVar10 = FLinkerManager::Get();
    lpCriticalSection = &pFVar10->ObjectLoadersCritical;
    local_80.Value = (FPackageIndex *)this;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::
    Emplace<FLinkerLoad_*_const_&>(&pFVar10->ObjectLoaders,&local_res20,(bool *)&local_80.Value);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((((GEventDrivenLoaderEnabled != false) && (this->AsyncRoot != (void *)0x0)) &&
        (param_1 !=
         (TMap<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
          *)0x0)) && (FVar13.Index = uVar14, 0 < (int)this->_padding_)) {
      do {
        if (FVar13.Index < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ExportIndex >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                             ,0x6d,L"");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            EVar6 = (*pcVar1)();
            return EVar6;
          }
        }
        FVar13.Index = FVar13.Index + 1;
        local_res18 = FVar13.Index;
        pFVar11 = FLinkerTables::Exp((FLinkerTables *)&this->_padding_,FVar13);
        local_68 = pFVar11->_padding_;
        local_60 = pFVar11->_padding_;
        local_58 = &local_68;
        local_50 = &local_res18;
        TSet<TTuple<TTuple<FName,FPackageIndex>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TTuple<FName,FPackageIndex>_&&,FPackageIndex_const_&>_>
                  ((TSet<TTuple<TTuple<FName,FPackageIndex>,FPackageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>,FDefaultSetAllocator>
                    *)param_1,&local_80,(bool *)&local_58);
      } while (FVar13.Index < (int)this->_padding_);
    }
    if (this->bIsAsyncLoader != false) {
      FAsyncArchive::EndReadingHeader((FAsyncArchive *)this->Loader);
    }
    if (((this->LoadFlags & 0x80) == 0) && (this->bHaveImportsBeenVerified == false)) {
      if ((PRIVATE_GIsRunningCommandlet != false) && (0 < *(int *)((longlong)&this->_padding_ + 4)))
      {
        do {
          uVar7 = 0;
          if ((int)uVar14 < (int)this->_padding_) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar1 = (code *)swi(3);
              EVar6 = (*pcVar1)();
              return EVar6;
            }
          }
          VerifyImport(this,uVar14);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < *(int *)((longlong)&this->_padding_ + 4));
      }
      this->bHaveImportsBeenVerified = true;
    }
    if (this->_padding_ != 0) {
      local_70 = *(FName *)(this->_padding_ + 0x18);
      FLoadTimeProfilerTracePrivate::OutputPackageSummary
                (this,&local_70,*(uint *)((longlong)&this->_padding_ + 4),
                 *(uint *)((longlong)&this->_padding_ + 4),*(uint *)((longlong)&this->_padding_ + 4)
                 ,0);
    }
    this->bHasFinishedInitialization = true;
  }
  bVar5 = IsTimeLimitExceeded(this,L"finalizing creation",1);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return bVar5 + LINKER_Loaded;
}

// FindDirectChildExportsFromExportTable @ 1420b5650

void __thiscall
FLinkerLoad::FindDirectChildExportsFromExportTable
          (FLinkerLoad *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint local_18 [4];
  
  iVar1 = (int)this->_padding_;
  local_18[0] = 0;
  if (0 < iVar1) {
    do {
      uVar4 = local_18[0];
      uVar6 = 0;
      if ((int)local_18[0] < (int)this->_padding_) {
        uVar6 = ~local_18[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)((longlong)(int)uVar4 * 0x68 + 8 + this->_padding_);
      if ((0 < iVar7) && (iVar7 + -1 == param_1)) {
        pFVar2 = (param_2->AllocatorInstance).Data;
        if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
           (((FScriptContainerElement *)local_18 < pFVar2 + (longlong)param_2->ArrayMax * 4 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar7 + 1;
        *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
      }
      local_18[0] = local_18[0] + 1;
    } while ((int)local_18[0] < iVar1);
  }
  return;
}

// FindExistingExport @ 1420b57d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall FLinkerLoad::FindExistingExport(FLinkerLoad *this,int param_1)

{
  FPackageIndex FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FObjectImport *pFVar8;
  UObject *pUVar9;
  FObjectResource *this_00;
  FString *pFVar10;
  size_t sVar11;
  FName FVar12;
  FName *pFVar13;
  FScriptContainerElement *local_58;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  if (((param_1 < 0) || ((int)this->_padding_ <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExportMap.IsValidIndex(ExportIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0xbe4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UObject *)(*pcVar2)();
    return pUVar6;
  }
  uVar4 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UObject *)(*pcVar2)();
    return pUVar6;
  }
  pFVar13 = (FName *)((longlong)param_1 * 0x68 + this->_padding_);
  if (pFVar13[8] != (FName)0x0) {
    return (UObject *)pFVar13[8];
  }
  uVar4 = pFVar13[1].ComparisonIndex.Value;
  if (uVar4 == 0) {
    pUVar6 = (UObject *)this->_padding_;
  }
  else if ((int)uVar4 < 1) {
    iVar5 = FPackageIndex::ToImport((FPackageIndex *)(pFVar13 + 1));
    pUVar6 = FindExistingImport(this,iVar5);
  }
  else {
    iVar5 = FPackageIndex::ToExport((FPackageIndex *)(pFVar13 + 1));
    pUVar6 = FindExistingExport(this,iVar5);
  }
  if (pUVar6 == (UObject *)0x0) goto LAB_1420b5a4a;
  FVar1.Index = pFVar13[1].Number;
  if (FVar1.Index == 0) {
    pUVar7 = Z_Construct_UClass_UClass_NoRegister();
  }
  else {
    if (FVar1.Index < 1) {
      pFVar8 = FLinkerTables::Imp((FLinkerTables *)&this->_padding_,FVar1);
      FVar12 = pFVar8->ClassPackage;
      pUVar7 = Z_Construct_UClass_UPackage_NoRegister();
      pUVar9 = StaticFindObjectFast(pUVar7,(UObject *)0x0,FVar12,ExactClass,RF_NoFlags,Borrowed);
    }
    else {
      pUVar9 = (UObject *)this->_padding_;
    }
    this_00 = FLinkerTables::ImpExp
                        ((FLinkerTables *)&this->_padding_,(FPackageIndex)pFVar13[1].Number);
    if (pUVar9 == (UObject *)0x0) {
      pFVar10 = ::FName::ToString(&this_00->ObjectName,&local_38);
      if ((pFVar10->Data).ArrayNum == 0) {
        local_58 = (FScriptContainerElement *)0x15060d16c;
LAB_1420b598b:
        sVar11 = wcslen((wchar_t *)local_58);
        iVar5 = (int)sVar11;
      }
      else {
        local_58 = (pFVar10->Data).AllocatorInstance.Data;
        iVar5 = 0;
        if (local_58 != (FScriptContainerElement *)0x0) goto LAB_1420b598b;
      }
      pUVar7 = Z_Construct_UClass_UClass_NoRegister();
      local_48._12_4_ = uStack_4c;
      local_48.Size = iVar5;
      local_48.DataPtr = (wchar_t *)local_58;
      pUVar7 = (UClass *)
               StaticFindFirstObject(pUVar7,&local_48,None,Fatal,L"finding existing export");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      FVar12 = this_00->ObjectName;
      pUVar7 = Z_Construct_UClass_UClass_NoRegister();
      pUVar7 = (UClass *)StaticFindObjectFast(pUVar7,pUVar9,FVar12,None,RF_NoFlags,Borrowed);
    }
  }
  if (pUVar7 != (UClass *)0x0) {
    if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar7);
    }
    FVar12 = (FName)StaticFindObjectFast(pUVar7,pUVar6,*pFVar13,ExactClass,RF_NoFlags,Borrowed);
    pFVar13[8] = FVar12;
    if (FVar12 != (FName)0x0) {
      UObject::SetLinker((UObject *)FVar12,this,param_1,true,false);
    }
  }
LAB_1420b5a4a:
  return (UObject *)pFVar13[8];
}

// FindExistingExports @ 1420b5a70

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::FindExistingExports(FLinkerLoad *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FindExistingExports(void)_::_2_::FStat_STAT_LinkerLoad_FindExistingExports>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_LinkerLoad_FindExistingExports ==
          (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FindExistingExports(void)_::_2_::FStat_STAT_LinkerLoad_FindExistingExports>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_LinkerLoad_FindExistingExports");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_FindExistingExports,*pFVar6
                   ,L"FLinkerLoad::FindExistingExports","STATGROUP_LinkerLoad","STATCAT_Advanced",
                   L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_LinkerLoad_FindExistingExports;
  if (StatPtr_STAT_LinkerLoad_FindExistingExports ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FindExistingExports(void)_::_2_::FStat_STAT_LinkerLoad_FindExistingExports>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_LinkerLoad_FindExistingExports");
    FVar7 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FindExistingExports(void)_::_2_::FStat_STAT_LinkerLoad_FindExistingExports>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_FindExistingExports,
                         *pFVar6,L"FLinkerLoad::FindExistingExports","STATGROUP_LinkerLoad",
                         "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0xb78);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_1420b5bf5;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_1420b5bf5:
  if (!this->bHasFoundExistingExports) {
    this->field_0x469 = this->field_0x469 | 2;
  }
  bVar5 = IsTimeLimitExceeded(this,L"finding existing exports",1);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar5 + LINKER_Loaded;
}

// FindExistingImport @ 1420b5db0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall FLinkerLoad::FindExistingImport(FLinkerLoad *this,int param_1)

{
  ulonglong uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FNameEntryId FVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UPackage *pUVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FString *pFVar11;
  size_t sVar12;
  UObject *pUVar13;
  FName *pFVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res18;
  ulonglong local_res20;
  FScriptContainerElement *local_58;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  if (((param_1 < 0) || ((int)this->_padding_ <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ImportMap.IsValidIndex(ImportIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0xc34,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UObject *)(*pcVar3)();
    return pUVar8;
  }
  uVar5 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UObject *)(*pcVar3)();
    return pUVar8;
  }
  pFVar14 = (FName *)((longlong)param_1 * 0x38 + this->_padding_);
  if (pFVar14[5] != (FName)0x0) {
    return (UObject *)pFVar14[5];
  }
  uVar5 = pFVar14[1].ComparisonIndex.Value;
  if (uVar5 == 0) {
    FLinkerInstancingContext::RemapPackage(&this->InstancingContext,&local_res18);
    pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
    pUVar10 = (UPackage *)
              StaticFindObjectFast(pUVar9,(UObject *)0x0,local_res18,ExactClass,RF_NoFlags,Borrowed)
    ;
    bVar4 = IsPackageReferenceAllowed(this,pUVar10);
    if (!bVar4) {
      return (UObject *)0x0;
    }
    return (UObject *)pUVar10;
  }
  if ((int)uVar5 < 0) {
    pUVar8 = FindExistingImport(this,~uVar5);
  }
  else {
    iVar6 = FPackageIndex::ToExport((FPackageIndex *)(pFVar14 + 1));
    pUVar8 = FindExistingExport(this,iVar6);
  }
  if (pUVar8 == (UObject *)0x0) {
    return (UObject *)0x0;
  }
  uVar1 = *(ulonglong *)&pFVar14[2].Number;
  FVar7 = FNameEntryId::FromValidEName((EName)local_res10);
  if (uVar1 == *(uint *)CONCAT44(extraout_var,FVar7.Value)) {
    FLazyName::Resolve(&GLongCoreUObjectPackageName);
    uVar1 = *(ulonglong *)&pFVar14[1].Number;
    if ((uVar1 != local_res20) &&
       (FVar7 = FNameEntryId::FromValidEName((EName)local_res8),
       uVar1 != *(uint *)CONCAT44(extraout_var_00,FVar7.Value))) goto LAB_1420b5f47;
  }
  else {
LAB_1420b5f47:
    if (*(longlong *)&pFVar14[2].Number != 0) {
      pFVar11 = ::FName::ToString((FName *)&pFVar14[1].Number,&local_38);
      if ((pFVar11->Data).ArrayNum == 0) {
        local_58 = (FScriptContainerElement *)0x15060d16c;
LAB_1420b5f82:
        sVar12 = wcslen((wchar_t *)local_58);
        iVar6 = (int)sVar12;
      }
      else {
        local_58 = (pFVar11->Data).AllocatorInstance.Data;
        iVar6 = 0;
        if (local_58 != (FScriptContainerElement *)0x0) goto LAB_1420b5f82;
      }
      pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
      local_48._12_4_ = uStack_4c;
      local_48.Size = iVar6;
      local_48.DataPtr = (wchar_t *)local_58;
      pUVar13 = StaticFindObject(pUVar9,(UObject *)0x0,&local_48,None);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (pUVar13 == (UObject *)0x0) {
        return (UObject *)0x0;
      }
      pUVar9 = FindObjectFast<UClass>(pUVar13,*(FName *)&pFVar14[2].Number,None,RF_NoFlags);
      goto LAB_1420b5fd9;
    }
  }
  pUVar9 = Z_Construct_UClass_UClass_NoRegister();
LAB_1420b5fd9:
  if (pUVar9 == (UClass *)0x0) {
    return (UObject *)0x0;
  }
  FVar2 = *pFVar14;
  pUVar9 = Z_Construct_UClass_UClass_NoRegister();
  pUVar8 = StaticFindObjectFast(pUVar9,pUVar8,FVar2,ExactClass,RF_NoFlags,Borrowed);
  return pUVar8;
}

// FindExistingLinkerForImport @ 1420b6030

FLinkerLoad * __thiscall FLinkerLoad::FindExistingLinkerForImport(FLinkerLoad *this,int param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNameEntryId FVar5;
  int iVar6;
  FLinkerLoad *pFVar7;
  FLinkerLoad *pFVar8;
  undefined4 extraout_var;
  size_t sVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  FName *this_00;
  undefined1 local_res10 [8];
  FScriptContainerElement *local_38;
  undefined4 uStack_2c;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  pFVar7 = (FLinkerLoad *)0x0;
  uVar4 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FLinkerLoad *)(*pcVar2)();
    return pFVar7;
  }
  this_00 = (FName *)((longlong)param_1 * 0x38 + this->_padding_);
  if (this_00[6] != (FName)0x0) {
    return (FLinkerLoad *)this_00[6];
  }
  if ((this_00[5] != (FName)0x0) &&
     (pFVar8 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this_00[5]),
     pFVar8 != (FLinkerLoad *)0x0)) {
    return pFVar8;
  }
  if ((this_00[1].ComparisonIndex.Value != 0) ||
     (uVar1 = *(ulonglong *)&this_00[2].Number,
     FVar5 = FNameEntryId::FromValidEName((EName)local_res10),
     uVar1 != *(uint *)CONCAT44(extraout_var,FVar5.Value))) {
    uVar4 = this_00[1].ComparisonIndex.Value;
    if (-1 < (int)uVar4) {
      return (FLinkerLoad *)0x0;
    }
    pFVar7 = FindExistingLinkerForImport(this,~uVar4);
    return pFVar7;
  }
  ::FName::ToString(this_00,&local_28);
  if (local_28.Data.ArrayNum == 0) {
    local_38 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    iVar6 = 0;
    local_38 = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_1420b6120;
  }
  sVar9 = wcslen((wchar_t *)local_38);
  iVar6 = (int)sVar9;
LAB_1420b6120:
  pUVar10 = Z_Construct_UClass_UPackage_NoRegister();
  local_18._12_4_ = uStack_2c;
  local_18.Size = iVar6;
  local_18.DataPtr = (wchar_t *)local_38;
  pUVar11 = StaticFindObject(pUVar10,(UObject *)0x0,&local_18,None);
  if ((pUVar11 != (UObject *)0x0) && (*(longlong *)&pUVar11[1].field_0x20 != 0)) {
    pFVar7 = *(FLinkerLoad **)(*(longlong *)&pUVar11[1].field_0x20 + 0x20);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pFVar7;
}

// FindExistingLinkerForPackage @ 1420b61b0

FLinkerLoad * __cdecl FLinkerLoad::FindExistingLinkerForPackage(UPackage *param_1)

{
  FAdditionalInfo *pFVar1;
  FLinkerLoad *pFVar2;
  
  pFVar2 = (FLinkerLoad *)0x0;
  if ((param_1 != (UPackage *)0x0) &&
     (pFVar1 = (param_1->AdditionalInfo).Ptr, pFVar1 != (FAdditionalInfo *)0x0)) {
    pFVar2 = pFVar1->LinkerLoad;
  }
  return pFVar2;
}

// FindExportIndex @ 1420b61d0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FLinkerLoad::FindExportIndex
          (FLinkerLoad *this,FName param_1,FName param_2,FName param_3,FPackageIndex param_4)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  FName FVar8;
  undefined4 extraout_var_00;
  UObject *pUVar9;
  UClass *pUVar10;
  FName FVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint local_res8 [2];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  FString local_f0;
  uint *local_e0;
  FLinkerLoad *local_d8;
  FName *local_d0;
  FAssetLog local_c8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  uVar4 = ::GetTypeHash(param_3.ComparisonIndex.Value);
  uVar14 = 0;
  local_res8[0] = (this->ExportHash).Ptr[uVar4 & 0xff];
  uVar4 = 0;
  if (local_res8[0] != 0xffffffff) {
    do {
      if (((int)local_res8[0] < 0) || ((int)this->_padding_ <= (int)local_res8[0])) {
        local_e0 = local_res8;
        local_d0 = &local_res20;
        local_d8 = this;
        bVar3 = `FLinkerLoad::FindExportIndex'::__l5::<lambda_1>::operator()(&local_e0);
        if (!bVar3) break;
      }
      lVar12 = (longlong)(int)local_res8[0];
      uVar5 = 0;
      if ((int)local_res8[0] < (int)this->_padding_) {
        uVar5 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      FVar11 = local_res10;
      if (*(FName *)(lVar12 * 0x68 + this->_padding_) == local_res20) {
        FVar7 = FNameEntryId::FromValidEName((EName)local_f8);
        FVar2.Number = 0;
        FVar2.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar7.Value);
        FVar8 = FLinkerTables::GetExportClassName((FLinkerTables *)&this->_padding_,(int)local_b0);
        uVar15 = *(ulonglong *)FVar8;
        FVar7 = FNameEntryId::FromValidEName((EName)local_f4);
        if ((uVar15 == *(uint *)CONCAT44(extraout_var_00,FVar7.Value)) == (FVar11 == FVar2)) {
          lVar12 = (longlong)(int)local_res8[0];
          uVar5 = uVar4;
          if ((int)local_res8[0] < (int)this->_padding_) {
            uVar5 = ~local_res8[0] >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            iVar6 = (*pcVar1)();
            return iVar6;
          }
          if ((*(int *)(lVar12 * 0x68 + 8 + this->_padding_) == param_4.Index) ||
             (param_4.Index < 0)) {
            FVar11 = GetExportClassPackage(this,(int)local_a8);
            if ((local_res18 == *(FName *)FVar11) &&
               (FVar11 = FLinkerTables::GetExportClassName
                                   ((FLinkerTables *)&this->_padding_,(int)local_a0),
               local_res10 == *(FName *)FVar11)) {
              return local_res8[0];
            }
            if ((byte)LogLinker._0_1_ < 3) {
              return local_res8[0];
            }
            ::FName::ToString(&local_res10,&local_58);
            ::FName::ToString(&local_res18,&local_68);
            FVar11 = FLinkerTables::GetExportClassName
                               ((FLinkerTables *)&this->_padding_,(int)local_98);
            ::FName::ToString((FName *)FVar11,&local_78);
            FVar11 = GetExportClassPackage(this,(int)local_90);
            ::FName::ToString((FName *)FVar11,&local_88);
            ::FString::PrintfImpl
                      (&local_f0,
                       L"Resolved export with a different class: export class \'%s.%s\', package class \'%s.%s\'. Resave to fix."
                      );
            local_c8.PackagePath = &this->PackagePath;
            local_c8.Path = (wchar_t *)0x0;
            local_c8.Object = (UObject *)0x0;
            UE::Core::Private::RecordAssetLog
                      ((FName *)&LogLinker.field_0x4,Warning,&local_c8,&local_f0,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x1226);
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return local_res8[0];
            }
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            return local_res8[0];
          }
        }
      }
      lVar12 = (longlong)(int)local_res8[0];
      uVar5 = uVar4;
      if ((int)local_res8[0] < (int)this->_padding_) {
        uVar5 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      local_res8[0] = *(uint *)(lVar12 * 0x68 + 0x48 + this->_padding_);
    } while (local_res8[0] != 0xffffffff);
  }
  uVar15 = uVar14;
  if (0 < (int)this->_padding_) {
    do {
      uVar13 = (uint)uVar14;
      uVar5 = uVar4;
      if ((int)uVar13 < (int)this->_padding_) {
        uVar5 = ~uVar13 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar6 = (*pcVar1)();
        return iVar6;
      }
      lVar12 = this->_padding_;
      if ((*(FName *)(lVar12 + uVar15) == local_res20) &&
         (((param_4.Index < 0 || (*(int *)(lVar12 + 8 + uVar15) == param_4.Index)) &&
          (pUVar9 = IndexToObject(this,(FPackageIndex)*(int *)(lVar12 + 0xc + uVar15)),
          pUVar9 != (UObject *)0x0)))) {
        pUVar10 = Z_Construct_UClass_UClass_NoRegister();
        iVar6 = (int)pUVar10->_padding_;
        if ((iVar6 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar10->_padding_)) {
          do {
            FVar11.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
            FVar11.Number = *(uint *)&pUVar9->field_0x1c;
            if (FVar11 == local_res10) {
              return uVar13;
            }
            pUVar9 = *(UObject **)&pUVar9[1].field_0x18;
          } while (pUVar9 != (UObject *)0x0);
        }
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar15 = uVar15 + 0x68;
    } while ((int)(uVar13 + 1) < (int)this->_padding_);
  }
  return -1;
}

// FindImport @ 1420b6660

bool __thiscall
FLinkerLoad::FindImport(FLinkerLoad *this,TStringView<wchar_t> *param_1,FPackageIndex *param_2)

{
  FName FVar1;
  FName FVar2;
  FPackageIndex FVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  ulonglong uVar8;
  FPackageIndex FVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FName local_res10;
  FPackageIndex local_res20 [2];
  TStringView<wchar_t> local_88;
  TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  local_88.DataPtr = param_1->DataPtr;
  local_88.Size = param_1->Size;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_48.DataPtr = (wchar_t *)0x0;
  local_48.Size = 0;
  local_68.DataPtr = (wchar_t *)0x0;
  local_68.Size = 0;
  local_58.DataPtr = (wchar_t *)0x0;
  local_58.Size = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  FPackageName::SplitFullObjectPath(&local_88,&local_48,&local_68,&local_58,&local_78,true);
  pFVar7 = ::FName::FName(&local_res10,local_68.Size,local_68.DataPtr,FNAME_Add);
  FVar1 = *pFVar7;
  pFVar7 = ::FName::FName(&local_res10,local_58.Size,local_58.DataPtr,FNAME_Add);
  local_res20[0].Index = 0;
  FVar2 = *pFVar7;
  bVar5 = FindImportPackage(this,FVar1,local_res20);
  if (!bVar5) goto LAB_1420b67d9;
  FVar9.Index = local_res20[0].Index;
  if (FVar2 != (FName)0x0) {
    local_res10.ComparisonIndex.Value = 0;
    bVar5 = FindImport(this,local_res20[0],FVar2,(FPackageIndex *)&local_res10);
    if (!bVar5) goto LAB_1420b67d9;
    iVar4 = local_78.ArrayNum;
    uVar8 = (ulonglong)local_78.ArrayNum;
    FVar9.Index = local_res10.ComparisonIndex.Value;
    if (0 < local_78.ArrayNum) {
      pFVar11 = local_78.AllocatorInstance.Data + uVar8 * 0x10;
      local_res20[0].Index = 0;
      FVar10.Data = local_78.AllocatorInstance.Data;
      while( true ) {
        FVar3.Index = local_res20[0].Index;
        if ((int)uVar8 != iVar4) {
          `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
        }
        if (FVar10.Data == pFVar11) {
          param_2->Index = (int)FVar3;
          goto LAB_1420b67d9;
        }
        pFVar7 = ::FName::FName((FName *)&local_88,(int)*(undefined8 *)(FVar10.Data + 8),
                                *(wchar_t **)FVar10.Data,FNAME_Add);
        bVar6 = FindImport(this,FVar9,*pFVar7,local_res20);
        if (!bVar6) break;
        FVar10.Data = FVar10.Data + 0x10;
        uVar8 = local_78._8_8_ & 0xffffffff;
        FVar9.Index = local_res20[0].Index;
      }
      bVar5 = false;
      goto LAB_1420b67d9;
    }
  }
  param_2->Index = (int)FVar9;
LAB_1420b67d9:
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return bVar5;
}

// FindImport @ 1420b6830

bool __thiscall
FLinkerLoad::FindImport
          (FLinkerLoad *this,FPackageIndex param_1,FName param_2,FPackageIndex *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (int)this->_padding_) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (int)this->_padding_) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(FName *)(lVar6 + this->_padding_) == param_2) {
        uVar4 = 0;
        if ((int)uVar5 < (int)this->_padding_) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        if (*(int *)(lVar6 + 8 + this->_padding_) == param_1.Index) {
          if (((int)uVar5 < 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("ImportIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x67,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          param_3->Index = ~uVar5;
          return true;
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x38;
    } while ((int)uVar5 < (int)this->_padding_);
  }
  param_3->Index = 0;
  return false;
}

// FindImportClassAndPackage @ 1420b6990

bool __thiscall
FLinkerLoad::FindImportClassAndPackage
          (FLinkerLoad *this,FName param_1,FPackageIndex *param_2,FPackageIndex *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  uVar7 = 0;
  if (0 < (int)this->_padding_) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (int)this->_padding_) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(FName *)(lVar8 + this->_padding_) == param_1) {
        uVar5 = 0;
        if ((int)uVar7 < (int)this->_padding_) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        uVar1 = *(ulonglong *)(lVar8 + 0x14 + this->_padding_);
        FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
        if (uVar1 == *(uint *)CONCAT44(extraout_var,FVar6.Value)) {
          if (((int)uVar7 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ImportIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x67,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          param_2->Index = ~uVar7;
          uVar5 = 0;
          if ((int)uVar7 < (int)this->_padding_) {
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
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          param_3->Index = *(int *)((longlong)(int)uVar7 * 0x38 + 8 + this->_padding_);
          return true;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x38;
    } while ((int)uVar7 < (int)this->_padding_);
  }
  return false;
}

// FindImportPackage @ 1420b6b60

bool __thiscall
FLinkerLoad::FindImportPackage(FLinkerLoad *this,FName param_1,FPackageIndex *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  
  uVar7 = 0;
  if (0 < (int)this->_padding_) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (int)this->_padding_) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(FName *)(lVar8 + this->_padding_) == param_1) {
        uVar5 = 0;
        if ((int)uVar7 < (int)this->_padding_) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        uVar1 = *(ulonglong *)(lVar8 + 0x14 + this->_padding_);
        FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
        if (uVar1 == *(uint *)CONCAT44(extraout_var,FVar6.Value)) {
          if (((int)uVar7 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ImportIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x67,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          param_2->Index = ~uVar7;
          return true;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x38;
    } while ((int)uVar7 < (int)this->_padding_);
  }
  return false;
}

// FindNewNameForClass @ 1420b6cb0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FName __cdecl FLinkerLoad::FindNewNameForClass(FName param_1,bool param_2)

{
  FCoreRedirectObjectName *pFVar1;
  undefined7 in_register_00000011;
  char in_R8B;
  FCoreRedirectObjectName local_58;
  FCoreRedirectObjectName local_40;
  FCoreRedirectObjectName local_28;
  
  local_58.ObjectName._1_7_ = in_register_00000011;
  local_58.ObjectName.ComparisonIndex.Value._0_1_ = param_2;
  local_58.OuterName.ComparisonIndex.Value = 0;
  local_58.OuterName.Number = 0;
  local_58.PackageName.ComparisonIndex.Value = 0;
  local_58.PackageName.Number = 0;
  FCoreRedirects::GetRedirectedName(&local_40,Type_Class,&local_58,None);
  if (((local_40.ObjectName == local_58.ObjectName) && (local_40.OuterName == local_58.OuterName))
     && (local_40.PackageName == local_58.PackageName)) {
    if (in_R8B != '\0') {
      pFVar1 = FCoreRedirects::GetRedirectedName
                         (&local_28,Category_InstanceOnly|Type_Class,&local_58,None);
      local_40.ObjectName = pFVar1->ObjectName;
      if (((local_40.ObjectName != local_58.ObjectName) || (pFVar1->OuterName != local_58.OuterName)
          ) || (pFVar1->PackageName != local_58.PackageName)) goto LAB_1420b6d7d;
    }
    *(undefined8 *)param_1 = 0;
  }
  else {
LAB_1420b6d7d:
    *(FName *)param_1 = local_40.ObjectName;
  }
  return param_1;
}

// FindNewNameForEnum @ 1420b6da0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FName __cdecl FLinkerLoad::FindNewNameForEnum(FName param_1)

{
  FName in_RDX;
  FCoreRedirectObjectName local_38;
  FCoreRedirectObjectName local_20;
  
  local_38.OuterName.ComparisonIndex.Value = 0;
  local_38.OuterName.Number = 0;
  local_38.PackageName.ComparisonIndex.Value = 0;
  local_38.PackageName.Number = 0;
  local_38.ObjectName = in_RDX;
  FCoreRedirects::GetRedirectedName(&local_20,Type_Enum,&local_38,AllowPartialMatch);
  if (((local_20.ObjectName == local_38.ObjectName) && (local_20.OuterName == local_38.OuterName))
     && (local_20.PackageName == local_38.PackageName)) {
    *(undefined8 *)param_1 = 0;
    return param_1;
  }
  *(FName *)param_1 = local_20.ObjectName;
  return param_1;
}

// FindNewNameForStruct @ 1420b6e30

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FName __cdecl FLinkerLoad::FindNewNameForStruct(FName param_1)

{
  FName in_RDX;
  FCoreRedirectObjectName local_38;
  FCoreRedirectObjectName local_20;
  
  local_38.OuterName.ComparisonIndex.Value = 0;
  local_38.OuterName.Number = 0;
  local_38.PackageName.ComparisonIndex.Value = 0;
  local_38.PackageName.Number = 0;
  local_38.ObjectName = in_RDX;
  FCoreRedirects::GetRedirectedName(&local_20,Type_Struct,&local_38,AllowPartialMatch);
  if (((local_20.ObjectName == local_38.ObjectName) && (local_20.OuterName == local_38.OuterName))
     && (local_20.PackageName == local_38.PackageName)) {
    *(undefined8 *)param_1 = 0;
    return param_1;
  }
  *(FName *)param_1 = local_20.ObjectName;
  return param_1;
}

// FindNewPathNameForClass @ 1420b6ec0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FLinkerLoad::FindNewPathNameForClass(FString *__return_storage_ptr__,FString *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FCoreRedirectObjectName *pFVar3;
  FString *pFVar4;
  size_t sVar5;
  UClass *pUVar6;
  UObject *this;
  FCoreRedirectObjectName local_58;
  FCoreRedirectObjectName local_38;
  FCoreRedirectObjectName local_20;
  
  FCoreRedirectObjectName::FCoreRedirectObjectName(&local_38,param_1);
  FCoreRedirects::GetRedirectedName(&local_20,Type_Class,&local_38,None);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (((local_20.ObjectName == local_38.ObjectName) && (local_20.OuterName == local_38.OuterName))
     && (local_20.PackageName == local_38.PackageName)) {
    if (param_2) {
      pFVar3 = FCoreRedirects::GetRedirectedName
                         (&local_58,Category_InstanceOnly|Type_Class,&local_38,None);
      local_20.ObjectName = pFVar3->ObjectName;
      local_20.OuterName = pFVar3->OuterName;
      local_20.PackageName = pFVar3->PackageName;
      if (((local_20.ObjectName != local_38.ObjectName) ||
          (local_20.OuterName != local_38.OuterName)) ||
         (local_20.PackageName != local_38.PackageName)) goto LAB_1420b6f7a;
    }
  }
  else {
LAB_1420b6f7a:
    pFVar4 = FCoreRedirectObjectName::ToString(&local_20,(FString *)&local_58);
    if (__return_storage_ptr__ != pFVar4) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_58.ObjectName != (FName)0x0) {
      FMemory::Free((void *)local_58.ObjectName);
    }
  }
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    return __return_storage_ptr__;
  }
  bVar2 = FPackageName::IsShortPackageName(__return_storage_ptr__);
  if (!bVar2) {
    return __return_storage_ptr__;
  }
  local_58.OuterName.ComparisonIndex.Value = 0;
  if ((__return_storage_ptr__->Data).ArrayNum == 0) {
    local_58.ObjectName = (FName)0x15060d16c;
  }
  else {
    local_58.ObjectName = (FName)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (local_58.ObjectName == (FName)0x0) goto LAB_1420b7005;
  }
  sVar5 = wcslen((wchar_t *)local_58.ObjectName);
  local_58.OuterName.ComparisonIndex.Value = (uint)sVar5;
LAB_1420b7005:
  pUVar6 = Z_Construct_UClass_UClass_NoRegister();
  this = StaticFindFirstObject
                   (pUVar6,(TStringView<wchar_t> *)&local_58,None,Fatal,L"FindNewPathNameForClass");
  if (this == (UObject *)0x0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
  }
  else {
    pFVar4 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this,(FString *)&local_58,(UObject *)0x0);
    if (__return_storage_ptr__ != pFVar4) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_58.ObjectName != (FName)0x0) {
      FMemory::Free((void *)local_58.ObjectName);
    }
  }
  return __return_storage_ptr__;
}

// FindPreviousNamesForClass @ 1420b74a0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
FLinkerLoad::FindPreviousNamesForClass
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1,
          bool param_2)

{
  FName *pFVar1;
  int iVar2;
  bool bVar3;
  FCoreRedirectObjectName *pFVar4;
  ulonglong uVar5;
  ForAnyElementType FVar6;
  undefined1 local_res18 [16];
  TArray<FCoreRedirectObjectName,TSizedDefaultAllocator<32>_> local_58;
  FCoreRedirectObjectName local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pFVar4 = FCoreRedirectObjectName::FCoreRedirectObjectName(&local_48,param_1);
  bVar3 = FCoreRedirects::FindPreviousNames(Type_Class,pFVar4,&local_58);
  if (bVar3) {
    iVar2 = local_58.ArrayNum;
    uVar5 = (ulonglong)local_58.ArrayNum;
    pFVar1 = (FName *)(local_58.AllocatorInstance.Data + uVar5 * 0x18);
    FVar6.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != iVar2) {
        `TCheckedPointerIterator<FCoreRedirectObjectName,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if ((FName *)FVar6.Data == pFVar1) break;
      TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                (__return_storage_ptr__,(FName *)FVar6.Data);
      uVar5 = local_58._8_8_ & 0xffffffff;
      FVar6.Data = FVar6.Data + 0x18;
    }
  }
  if (param_2) {
    iVar2 = local_58.ArrayMax;
    local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    }
    pFVar4 = FCoreRedirectObjectName::FCoreRedirectObjectName(&local_48,param_1);
    bVar3 = FCoreRedirects::FindPreviousNames(Category_InstanceOnly|Type_Class,pFVar4,&local_58);
    if (bVar3) {
      iVar2 = local_58.ArrayNum;
      uVar5 = (ulonglong)local_58.ArrayNum;
      pFVar1 = (FName *)(local_58.AllocatorInstance.Data + uVar5 * 0x18);
      FVar6.Data = local_58.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar5 != iVar2) {
          `TCheckedPointerIterator<FCoreRedirectObjectName,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if ((FName *)FVar6.Data == pFVar1) break;
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  (__return_storage_ptr__,(FName *)FVar6.Data);
        uVar5 = local_58._8_8_ & 0xffffffff;
        FVar6.Data = FVar6.Data + 0x18;
      }
    }
  }
  if ((FName *)local_58.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindPreviousPathNamesForClass @ 1420b7630

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FLinkerLoad::FindPreviousPathNamesForClass
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1,
          bool param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  FCoreRedirectObjectName *pFVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  undefined1 local_res18 [8];
  TArray<FCoreRedirectObjectName,TSizedDefaultAllocator<32>_> local_58;
  FCoreRedirectObjectName local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pFVar3 = FCoreRedirectObjectName::FCoreRedirectObjectName(&local_48,param_1);
  bVar2 = FCoreRedirects::FindPreviousNames(Type_Class,pFVar3,&local_58);
  if (bVar2) {
    iVar1 = local_58.ArrayNum;
    pFVar3 = (FCoreRedirectObjectName *)
             (local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x18);
    FVar5.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      if (local_58.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FCoreRedirectObjectName,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if ((FCoreRedirectObjectName *)FVar5.Data == pFVar3) break;
      if ((param_3) || (((FCoreRedirectObjectName *)FVar5.Data)->PackageName != (FName)0x0)) {
        pFVar4 = FCoreRedirectObjectName::ToString
                           ((FCoreRedirectObjectName *)FVar5.Data,(FString *)&local_48);
        TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
                  (__return_storage_ptr__,pFVar4);
        if (local_48.ObjectName != (FName)0x0) {
          FMemory::Free((void *)local_48.ObjectName);
        }
      }
      FVar5.Data = FVar5.Data + 0x18;
    }
  }
  if (param_2) {
    bVar2 = local_58.ArrayMax != 0;
    local_58._8_8_ = (ulonglong)(uint)local_58.ArrayMax << 0x20;
    if (bVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,0,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    }
    pFVar3 = FCoreRedirectObjectName::FCoreRedirectObjectName(&local_48,param_1);
    bVar2 = FCoreRedirects::FindPreviousNames(Category_InstanceOnly|Type_Class,pFVar3,&local_58);
    if (bVar2) {
      iVar1 = local_58.ArrayNum;
      pFVar3 = (FCoreRedirectObjectName *)
               (local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x18);
      FVar5.Data = local_58.AllocatorInstance.Data;
      while( true ) {
        if (local_58.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FCoreRedirectObjectName,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if ((FCoreRedirectObjectName *)FVar5.Data == pFVar3) break;
        if ((param_3) || (((FCoreRedirectObjectName *)FVar5.Data)->PackageName != (FName)0x0)) {
          pFVar4 = FCoreRedirectObjectName::ToString
                             ((FCoreRedirectObjectName *)FVar5.Data,(FString *)&local_48);
          TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
                    (__return_storage_ptr__,pFVar4);
          if (local_48.ObjectName != (FName)0x0) {
            FMemory::Free((void *)local_48.ObjectName);
          }
        }
        FVar5.Data = FVar5.Data + 0x18;
      }
    }
  }
  if ((FCoreRedirectObjectName *)local_58.AllocatorInstance.Data != (FCoreRedirectObjectName *)0x0)
  {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FinishExternalReadDependencies @ 1420b7d70

bool __thiscall FLinkerLoad::FinishExternalReadDependencies(FLinkerLoad *this,double param_1)

{
  int *piVar1;
  TArray<TFunction<bool___cdecl(double)>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  longlong lVar16;
  LARGE_INTEGER local_res8;
  double local_res10;
  LARGE_INTEGER local_res18;
  
  QueryPerformanceCounter(&local_res8);
  iVar15 = 0;
  dVar5 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if ((this->ExternalReadDependencies).ArrayNum != 0) {
    pTVar2 = &this->ExternalReadDependencies;
    dVar4 = param_1;
    do {
      iVar11 = (this->ExternalReadDependencies).ArrayNum;
      uVar13 = iVar11 - 1;
      uVar9 = 0;
      if ((int)uVar13 < iVar11) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar14 = (pTVar2->AllocatorInstance).Data;
      lVar16 = (longlong)(this->ExternalReadDependencies).ArrayNum * 0x30;
      local_res10 = dVar4;
      UE::Core::Private::Function::CheckCallable(*(void **)(pFVar14 + lVar16 + -0x30));
      pcVar3 = *(code **)(pFVar14 + lVar16 + -0x30);
      pFVar12 = *(FScriptContainerElement **)(pFVar14 + lVar16 + -0x20 + 0x18);
      if (pFVar12 == (FScriptContainerElement *)0x0) {
        pFVar12 = pFVar14 + lVar16 + -0x20;
      }
      uVar10 = (**(code **)(*(longlong *)pFVar12 + 8))();
      cVar8 = (*pcVar3)(uVar10,&local_res10);
      if (0.0 < dVar4) {
        if (cVar8 != '\0') goto LAB_1420b7ebc;
      }
      else if (cVar8 == '\0') {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RemainingTime > 0.0 || bFinished",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0x1c4b,
                           L"FExternalReadCallback must be finished when RemainingTime is zero");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
      }
      else {
LAB_1420b7ebc:
        iVar11 = (this->ExternalReadDependencies).ArrayNum;
        uVar13 = iVar11 - 1;
        uVar9 = 0;
        if ((int)uVar13 < iVar11) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x30;
        if (*(longlong *)pFVar14 != 0) {
          pFVar12 = *(FScriptContainerElement **)(pFVar14 + 0x28);
          if (*(FScriptContainerElement **)(pFVar14 + 0x28) == (FScriptContainerElement *)0x0) {
            pFVar12 = pFVar14 + 0x10;
          }
          (**(code **)(*(longlong *)pFVar12 + 0x10))();
        }
        iVar11 = (this->ExternalReadDependencies).ArrayNum + ~uVar13;
        if (iVar11 != 0) {
          memmove(pFVar14,pFVar14 + 0x30,(longlong)iVar11 * 0x30);
        }
        piVar1 = &(this->ExternalReadDependencies).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,&pTVar2->AllocatorInstance,(this->ExternalReadDependencies).ArrayNum,
                   &(this->ExternalReadDependencies).ArrayMax);
      }
      if ((0.0 < param_1) && (iVar15 = iVar15 + 1, iVar15 == (iVar15 / 5) * 5)) {
        QueryPerformanceCounter(&local_res18);
        dVar4 = param_1 - ((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle -
                          dVar5);
        if (dVar4 <= 0.0) {
          return false;
        }
      }
    } while ((this->ExternalReadDependencies).ArrayNum != 0);
  }
  return true;
}

// FixupExportMap @ 1420b8020

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::FixupExportMap(FLinkerLoad *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FixupExportMap(void)_::_2_::FStat_STAT_LinkerLoad_FixupExportMap>
  FVar5;
  uint uVar6;
  FName FVar7;
  FNameEntryId FVar8;
  FName local_res10;
  FName local_res18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_LinkerLoad_FixupExportMap ==
          (FThreadSafeStaticStat<_public:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FixupExportMap(void)_::_2_::FStat_STAT_LinkerLoad_FixupExportMap>
           )0x0) {
        pFVar4 = ::FName::FName(&local_res10,"STAT_LinkerLoad_FixupExportMap");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_FixupExportMap,*pFVar4,
                   L"FLinkerLoad::FixupExportMap","STATGROUP_LinkerLoad","STATCAT_Advanced",
                   L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_LinkerLoad_FixupExportMap;
  if (StatPtr_STAT_LinkerLoad_FixupExportMap ==
      (FThreadSafeStaticStat<_public:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FixupExportMap(void)_::_2_::FStat_STAT_LinkerLoad_FixupExportMap>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res18,"STAT_LinkerLoad_FixupExportMap");
    FVar5 = (FThreadSafeStaticStat<_public:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FixupExportMap(void)_::_2_::FStat_STAT_LinkerLoad_FixupExportMap>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_FixupExportMap,
                         *pFVar4,L"FLinkerLoad::FixupExportMap","STATGROUP_LinkerLoad",
                         "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar7 = *(FName *)FVar5;
  bVar1 = false;
  bVar3 = false;
  FVar8 = FVar7.ComparisonIndex.Value;
  uVar6 = FVar7.Number;
  if ((FVar8.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar1 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar8.Value;
        local_res10.Number = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x1b9b);
        bVar1 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.ComparisonIndex.Value = FVar8.Value;
      local_res10.Number = uVar6;
      FThreadStats::AddMessage(FVar7,CycleScopeStart);
      bVar2 = true;
      goto LAB_1420b8188;
    }
  }
  bVar2 = false;
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
LAB_1420b8188:
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FThreadStats::AddMessage(FVar7,CycleScopeEnd);
  }
  return LINKER_Loaded;
}

// FixupImportMap @ 1420b82b0

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::FixupImportMap(FLinkerLoad *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FixupImportMap(void)_::_2_::FStat_STAT_LinkerLoad_FixupImportMap>
  FVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FName local_38;
  FName local_30;
  FName local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_LinkerLoad_FixupImportMap ==
          (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FixupImportMap(void)_::_2_::FStat_STAT_LinkerLoad_FixupImportMap>
           )0x0) {
        pFVar6 = ::FName::FName(&local_38,"STAT_LinkerLoad_FixupImportMap");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_FixupImportMap,*pFVar6,
                   L"FLinkerLoad::FixupImportMap","STATGROUP_LinkerLoad","STATCAT_Advanced",
                   L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_LinkerLoad_FixupImportMap;
  if (StatPtr_STAT_LinkerLoad_FixupImportMap ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FixupImportMap(void)_::_2_::FStat_STAT_LinkerLoad_FixupImportMap>
       )0x0) {
    pFVar6 = ::FName::FName(&local_20,"STAT_LinkerLoad_FixupImportMap");
    FVar7 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::FixupImportMap(void)_::_2_::FStat_STAT_LinkerLoad_FixupImportMap>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_FixupImportMap,
                         *pFVar6,L"FLinkerLoad::FixupImportMap","STATGROUP_LinkerLoad",
                         "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar9 = *(FName *)FVar7;
  bVar1 = false;
  bVar3 = false;
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar5 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar5 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_38.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_38,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar1 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_38.ComparisonIndex.Value = FVar8.Value;
        local_38.Number = uVar5;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_38,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x831);
        bVar1 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_38.ComparisonIndex.Value = FVar8.Value;
      local_38.Number = uVar5;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar2 = true;
      goto LAB_1420b8415;
    }
  }
  bVar2 = false;
  FVar9 = local_30;
LAB_1420b8415:
  if (!this->bHasFixedUpImportMap) {
    this->field_0x468 = this->field_0x468 | 0x10;
  }
  bVar4 = IsTimeLimitExceeded(this,L"fixing up import map",1);
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FThreadStats::AddMessage(FVar9,CycleScopeEnd);
  }
  return bVar4 + LINKER_Loaded;
}

// FixupSoftObjectPathForInstancedPackage @ 1420b8f40

void __thiscall
FLinkerLoad::FixupSoftObjectPathForInstancedPackage(FLinkerLoad *this,FSoftObjectPath *param_1)

{
  FLinkerInstancingContext::FixupSoftObjectPath(&this->InstancingContext,param_1);
  return;
}

// FlushCache @ 1420b8f60

void __thiscall FLinkerLoad::FlushCache(FLinkerLoad *this)

{
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001420b8f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x1f8))();
    return;
  }
  return;
}

// GetArchetypeFromLoader @ 1420c6390

UObject * __thiscall FLinkerLoad::GetArchetypeFromLoader(FLinkerLoad *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  UObject *pUVar5;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  if (!GEventDrivenLoaderEnabled) {
    return (UObject *)0x0;
  }
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
  if ((this->_padding_ != 0) && (*(UObject **)((longlong)pFVar4[0x2f] + 0x30) != param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TemplateForGetArchetypeFromLoader || CurrentLoadContext->SerializedObject == Obj"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x1a15,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar1)();
      return pUVar5;
    }
  }
  return (UObject *)this->_padding_;
}

// GetArchiveName @ 1420c6440

FString * __thiscall FLinkerLoad::GetArchiveName(FLinkerLoad *this,FString *__return_storage_ptr__)

{
  FPackagePath::GetDebugName((FPackagePath *)&this->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetExportClassPackage @ 1420c66e0

FName __thiscall FLinkerLoad::GetExportClassPackage(FLinkerLoad *this,int param_1)

{
  longlong *this_00;
  FPackageIndex FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName FVar5;
  FObjectImport *pFVar6;
  FObjectExport *pFVar7;
  uint in_register_00000014;
  uint in_R8D;
  
  FVar5.Number = in_register_00000014;
  FVar5.ComparisonIndex.Value = param_1;
  uVar4 = 0;
  if ((int)in_R8D < (int)this->_padding_) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5 = (FName)(*pcVar2)();
      return FVar5;
    }
  }
  FVar1.Index = *(int *)((longlong)(int)in_R8D * 0x68 + 0xc + this->_padding_);
  if (-1 < FVar1.Index) {
    if (FVar1.Index != 0) {
      *(longlong *)FVar5 = *(longlong *)(this->_padding_ + 0x18);
      return FVar5;
    }
    FLazyName::Resolve(&GLongCoreUObjectPackageName);
    return FVar5;
  }
  this_00 = &this->_padding_;
  pFVar6 = FLinkerTables::Imp((FLinkerTables *)this_00,FVar1);
  FVar1.Index = pFVar6->_padding_;
  if (FVar1.Index == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Index.IsNull()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Linker.h"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5 = (FName)(*pcVar2)();
      return FVar5;
    }
  }
  if (FVar1.Index < 0) {
    pFVar6 = FLinkerTables::Imp((FLinkerTables *)this_00,FVar1);
    *(longlong *)FVar5 = pFVar6->_padding_;
    return FVar5;
  }
  pFVar7 = FLinkerTables::Exp((FLinkerTables *)this_00,FVar1);
  *(longlong *)FVar5 = pFVar7->_padding_;
  return FVar5;
}

// GetExportLoadClass @ 1420c6b30

UClass * __thiscall FLinkerLoad::GetExportLoadClass(FLinkerLoad *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  longlong lVar7;
  
  uVar4 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UClass *)(*pcVar2)();
      return pUVar5;
    }
  }
  lVar7 = (longlong)param_1 * 0x68 + this->_padding_;
  if ((*(int *)(lVar7 + 0xc) < 0) && ((this->LoadFlags & 0x100000) == 0)) {
    VerifyImport(this,~*(uint *)(lVar7 + 0xc));
  }
  pUVar5 = (UClass *)IndexToObject(this,(FPackageIndex)*(int *)(lVar7 + 0xc));
  if (pUVar5 != (UClass *)0x0) {
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return pUVar5;
    }
  }
  return (UClass *)0x0;
}

// GetLinker @ 1420c7980

FLinker * __thiscall FLinkerLoad::GetLinker(FLinkerLoad *this)

{
  return (FLinker *)&this[-1]._padding_;
}

// GetSerializeContext @ 1420c8770

FUObjectSerializeContext * __thiscall FLinkerLoad::GetSerializeContext(FLinkerLoad *this)

{
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  return (FUObjectSerializeContext *)pFVar2[0x2f];
}

// HasAnyObjectsPendingLoad @ 1420c8be0

bool __thiscall FLinkerLoad::HasAnyObjectsPendingLoad(FLinkerLoad *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  lVar2 = this->_padding_;
  lVar3 = (longlong)iVar1 * 0x68 + lVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FObjectExport_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar2 == lVar3) break;
    if ((*(longlong *)(lVar2 + 0x40) != 0) &&
       ((*(uint *)(*(longlong *)(lVar2 + 0x40) + 8) & 0x1400) != 0)) {
      return true;
    }
    lVar2 = lVar2 + 0x68;
  }
  return false;
}

// IndexToObject @ 1420c9010

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall FLinkerLoad::IndexToObject(FLinkerLoad *this,FPackageIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  FOutputDeviceRedirector *pFVar3;
  FString *pFVar4;
  UObject *pUVar5;
  wchar_t *pwVar6;
  int iVar7;
  wchar_t *pwVar8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FString local_58;
  FString local_48;
  FAssetLog local_38;
  FAssetLog local_20;
  
  if (param_1.Index < 1) {
    if (param_1.Index < 0) {
      if ((-1 < param_1.Index) || ((int)this->_padding_ <= ~param_1.Index)) {
        bVar2 = FApp::IsUnattended();
        if (!bVar2) {
          FText::FText(&local_68);
          FText::FText(&local_78);
          FConfigCacheIni::GetText
                    (GConfig,L"/Script/Engine.Engine",L"SerializationOutOfBoundsErrorMessage",
                     &local_68,&GEngineIni);
          FConfigCacheIni::GetText
                    (GConfig,L"/Script/Engine.Engine",L"SerializationOutOfBoundsErrorMessageCaption"
                     ,&local_78,&GEngineIni);
          if (1 < (byte)LogLinker._0_1_) {
            ::FString::PrintfImpl
                      (&local_48,
                       L"Invalid import object index=%d. File is most likely corrupted. Please verify your installation."
                      );
            local_20.Path = (wchar_t *)0x0;
            local_20.PackagePath = &this->PackagePath;
            local_20.Object = (UObject *)0x0;
            UE::Core::Private::RecordAssetLog
                      ((FName *)&LogLinker.field_0x4,Error,&local_20,&local_48,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x17ed);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          pFVar3 = GetGlobalLogSingleton();
          if (pFVar3 != (FOutputDeviceRedirector *)0x0) {
            pFVar3 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
            FOutputDeviceRedirector::Flush(pFVar3);
          }
          pFVar4 = FText::ToString(&local_78);
          if ((pFVar4->Data).ArrayNum == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
          }
          pFVar4 = FText::ToString(&local_68);
          if ((pFVar4->Data).ArrayNum == 0) {
            pwVar6 = L"";
          }
          else {
            pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
          }
          FWindowsPlatformMisc::MessageBoxExt(Ok,pwVar6,pwVar8);
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                             ,0x17f6,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pUVar5 = (UObject *)(*pcVar1)();
            return pUVar5;
          }
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
        }
      }
      pUVar5 = CreateImport(this,~param_1.Index);
    }
    else {
      pUVar5 = (UObject *)0x0;
    }
  }
  else {
    iVar7 = param_1.Index + -1;
    if ((iVar7 < 0) || ((int)this->_padding_ <= iVar7)) {
      bVar2 = FApp::IsUnattended();
      if (!bVar2) {
        FText::FText(&local_88);
        FText::FText(&local_98);
        FConfigCacheIni::GetText
                  (GConfig,L"/Script/Engine.Engine",L"SerializationOutOfBoundsErrorMessage",
                   &local_88,&GEngineIni);
        FConfigCacheIni::GetText
                  (GConfig,L"/Script/Engine.Engine",L"SerializationOutOfBoundsErrorMessageCaption",
                   &local_98,&GEngineIni);
        if (1 < (byte)LogLinker._0_1_) {
          ::FString::PrintfImpl
                    (&local_58,
                     L"Invalid export object index=%d. File is most likely corrupted. Please verify your installation."
                    );
          local_38.Path = (wchar_t *)0x0;
          local_38.PackagePath = &this->PackagePath;
          local_38.Object = (UObject *)0x0;
          UE::Core::Private::RecordAssetLog
                    ((FName *)&LogLinker.field_0x4,Error,&local_38,&local_58,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                     ,0x17ca);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        pFVar3 = GetGlobalLogSingleton();
        if (pFVar3 != (FOutputDeviceRedirector *)0x0) {
          pFVar3 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
          FOutputDeviceRedirector::Flush(pFVar3);
        }
        pFVar4 = FText::ToString(&local_98);
        if ((pFVar4->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
        pFVar4 = FText::ToString(&local_88);
        if ((pFVar4->Data).ArrayNum == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        }
        FWindowsPlatformMisc::MessageBoxExt(Ok,pwVar6,pwVar8);
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0x17d3,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar5 = (UObject *)(*pcVar1)();
          return pUVar5;
        }
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
      }
    }
    pUVar5 = CreateExport(this,iVar7);
  }
  return pUVar5;
}

// InvalidateExport @ 1420c9380

void __cdecl FLinkerLoad::InvalidateExport(UObject *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  byte *pbVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FLinkerLoad *this;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 local_res18 [16];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  this = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_1);
  uVar6 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)param_1);
  if (((this != (FLinkerLoad *)0x0) && (-1 < (int)uVar6)) && ((int)uVar6 < (int)this->_padding_)) {
    UObjectBaseUtility::ClearFlags
              ((UObjectBaseUtility *)param_1,RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad);
    if (param_2) {
      if (param_1 == (UObject *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0) {
        UObject::SetLinker(param_1,(FLinkerLoad *)0x0,-1,true,false);
      }
    }
    uVar7 = 0;
    if ((int)uVar6 < (int)this->_padding_) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pbVar2 = (byte *)((longlong)(int)uVar6 * 0x68 + 0x4c + this->_padding_);
    *pbVar2 = *pbVar2 | 0x80;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    FindDirectChildExportsFromExportTable(this,uVar6,&local_28);
    iVar4 = local_28.ArrayNum;
    uVar8 = (ulonglong)local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + uVar8 * 4;
    FVar9.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar8 != iVar4) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar9.Data == pFVar1) break;
      InvalidateExportIndex(this,*(int *)FVar9.Data,param_2);
      uVar8 = local_28._8_8_ & 0xffffffff;
      FVar9.Data = FVar9.Data + 4;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// InvalidateExportIndex @ 1420c9500

void __thiscall FLinkerLoad::InvalidateExportIndex(FLinkerLoad *this,int param_1,bool param_2)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  UObjectBase *this_00;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  uVar6 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar9 = (longlong)param_1 * 0x68 + this->_padding_;
  this_00 = *(UObjectBase **)(lVar9 + 0x40);
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AtomicallyClearFlags(this_00,RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad)
    ;
    if ((param_2) && ((this_00->ObjectFlags >> 0x1e & 1) != 0)) {
      UObject::SetLinker((UObject *)this_00,(FLinkerLoad *)0x0,-1,true,false);
    }
  }
  pbVar1 = (byte *)(lVar9 + 0x4c);
  *pbVar1 = *pbVar1 | 0x80;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  FindDirectChildExportsFromExportTable(this,param_1,&local_28);
  iVar4 = local_28.ArrayNum;
  uVar7 = (ulonglong)local_28.ArrayNum;
  pFVar2 = local_28.AllocatorInstance.Data + uVar7 * 4;
  FVar8.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar4) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar8.Data == pFVar2) break;
    InvalidateExportIndex(this,*(int *)FVar8.Data,param_2);
    uVar7 = local_28._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 4;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// IsContextInstanced @ 1420c9640

bool __thiscall FLinkerLoad::IsContextInstanced(FLinkerLoad *this)

{
  bool bVar1;
  
  bVar1 = FLinkerInstancingContext::IsInstanced(&this->InstancingContext);
  return bVar1;
}

// IsImportNative @ 1420c9680

bool __thiscall FLinkerLoad::IsImportNative(FLinkerLoad *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FString *pFVar5;
  size_t sVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FName *this_00;
  int iVar9;
  FScriptContainerElement *local_38;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  while( true ) {
    iVar9 = 0;
    uVar4 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = (FName *)((longlong)param_1 * 0x38 + this->_padding_);
    if (this_00[6] != (FName)0x0) {
      return false;
    }
    uVar4 = this_00[1].ComparisonIndex.Value;
    if (uVar4 == 0) break;
    if ((-1 < (int)uVar4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsImport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x55,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    param_1 = ~this_00[1].ComparisonIndex.Value;
  }
  pFVar5 = ::FName::ToString(this_00,&local_18);
  if ((pFVar5->Data).ArrayNum == 0) {
    local_38 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_38 = (pFVar5->Data).AllocatorInstance.Data;
    if (local_38 == (FScriptContainerElement *)0x0) goto LAB_1420c9778;
  }
  sVar6 = wcslen((wchar_t *)local_38);
  iVar9 = (int)sVar6;
LAB_1420c9778:
  pUVar7 = Z_Construct_UClass_UPackage_NoRegister();
  local_28._12_4_ = uStack_2c;
  local_28.Size = iVar9;
  local_28.DataPtr = (wchar_t *)local_38;
  pUVar8 = StaticFindObject(pUVar7,(UObject *)0x0,&local_28,None);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (((pUVar8 != (UObject *)0x0) && (*(longlong *)&pUVar8->field_0x20 == 0)) &&
     ((*(uint *)&pUVar8[1].field_0x4 & 0x10) != 0)) {
    return true;
  }
  return false;
}

// IsKnownMissingPackage @ 1420c98b0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __cdecl FLinkerLoad::IsKnownMissingPackage(FName param_1)

{
  bool bVar1;
  FCoreRedirectObjectName local_28;
  
  local_28.ObjectName.ComparisonIndex.Value = 0;
  local_28.ObjectName.Number = 0;
  local_28.OuterName.ComparisonIndex.Value = 0;
  local_28.OuterName.Number = 0;
  local_28.PackageName = param_1;
  bVar1 = FCoreRedirects::IsKnownMissing(Type_Package,&local_28);
  return bVar1;
}

// IsPackageReferenceAllowed @ 1420c9900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FLinkerLoad::IsPackageReferenceAllowed(FLinkerLoad *this,UPackage *param_1)

{
  bool bVar1;
  undefined1 auStack_898 [32];
  FName local_878;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined1 local_868 [8];
  undefined1 local_860 [8];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_898;
  if ((param_1 == (UPackage *)0x0) || (((uint)param_1->PackageFlagsPrivate >> 0xb & 1) == 0)) {
    bVar1 = true;
  }
  else {
    local_878 = *(FName *)(this->_padding_ + 0x18);
    local_858.Base = local_838;
    local_858.CurPos = local_838;
    local_858.End = local_22;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    ::FName::AppendString(&local_878,&local_858);
    uStack_870 = (undefined4)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1);
    local_878 = (FName)local_858.Base;
    FPackageName::GetPackageMountPoint((TStringView<wchar_t> *)local_860,SUB81(&local_878,0));
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    local_878 = (FName)param_1->_padding_;
    local_858.Base = local_838;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    local_858.CurPos = local_838;
    local_858.End = local_22;
    ::FName::AppendString(&local_878,&local_858);
    _uStack_870 = CONCAT44(uStack_86c,
                           (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1));
    local_878 = (FName)local_858.Base;
    FPackageName::GetPackageMountPoint((TStringView<wchar_t> *)local_868,SUB81(&local_878,0));
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    bVar1 = local_860 == local_868;
  }
  return bVar1;
}

// IsSoftObjectRemappingEnabled @ 1420c9a80

bool __thiscall FLinkerLoad::IsSoftObjectRemappingEnabled(FLinkerLoad *this)

{
  FLinkerInstancingContext *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  this_00 = &this->InstancingContext;
  bVar2 = FLinkerInstancingContext::IsInstanced(this_00);
  if (bVar2) {
    if ((this_00->SharedData).Object == (FSharedLinkerInstancingContextData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((this_00->SharedData).Object)->bSoftObjectPathRemappingEnabled != (atomic<bool>)0x0) {
      return true;
    }
  }
  return false;
}

// IsTimeLimitExceeded @ 1420c9af0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLinkerLoad::IsTimeLimitExceeded(FLinkerLoad *this,wchar_t *param_1,int param_2)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  double dVar4;
  FString local_38;
  FAssetLog local_28;
  
  iVar3 = this->IsTimeLimitExceededCallCount + 1;
  this->IsTimeLimitExceededCallCount = iVar3;
  if ((!this->bTimeLimitExceeded && this->bUseTimeLimit == true) && (iVar3 % param_2 == 0)) {
    dVar1 = FWindowsPlatformTime::Seconds();
    this->bTimeLimitExceeded = false;
    dVar1 = dVar1 - this->TickStartTime;
    dVar4 = (double)this->TimeLimit * __real_4004000000000000;
    bVar2 = 0;
    if ((double)this->TimeLimit < dVar1) {
      bVar2 = 0x10;
    }
    this->field_0x469 = this->field_0x469 | bVar2;
    if ((dVar4 < dVar1) && (4 < (byte)LogStreaming._0_1_)) {
      ::FString::PrintfImpl(&local_38,L"FLinkerLoad: %s took (less than) %5.2f ms");
      local_28.PackagePath = &this->PackagePath;
      local_28.Path = (wchar_t *)0x0;
      local_28.Object = (UObject *)0x0;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogStreaming.field_0x4,Log,&local_28,&local_38,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                 ,0x4f8);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return this->bTimeLimitExceeded;
}

// IsValidPackageIndex @ 1420c9d80

bool __thiscall FLinkerLoad::IsValidPackageIndex(FLinkerLoad *this,FPackageIndex param_1)

{
  if ((((-1 < param_1.Index) || (-1 < param_1.Index)) || ((int)this->_padding_ <= ~param_1.Index))
     && (((param_1.Index < 1 || (param_1.Index + -1 < 0)) ||
         ((int)this->_padding_ <= param_1.Index + -1)))) {
    return false;
  }
  return true;
}

// LoadAllObjects @ 1420c9db0

void __thiscall FLinkerLoad::LoadAllObjects(FLinkerLoad *this,bool param_1)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  UObject *this_00;
  UClass *pUVar6;
  FThreadHeartBeat *this_01;
  int iVar7;
  bool bVar8;
  LARGE_INTEGER local_res8;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4485,"LinkerLoad_LoadAllObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x1185);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4485);
  }
  bVar8 = true;
  if ((this->LoadFlags & 1) == 0) {
    bVar8 = param_1;
  }
  QueryPerformanceCounter(&local_res8);
  bVar4 = IsInGameThread();
  iVar7 = 0;
  if (0 < (int)this->_padding_) {
    do {
      bVar5 = IsExportBeingResolved(this,iVar7);
      if (!bVar5) {
        this_00 = CreateExport(this,iVar7);
        if (this_00 != (UObject *)0x0) {
          if (bVar8 == false) {
            pUVar6 = Z_Construct_UClass_UClass_NoRegister();
            iVar2 = (int)pUVar6->_padding_;
            if (((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar2) ||
                ((longlong *)
                 *(undefined1 **)
                  (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
                 &pUVar6->_padding_)) &&
               (bVar5 = UObjectBaseUtility::IsTemplate
                                  ((UObjectBaseUtility *)this_00,
                                   RF_ArchetypeObject|RF_ClassDefaultObject), !bVar5)) {
              pUVar6 = UObjectRedirector::GetPrivateStaticClass();
              iVar2 = (int)pUVar6->_padding_;
              if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar2) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8)
                  != &pUVar6->_padding_)) goto LAB_1420c9eef;
            }
          }
          Preload((FLinkerLoad *)&this->_padding_,this_00);
        }
LAB_1420c9eef:
        if ((bVar4) && (iVar7 == (iVar7 / 10) * 10)) {
          this_01 = FThreadHeartBeat::Get();
          FThreadHeartBeat::HeartBeat(this_01);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)this->_padding_);
  }
  if (this->_padding_ != 0) {
    pbVar1 = (byte *)(this->_padding_ + 0x28);
    *pbVar1 = *pbVar1 | 2;
  }
  if (!bVar3) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// LoadAndDetachAllBulkData @ 1420c9f70

void __thiscall FLinkerLoad::LoadAndDetachAllBulkData(FLinkerLoad *this)

{
  return;
}

// MarkScriptSerializationEnd @ 1420ca5b0

void __thiscall FLinkerLoad::MarkScriptSerializationEnd(FLinkerLoad *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FLinkerLoad *pFVar5;
  longlong lVar6;
  FName *this_00;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if ((param_1 != (UObject *)0x0) &&
     (pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_1),
     pFVar5 == (FLinkerLoad *)&this[-1]._padding_)) {
    uVar3 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)param_1);
    if ((-1 < (int)uVar3) && ((int)uVar3 < (int)this[-1]._padding_)) {
      uVar4 = 0;
      if ((int)uVar3 < (int)this[-1]._padding_) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FName *)((longlong)(int)uVar3 * 0x68 + this[-1]._padding_);
      lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
      if (((this->_padding_ & 0x40) == 0) && (0x3f1 < (int)((ulonglong)this->_padding_ >> 0x20))) {
        if (this_00[7] != (FName)(lVar6 - (longlong)this_00[5])) {
          local_res10 = *(FName *)(this[-1]._padding_ + 0x18);
          ::FName::ToString(&local_res10,&local_28);
          ::FName::ToString(this_00,&local_18);
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Export.ScriptSerializationEndOffset == RelativeSerialOffset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                             ,0x1990,
                             L"Serialized script property end offset %lld does not match offset during deserialization %lld for object %s in %s."
                            );
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      else {
        this_00[7] = (FName)(lVar6 - (longlong)this_00[5]);
      }
    }
  }
  return;
}

// MarkScriptSerializationStart @ 1420ca770

void __thiscall FLinkerLoad::MarkScriptSerializationStart(FLinkerLoad *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FLinkerLoad *pFVar5;
  longlong lVar6;
  FName *this_00;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if ((param_1 != (UObject *)0x0) &&
     (pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_1),
     pFVar5 == (FLinkerLoad *)&this[-1]._padding_)) {
    uVar3 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)param_1);
    if ((-1 < (int)uVar3) && ((int)uVar3 < (int)this[-1]._padding_)) {
      uVar4 = 0;
      if ((int)uVar3 < (int)this[-1]._padding_) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FName *)((longlong)(int)uVar3 * 0x68 + this[-1]._padding_);
      lVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
      if (((this->_padding_ & 0x40) == 0) && (0x3f1 < (int)((ulonglong)this->_padding_ >> 0x20))) {
        if (this_00[6] != (FName)(lVar6 - (longlong)this_00[5])) {
          local_res10 = *(FName *)(this[-1]._padding_ + 0x18);
          ::FName::ToString(&local_res10,&local_28);
          ::FName::ToString(this_00,&local_18);
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Export.ScriptSerializationStartOffset == RelativeSerialOffset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                             ,0x1973,
                             L"Serialized script property start offset %lld does not match offset during deserialization %lld for object %s in %s."
                            );
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      else {
        this_00[6] = (FName)(lVar6 - (longlong)this_00[5]);
      }
    }
  }
  return;
}

// OnNewFileAdded @ 1420ca930

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl FLinkerLoad::OnNewFileAdded(FString *param_1)

{
  bool bVar1;
  ForAnyElementType FVar2;
  FName local_res20;
  FString local_38;
  FCoreRedirectObjectName local_28;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar1 = FPackageName::TryConvertFilenameToLongPackageName(param_1,&local_38,(FString *)0x0,None);
  if (bVar1) {
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar2.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res20,(wchar_t *)FVar2.Data);
    local_28.PackageName = local_res20;
    local_28.ObjectName.ComparisonIndex.Value = 0;
    local_28.ObjectName.Number = 0;
    local_28.OuterName.ComparisonIndex.Value = 0;
    local_28.OuterName.Number = 0;
    bVar1 = FCoreRedirects::IsKnownMissing(Type_Package,&local_28);
    if (bVar1) {
      local_28.PackageName = local_res20;
      local_28.ObjectName.ComparisonIndex.Value = 0;
      local_28.ObjectName.Number = 0;
      local_28.OuterName.ComparisonIndex.Value = 0;
      local_28.OuterName.Number = 0;
      FCoreRedirects::RemoveKnownMissing(Type_Package,&local_28,Option_MissingLoad);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// OnPakFileMounted @ 1420caa00

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl FLinkerLoad::OnPakFileMounted(IPakFile *param_1)

{
  FCoreRedirects::ClearKnownMissing(Type_Package,Option_MissingLoad);
  return;
}

// PRIVATE_PatchNewObjectIntoExport @ 1420cacd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FLinkerLoad::PRIVATE_PatchNewObjectIntoExport
          (FLinkerLoad *this,int param_1,UObject *param_2,FUObjectSerializeContext *param_3,
          bool param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  int iVar4;
  UObjectBaseUtility *this_00;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  ulong64 uVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  EObjectFlags EVar23;
  FTlsAutoCleanup FVar24;
  longlong lVar25;
  undefined1 auStackY_198 [32];
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166 [6];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_160;
  EObjectFlags local_150;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  uint local_138;
  uint uStack_134;
  ForElementType<unsigned_int> FStack_130;
  undefined4 local_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  FTlsAutoCleanup local_118;
  undefined4 local_110;
  int local_10c;
  TPairInitializer<FName_&&,UObject_*_const_&> local_108;
  longlong local_f8;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  code *local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  if (param_1 < 0) {
    return;
  }
  FVar3 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((int)this->_padding_ <= param_1) {
    return;
  }
  uVar16 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  local_118 = (FTlsAutoCleanup)param_3;
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar25 = (longlong)param_1 * 0x68 + this->_padding_;
  this_00 = *(UObjectBaseUtility **)(lVar25 + 0x40);
  if (param_4) {
    if ((param_2 == (UObject *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(uint *)&param_2->field_0x8 >> 0x1e & 1) == 0) goto LAB_1420cadb8;
    bVar7 = true;
  }
  else {
LAB_1420cadb8:
    bVar7 = false;
  }
  if (this_00 == (UObjectBaseUtility *)param_2) {
    if (bVar7) goto LAB_1420cae95;
  }
  else {
    if (this_00 != (UObjectBaseUtility *)0x0) {
      EVar23 = *(EObjectFlags *)&this_00->field_0x8 &
               (RF_AllocatedInSharedPage|RF_MigratingAsset|RF_HasExternalPackage|RF_WillBeLoaded|
                RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
                RF_DuplicateTransient|RF_InheritableComponentTemplate|RF_LoadCompleted|
                RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|
                RF_FinishDestroyed|RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects
                |RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public);
      local_150 = EVar23;
      UObjectBaseUtility::ClearFlags(this_00,RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad);
      UObject::SetLinker((UObject *)this_00,(FLinkerLoad *)0x0,-1,true,false);
      UObjectBaseUtility::SetFlags((UObjectBaseUtility *)param_2,EVar23);
      FVar24 = local_118;
      if (local_118 == (FTlsAutoCleanup)0x0) {
        puVar10 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
        local_c0 = local_166;
        local_c8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar11 = FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c8,puVar10);
        FVar24 = pFVar11[0x2f];
      }
      bVar8 = FUObjectSerializeContext::PRIVATE_PatchNewObjectIntoExport
                        ((FUObjectSerializeContext *)FVar24,(UObject *)this_00,param_2);
      if ((!bVar8) && ((local_150 & RF_NeedPostLoad) != RF_NoFlags)) {
        FUObjectSerializeContext::AddLoadedObject((FUObjectSerializeContext *)FVar24,param_2);
      }
    }
    if (bVar7) {
LAB_1420cae95:
      UObjectBaseUtility::ClearFlags
                ((UObjectBaseUtility *)param_2,RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_NeedLoad
                );
      UObject::SetLinker(param_2,(FLinkerLoad *)0x0,-1,true,false);
      *(byte *)(lVar25 + 0x4c) = *(byte *)(lVar25 + 0x4c) | 0x80;
    }
    else {
      UObject::SetLinker(param_2,this,param_1,true,false);
      *(UObject **)(lVar25 + 0x40) = param_2;
    }
  }
  uVar14 = 0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  FindDirectChildExportsFromExportTable(this,param_1,&local_148);
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if (bVar7) goto LAB_1420cb1fa;
  local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_160.ArrayNum = 0;
  local_160.ArrayMax = 0;
  GetObjectsWithOuter((UObjectBase *)param_2,&local_160,false,RF_NoFlags,Borrowed);
  iVar13 = local_160.ArrayNum;
  uVar17 = (ulong64)local_160.ArrayNum;
  if ((uint)(local_a8._8_4_ - local_74) < (uint)local_160.ArrayNum) {
    if (local_160.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum(uVar17);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_a8,local_160.ArrayNum);
    if ((uint)iVar13 < 4) {
      uVar16 = 1;
    }
    else {
      uVar19 = (ulonglong)(((uint)iVar13 >> 1) + 7) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_110 = (undefined4)lVar25;
      uVar16 = 1 << ((byte)lVar25 & 0x1f);
    }
    if ((local_60 == 0) || ((int)local_60 < (int)uVar16)) {
      local_60 = uVar16;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
      }
      if (uVar16 != 0) {
        uVar9 = uVar16;
        if (uVar16 < 2) {
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            uVar9 = 0;
            goto LAB_1420cafcf;
          }
        }
        else {
LAB_1420cafcf:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar9,4);
        }
        if (0 < (int)uVar16) {
          uVar21 = (ulonglong)uVar16;
          uVar19 = uVar14;
          do {
            FVar18.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar18.Data = local_68.Data;
            }
            uVar12 = uVar19 & (longlong)(int)uVar16 - 1U;
            uVar19 = uVar19 + 1;
            *(undefined4 *)(FVar18.Data + uVar12 * 4) = 0xffffffff;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
      if (local_60 != 0) {
        local_138 = 0;
        uStack_134 = 1;
        uStack_124 = 0;
        uStack_120 = 0;
        if (local_80 != 0) {
          FVar22 = FVar3;
          if (local_88 != (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_88;
          }
          uVar16 = *(uint *)FVar22;
          uVar19 = uVar14;
          while (uVar16 == 0) {
            uStack_120 = (int)uVar19 + 0x20;
            uVar19 = (ulonglong)uStack_120;
            iVar13 = (int)uVar14;
            local_138 = iVar13 + 1;
            uVar14 = (ulonglong)local_138;
            if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_138)
            goto LAB_1420cb0e0;
            uVar16 = ((uint *)((longlong)FVar22 + 4))[iVar13];
          }
          uStack_134 = -uVar16 & uVar16;
          uVar14 = (ulonglong)uStack_134 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          local_10c = (int)lVar25;
          uStack_124 = local_10c + -1 + uStack_120;
          uVar14 = (ulonglong)uStack_124;
          if ((int)local_80 < (int)uStack_124) {
LAB_1420cb0e0:
            uVar14 = (ulonglong)local_80;
            uStack_124 = local_80;
          }
        }
        local_128 = 0xffffffff;
        local_f0 = (longlong *)local_a8;
        local_e8._padding_ = CONCAT44(uStack_134,local_138);
        local_e8.CurrentBitIndex = uStack_124;
        local_e8.UnvisitedBitMask = 0xffffffff;
        local_e8._28_4_ = uStack_11c;
        local_e8.BaseBitIndex = uStack_120;
        FStack_130 = FVar3;
        local_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar3;
        if ((int)uVar14 < (int)local_80) {
          do {
            iVar13 = (int)uVar14;
            uVar5 = *(undefined8 *)(*local_f0 + (longlong)iVar13 * 0x18);
            lVar25 = *local_f0 + (longlong)iVar13 * 0x18;
            uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
            uVar16 = local_60 - 1 & uVar16 + (int)((ulonglong)uVar5 >> 0x20);
            *(uint *)(lVar25 + 0x14) = uVar16;
            FVar18.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar18.Data = local_68.Data;
            }
            uVar14 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar16;
            *(undefined4 *)(lVar25 + 0x10) = *(undefined4 *)(FVar18.Data + uVar14 * 4);
            *(int *)(FVar18.Data + uVar14 * 4) = iVar13;
            local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
            uVar14 = (ulonglong)(uint)local_e8.CurrentBitIndex;
          } while (local_e8.CurrentBitIndex < (int)*(uint *)((longlong)local_e8.Array + 0x18));
        }
      }
    }
    uVar17 = local_160._8_8_ & 0xffffffff;
  }
  iVar13 = (int)uVar17;
  pFVar1 = local_160.AllocatorInstance.Data + (longlong)iVar13 * 8;
  FVar18.Data = local_160.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar17 != iVar13) {
      local_168 = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_168);
    }
    if (FVar18.Data == pFVar1) break;
    local_f8 = *(longlong *)FVar18.Data;
    local_108._4_8_ = *(undefined8 *)(local_f8 + 0x18);
    local_b8 = (undefined8 *)((longlong)&local_108.Key + 4);
    local_b0 = &local_f8;
    TSet<TTuple<FName,UObject_*>,TDefaultMapHashableKeyFuncs<FName,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&&,UObject_*_const_&>_>
              ((TSet<TTuple<FName,UObject_*>,TDefaultMapHashableKeyFuncs<FName,UObject_*,0>,FDefaultSetAllocator>
                *)local_a8,&local_108,(bool *)&local_b8);
    uVar17 = local_160._8_8_ & 0xffffffff;
    FVar18.Data = FVar18.Data + 8;
  }
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
LAB_1420cb1fa:
  FVar24 = local_118;
  iVar13 = local_148.ArrayNum;
  uVar14 = (ulonglong)local_148.ArrayNum;
  pFVar1 = local_148.AllocatorInstance.Data + uVar14 * 4;
  FVar18.Data = local_148.AllocatorInstance.Data;
LAB_1420cb210:
  do {
    if ((int)uVar14 != iVar13) {
      local_167 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_167);
    }
    if (FVar18.Data == pFVar1) {
      local_60 = 0;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      if (local_148.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_148.AllocatorInstance.Data);
      return;
    }
    uVar16 = *(uint *)FVar18.Data;
    uVar9 = 0;
    if ((int)uVar16 < (int)this->_padding_) {
      uVar9 = ~uVar16 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar25 = *(longlong *)((longlong)(int)uVar16 * 0x68 + this->_padding_);
    uVar9 = ::GetTypeHash((FNameEntryId)(uint)lVar25);
    if (local_a8._8_4_ != local_74) {
      FVar15.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar15.Data = local_68.Data;
      }
      iVar4 = *(int *)(FVar15.Data +
                      (ulonglong)(local_60 - 1 & (int)((ulonglong)lVar25 >> 0x20) + uVar9) * 4);
      while (iVar4 != -1) {
        pFVar2 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)iVar4 * 0x18);
        if (*(longlong *)(local_a8._0_8_ + (longlong)iVar4 * 0x18) == lVar25) {
          pFVar20 = pFVar2 + 8;
          if (pFVar2 == (FScriptContainerElement *)0x0) {
            pFVar20 = (FScriptContainerElement *)0x0;
          }
          if (pFVar20 != (FScriptContainerElement *)0x0) {
            PRIVATE_PatchNewObjectIntoExport
                      (this,uVar16,*(UObject **)pFVar20,(FUObjectSerializeContext *)FVar24,param_4);
            uVar14 = local_148._8_8_ & 0xffffffff;
            FVar18.Data = FVar18.Data + 4;
            goto LAB_1420cb210;
          }
          break;
        }
        iVar4 = *(int *)(pFVar2 + 0x10);
      }
    }
    InvalidateExportIndex(this,uVar16,param_4);
    uVar14 = local_148._8_8_ & 0xffffffff;
    FVar18.Data = FVar18.Data + 4;
  } while( true );
}

// PRIVATE_PatchNewObjectIntoExport @ 1420cb3c0

void __cdecl
FLinkerLoad::PRIVATE_PatchNewObjectIntoExport
          (UObject *param_1,UObject *param_2,FUObjectSerializeContext *param_3,bool param_4)

{
  int iVar1;
  FLinkerLoad *this;
  
  this = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_1);
  if (this != (FLinkerLoad *)0x0) {
    iVar1 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)param_1);
    PRIVATE_PatchNewObjectIntoExport(this,iVar1,param_2,param_3,param_4);
  }
  return;
}

// PopSerializedProperty @ 1420cb610

void __thiscall
FLinkerLoad::PopSerializedProperty(FLinkerLoad *this,FProperty *param_1,bool param_2)

{
  FArchive::PopSerializedProperty((FArchive *)this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001420cb64e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x248))((longlong *)this->_padding_,param_1,param_2);
  return;
}

// PopulateInstancingContext @ 1420cb660

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::PopulateInstancingContext(FLinkerLoad *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::PopulateInstancingContext(void)_::_2_::FStat_STAT_LinkerLoad_PopulateInstancingContext>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2293,"FLinkerLoad::PopulateInstancingContext",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x8f5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2293);
  }
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_LinkerLoad_PopulateInstancingContext ==
        (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::PopulateInstancingContext(void)_::_2_::FStat_STAT_LinkerLoad_PopulateInstancingContext>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_LinkerLoad_PopulateInstancingContext");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_PopulateInstancingContext,
                 *pFVar6,L"FLinkerLoad::PopulateInstancingContext","STATGROUP_LinkerLoad",
                 "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_LinkerLoad_PopulateInstancingContext;
  if (StatPtr_STAT_LinkerLoad_PopulateInstancingContext ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::PopulateInstancingContext(void)_::_2_::FStat_STAT_LinkerLoad_PopulateInstancingContext>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_LinkerLoad_PopulateInstancingContext");
    FVar7 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::PopulateInstancingContext(void)_::_2_::FStat_STAT_LinkerLoad_PopulateInstancingContext>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_LinkerLoad_PopulateInstancingContext,*pFVar6,
                         L"FLinkerLoad::PopulateInstancingContext","STATGROUP_LinkerLoad",
                         "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x8f6);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_1420cb827;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_1420cb827:
  if (!this->bHasPopulatedInstancingContext) {
    this->field_0x468 = this->field_0x468 | 0x20;
  }
  bVar5 = IsTimeLimitExceeded(this,L"populating instancing context",1);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5 + LINKER_Loaded;
}

// Preload @ 1420cbd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLinkerLoad::Preload(FLinkerLoad *this,UObject *param_1)

{
  int *piVar1;
  FRecursiveMutex *this_00;
  FName FVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  code *pcVar7;
  FNameEntryId FVar8;
  bool bVar9;
  FChannel *pFVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  FLinkerLoad *pFVar16;
  void *pvVar17;
  UClass *pUVar18;
  UPackage *pUVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_LinkerPreload> FVar21;
  TStatId TVar22;
  FThreadSafeStaticStat<FStat_STAT_LinkerPrecache> FVar23;
  FThreadStats *pFVar24;
  FThreadStatsPool *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_LinkerSerialize> FVar26;
  TEventRef<unsigned_int> TVar27;
  FTlsAutoCleanup *pFVar28;
  FWriteBuffer *pFVar29;
  FStructuredArchiveFromArchive *this_01;
  UPackage *pUVar30;
  uint *puVar31;
  byte bVar32;
  uint uVar33;
  longlong lVar34;
  UObject *pUVar35;
  undefined1 auStackY_788 [32];
  FSerializeExportScope local_727;
  char local_726;
  FName local_720;
  FName local_718;
  byte local_710;
  FName local_708;
  byte local_700;
  FName local_6f8;
  byte local_6f0;
  undefined1 local_6e7;
  undefined1 local_6e6;
  undefined1 local_6e5;
  undefined1 local_6e4 [4];
  uint local_6e0;
  FName local_6d8;
  byte local_6d0;
  FName local_6c8;
  FName local_6c0;
  FCycleCounter local_6b8;
  FLLMScope local_6a8 [2];
  UClass *local_6a0;
  FColor_u_0 local_698;
  FColor_u_0 local_694;
  FLinkerLoad *local_690;
  UClass *local_688;
  longlong local_680;
  uint local_678;
  FColor_u_0 local_674;
  FName local_670;
  FName local_668;
  FName local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  FScopedObjectSerializeContext local_640;
  undefined8 local_638;
  UObject *local_630;
  longlong local_628;
  LARGE_INTEGER local_620;
  longlong local_618;
  longlong local_610;
  LARGE_INTEGER local_608;
  FMemScope local_600;
  FName local_5f8;
  FName local_5f0;
  LARGE_INTEGER local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  FStatMessage local_5d0;
  FStatMessage local_5c0;
  FString local_5b0;
  FStatMessage local_5a0;
  undefined4 local_588;
  undefined4 uStack_584;
  char *pcStack_580;
  char *local_578;
  code *local_568;
  undefined1 *local_560;
  code *local_558;
  undefined1 *local_550;
  code *local_548;
  undefined1 *local_540;
  FString local_538;
  FString local_528;
  code *local_518;
  undefined1 *local_510;
  FAssetLog local_508;
  FAssetLog local_4f0;
  FName local_4d8;
  FName local_4d0;
  FName local_4c8;
  FName local_4c0;
  FName local_4b8;
  FName local_4b0 [3];
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FName local_438 [2];
  source_location local_428;
  undefined4 *local_408;
  longlong local_400;
  TStringBuilderBase<wchar_t> local_3f8;
  wchar_t local_3d8 [256];
  FStructuredArchiveFromArchive local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_788;
  local_690 = this;
  local_688 = (UClass *)param_1;
  FLLMScope::FLLMScope
            (local_6a8,LLMTagDeclaration_UObject_Linker.UniqueName,false,None,Default,true);
  local_5f8 = LLMTagDeclaration_UObject_Linker.UniqueName;
  FMemScope::FMemScope(&local_600,&local_5f8,true);
  if ((param_1 == (UObject *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                          ,0x125a,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (FRecursiveMutex *)((longlong)&this->_padding_ + 4);
  UE::FRecursiveMutex::Lock(this_00);
  if ((*(uint *)&param_1->field_0x8 >> 10 & 1) == 0) goto LAB_1420cd4b4;
  pFVar16 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_1);
  if (pFVar16 != (FLinkerLoad *)&this[-1]._padding_) {
    pFVar16 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)param_1);
    if (pFVar16 != (FLinkerLoad *)0x0) {
      UE::FRecursiveMutex::Lock(&pFVar16->Mutex);
      uVar33 = pFVar16->LoadFlags;
      pFVar16->LoadFlags = (uint)this->_padding_ & 0x100000 | uVar33;
      Preload((FLinkerLoad *)&pFVar16->_padding_,param_1);
      pFVar16->LoadFlags = uVar33;
      UE::FRecursiveMutex::Unlock(&pFVar16->Mutex);
    }
    goto LAB_1420cd4b4;
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4710,"FLinkerLoad::Preload",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x1266);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4710);
  }
  pFVar10 = AssetLoadTimeChannel;
  local_5f0.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  local_5f0.Number = *(uint *)&param_1->field_0x1c;
  local_3f8.Base = local_3d8;
  local_3f8.bIsDynamic = false;
  local_3f8.bIsExternal = false;
  local_3f8.CurPos = local_3d8;
  local_3f8.End = (wchar_t *)&local_1d8;
  pvVar17 = FGenericPlatformString::Memcpy(local_3d8,L"FLinkerLoad::Preload ",0x2a);
  local_3f8.CurPos = (wchar_t *)((longlong)pvVar17 + 0x2a);
  ::FName::AppendString(&local_5f0,&local_3f8);
  if (local_3f8.End < (FStructuredArchiveFromArchive *)(local_3f8.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_3f8,1);
  }
  *local_3f8.CurPos = L'\0';
  if ((CpuChannel->Enabled < 0) || (pFVar10->Enabled < 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (local_3f8.Base,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x1268);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_3f8);
  pUVar18 = Z_Construct_UClass_UClass_NoRegister();
  iVar15 = (int)pUVar18->_padding_;
  pUVar35 = (UObject *)0x0;
  if ((iVar15 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar15 * 8) ==
      &pUVar18->_padding_)) {
    pUVar35 = param_1;
  }
  local_630 = pUVar35;
  if ((GEventDrivenLoaderEnabled != false) && (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_488,(UObject *)0x0);
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!GEventDrivenLoaderEnabled || !bLockoutLegacyOperations || !(1)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                        ,0x126d,
                        L"Invalid call to FLinkerLoad::Preload while using the EDL. \'%s\' should have been reported via GetPreloadDependencies instead."
                       );
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar19 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  bVar32 = ~(byte)((uint)pUVar19->PackageFlagsPrivate >> 4) & 1;
  if (((pUVar35 == (UObject *)0x0) || (bVar32 == 0)) ||
     ((*(uint *)(*(longlong *)&pUVar35->field_0x10 + 0xd4) >> 0x11 & 1) == 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  pUVar18 = Z_Construct_UClass_UScriptStruct_NoRegister();
  iVar15 = (int)pUVar18->_padding_;
  if (((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar15) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
       &pUVar18->_padding_)) || (bVar32 == 0)) {
    local_726 = '\0';
  }
  else {
    local_726 = '\x01';
  }
  if ((bVar12) || (local_726 != '\0')) {
    bVar13 = FBlueprintSupport::UseDeferredDependencyLoading();
    bVar12 = true;
    if (!bVar13) goto LAB_1420cc0b5;
  }
  else {
LAB_1420cc0b5:
    bVar12 = false;
  }
  bVar13 = FDeferredObjInitializationHelper::DeferObjectPreload(param_1);
  if (!bVar13) {
    FVar21 = StatPtr_STAT_LinkerPreload;
    if (StatPtr_STAT_LinkerPreload == (FThreadSafeStaticStat<FStat_STAT_LinkerPreload>)0x0) {
      pFVar20 = ::FName::FName(local_438,"STAT_LinkerPreload");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_LinkerPreload>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerPreload,*pFVar20,
                          L"Linker Preload","STATGROUP_LinkerLoad","STATCAT_Advanced",L"Linker Load"
                          ,false,true,ST_int64,true,false,MCR_Invalid);
    }
    local_718.ComparisonIndex.Value = 0;
    local_718.Number = 0;
    local_710 = 0;
    local_720 = *(FName *)FVar21;
    uVar33 = local_720.Number;
    if ((local_720.ComparisonIndex.Value.Value != 0) || (uVar33 != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_698.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_698._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
        local_710 = local_710 | 1;
        if (-1 < CpuChannel->Enabled) {
          local_670.ComparisonIndex = local_720.ComparisonIndex.Value;
          local_670.Number = uVar33;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_670,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                     ,0x1295);
          local_710 = local_710 | 2;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_718.Number = uVar33;
        local_718.ComparisonIndex.Value = local_720.ComparisonIndex.Value.Value;
        local_6c8 = local_718;
        FThreadStats::AddMessage(local_718,CycleScopeStart);
        local_710 = local_710 | 4;
      }
    }
    TVar22.StatIdPtr = (TStatIdData *)StatPtr_STAT_LinkerPreload;
    if (StatPtr_STAT_LinkerPreload == (FThreadSafeStaticStat<FStat_STAT_LinkerPreload>)0x0) {
      pFVar20 = ::FName::FName(&local_4d8,"STAT_LinkerPreload");
      TVar22.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerPreload,*pFVar20,
                      L"Linker Preload","STATGROUP_LinkerLoad","STATCAT_Advanced",L"Linker Load",
                      false,true,ST_int64,true,false,MCR_Invalid);
    }
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_6d8,(UObjectBaseUtility *)param_1,TVar22);
    pUVar18 = Z_Construct_UClass_UStruct_NoRegister();
    iVar15 = (int)pUVar18->_padding_;
    if ((((iVar15 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar15 * 8) ==
          &pUVar18->_padding_)) && (param_1 != (UObject *)0x0)) &&
       (*(UObject **)&param_1[1].field_0x18 != (UObject *)0x0)) {
      Preload(this,*(UObject **)&param_1[1].field_0x18);
    }
    local_6e0 = (uint)this->_padding_;
    *(uint *)&this->_padding_ = local_6e0;
    if (bVar12) {
      *(uint *)&this->_padding_ = local_6e0 | 0x100000;
    }
    if ((*(uint *)&param_1->field_0x8 >> 10 & 1) == 0) {
LAB_1420cd309:
      *(uint *)&this->_padding_ = local_6e0;
      if ((local_6d0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_6d0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_6d0 & 4) != 0) {
        FThreadStats::AddMessage(local_6d8,CycleScopeEnd);
      }
      local_6d0 = 0;
      if ((local_710 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_710 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FVar2 = local_718;
      if ((((local_710 & 4) != 0) && (local_718 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar24 == (FThreadStats *)0x0) {
          pFVar25 = FThreadStatsPool::Get();
          pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
        }
        if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
          local_5a0.NameAndInfo.Index = FVar2.ComparisonIndex.Value;
          local_5a0.NameAndInfo.Number = FVar2.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_608);
          local_5a0.StatData.Pad[4] = '\0';
          local_5a0.StatData.Pad[5] = '\0';
          local_5a0.StatData.Pad[6] = '\0';
          local_5a0.StatData.Pad[7] = '\0';
          local_5a0.StatData.Pad[0] = local_608.s.LowPart._0_1_;
          local_5a0.StatData.Pad[1] = local_608.s.LowPart._1_1_;
          local_5a0.StatData.Pad[2] = local_608.s.LowPart._2_1_;
          local_5a0.StatData.Pad[3] = local_608.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar24,&local_5a0);
          piVar1 = &pFVar24->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar24,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar24,false,false);
          }
        }
      }
    }
    else {
      local_678 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)param_1);
      lVar34 = (longlong)(int)local_678;
      uVar33 = 0;
      if ((int)local_678 < (int)this[-1]._padding_) {
        uVar33 = ~local_678 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar2 = (FName)this[-1]._padding_;
      lVar34 = lVar34 * 0x68;
      local_6c8 = FVar2;
      local_680 = lVar34;
      if ((*(UObject **)(lVar34 + 0x40 + (longlong)FVar2) != param_1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Export.Object==Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                              ,0x12af,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_638 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
      local_610 = *(longlong *)(lVar34 + 0x20 + (longlong)FVar2);
      local_618 = *(longlong *)(lVar34 + 0x28 + (longlong)FVar2);
      (**(code **)(*(longlong *)this->_padding_ + 0x1b8))((longlong *)this->_padding_,local_618);
      if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
        local_6c0.ComparisonIndex.Value = 0;
        local_6c0.Number = 0;
      }
      else {
        local_6c0 = (FName)this->_padding_;
      }
      FVar23 = StatPtr_STAT_LinkerPrecache;
      if (StatPtr_STAT_LinkerPrecache == (FThreadSafeStaticStat<FStat_STAT_LinkerPrecache>)0x0) {
        pFVar20 = ::FName::FName(&local_4d0,"STAT_LinkerPrecache");
        FVar23 = (FThreadSafeStaticStat<FStat_STAT_LinkerPrecache>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerPrecache,*pFVar20,
                            L"Linker Precache","STATGROUP_LinkerLoad","STATCAT_Advanced",
                            L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
      }
      local_6f8.ComparisonIndex.Value = 0;
      local_6f8.Number = 0;
      local_6f0 = 0;
      local_720 = *(FName *)FVar23;
      uVar33 = local_720.Number;
      if ((local_720.ComparisonIndex.Value.Value != 0) || (uVar33 != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_694.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_694._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
          local_6f0 = local_6f0 | 1;
          if (-1 < CpuChannel->Enabled) {
            local_668.ComparisonIndex = local_720.ComparisonIndex.Value;
            local_668.Number = uVar33;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_668,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x12cb);
            local_6f0 = local_6f0 | 2;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          FVar8 = local_720.ComparisonIndex.Value;
          local_720.Number = uVar33;
          local_720.ComparisonIndex.Value = FVar8.Value;
          local_6f8 = local_720;
          FThreadStats::AddMessage(local_720,CycleScopeStart);
          local_6f0 = local_6f0 | 4;
        }
      }
      if (local_6c0 == (FName)0x0) {
        (**(code **)(*(longlong *)this->_padding_ + 0x1f0))
                  ((longlong *)this->_padding_,
                   *(undefined8 *)(local_680 + 0x28 + (longlong)local_6c8));
      }
      else {
        bVar32 = *(byte *)((longlong)&this->_padding_ + 1);
        bVar12 = FAsyncArchive::PrecacheWithTimeLimit
                           ((FAsyncArchive *)local_6c0,
                            *(long64 *)(local_680 + 0x28 + (longlong)local_6c8),
                            *(long64 *)(local_680 + 0x20 + (longlong)local_6c8),
                            (bool)(bVar32 >> 5 & 1),(bool)(bVar32 >> 6 & 1),(double)this->_padding_,
                            (double)*(float *)&this->_padding_);
        if (((2 < (byte)LogLinker._0_1_) && (!bVar12)) && ((this->_padding_ & 0x2000) != 0)) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_478,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLinker);
          if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_478.Data.AllocatorInstance.Data);
          }
        }
      }
      if ((local_6f0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_6f0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FVar2 = local_6f8;
      if ((((local_6f0 & 4) != 0) && (local_6f8 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar24 == (FThreadStats *)0x0) {
          pFVar25 = FThreadStatsPool::Get();
          pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
        }
        if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
          local_5d0.NameAndInfo.Index = FVar2.ComparisonIndex.Value;
          local_5d0.NameAndInfo.Number = FVar2.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_5e8);
          local_5d0.StatData.Pad[4] = '\0';
          local_5d0.StatData.Pad[5] = '\0';
          local_5d0.StatData.Pad[6] = '\0';
          local_5d0.StatData.Pad[7] = '\0';
          local_5d0.StatData.Pad[0] = local_5e8.s.LowPart._0_1_;
          local_5d0.StatData.Pad[1] = local_5e8.s.LowPart._1_1_;
          local_5d0.StatData.Pad[2] = local_5e8.s.LowPart._2_1_;
          local_5d0.StatData.Pad[3] = local_5e8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar24,&local_5d0);
          piVar1 = &pFVar24->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar24,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar24,false,false);
          }
        }
      }
      local_6f0 = 0;
      UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_NeedLoad);
      FVar26 = StatPtr_STAT_LinkerSerialize;
      if (StatPtr_STAT_LinkerSerialize == (FThreadSafeStaticStat<FStat_STAT_LinkerSerialize>)0x0) {
        pFVar20 = ::FName::FName(&local_4c8,"STAT_LinkerSerialize");
        FVar26 = (FThreadSafeStaticStat<FStat_STAT_LinkerSerialize>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerSerialize,*pFVar20,
                            L"Linker Serialize","STATGROUP_LinkerLoad","STATCAT_Advanced",
                            L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
      }
      local_708.ComparisonIndex.Value = 0;
      local_708.Number = 0;
      local_700 = 0;
      FVar2 = *(FName *)FVar26;
      if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar2.Number != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_674.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_674._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
          local_700 = local_700 | 1;
          if (-1 < CpuChannel->Enabled) {
            local_660.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
            local_660.Number = FVar2.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_660,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x12dc);
            local_700 = local_700 | 2;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          local_708 = FVar2;
          local_6c0 = FVar2;
          FThreadStats::AddMessage(FVar2,CycleScopeStart);
          local_700 = local_700 | 4;
        }
      }
      FLoadTimeProfilerTracePrivate::FSerializeExportScope::FSerializeExportScope
                (&local_727,param_1,*(ulong64 *)(local_680 + 0x20 + (longlong)local_6c8));
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        TVar27 = (TEventRef<unsigned_int>)&local_658;
        local_658 = 0;
      }
      else {
        local_5e0 = *(undefined8 *)&param_1->field_0x18;
        TVar27 = FStringTrace::GetNameRef(&local_4c0);
      }
      uVar3 = *(undefined8 *)TVar27;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_650 = 0;
        TVar27 = (TEventRef<unsigned_int>)&local_650;
      }
      else {
        local_5d8 = *(undefined8 *)(*(longlong *)&param_1->field_0x10 + 0x18);
        TVar27 = FStringTrace::GetNameRef(&local_4b8);
      }
      uVar4 = *(undefined8 *)TVar27;
      if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
        local_648 = 0;
        TVar27 = (TEventRef<unsigned_int>)&local_648;
      }
      else {
        pUVar19 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
        local_628 = pUVar19->_padding_;
        TVar27 = FStringTrace::GetNameRef(local_4b0);
      }
      uVar5 = *(undefined8 *)TVar27;
      bVar12 = false;
      if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
        UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_408)
        ;
        bVar12 = true;
        *local_408 = (int)uVar3;
        local_408[1] = (int)uVar4;
        local_408[2] = (int)uVar5;
        *(undefined8 *)(local_400 + 0x28) = *(undefined8 *)(local_400 + 0x20);
      }
      pUVar18 = local_688;
      bVar13 = GEventDrivenLoaderEnabled == false;
      if (GEventDrivenLoaderEnabled == false) {
        local_560 = &local_6e7;
        local_568 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        local_6a0 = local_688;
        pFVar28 = FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_568,
                             &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                              ::__l2::TlsSlot);
        if ((((ulonglong)pFVar28[2] <= &local_6a0) &&
            (&local_6a0 <
             (UClass **)((longlong)pFVar28[2] + (longlong)*(int *)&pFVar28[3].field_0x4 * 8))) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar15 = *(int *)(pFVar28 + 3);
        if (iVar15 == *(int *)&pFVar28[3].field_0x4) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(pFVar28 + 2),(int *)&pFVar28[3].field_0x4)
          ;
        }
        *(int *)(pFVar28 + 3) = iVar15 + 1;
        *(UClass **)(*(FScriptContainerElement **)(pFVar28 + 2) + (longlong)iVar15 * 8) = local_6a0;
      }
      this = local_690;
      UE::FScopedObjectSerializeContext::FScopedObjectSerializeContext
                (&local_640,(UObject *)pUVar18,(FArchive *)local_690);
      if (((uint)pUVar18->_padding_ >> 4 & 1) == 0) {
        (**(code **)(pUVar18->_padding_ + 200))(pUVar18,this);
LAB_1420ccc70:
        UObjectBaseUtility::SetFlags((UObjectBaseUtility *)pUVar18,RF_LoadCompleted);
        UE::FScopedObjectSerializeContext::~FScopedObjectSerializeContext(&local_640);
        if (bVar13) {
          local_540 = &local_6e5;
          local_548 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar28 = FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_548,
                               &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                                ::__l2::TlsSlot);
          if ((*(int *)(pFVar28 + 3) < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(int *)(pFVar28 + 3) = *(int *)(pFVar28 + 3) + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)(pFVar28 + 2),*(int *)(pFVar28 + 3),
                     (int *)&pFVar28[3].field_0x4);
        }
        if (bVar12) {
          pFVar29 = UE::Trace::Private::Writer_GetBuffer();
          if ((int)pFVar29 - *(int *)&pFVar29->Cursor < 1) {
            pFVar29 = UE::Trace::Private::Writer_NextBuffer();
          }
          *pFVar29->Cursor = '\n';
          pFVar29->Cursor = pFVar29->Cursor + 1;
          pFVar29->Committed = pFVar29->Cursor;
        }
        FLoadTimeProfilerTracePrivate::FSerializeExportScope::~FSerializeExportScope(&local_727);
        if ((local_700 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_700 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        FVar2 = local_708;
        if ((((local_700 & 4) != 0) && (local_708 != (FName)0x0)) &&
           ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))
           )) {
          pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar24 == (FThreadStats *)0x0) {
            pFVar25 = FThreadStatsPool::Get();
            pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
          }
          if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
            local_5c0.NameAndInfo.Index = FVar2.ComparisonIndex.Value;
            local_5c0.NameAndInfo.Number = FVar2.Number & 0xffff6fff | 0x6000;
            QueryPerformanceCounter(&local_620);
            local_5c0.StatData.Pad[4] = '\0';
            local_5c0.StatData.Pad[5] = '\0';
            local_5c0.StatData.Pad[6] = '\0';
            local_5c0.StatData.Pad[7] = '\0';
            local_5c0.StatData.Pad[0] = local_620.s.LowPart._0_1_;
            local_5c0.StatData.Pad[1] = local_620.s.LowPart._1_1_;
            local_5c0.StatData.Pad[2] = local_620.s.LowPart._2_1_;
            local_5c0.StatData.Pad[3] = local_620.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar24,&local_5c0);
            piVar1 = &pFVar24->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar24,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar24,false,false);
            }
          }
        }
        local_700 = 0;
        TVar22 = FThreadSafeStaticStatInner<FStat_STAT_LinkerLoadDeferred,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_LinkerLoadDeferred,1> *)
                            &StatPtr_STAT_LinkerLoadDeferred);
        local_588 = 0x1360;
        uStack_584 = 6;
        pcStack_580 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
        ;
        local_428._Line = 0x1360;
        local_428._Column = 6;
        local_578 = "void __cdecl FLinkerLoad::Preload(class UObject *)";
        local_6b8.StatId.ComparisonIndex.Value = 0;
        local_6b8.StatId.Number = 0;
        local_6b8.EmittedEvent = 0;
        local_428._File =
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
        ;
        local_428._Function = "void __cdecl FLinkerLoad::Preload(class UObject *)";
        FCycleCounter::Start
                  (&local_6b8,*(TStatIdData **)&(TVar22.StatIdPtr)->Name,CycleStat|ClearEveryFrame,
                   false,(FSourceLocation *)&local_428);
        if (((local_6e0 ^ (uint)this->_padding_) >> 0x14 & 1) != 0) {
          if (local_726 == '\0') {
            if ((int)this->_padding_ == -1) {
              iVar15 = FindCDOExportIndex((FLinkerLoad *)&this[-1]._padding_,pUVar18);
              *(int *)&this->_padding_ = iVar15;
            }
            ResolveDeferredDependencies((FLinkerLoad *)&this[-1]._padding_,(UStruct *)pUVar18);
            FinalizeBlueprint((FLinkerLoad *)&this[-1]._padding_,pUVar18);
          }
          else {
            ResolveDeferredDependencies((FLinkerLoad *)&this[-1]._padding_,(UStruct *)pUVar18);
          }
        }
        if ((local_6b8.EmittedEvent & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_6b8.EmittedEvent & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_6b8.EmittedEvent & 4) != 0) {
          FThreadStats::AddMessage(local_6b8.StatId,CycleScopeEnd);
        }
        local_6b8.EmittedEvent = '\0';
        if (((uint)pUVar18->_padding_ >> 4 & 1) == 0) {
          FDeferredObjInitializationHelper::ResolveDeferredInitsFromArchetype((UObject *)pUVar18);
        }
        lVar34 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
        if (lVar34 - local_618 != local_610) {
          if ((*(uint *)(pUVar18->_padding_ + 0xd4) >> 0x19 & 1) == 0) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)pUVar18,&local_468,(UObject *)0x0,None);
            ::FString::PrintfImpl(&local_528,L"%s: Serial size mismatch: Got %d, Expected %lld");
            local_4f0.PackagePath = (FPackagePath *)&this->_padding_;
            local_4f0.Path = (wchar_t *)0x0;
            local_4f0.Object = (UObject *)0x0;
            UE::Core::Private::RecordAssetLog
                      ((FName *)&LogLinker.field_0x4,Fatal,&local_4f0,&local_528,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x13a8);
            if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_528.Data.AllocatorInstance.Data);
            }
            if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_468.Data.AllocatorInstance.Data);
            }
            bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
            if (!bVar12) {
              FWindowsPlatformMisc::PromptForRemoteDebugging(false);
            }
            bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
            if (bVar12) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)pUVar18,&local_448,(UObject *)0x0,None);
            ::FString::PrintfImpl(&local_5b0,L"%s: Serial size mismatch: Got %d, Expected %lld");
            FAssetMsg::FormatPathForAssetLog(&local_458,(FPackagePath *)&this->_padding_);
            ::FDebug::AssertFailed
                      ("",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x13a8,L"%s: %s");
            if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_458.Data.AllocatorInstance.Data);
            }
            if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
            }
            if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_448.Data.AllocatorInstance.Data);
            }
          }
          else if (2 < (byte)LogLinker._0_1_) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)pUVar18,&local_498,(UObject *)0x0,None);
            ::FString::PrintfImpl(&local_538,L"%s: Serial size mismatch: Got %d, Expected %lld");
            local_508.Path = (wchar_t *)0x0;
            local_508.PackagePath = (FPackagePath *)&this->_padding_;
            local_508.Object = (UObject *)0x0;
            UE::Core::Private::RecordAssetLog
                      ((FName *)&LogLinker.field_0x4,Warning,&local_508,&local_538,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x13a4);
            if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_538.Data.AllocatorInstance.Data);
            }
            if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_498.Data.AllocatorInstance.Data);
            }
          }
        }
        (**(code **)(*(longlong *)this->_padding_ + 0x1b8))((longlong *)this->_padding_,local_638);
        if (((local_630 != (UObject *)0x0) && (*(longlong *)&local_630[6].field_0x20 != 0)) &&
           (*(int *)&local_630[2].field_0x8 != 0)) {
          Preload(this,*(UObject **)&local_630[6].field_0x20);
        }
        if ((((uint)pUVar18->_padding_ >> 4 & 1) != 0) &&
           ((*(uint *)(pUVar18->_padding_ + 0xd4) >> 0x12 & 1) != 0)) {
          UObjectBaseUtility::SetFlags((UObjectBaseUtility *)pUVar18,RF_WasLoaded|RF_NeedPostLoad);
          if (((this[-1]._padding_ == 0) ||
              (pUVar19 = (UPackage *)this[-1]._padding_,
              pUVar30 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar18),
              pUVar19 != pUVar30)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("LinkerRoot && LinkerRoot == Object->GetOutermost()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                  ,0x13e0,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          puVar31 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
          local_510 = local_6e4;
          local_518 = UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar28 = FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_518,puVar31);
          FUObjectSerializeContext::AddLoadedObject
                    ((FUObjectSerializeContext *)pFVar28[0x2f],(UObject *)pUVar18);
        }
        goto LAB_1420cd309;
      }
      if ((this->_padding_ & 0x100000) == 0) {
        plVar6 = (longlong *)pUVar18->_padding_;
        pcVar7 = *(code **)(*plVar6 + 0x3c0);
        this_01 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                            (&local_1d8,(FArchive *)local_690);
        FStructuredArchiveFromArchive::GetSlot(this_01);
        (*pcVar7)(plVar6,pUVar18);
        FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d8);
        this = local_690;
        goto LAB_1420ccc70;
      }
      *(uint *)&this->_padding_ = local_678;
      if ((GEventDrivenLoaderEnabled != false) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("!GEventDrivenLoaderEnabled || !(1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                              ,0x1304,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      UObjectBaseUtility::SetFlags((UObjectBaseUtility *)pUVar18,RF_NeedLoad);
      (**(code **)(*(longlong *)this->_padding_ + 0x1b8))((longlong *)this->_padding_,local_638);
      UE::FScopedObjectSerializeContext::~FScopedObjectSerializeContext(&local_640);
      if (bVar13) {
        local_550 = &local_6e6;
        local_558 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FPlaceholderContainerTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar28 = FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_558,
                             &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FPlaceholderContainerTracker>::GetTlsSlot(void)'
                              ::__l2::TlsSlot);
        if ((*(int *)(pFVar28 + 3) < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(int *)(pFVar28 + 3) = *(int *)(pFVar28 + 3) + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)(pFVar28 + 2),*(int *)(pFVar28 + 3),
                   (int *)&pFVar28[3].field_0x4);
      }
      if (bVar12) {
        pFVar29 = UE::Trace::Private::Writer_GetBuffer();
        if ((int)pFVar29 - *(int *)&pFVar29->Cursor < 1) {
          pFVar29 = UE::Trace::Private::Writer_NextBuffer();
        }
        *pFVar29->Cursor = '\n';
        pFVar29->Cursor = pFVar29->Cursor + 1;
        pFVar29->Committed = pFVar29->Cursor;
      }
      FLoadTimeProfilerTracePrivate::FSerializeExportScope::~FSerializeExportScope(&local_727);
      if ((local_700 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_700 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_700 & 4) != 0) {
        FThreadStats::AddMessage(local_708,CycleScopeEnd);
      }
      local_700 = 0;
      *(uint *)&this->_padding_ = local_6e0;
      if ((local_6d0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_6d0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_6d0 & 4) != 0) {
        FThreadStats::AddMessage(local_6d8,CycleScopeEnd);
      }
      local_6d0 = 0;
      if ((local_710 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_710 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_710 & 4) != 0) {
        FThreadStats::AddMessage(local_718,CycleScopeEnd);
      }
    }
    local_710 = 0;
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_1420cd4b4:
  UE::FRecursiveMutex::Unlock(this_00);
  FMemScope::~FMemScope(&local_600);
  FLLMScope::~FLLMScope(local_6a8);
  return;
}

// ProcessPackageSummary @ 1420cd9b0

ELinkerStatus __thiscall
FLinkerLoad::ProcessPackageSummary
          (FLinkerLoad *this,
          TMap<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
          *param_1)

{
  int *piVar1;
  FStructuredArchiveRecord FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  ELinkerStatus EVar6;
  int iVar7;
  FArchive *pFVar8;
  FSoftObjectPath *this_00;
  FLLMScope local_res18 [2];
  FName local_res20;
  FSlotBase local_38;
  FMemScope local_30;
  
  FLoadTimeProfilerTracePrivate::OutputBeginProcessSummary(this);
  FLLMScope::FLLMScope
            (local_res18,LLMTagDeclaration_UObject_Linker.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UObject_Linker.UniqueName;
  FMemScope::FMemScope(&local_30,&local_res20,true);
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    EVar6 = SerializePackageFileSummary(this);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId905,"LinkerLoad_SerializePackageFileSummary",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x389);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId905);
    EVar6 = SerializePackageFileSummary(this);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (EVar6 == LINKER_Loaded) {
    if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
      EVar6 = SerializePackageTrailer(this);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId912,"LinkerLoad_SerializePackageTrailer",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                 ,0x390);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId912);
      EVar6 = SerializePackageTrailer(this);
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (EVar6 == LINKER_Loaded) {
      if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
        EVar6 = SerializeNameMap(this);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId919,"LinkerLoad_SerializeNameMap",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x397);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId919);
        EVar6 = SerializeNameMap(this);
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (EVar6 == LINKER_Loaded) {
        if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId926,"LinkerLoad_SerializeSoftObjectPathList",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                     ,0x39e);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId926);
        }
        if ((this->SoftObjectPathListIndex == 0) && (0 < (int)this->_padding_)) {
          (**(code **)(*(longlong *)this->Loader + 0x1b8))
                    (this->Loader,(longlong)*(int *)((longlong)&this->_padding_ + 4));
        }
        if (((this->StructuredArchiveRootRecord).bIsSet == false) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          EVar6 = (*pcVar3)();
          return EVar6;
        }
        EVar6 = LINKER_Loaded;
        FVar2 = (this->StructuredArchiveRootRecord).TypedValue;
        if (this->SoftObjectPathListIndex < (int)this->_padding_) {
          do {
            bVar5 = IsTimeLimitExceeded(this,L"serializing soft object path list",100);
            if (bVar5) break;
            iVar7 = (int)this->_padding_;
            piVar1 = (int *)((longlong)&this->_padding_ + 4);
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,(ForAnyElementType *)&this->_padding_,piVar1);
            }
            *(int *)&this->_padding_ = iVar7 + 1;
            this_00 = (FSoftObjectPath *)(this->_padding_ + (longlong)iVar7 * 0x20);
            DefaultConstructItems<FSoftObjectPath,int>(this_00,1);
            local_38.StructuredArchive = (FStructuredArchive *)FVar2;
            pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_38);
            FSoftObjectPath::SerializePath(this_00,pFVar8);
            this->SoftObjectPathListIndex = this->SoftObjectPathListIndex + 1;
          } while (this->SoftObjectPathListIndex < (int)this->_padding_);
        }
        if ((this->SoftObjectPathListIndex != (int)this->_padding_) ||
           (bVar5 = IsTimeLimitExceeded(this,L"serializing soft object path list",1), bVar5)) {
          EVar6 = LINKER_TimedOut;
        }
        if (bVar4) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (EVar6 == LINKER_Loaded) {
          if ((-1 < CpuChannel->Enabled) && (-1 < LoadTimeChannel->Enabled)) {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId933,"LinkerLoad_SerializeGatherableTextDataMap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x3a5);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId933);
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
            EVar6 = SerializeImportMap(this);
          }
          else {
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId940,"LinkerLoad_SerializeImportMap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x3ac);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId940);
            EVar6 = SerializeImportMap(this);
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (EVar6 == LINKER_Loaded) {
            if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
              EVar6 = SerializeExportMap(this);
            }
            else {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId947,"LinkerLoad_SerializeExportMap",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0x3b3);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId947);
              EVar6 = SerializeExportMap(this);
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (EVar6 == LINKER_Loaded) {
              if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
                EVar6 = FixupImportMap(this);
              }
              else {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&__CpuProfilerEventSpecId963,"LinkerLoad_FixupImportMap",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0x3c3);
                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId963);
                EVar6 = FixupImportMap(this);
                FCpuProfilerTrace::OutputEndEvent();
              }
              if (EVar6 == LINKER_Loaded) {
                if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
                  EVar6 = PopulateInstancingContext(this);
                }
                else {
                  FCpuProfilerTrace::GetOrCreateSpecId
                            (&__CpuProfilerEventSpecId970,"LinkerLoad_PopulateInstancingContext",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                             ,0x3ca);
                  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId970);
                  EVar6 = PopulateInstancingContext(this);
                  FCpuProfilerTrace::OutputEndEvent();
                }
                if (EVar6 == LINKER_Loaded) {
                  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
                    EVar6 = RelocateReferences(this);
                  }
                  else {
                    FCpuProfilerTrace::GetOrCreateSpecId
                              (&__CpuProfilerEventSpecId977,
                               "LinkerLoad_ApplyRelocationToImportMapAndSoftObjectPathList",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                               ,0x3d1);
                    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId977);
                    EVar6 = RelocateReferences(this);
                    FCpuProfilerTrace::OutputEndEvent();
                  }
                  if (EVar6 == LINKER_Loaded) {
                    if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
                      EVar6 = ApplyInstancingContext(this);
                    }
                    else {
                      FCpuProfilerTrace::GetOrCreateSpecId
                                (&__CpuProfilerEventSpecId984,
                                 "LinkerLoad_ApplyInstancingContextToSoftObjectPathList",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                 ,0x3d8);
                      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId984);
                      EVar6 = ApplyInstancingContext(this);
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                    if (EVar6 == LINKER_Loaded) {
                      if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
                        EVar6 = FixupExportMap(this);
                      }
                      else {
                        FCpuProfilerTrace::GetOrCreateSpecId
                                  (&__CpuProfilerEventSpecId991,"LinkerLoad_FixupExportMap",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                   ,0x3df);
                        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId991);
                        EVar6 = FixupExportMap(this);
                        FCpuProfilerTrace::OutputEndEvent();
                      }
                      if (EVar6 == LINKER_Loaded) {
                        if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
                          EVar6 = SerializeDependsMap(this);
                        }
                        else {
                          FCpuProfilerTrace::GetOrCreateSpecId
                                    (&__CpuProfilerEventSpecId1007,"LinkerLoad_SerializeDependsMap",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                     ,0x3ef);
                          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1007);
                          EVar6 = SerializeDependsMap(this);
                          FCpuProfilerTrace::OutputEndEvent();
                        }
                        if (EVar6 == LINKER_Loaded) {
                          if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
                            EVar6 = CreateExportHash(this);
                          }
                          else {
                            FCpuProfilerTrace::GetOrCreateSpecId
                                      (&__CpuProfilerEventSpecId1014,"LinkerLoad_CreateExportHash",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                       ,0x3f6);
                            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1014);
                            EVar6 = CreateExportHash(this);
                            FCpuProfilerTrace::OutputEndEvent();
                          }
                          if (EVar6 == LINKER_Loaded) {
                            if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
                              EVar6 = FindExistingExports(this);
                            }
                            else {
                              FCpuProfilerTrace::GetOrCreateSpecId
                                        (&__CpuProfilerEventSpecId1021,
                                         "LinkerLoad_FindExistingExports",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                         ,0x3fd);
                              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1021);
                              EVar6 = FindExistingExports(this);
                              FCpuProfilerTrace::OutputEndEvent();
                            }
                            if (EVar6 == LINKER_Loaded) {
                              if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
                                EVar6 = SerializePreloadDependencies(this);
                              }
                              else {
                                FCpuProfilerTrace::GetOrCreateSpecId
                                          (&__CpuProfilerEventSpecId1027,
                                           "LinkerLoad_SerializePreloadDependencies",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                           ,0x403);
                                FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1027);
                                EVar6 = SerializePreloadDependencies(this);
                                FCpuProfilerTrace::OutputEndEvent();
                              }
                              if (EVar6 == LINKER_Loaded) {
                                if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
                                  EVar6 = SerializeDataResourceMap(this);
                                }
                                else {
                                  FCpuProfilerTrace::GetOrCreateSpecId
                                            (&__CpuProfilerEventSpecId1033,
                                             "LinkerLoad_SerializeDataResources",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                             ,0x409);
                                  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1033);
                                  EVar6 = SerializeDataResourceMap(this);
                                  FCpuProfilerTrace::OutputEndEvent();
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FLoadTimeProfilerTracePrivate::OutputEndProcessSummary();
  if (EVar6 == LINKER_Loaded) {
    if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
      EVar6 = FinalizeCreation(this,param_1);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1050,"LinkerLoad_FinalizeCreation",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                 ,0x41a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1050);
      EVar6 = FinalizeCreation(this,param_1);
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  FMemScope::~FMemScope(&local_30);
  FLLMScope::~FLLMScope(local_res18);
  return EVar6;
}

// PushSerializedProperty @ 1420ce680

void __thiscall
FLinkerLoad::PushSerializedProperty(FLinkerLoad *this,FProperty *param_1,bool param_2)

{
  FArchive::PushSerializedProperty((FArchive *)this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001420ce6be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x240))((longlong *)this->_padding_,param_1,param_2);
  return;
}

// RelocateReferences @ 1420d0400

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::RelocateReferences(FLinkerLoad *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::RelocateReferences(void)_::_2_::FStat_STAT_LinkerLoad_RelocateReferences>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_LinkerLoad_RelocateReferences ==
          (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::RelocateReferences(void)_::_2_::FStat_STAT_LinkerLoad_RelocateReferences>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_LinkerLoad_RelocateReferences");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_RelocateReferences,*pFVar6,
                   L"FLinkerLoad::RelocateReferences","STATGROUP_LinkerLoad","STATCAT_Advanced",
                   L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_LinkerLoad_RelocateReferences;
  if (StatPtr_STAT_LinkerLoad_RelocateReferences ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::RelocateReferences(void)_::_2_::FStat_STAT_LinkerLoad_RelocateReferences>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_LinkerLoad_RelocateReferences");
    FVar7 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::RelocateReferences(void)_::_2_::FStat_STAT_LinkerLoad_RelocateReferences>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_RelocateReferences,
                         *pFVar6,L"FLinkerLoad::RelocateReferences","STATGROUP_LinkerLoad",
                         "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x956);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_1420d0585;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_1420d0585:
  if (!this->bHasRelocatedReferences) {
    this->field_0x468 = this->field_0x468 | 0x40;
  }
  bVar5 = IsTimeLimitExceeded(this,L"relocating the ImportMap and SoftObjectPathList",1);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar5 + LINKER_Loaded;
}

// RemoveKnownMissingPackage @ 1420d17a0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __cdecl FLinkerLoad::RemoveKnownMissingPackage(FName param_1)

{
  bool bVar1;
  FCoreRedirectObjectName local_28;
  
  local_28.ObjectName.ComparisonIndex.Value = 0;
  local_28.ObjectName.Number = 0;
  local_28.OuterName.ComparisonIndex.Value = 0;
  local_28.OuterName.Number = 0;
  local_28.PackageName = param_1;
  bVar1 = FCoreRedirects::RemoveKnownMissing(Type_Package,&local_28,Option_MissingLoad);
  return bVar1;
}

// ResetStatusInfo @ 1420d4110

void __thiscall FLinkerLoad::ResetStatusInfo(FLinkerLoad *this)

{
  longlong *plVar1;
  code *pcVar2;
  FEngineVersion *pFVar3;
  
  plVar1 = &this->_padding_;
  (**(code **)(*plVar1 + 0x110))(plVar1,GPackageFileUEVersion);
  (**(code **)(*plVar1 + 0x118))(plVar1,GPackageFileLicenseeUEVersion);
  pcVar2 = *(code **)(*plVar1 + 0x120);
  pFVar3 = FEngineVersion::Current();
  (*pcVar2)(plVar1,pFVar3);
  (**(code **)(*plVar1 + 200))(plVar1,1);
  (**(code **)(*plVar1 + 0x108))(plVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0001420d4189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x70))(plVar1);
  return;
}

// ResolveResource @ 1420d5ec0

UObject * __thiscall FLinkerLoad::ResolveResource(FLinkerLoad *this,FPackageIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FObjectExport *pFVar4;
  FObjectImport *pFVar5;
  
  if ((!GEventDrivenLoaderEnabled) || (this->bForceSimpleIndexToObject == false)) {
    pUVar3 = IndexToObject(this,param_1);
    return pUVar3;
  }
  if (((this->_padding_ & 1) == 0) || (this->AsyncRoot == (void *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsLoading() && AsyncRoot",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x11fd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  if (param_1.Index == 0) {
    return (UObject *)0x0;
  }
  if (0 < param_1.Index) {
    pFVar4 = FLinkerTables::Exp((FLinkerTables *)&this->_padding_,param_1);
    return pFVar4->Object;
  }
  pFVar5 = FLinkerTables::Imp((FLinkerTables *)&this->_padding_,param_1);
  return pFVar5->XObject;
}

// ResolveResourceName @ 1420d5f80

FName __thiscall FLinkerLoad::ResolveResourceName(FLinkerLoad *this,FPackageIndex param_1)

{
  FObjectResource *pFVar1;
  uint in_register_00000014;
  FName FVar2;
  FPackageIndex in_R8D;
  
  FVar2.Number = in_register_00000014;
  FVar2.ComparisonIndex.Value = param_1.Index;
  if (in_R8D.Index == 0) {
    *(undefined8 *)FVar2 = 0;
    return FVar2;
  }
  pFVar1 = FLinkerTables::ImpExp((FLinkerTables *)&this->_padding_,in_R8D);
  *(FName *)FVar2 = pFVar1->ObjectName;
  return FVar2;
}

// Seek @ 1420d6360

void __thiscall FLinkerLoad::Seek(FLinkerLoad *this,long64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001420d636a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x1b8))();
  return;
}

// Serialize @ 1420d65b0

void __thiscall FLinkerLoad::Serialize(FLinkerLoad *this,void *param_1,long64 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001420d65ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x188))();
  return;
}

// SerializeBulkData @ 1420d65d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLinkerLoad::SerializeBulkData
          (FLinkerLoad *this,FBulkData *param_1,FBulkDataSerializationParams *param_2)

{
  uchar *puVar1;
  char cVar2;
  EBulkDataFlags EVar3;
  uint uVar4;
  code *pcVar5;
  TConsoleVariableData<bool> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  FName FVar10;
  FIoChunkId *pFVar11;
  IPackageResourceManager *pIVar12;
  longlong lVar13;
  longlong lVar14;
  void *pvVar15;
  IMappedFileHandle *pIVar16;
  IMappedFileRegion *pIVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  EPackageSegment EVar20;
  long64 lVar21;
  byte bVar22;
  undefined1 auStackY_c8 [32];
  FBulkDataCookedIndex local_98 [8];
  long64 local_90;
  FBulkDataSerializationParams *local_88;
  FString local_70;
  FIoChunkId local_60;
  FIoChunkId local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if ((this->_padding_ & 0x8000000) != 0) {
    return false;
  }
  local_88 = param_2;
  if (((param_1->BulkMeta).Data[0xb] != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BulkData.IsUnlocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0x1c8a,L"Serialize bulk data FAILED, bulk data is locked"), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_98[0].Value = '\0';
  local_90 = -1;
  SerializeBulkMeta((FLinkerLoad *)&this[-1]._padding_,&param_1->BulkMeta,local_98,&local_90,
                    param_2->ElementSize);
  cVar2 = *(char *)((longlong)&this->_padding_ + 2);
  if (cVar2 < '\0') {
    puVar1 = (param_1->BulkMeta).Data + 0xc;
    *(uint *)puVar1 = *(uint *)puVar1 | 0x40000;
  }
  EVar3 = *(EBulkDataFlags *)((param_1->BulkMeta).Data + 0xc);
  lVar13 = this->_padding_;
  bVar22 = (byte)(EVar3 >> 0x11);
  bVar7 = FBulkData::HasFlags(EVar3,BULKDATA_PayloadInSeparateFile);
  if (bVar7) {
    if ((EVar3 >> 0xb & 1) == 0) {
      EVar20 = BulkDataDefault;
      if ((EVar3 >> 0xc & 1) != 0) {
        EVar20 = BulkDataMemoryMapped;
      }
    }
    else {
      EVar20 = BulkDataOptional;
    }
  }
  else {
    EVar20 = (byte)lVar13 >> 1 & Exports;
  }
  FVar10 = FPackagePath::GetPackageFName((FPackagePath *)&this->_padding_);
  pFVar11 = UE::CreatePackageResourceChunkId
                      (&local_60,(FName *)FVar10,EVar20,local_98,(bool)(bVar22 & 1));
  *(undefined8 *)(param_1->BulkChunkId).Id = *(undefined8 *)pFVar11->Id;
  *(undefined4 *)((param_1->BulkChunkId).Id + 8) = *(undefined4 *)(pFVar11->Id + 8);
  uVar4 = *(uint *)((param_1->BulkMeta).Data + 0xc);
  if ((uVar4 & 1) == 0) {
    if ((local_98[0].Value != '\0') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CookedIndex.IsDefault()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0x1ca3,L"Inline bulkdata cannot be assigned a chunk group!"), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if ((this->_padding_ & 2) != 0) {
      pIVar12 = IPackageResourceManager::Get();
      lVar13 = (**(code **)((longlong)*pIVar12 + 0x20))
                         (pIVar12,&this->_padding_,local_98[0].Value,0);
      lVar14 = (**(code **)(*(longlong *)this->_padding_ + 0x28))((longlong *)this->_padding_);
      UE::BulkData::Private::FBulkMetaData::SetOffset(&param_1->BulkMeta,lVar14 - lVar13);
    }
    pvVar15 = FBulkData::FAllocatedPtr::ReallocateData
                        (&param_1->DataAllocation,param_1,
                         (ulonglong)*(uint5 *)(param_1->BulkMeta).Data);
    FBulkData::SerializeBulkData
              (param_1,(FArchive *)this,pvVar15,(ulonglong)*(uint5 *)(param_1->BulkMeta).Data,
               *(EBulkDataFlags *)((param_1->BulkMeta).Data + 0xc));
  }
  else {
    if ((uVar4 >> 8 & 1) == 0) {
      if ((local_98[0].Value != '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CookedIndex.IsDefault()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                             ,0x1cd4,
                             L"Bulkdata stored within the same file cannot be assigned a chunk group!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (((this->_padding_ & 2) != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLoadingFromCookedPackage() == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                             ,0x1cd7,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pTVar6 = CVarApplyBulkDataFix.Ref;
      if ((*(uint *)((param_1->BulkMeta).Data + 0xc) & 0x20000) == 0) {
        bVar7 = IsInParallelGameThread();
        if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
          lVar13 = 0;
        }
        else {
          lVar13 = 1;
        }
        if ((pTVar6->ShadowedValue[lVar13] == false) ||
           ((*(uint *)((param_1->BulkMeta).Data + 0xc) & 0x10000) == 0)) {
          uVar19 = (ulonglong)*(uint5 *)((param_1->BulkMeta).Data + 5);
          if (0xfffffffffe < uVar19) {
            uVar19 = 0xffffffffffffffff;
          }
          UE::BulkData::Private::FBulkMetaData::SetOffset
                    (&param_1->BulkMeta,
                     uVar19 + (longlong)this[-1].ImportsToVerifyOnCreate.Hash.SecondaryData);
        }
        else if (0x3f0 < (int)((ulonglong)*(undefined8 *)((longlong)&this[-1]._padding_ + 4) >> 0x20
                              )) {
          uVar19 = (ulonglong)*(uint5 *)((param_1->BulkMeta).Data + 5);
          if (0xfffffffffe < uVar19) {
            uVar19 = 0xffffffffffffffff;
          }
          UE::BulkData::Private::FBulkMetaData::SetOffset
                    (&param_1->BulkMeta,
                     uVar19 + (longlong)this[-1].ImportsToVerifyOnCreate.Hash.SecondaryData);
        }
      }
      if (cVar2 < '\0') {
        return true;
      }
      uVar19 = (ulonglong)*(uint5 *)((param_1->BulkMeta).Data + 5);
      uVar18 = (**(code **)(this->_padding_ + 0x28))(this);
      if (0xfffffffffe < uVar19) {
        uVar19 = 0xffffffffffffffff;
      }
      (**(code **)(this->_padding_ + 0x1b8))(this,uVar19);
      pvVar15 = FBulkData::FAllocatedPtr::ReallocateData
                          (&param_1->DataAllocation,param_1,
                           (ulonglong)*(uint5 *)(param_1->BulkMeta).Data);
      FBulkData::SerializeBulkData
                (param_1,(FArchive *)this,pvVar15,(ulonglong)*(uint5 *)(param_1->BulkMeta).Data,
                 *(EBulkDataFlags *)((param_1->BulkMeta).Data + 0xc));
      (**(code **)(this->_padding_ + 0x1b8))(this,uVar18);
      goto LAB_1420d6d3c;
    }
    if ((uVar4 >> 0xe & 1) == 0) {
      if ((uVar4 >> 0xc & 1) != 0) {
        if ((local_98[0].Value != '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CookedIndex.IsDefault()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                               ,0x1cbf,
                               L"Bulkdata with memory mapped payloads cannot be assigned a chunk group!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if (cVar2 < '\0') {
          if (local_88->bAttemptMemoryMapping == false) {
            return true;
          }
          pIVar12 = IPackageResourceManager::Get();
          pIVar16 = (IMappedFileHandle *)
                    (**(code **)((longlong)*pIVar12 + 0x38))(pIVar12,&this->_padding_,4,0);
          if (pIVar16 == (IMappedFileHandle *)0x0) {
            pIVar16 = (IMappedFileHandle *)0x0;
          }
          else {
            uVar19 = (ulonglong)*(uint5 *)((param_1->BulkMeta).Data + 5);
            if (0xfffffffffe < uVar19) {
              uVar19 = 0xffffffffffffffff;
            }
            pIVar17 = (IMappedFileRegion *)
                      (**(code **)(pIVar16->_padding_ + 8))
                                (pIVar16,uVar19,(ulonglong)*(uint5 *)(param_1->BulkMeta).Data,1);
            if (pIVar17 != (IMappedFileRegion *)0x0) {
              FBulkData::FAllocatedPtr::SetMemoryMappedData
                        (&param_1->DataAllocation,param_1,pIVar16,pIVar17);
              return true;
            }
          }
          if (2 < (byte)LogSerialization._0_1_) {
            FPackagePath::GetDebugName((FPackagePath *)&this->_padding_,&local_70);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
            if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
          }
          FBulkData::ForceBulkDataResident(param_1);
          if (pIVar16 == (IMappedFileHandle *)0x0) {
            return true;
          }
          (**(code **)pIVar16->_padding_)(pIVar16,1);
          return true;
        }
        goto LAB_1420d6d3c;
      }
    }
    else {
      if ((local_98[0].Value != '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CookedIndex.IsDefault()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                             ,0x1cb3,
                             L"Bulkdata with duplicate non optional payloads cannot be assigned a chunk group!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pIVar12 = IPackageResourceManager::Get();
      cVar9 = (**(code **)((longlong)*pIVar12 + 0x18))(pIVar12,&this->_padding_,local_98[0].Value,3)
      ;
      if (cVar9 != '\0') {
        FVar10 = FPackagePath::GetPackageFName((FPackagePath *)&this->_padding_);
        pFVar11 = UE::CreatePackageResourceChunkId
                            (&local_50,(FName *)FVar10,BulkDataOptional,
                             &FBulkDataCookedIndex::Default,(bool)(bVar22 & 1));
        lVar21 = local_90;
        *(undefined8 *)(param_1->BulkChunkId).Id = *(undefined8 *)pFVar11->Id;
        *(undefined4 *)((param_1->BulkChunkId).Id + 8) = *(undefined4 *)(pFVar11->Id + 8);
        *(uint *)((param_1->BulkMeta).Data + 0xc) =
             *(uint *)((param_1->BulkMeta).Data + 0xc) & 0xffffbfff | 0x800;
        if (local_90 < 0xffffffffff) {
          if (local_90 < 0) {
            lVar21 = 0x7fffffffffffffff;
          }
        }
        else {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Offset <= MaxOffset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\BulkData.h"
                             ,0x16d,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
        }
        (param_1->BulkMeta).Data[5] = (uchar)lVar21;
        (param_1->BulkMeta).Data[6] = (uchar)((ulonglong)lVar21 >> 8);
        (param_1->BulkMeta).Data[7] = (uchar)((ulonglong)lVar21 >> 0x10);
        (param_1->BulkMeta).Data[9] = (uchar)((ulonglong)lVar21 >> 0x20);
        (param_1->BulkMeta).Data[8] = (uchar)((ulonglong)lVar21 >> 0x18);
      }
    }
  }
  if (cVar2 < '\0') {
    return true;
  }
LAB_1420d6d3c:
  FBulkData::ForceBulkDataResident(param_1);
  puVar1 = (param_1->BulkMeta).Data + 0xc;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffbffff;
  *(undefined8 *)(param_1->BulkChunkId).Id = FIoChunkId::InvalidChunkId.Id._0_8_;
  *(undefined4 *)((param_1->BulkChunkId).Id + 8) = FIoChunkId::InvalidChunkId.Id._8_4_;
  return true;
}

// SerializeBulkMeta @ 1420d6db0

void __thiscall
FLinkerLoad::SerializeBulkMeta
          (FLinkerLoad *this,FBulkMetaData *param_1,FBulkDataCookedIndex *param_2,long64 *param_3,
          int param_4)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong *this_00;
  longlong lVar5;
  longlong lVar6;
  uint local_res8 [2];
  
  this_00 = &this->_padding_;
  if ((int)this->_padding_ == 0) {
    UE::BulkData::Private::FBulkMetaData::FromSerialized
              ((FArchive *)this_00,(longlong)param_4,param_1,param_3);
    return;
  }
  plVar1 = (longlong *)this->_padding_;
  local_res8[0] = 0xffffffff;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(*this_00 + 0x188))(this_00,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  lVar5 = (longlong)(int)local_res8[0];
  uVar4 = 0;
  if ((int)local_res8[0] < (int)this->_padding_) {
    uVar4 = ~local_res8[0] >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar6 = lVar5 * 0x30 + this->_padding_;
  *(undefined4 *)(param_1->Data + 0xc) = *(undefined4 *)(lVar6 + 0x2c);
  UE::BulkData::Private::FBulkMetaData::SetOffset(param_1,*(long64 *)(lVar6 + 8));
  lVar5 = *(longlong *)(lVar6 + 0x20);
  if (0xffffffffff < lVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size <= MaxSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\BulkData.h"
                       ,0x151,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  param_1->Data[0] = (uchar)lVar5;
  param_1->Data[1] = (uchar)((ulonglong)lVar5 >> 8);
  param_1->Data[2] = (uchar)((ulonglong)lVar5 >> 0x10);
  param_1->Data[3] = (uchar)((ulonglong)lVar5 >> 0x18);
  param_1->Data[4] = (uchar)((ulonglong)lVar5 >> 0x20);
  *param_3 = *(long64 *)(lVar6 + 0x10);
  param_2->Value = *(uchar *)(lVar6 + 4);
  return;
}

// SerializeDataResourceMap @ 1420d6f40

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::SerializeDataResourceMap(FLinkerLoad *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ELinkerStatus EVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeDataResourceMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeDataResourceMap>
  FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_LinkerLoad_SerializeDataResourceMap ==
          (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeDataResourceMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeDataResourceMap>
           )0x0) {
        pFVar9 = ::FName::FName(&local_58,"STAT_LinkerLoad_SerializeDataResourceMap");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_SerializeDataResourceMap,
                   *pFVar9,L"FLinkerLoad::SerializeDataResourceMap","STATGROUP_LinkerLoad",
                   "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar10 = StatPtr_STAT_LinkerLoad_SerializeDataResourceMap;
  if (StatPtr_STAT_LinkerLoad_SerializeDataResourceMap ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeDataResourceMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeDataResourceMap>
       )0x0) {
    pFVar9 = ::FName::FName(&local_50,"STAT_LinkerLoad_SerializeDataResourceMap");
    FVar10 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeDataResourceMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeDataResourceMap>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_LinkerLoad_SerializeDataResourceMap,*pFVar9,
                          L"FLinkerLoad::SerializeDataResourceMap","STATGROUP_LinkerLoad",
                          "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0xa8a);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar12.Value;
      local_res20.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_1420d70b6;
    }
  }
  bVar5 = false;
  FVar13 = local_48;
LAB_1420d70b6:
  iVar2 = (int)this->_padding_;
  if (0 < iVar2) {
    (**(code **)(*(longlong *)this->Loader + 0x1b8))(this->Loader,(longlong)iVar2);
    if ((this->StructuredArchiveRootRecord).bIsSet == false) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        EVar8 = (*pcVar3)();
        return EVar8;
      }
    }
    FObjectDataResource::Serialize
              (*(FStructuredArchiveSlot *)&(this->StructuredArchiveRootRecord).TypedValue,
               (TArray<FObjectDataResource,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return LINKER_Loaded;
}

// SerializeDependsMap @ 1420d72b0

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::SerializeDependsMap(FLinkerLoad *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeDependsMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeDependsMap>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  bool bVar9;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_LinkerLoad_SerializeDependsMap ==
          (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeDependsMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeDependsMap>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res10.s,"STAT_LinkerLoad_SerializeDependsMap");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_SerializeDependsMap,*pFVar4
                   ,L"FLinkerLoad::SerializeDependsMap","STATGROUP_LinkerLoad","STATCAT_Advanced",
                   L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_LinkerLoad_SerializeDependsMap;
  if (StatPtr_STAT_LinkerLoad_SerializeDependsMap ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeDependsMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeDependsMap>
       )0x0) {
    pFVar4 = ::FName::FName(local_res18,"STAT_LinkerLoad_SerializeDependsMap");
    FVar5 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeDependsMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeDependsMap>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_SerializeDependsMap,
                         *pFVar4,L"FLinkerLoad::SerializeDependsMap","STATGROUP_LinkerLoad",
                         "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar7.Value;
        local_res10.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0xa30);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar9 = FThreadStats::bPrimaryEnable == false;
    if (bVar9) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res10.s.LowPart = FVar7.Value;
      local_res10.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
    }
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar9) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Index = FVar8.ComparisonIndex.Value;
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_res10);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return LINKER_Loaded;
}

// SerializeExportMap @ 1420d75b0

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::SerializeExportMap(FLinkerLoad *this)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  FStructuredArchiveSlot FVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bVar11;
  ELinkerStatus EVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeExportMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeExportMap>
  FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  FObjectExport *pFVar19;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_LinkerLoad_SerializeExportMap ==
        (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeExportMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeExportMap>
         )0x0) {
      pFVar14 = ::FName::FName(&local_res20,"STAT_LinkerLoad_SerializeExportMap");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_SerializeExportMap,*pFVar14,
                 L"FLinkerLoad::SerializeExportMap","STATGROUP_LinkerLoad","STATCAT_Advanced",
                 L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_LinkerLoad_SerializeExportMap;
  if (StatPtr_STAT_LinkerLoad_SerializeExportMap ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeExportMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeExportMap>
       )0x0) {
    pFVar14 = ::FName::FName(&local_68,"STAT_LinkerLoad_SerializeExportMap");
    FVar15 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeExportMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeExportMap>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_SerializeExportMap,
                          *pFVar14,L"FLinkerLoad::SerializeExportMap","STATGROUP_LinkerLoad",
                          "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar18 = *(FName *)FVar15;
  bVar6 = false;
  bVar8 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar17.Value;
        local_res10.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x988);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar17.Value;
      local_res18.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_1420d7726;
    }
  }
  bVar7 = false;
  FVar18 = local_60;
LAB_1420d7726:
  if ((this->ExportMapIndex == 0) && (0 < *(int *)((longlong)&this->_padding_ + 4))) {
    (**(code **)(*(longlong *)this->Loader + 0x1b8))(this->Loader,(longlong)(int)this->_padding_);
  }
  if (((this->StructuredArchiveRootRecord).bIsSet == false) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar11)) {
    pcVar5 = (code *)swi(3);
    EVar12 = (*pcVar5)();
    return EVar12;
  }
  EVar12 = LINKER_Loaded;
  FVar4 = *(FStructuredArchiveSlot *)&(this->StructuredArchiveRootRecord).TypedValue;
  if (this->ExportMapIndex < *(int *)((longlong)&this->_padding_ + 4)) {
    do {
      bVar11 = IsTimeLimitExceeded(this,L"serializing export map",100);
      if (bVar11) break;
      iVar13 = (int)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x868,(ForAnyElementType *)&this->_padding_,piVar1);
      }
      *(int *)&this->_padding_ = iVar13 + 1;
      pFVar19 = (FObjectExport *)(this->_padding_ + (longlong)iVar13 * 0x68);
      DefaultConstructItems<FObjectExport,int>(pFVar19,1);
      ::operator<<(FVar4,pFVar19);
      iVar13 = this->ExportMapIndex;
      if ((iVar13 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ExportIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                              ,0x6d,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        EVar12 = (*pcVar5)();
        return EVar12;
      }
      iVar13 = iVar13 + 1;
      (pFVar19->ThisIndex).Index = iVar13;
      if ((((pFVar19->bExportLoadFailed) || (pFVar19->bWasFiltered)) ||
          (((char)this->_padding_ != '\0' && (pFVar19->bNotForServer)))) ||
         ((*(char *)((longlong)&this->_padding_ + 1) != '\0' && (pFVar19->bNotForClient)))) {
        bVar11 = true;
      }
      else {
        bVar11 = iVar13 == 0;
      }
      pFVar19->bWasFiltered = false;
      pFVar19->field_0x4d = pFVar19->field_0x4d | bVar11;
      this->ExportMapIndex = this->ExportMapIndex + 1;
    } while (this->ExportMapIndex < *(int *)((longlong)&this->_padding_ + 4));
  }
  if ((this->ExportMapIndex != *(int *)((longlong)&this->_padding_ + 4)) ||
     (bVar11 = IsTimeLimitExceeded(this,L"serializing export map",1), bVar11)) {
    EVar12 = LINKER_TimedOut;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return EVar12;
}

// SerializeGatherableTextDataMap @ 1420d7a40

ELinkerStatus __thiscall FLinkerLoad::SerializeGatherableTextDataMap(FLinkerLoad *this,bool param_1)

{
  return LINKER_Loaded;
}

// SerializeImportMap @ 1420d7a50

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::SerializeImportMap(FLinkerLoad *this)

{
  int *piVar1;
  FStructuredArchiveSlot FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ELinkerStatus EVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeImportMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeImportMap>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FObjectImport *pFVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_LinkerLoad_SerializeImportMap ==
        (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeImportMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeImportMap>
         )0x0) {
      pFVar10 = ::FName::FName(&local_res20,"STAT_LinkerLoad_SerializeImportMap");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_SerializeImportMap,*pFVar10,
                 L"FLinkerLoad::SerializeImportMap","STATGROUP_LinkerLoad","STATCAT_Advanced",
                 L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_LinkerLoad_SerializeImportMap;
  if (StatPtr_STAT_LinkerLoad_SerializeImportMap ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeImportMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeImportMap>
       )0x0) {
    pFVar10 = ::FName::FName(&local_68,"STAT_LinkerLoad_SerializeImportMap");
    FVar11 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeImportMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeImportMap>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_SerializeImportMap,
                          *pFVar10,L"FLinkerLoad::SerializeImportMap","STATGROUP_LinkerLoad",
                          "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x818);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_1420d7bc4;
    }
  }
  bVar5 = false;
  FVar14 = local_60;
LAB_1420d7bc4:
  if ((this->ImportMapIndex == 0) && (0 < *(int *)((longlong)&this->_padding_ + 4))) {
    (**(code **)(*(longlong *)this->Loader + 0x1b8))(this->Loader,(longlong)(int)this->_padding_);
  }
  if (((this->StructuredArchiveRootRecord).bIsSet == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar7)) {
    pcVar3 = (code *)swi(3);
    EVar8 = (*pcVar3)();
    return EVar8;
  }
  EVar8 = LINKER_Loaded;
  FVar2 = *(FStructuredArchiveSlot *)&(this->StructuredArchiveRootRecord).TypedValue;
  if (this->ImportMapIndex < *(int *)((longlong)&this->_padding_ + 4)) {
    do {
      bVar7 = IsTimeLimitExceeded(this,L"serializing import map",100);
      if (bVar7) break;
      iVar9 = (int)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,(ForAnyElementType *)&this->_padding_,piVar1);
      }
      *(int *)&this->_padding_ = iVar9 + 1;
      pFVar15 = (FObjectImport *)(this->_padding_ + (longlong)iVar9 * 0x38);
      DefaultConstructItems<FObjectImport,int>(pFVar15,1);
      ::operator<<(FVar2,pFVar15);
      this->ImportMapIndex = this->ImportMapIndex + 1;
    } while (this->ImportMapIndex < *(int *)((longlong)&this->_padding_ + 4));
  }
  if ((this->ImportMapIndex != *(int *)((longlong)&this->_padding_ + 4)) ||
     (bVar7 = IsTimeLimitExceeded(this,L"serializing import map",1), bVar7)) {
    EVar8 = LINKER_TimedOut;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return EVar8;
}

// SerializeNameMap @ 1420d7e70

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::SerializeNameMap(FLinkerLoad *this)

{
  int iVar1;
  FAsyncArchive *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  ELinkerStatus EVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeNameMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeNameMap>
  FVar13;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  uint uVar17;
  int *local_res10;
  FName local_res18;
  FName local_res20;
  FName local_858;
  FName local_850;
  FNameEntrySerialized local_848;
  
  bVar7 = false;
  EVar9 = LINKER_TimedOut;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_LinkerLoad_SerializeNameMap ==
          (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeNameMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeNameMap>
           )0x0) {
        pFVar12 = ::FName::FName(&local_858,"STAT_LinkerLoad_SerializeNameMap");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_SerializeNameMap,*pFVar12,
                   L"FLinkerLoad::SerializeNameMap","STATGROUP_LinkerLoad","STATCAT_Advanced",
                   L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar13 = StatPtr_STAT_LinkerLoad_SerializeNameMap;
  if (StatPtr_STAT_LinkerLoad_SerializeNameMap ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeNameMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeNameMap>
       )0x0) {
    pFVar12 = ::FName::FName(&local_850,"STAT_LinkerLoad_SerializeNameMap");
    FVar13 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializeNameMap(void)_::_2_::FStat_STAT_LinkerLoad_SerializeNameMap>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_SerializeNameMap,
                          *pFVar12,L"FLinkerLoad::SerializeNameMap","STATGROUP_LinkerLoad",
                          "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar3 = false;
  bVar5 = false;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar14 == 0)) {
LAB_1420d7fe4:
    bVar4 = false;
    FVar16.ComparisonIndex.Value = 0;
    FVar16.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10 = (int *)((ulonglong)local_res10 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar15.Value;
        local_res18.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x797);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1420d7fe4;
    local_res20.ComparisonIndex.Value = FVar15.Value;
    local_res20.Number = uVar14;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar4 = true;
  }
  uVar14 = (uint)this->_padding_;
  if (((int)this->_padding_ == 0) && (0 < (int)uVar14)) {
    (**(code **)(*(longlong *)this->Loader + 0x1b8))
              (this->Loader,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    iVar10 = *(int *)((longlong)&this->_padding_ + 4);
    if (0 < iVar10) {
      this_00 = (FAsyncArchive *)this->Loader;
      if (this->bIsAsyncLoader == false) {
        iVar1 = *(int *)((longlong)&this->_padding_ + 4);
        cVar6 = (**(code **)(*(longlong *)this_00 + 0x1f0))
                          (this_00,(longlong)iVar1,(longlong)(iVar10 - iVar1));
      }
      else {
        cVar6 = FAsyncArchive::ReadyToStartReadingHeader
                          (this_00,this->bUseTimeLimit,this->bUseFullTimeLimit,this->TickStartTime,
                           (double)this->TimeLimit);
        if (GEventDrivenLoaderEnabled != false) {
          if (!(bool)cVar6) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!GEventDrivenLoaderEnabled || bFinishedPrecaching || !(1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                               ,0x7b1,L"");
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              EVar9 = (*pcVar2)();
              return EVar9;
            }
            goto LAB_1420d825e;
          }
          goto LAB_1420d80d3;
        }
      }
      if (cVar6 == '\0') goto LAB_1420d825e;
    }
  }
LAB_1420d80d3:
  if ((-1 < CpuChannel->Enabled) && (-1 < LoadTimeChannel->Enabled)) {
    bVar7 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1983,"LinkerLoad_SerializeNameMap_ProcessingEntries",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x7bf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1983);
  }
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  local_res10 = (int *)((longlong)&this->_padding_ + 4);
  if (*local_res10 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,local_res10);
  }
  local_848.NonCasePreservingHash = 0;
  local_848.CasePreservingHash = 0;
  local_848.bIsWide = false;
  for (uVar17 = (uint)this->_padding_; (int)uVar17 < (int)uVar14; uVar17 = uVar17 + 1) {
    ::operator<<((FArchive *)&this->_padding_,&local_848);
    pFVar12 = ::FName::FName(&local_res20,&local_848);
    uVar11 = (pFVar12->ComparisonIndex).Value;
    iVar10 = (int)this->_padding_;
    if (iVar10 == *local_res10) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)&this->_padding_,local_res10);
      *(int *)&this->_padding_ = iVar10;
    }
    *(int *)&this->_padding_ = iVar10 + 1;
    *(uint *)(this->_padding_ + (longlong)iVar10 * 4) = uVar11;
    uVar11 = uVar17 & 0x8000007f;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xffffff80) + 1;
    }
    if ((uVar11 == 0x7f) && ((uint)this->_padding_ != uVar14)) {
      bVar8 = IsTimeLimitExceeded(this,L"serializing name map",1);
      if (bVar8) {
        EVar9 = LINKER_TimedOut;
        goto LAB_1420d824c;
      }
    }
  }
  EVar9 = LINKER_Loaded;
LAB_1420d824c:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_1420d825e:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return EVar9;
}

// SerializePackageFileSummary @ 1420d8340

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::SerializePackageFileSummary(FLinkerLoad *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ELinkerStatus EVar6;
  ELinkerStatus EVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializePackageFileSummary(void)_::_2_::FStat_STAT_LinkerLoad_SerializePackageFileSummary>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar10;
  undefined4 uVar11;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  LARGE_INTEGER local_res18;
  FMemScope local_res20;
  FMemScope local_88;
  FStatMessage local_80;
  LARGE_INTEGER local_70;
  FAssetLog local_60;
  
  EVar6 = LINKER_Failed;
  EVar7 = LINKER_Failed;
  uVar11 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_LinkerLoad_SerializePackageFileSummary ==
        (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializePackageFileSummary(void)_::_2_::FStat_STAT_LinkerLoad_SerializePackageFileSummary>
         )0x0) {
      pFVar8 = ::FName::FName((FName *)&local_res18.s,"STAT_LinkerLoad_SerializePackageFileSummary")
      ;
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_SerializePackageFileSummary,
                 *pFVar8,L"FLinkerLoad::SerializePackageFileSummary","STATGROUP_LinkerLoad",
                 "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_LinkerLoad_SerializePackageFileSummary;
  if (StatPtr_STAT_LinkerLoad_SerializePackageFileSummary ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializePackageFileSummary(void)_::_2_::FStat_STAT_LinkerLoad_SerializePackageFileSummary>
       )0x0) {
    pFVar8 = ::FName::FName((FName *)&local_80,"STAT_LinkerLoad_SerializePackageFileSummary");
    FVar9 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializePackageFileSummary(void)_::_2_::FStat_STAT_LinkerLoad_SerializePackageFileSummary>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_LinkerLoad_SerializePackageFileSummary,*pFVar8,
                         L"FLinkerLoad::SerializePackageFileSummary","STATGROUP_LinkerLoad",
                         "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  LVar10 = *(LARGE_INTEGER *)FVar9;
  bVar2 = false;
  bVar4 = false;
  local_70.s.LowPart = 0;
  local_70.s.HighPart = 0;
  if ((LVar10.s.LowPart == 0) && (LVar10.s.HighPart == 0)) {
LAB_1420d84a4:
    bVar3 = false;
    LVar10 = local_70;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.QuadPart = local_res18.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18 = LVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x6a2);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1420d84a4;
    local_res18 = LVar10;
    local_70 = LVar10;
    FThreadStats::AddMessage((FName)LVar10.s,CycleScopeStart);
    bVar3 = true;
    uVar11 = local_70._0_4_;
  }
  FLLMScope::FLLMScope(local_res10,UObject,false,None,Default,true);
  FMemScope::FMemScope(&local_88,UObject,true);
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_UObject_FLinkerLoad.UniqueName,false,None,Default,true);
  local_res18.s.LowPart = LLMTagDeclaration_UObject_FLinkerLoad.UniqueName.ComparisonIndex.Value;
  local_res18.s.HighPart = LLMTagDeclaration_UObject_FLinkerLoad.UniqueName.Number;
  FMemScope::FMemScope(&local_res20,(FName *)&local_res18.s,true);
  if (!this->bHasSerializedPackageFileSummary) {
    if ((((FAsyncArchive *)this->Loader)->field_0x29 & 2) != 0) {
      EVar7 = EVar6;
      if (2 < (byte)LogLinker._0_1_) {
        ::FString::PrintfImpl
                  ((FString *)&local_80,
                   L"The file contains unrecognizable data, check that it is of the expected type.")
        ;
        local_60.PackagePath = &this->PackagePath;
        local_60.Path = (wchar_t *)0x0;
        local_60.Object = (UObject *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogLinker.field_0x4,Warning,&local_60,(FString *)&local_80,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x6aa);
        if (local_80.StatData.Pad != (uchar  [8])0x0) {
          FMemory::Free((void *)local_80.StatData.Pad);
        }
      }
      goto LAB_1420d864e;
    }
    if (this->bIsAsyncLoader != false) {
      FAsyncArchive::StartReadingHeader((FAsyncArchive *)this->Loader);
    }
    EVar6 = SerializePackageFileSummaryInternal(this);
    if (EVar6 == LINKER_Failed) {
      if (this->bIsAsyncLoader != false) {
        FAsyncArchive::EndReadingHeader((FAsyncArchive *)this->Loader);
      }
      goto LAB_1420d864e;
    }
    EVar7 = UpdateFromPackageFileSummary(this);
    if (EVar7 != LINKER_Loaded) goto LAB_1420d864e;
    TArray<FObjectImport,TSizedDefaultAllocator<32>_>::Empty
              ((TArray<FObjectImport,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               *(int *)((longlong)&this->_padding_ + 4));
    TArray<FObjectExport,TSizedDefaultAllocator<32>_>::Empty
              ((TArray<FObjectExport,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               *(int *)((longlong)&this->_padding_ + 4));
    TArray<FGatherableTextData,TSizedDefaultAllocator<32>_>::Empty
              ((TArray<FGatherableTextData,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (int)this->_padding_);
    TArray<FNameEntryId,TSizedDefaultAllocator<32>_>::Empty
              ((TArray<FNameEntryId,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (int)this->_padding_);
    TSet<TTuple<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy>,TDefaultMapHashableKeyFuncs<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy,0>,FDefaultSetAllocator>
    ::Empty((TSet<TTuple<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy>,TDefaultMapHashableKeyFuncs<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy,0>,FDefaultSetAllocator>
             *)&this->_padding_,(int)this->_padding_);
    this->bHasSerializedPackageFileSummary = true;
  }
  bVar5 = IsTimeLimitExceeded(this,L"serializing package file summary",1);
  EVar7 = bVar5 + LINKER_Loaded;
LAB_1420d864e:
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_res10);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar10.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = LVar10.s.HighPart & 0xffff6fffU | 0x6000;
      local_80.NameAndInfo.Index.Value = uVar11;
      QueryPerformanceCounter(&local_res18);
      local_80.StatData.Pad = (uchar  [8])(local_res18.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return EVar7;
}

// SerializePackageFileSummaryInternal @ 1420d87f0

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::SerializePackageFileSummaryInternal(FLinkerLoad *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ELinkerStatus EVar6;
  FEngineVersion *pFVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  byte bVar11;
  wchar_t *pwVar12;
  int iVar13;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  <lambda_1> local_258;
  <lambda_5> local_248;
  FString local_238;
  <lambda_2> local_228;
  <lambda_4> local_210;
  FString local_1e8;
  <lambda_3> local_1d8;
  FAssetLog local_1a8;
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  FString local_170;
  FString local_160;
  FString local_150;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [24];
  TUniqueFunction<void___cdecl(void)> local_108;
  TUniqueFunction<void___cdecl(void)> local_d8;
  TUniqueFunction<void___cdecl(void)> local_a8;
  TUniqueFunction<void___cdecl(void)> local_78;
  TUniqueFunction<void___cdecl(void)> local_48;
  
  iVar13 = 0;
  if (((this->StructuredArchiveRootRecord).bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    EVar6 = (*pcVar2)();
    return EVar6;
  }
  ::operator<<(*(FStructuredArchiveSlot *)&(this->StructuredArchiveRootRecord).TypedValue,
               (FPackageFileSummary *)&this->_padding_);
  if ((int)this->_padding_ != -0x61d57c3f) {
    local_108._0_8_ = 0;
    local_108._40_8_ = 0;
    FPackagePath::GetDebugName(&this->PackagePath,&local_2a8);
    local_258.DebugName.Data.AllocatorInstance.Data = local_2a8.Data.AllocatorInstance.Data;
    local_258.DebugName.Data.ArrayNum = local_2a8.Data.ArrayNum;
    local_258.DebugName.Data.ArrayMax = local_2a8.Data.ArrayMax;
    local_2a8.Data.ArrayNum = 0;
    local_2a8.Data.ArrayMax = 0;
    local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l5::<lambda_1>_>
              ((TFuture<void> *)local_190,TaskGraphMainThread,&local_258,&local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_190._8_8_);
    FVar9.Data = local_2a8.Data.AllocatorInstance.Data;
    if (local_258.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.DebugName.Data.AllocatorInstance.Data);
      FVar9.Data = local_2a8.Data.AllocatorInstance.Data;
    }
    goto LAB_1420d8d1d;
  }
  if (*(int *)((longlong)&this->_padding_ + 4) < 0xd6) {
    local_d8._0_8_ = 0;
    local_d8._40_8_ = 0;
    FPackagePath::GetDebugName(&this->PackagePath,&local_298);
    local_228.DebugName.Data.AllocatorInstance.Data = local_298.Data.AllocatorInstance.Data;
    local_228.DebugName.Data.ArrayNum = local_298.Data.ArrayNum;
    local_228.DebugName.Data.ArrayMax = local_298.Data.ArrayMax;
    local_228.FileVersion = *(FPackageFileVersion *)((longlong)&this->_padding_ + 4);
    local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.Data.ArrayNum = 0;
    local_298.Data.ArrayMax = 0;
    Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l8::<lambda_2>_>
              ((TFuture<void> *)local_180,TaskGraphMainThread,&local_228,&local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_180._8_8_);
    FVar9.Data = local_298.Data.AllocatorInstance.Data;
    if (local_228.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.DebugName.Data.AllocatorInstance.Data);
      FVar9.Data = local_298.Data.AllocatorInstance.Data;
    }
    goto LAB_1420d8d1d;
  }
  bVar4 = FEngineBuildSettings::IsInternalBuild();
  if (bVar4) {
    pFVar7 = FEngineVersion::Current();
    bVar4 = FEngineVersionBase::IsLicenseeVersion((FEngineVersionBase *)pFVar7);
    if ((!bVar4) &&
       (bVar4 = FEngineVersionBase::IsLicenseeVersion((FEngineVersionBase *)&this->_padding_), bVar4
       )) {
      pFVar8 = FPackagePath::GetLocalFullPath(&this->PackagePath,&local_170);
      FPaths::CreateStandardFilename(&local_238,pFVar8);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      pFVar8 = FPaths::EngineContentDir(&local_150);
      pwVar12 = L"";
      iVar1 = (pFVar8->Data).ArrayNum;
      if (iVar1 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        iVar13 = iVar1 + -1;
      }
      bVar4 = false;
      bVar5 = ::FString::StartsWith(&local_238,pwVar10,iVar13,IgnoreCase);
      if (bVar5) {
LAB_1420d8a5e:
        bVar5 = true;
        bVar3 = true;
        if (bVar4) goto LAB_1420d8a66;
      }
      else {
        pFVar8 = FPaths::EnginePluginsDir(&local_160);
        iVar1 = (pFVar8->Data).ArrayNum;
        iVar13 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar13 = 0;
        }
        else {
          pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        bVar4 = true;
        bVar5 = ::FString::StartsWith(&local_238,pwVar12,iVar13,IgnoreCase);
        if (bVar5) goto LAB_1420d8a5e;
        bVar3 = false;
LAB_1420d8a66:
        bVar5 = bVar3;
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if ((bVar5) && (2 < (byte)LogLinker._0_1_)) {
        ::FString::PrintfImpl
                  (&local_1e8,
                   L"The file is Engine content that was saved with a licensee flag. This can result in the file failing to open on licensee builds"
                  );
        local_1a8.Path = (wchar_t *)0x0;
        local_1a8.Object = (UObject *)0x0;
        local_1a8.PackagePath = &this->PackagePath;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogLinker.field_0x4,Warning,&local_1a8,&local_1e8,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x60e);
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((this->bLoaderNeedsEngineVersionChecks) && (GEnforcePackageCompatibleVersionCheck != 0)) {
    pFVar7 = FEngineVersion::Current();
    bVar4 = FEngineVersion::IsCompatibleWith(pFVar7,(FEngineVersionBase *)&this->_padding_);
    if (!bVar4) {
      local_a8._0_8_ = 0;
      local_a8._40_8_ = 0;
      FPackagePath::GetDebugName(&this->PackagePath,&local_288);
      local_1d8.CompatibleWith._padding_ = this->_padding_;
      local_1d8.DebugName.Data.AllocatorInstance.Data = local_288.Data.AllocatorInstance.Data;
      local_1d8.DebugName.Data.ArrayNum = local_288.Data.ArrayNum;
      local_1d8.DebugName.Data.ArrayMax = local_288.Data.ArrayMax;
      local_1d8.CompatibleWith._padding_._0_4_ = (undefined4)this->_padding_;
      local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.Data.ArrayNum = 0;
      local_288.Data.ArrayMax = 0;
      ::FString::FString(&local_1d8.CompatibleWith.Branch,(FString *)&this->_padding_);
      Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l27::<lambda_3>_>
                ((TFuture<void> *)local_140,TaskGraphMainThread,&local_1d8,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_140._8_8_);
      if (local_1d8.CompatibleWith.Branch.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.CompatibleWith.Branch.Data.AllocatorInstance.Data);
      }
      FVar9.Data = local_288.Data.AllocatorInstance.Data;
      if (local_1d8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.DebugName.Data.AllocatorInstance.Data);
        FVar9.Data = local_288.Data.AllocatorInstance.Data;
      }
      goto LAB_1420d8d1d;
    }
  }
  bVar11 = (byte)((uint)this->_padding_ >> 9) & 1;
  (**(code **)(this->_padding_ + 0xd0))(&this->_padding_,bVar11);
  (**(code **)(*(longlong *)this->Loader + 0xd0))(this->Loader,bVar11);
  bVar11 = (byte)((uint)this->_padding_ >> 0xd) & 1;
  (**(code **)(this->_padding_ + 0xf8))(&this->_padding_,bVar11);
  (**(code **)(*(longlong *)this->Loader + 0xf8))(this->Loader,bVar11);
  if ((this->bLoaderNeedsEngineVersionChecks) &&
     (((GPackageFileUEVersion.FileVersionUE4 < *(int *)((longlong)&this->_padding_ + 4) ||
       (GPackageFileUEVersion.FileVersionUE5 < (int)this->_padding_)) ||
      (GPackageFileLicenseeUEVersion < *(int *)((longlong)&this->_padding_ + 4))))) {
    local_78._0_8_ = 0;
    local_78._40_8_ = 0;
    FPackagePath::GetDebugName(&this->PackagePath,&local_278);
    local_210.DebugName.Data.AllocatorInstance.Data = local_278.Data.AllocatorInstance.Data;
    local_210.DebugName.Data.ArrayNum = local_278.Data.ArrayNum;
    local_210.DebugName.Data.ArrayMax = local_278.Data.ArrayMax;
    local_210.FileVersion = *(FPackageFileVersion *)((longlong)&this->_padding_ + 4);
    local_210.FileVersionLicensee = *(int *)((longlong)&this->_padding_ + 4);
    local_210.PackageFileUEVersion.FileVersionUE4 = GPackageFileUEVersion.FileVersionUE4;
    local_210.PackageFileUEVersion.FileVersionUE5 = GPackageFileUEVersion.FileVersionUE5;
    local_210.PackageFileLicenseeUEVersion = GPackageFileLicenseeUEVersion;
    local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.Data.ArrayNum = 0;
    local_278.Data.ArrayMax = 0;
    Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l43::<lambda_4>_>
              ((TFuture<void> *)local_130,TaskGraphMainThread,&local_210,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_130._8_8_);
    FVar9.Data = local_278.Data.AllocatorInstance.Data;
    if (local_210.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.DebugName.Data.AllocatorInstance.Data);
      FVar9.Data = local_278.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((int)this->_padding_ < 0) {
      return LINKER_Loaded;
    }
    local_48._0_8_ = 0;
    local_48._40_8_ = 0;
    FPackagePath::GetDebugName(&this->PackagePath,&local_268);
    local_248.DebugName.Data.AllocatorInstance.Data = local_268.Data.AllocatorInstance.Data;
    local_248.DebugName.Data.ArrayNum = local_268.Data.ArrayNum;
    local_248.DebugName.Data.ArrayMax = local_268.Data.ArrayMax;
    local_268.Data.ArrayNum = 0;
    local_268.Data.ArrayMax = 0;
    local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l46::<lambda_5>_>
              ((TFuture<void> *)local_120,TaskGraphMainThread,&local_248,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_120._8_8_);
    FVar9.Data = local_268.Data.AllocatorInstance.Data;
    if (local_248.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.DebugName.Data.AllocatorInstance.Data);
      FVar9.Data = local_268.Data.AllocatorInstance.Data;
    }
  }
LAB_1420d8d1d:
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return LINKER_Failed;
}

// SerializePackageTrailer @ 1420d8e10

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::SerializePackageTrailer(FLinkerLoad *this)

{
  TUniquePtr<UE::FPackageTrailer,TDefaultDelete<UE::FPackageTrailer>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ELinkerStatus EVar5;
  undefined8 uVar6;
  FPackageTrailer *pFVar7;
  undefined8 uVar8;
  int iVar9;
  FPackageTrailer *pFVar10;
  FString local_b8;
  <lambda_1> local_a8;
  FString local_98;
  FAssetLog local_88;
  longlong local_70;
  undefined1 local_68 [16];
  TUniqueFunction<void___cdecl(void)> local_58;
  
  if (this->bHasSerializedPackageTrailer) {
    return LINKER_Loaded;
  }
  pTVar1 = &this->PackageTrailer;
  if ((pTVar1->Ptr != (FPackageTrailer *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PackageTrailer == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0x75b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  if (this->_padding_ < 1) goto LAB_1420d90fe;
  uVar6 = (**(code **)(*(longlong *)this->Loader + 0x28))();
  (**(code **)(*(longlong *)this->Loader + 0x1b8))(this->Loader,this->_padding_);
  pFVar7 = ::operator_new(0x30);
  pFVar10 = (FPackageTrailer *)0x0;
  if (pFVar7 != (FPackageTrailer *)0x0) {
    pFVar7->TrailerPositionInFile = -1;
    (pFVar7->Header).Tag = 0;
    (pFVar7->Header).Version = -1;
    (pFVar7->Header).HeaderLength = 0;
    (pFVar7->Header).PayloadsDataLength = 0;
    (pFVar7->Header).PayloadLookupTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Header).PayloadLookupTable.ArrayNum = 0;
    (pFVar7->Header).PayloadLookupTable.ArrayMax = 0;
    pFVar10 = pFVar7;
  }
  if (pTVar1 == (TUniquePtr<UE::FPackageTrailer,TDefaultDelete<UE::FPackageTrailer>_> *)&local_70) {
    if (pFVar10 != (FPackageTrailer *)0x0) {
      pFVar2 = (pFVar10->Header).PayloadLookupTable.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar10,0x30);
    }
  }
  else {
    pFVar7 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar10;
    if (pFVar7 != (FPackageTrailer *)0x0) {
      pFVar2 = (pFVar7->Header).PayloadLookupTable.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar7,0x30);
    }
  }
  bVar4 = UE::FPackageTrailer::TryLoad(pTVar1->Ptr,(FArchive *)&this->_padding_);
  if (!bVar4) {
    uVar8 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    iVar9 = (int)((ulonglong)uVar8 >> 0x20);
    if (iVar9 < 1000) {
      iVar9 = (int)uVar8;
    }
    if (iVar9 == 0x3f1) {
      uVar8 = (**(code **)(*(longlong *)this->Loader + 0x30))();
      (**(code **)(*(longlong *)this->Loader + 0x1b8))(this->Loader,uVar8);
      bVar4 = UE::FPackageTrailer::TryLoadBackwards(pTVar1->Ptr,(FArchive *)&this->_padding_);
      if (bVar4) goto LAB_1420d90eb;
    }
    if ((this->_padding_ & 0x200) != 0) {
      if (1 < (byte)LogLinker._0_1_) {
        ::FString::PrintfImpl(&local_98,L"Package has a corrupted package trailer");
        local_88.PackagePath = &this->PackagePath;
        local_88.Path = (wchar_t *)0x0;
        local_88.Object = (UObject *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogLinker.field_0x4,Error,&local_88,&local_98,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x779);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      local_58._0_8_ = 0;
      local_58._40_8_ = 0;
      FPackagePath::GetDebugName(&this->PackagePath,&local_b8);
      local_a8.DebugName.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      local_a8.DebugName.Data.ArrayNum = local_b8.Data.ArrayNum;
      local_a8.DebugName.Data.ArrayMax = local_b8.Data.ArrayMax;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Async<_FLinkerLoad::SerializePackageTrailer_::__l24::<lambda_1>_>
                ((TFuture<void> *)local_68,TaskGraphMainThread,&local_a8,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_68._8_8_);
      if (local_a8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.DebugName.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      return LINKER_Failed;
    }
    pFVar10 = pTVar1->Ptr;
    if (pFVar10 != (FPackageTrailer *)0x0) {
      pTVar1->Ptr = (FPackageTrailer *)0x0;
      pFVar2 = (pFVar10->Header).PayloadLookupTable.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar10,0x30);
    }
  }
LAB_1420d90eb:
  (**(code **)(*(longlong *)this->Loader + 0x1b8))(this->Loader,uVar6);
LAB_1420d90fe:
  this->bHasSerializedPackageTrailer = true;
  return LINKER_Loaded;
}

// SerializePreloadDependencies @ 1420d9150

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::SerializePreloadDependencies(FLinkerLoad *this)

{
  TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FStructuredArchiveRecord FVar3;
  FArchive *this_00;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  ELinkerStatus EVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializePreloadDependencies(void)_::_2_::FStat_STAT_LinkerLoad_SerializePreloadDependencies>
  FVar13;
  FStructuredArchiveRecord *pFVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  FNameEntryId FVar18;
  uint uVar19;
  ulonglong uVar20;
  FName FVar21;
  ulonglong uVar22;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FName local_res20;
  int *piVar23;
  FName local_68;
  FName local_60;
  
  uVar20 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_LinkerLoad_SerializePreloadDependencies ==
        (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializePreloadDependencies(void)_::_2_::FStat_STAT_LinkerLoad_SerializePreloadDependencies>
         )0x0) {
      pFVar12 = ::FName::FName(&local_res20,"STAT_LinkerLoad_SerializePreloadDependencies");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoad_SerializePreloadDependencies,
                 *pFVar12,L"FLinkerLoad::SerializePreloadDependencies","STATGROUP_LinkerLoad",
                 "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_LinkerLoad_SerializePreloadDependencies;
  if (StatPtr_STAT_LinkerLoad_SerializePreloadDependencies ==
      (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializePreloadDependencies(void)_::_2_::FStat_STAT_LinkerLoad_SerializePreloadDependencies>
       )0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_LinkerLoad_SerializePreloadDependencies");
    FVar13 = (FThreadSafeStaticStat<_private:_enum_FLinkerLoad::ELinkerStatus___cdecl_FLinkerLoad::SerializePreloadDependencies(void)_::_2_::FStat_STAT_LinkerLoad_SerializePreloadDependencies>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_LinkerLoad_SerializePreloadDependencies,*pFVar12,
                          L"FLinkerLoad::SerializePreloadDependencies","STATGROUP_LinkerLoad",
                          "STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar21 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar18 = FVar21.ComparisonIndex.Value;
  uVar15 = FVar21.Number;
  if ((FVar18.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar18.Value;
        local_res18.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0xa5d);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar18.Value;
      uStackX_c = uVar15;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar7 = true;
      goto LAB_1420d92d4;
    }
  }
  bVar7 = false;
  FVar21 = local_60;
LAB_1420d92d4:
  if (((this->bHasSerializedPreloadDependencies) || ((int)this->_padding_ < 1)) ||
     (iVar2 = *(int *)((longlong)&this->_padding_ + 4), iVar2 < 1)) {
    EVar11 = LINKER_Loaded;
  }
  else {
    (**(code **)(*(longlong *)this->Loader + 0x1b8))(this->Loader,(longlong)iVar2);
    pTVar1 = &this->PreloadDependencies;
    piVar16 = &(this->PreloadDependencies).ArrayNum;
    piVar23 = &(this->PreloadDependencies).ArrayMax;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)this->_padding_,&pTVar1->AllocatorInstance,piVar16,piVar23);
    if ((((this->_padding_ & 4) == 0) ||
        ((this->_padding_ != 0 && (*(longlong *)(this->_padding_ + 0x10) != 0)))) &&
       ((this->_padding_ & 0x10000) == 0)) {
      (**(code **)(*(longlong *)this->Loader + 0x188))
                (this->Loader,(pTVar1->AllocatorInstance).Data,(longlong)(int)this->_padding_ << 2);
    }
    else {
      pFVar14 = TOptional<FStructuredArchiveRecord>::operator->(&this->StructuredArchiveRootRecord);
      FVar3 = *pFVar14;
      uVar22 = uVar20;
      if (0 < (int)this->_padding_) {
        do {
          local_res8 = 0;
          this_00 = *(FArchive **)(*(longlong *)FVar3 + 8);
          puVar4 = (uint *)**(undefined8 **)&this_00->field_0x8;
          if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar4 + 1) {
            if ((this_00->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)this_00 + 0x188))
                        (this_00,&local_res8,4,this_00,piVar16,piVar23);
            }
            else {
              FArchive::SerializeByteOrderSwapped(this_00,&local_res8);
            }
          }
          else {
            local_res8 = *puVar4;
            **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
          }
          uVar15 = local_res8;
          iVar2 = (this->PreloadDependencies).ArrayNum;
          piVar17 = (int *)(longlong)iVar2;
          uVar19 = (uint)uVar20;
          uVar10 = 0;
          if ((int)uVar19 < iVar2) {
            uVar10 = ~uVar19 >> 0x1f;
          }
          if (uVar10 == 0) {
            piVar16 = (int *)(longlong)(int)uVar19;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            piVar23 = piVar17;
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              EVar11 = (*pcVar5)();
              return EVar11;
            }
          }
          uVar20 = (ulonglong)(uVar19 + 1);
          *(uint *)((pTVar1->AllocatorInstance).Data + uVar22) = uVar15;
          uVar22 = uVar22 + 4;
        } while ((int)(uVar19 + 1) < (int)this->_padding_);
      }
    }
    this->bHasSerializedPreloadDependencies = true;
    bVar9 = IsTimeLimitExceeded(this,L"serialize preload dependencies",1);
    EVar11 = bVar9 + LINKER_Loaded;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return EVar11;
}

// SerializeSoftObjectPathList @ 1420d98c0

ELinkerStatus __thiscall FLinkerLoad::SerializeSoftObjectPathList(FLinkerLoad *this)

{
  int *piVar1;
  FStructuredArchiveRecord FVar2;
  code *pcVar3;
  bool bVar4;
  ELinkerStatus EVar5;
  int iVar6;
  FArchive *pFVar7;
  FSoftObjectPath *this_00;
  FSlotBase local_res10;
  
  if ((this->SoftObjectPathListIndex == 0) && (0 < (int)this->_padding_)) {
    (**(code **)(*(longlong *)this->Loader + 0x1b8))
              (this->Loader,(longlong)*(int *)((longlong)&this->_padding_ + 4));
  }
  if (((this->StructuredArchiveRootRecord).bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  FVar2 = (this->StructuredArchiveRootRecord).TypedValue;
  if (this->SoftObjectPathListIndex < (int)this->_padding_) {
    do {
      bVar4 = IsTimeLimitExceeded(this,L"serializing soft object path list",100);
      if (bVar4) break;
      iVar6 = (int)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,(ForAnyElementType *)&this->_padding_,piVar1);
      }
      *(int *)&this->_padding_ = iVar6 + 1;
      this_00 = (FSoftObjectPath *)(this->_padding_ + (longlong)iVar6 * 0x20);
      DefaultConstructItems<FSoftObjectPath,int>(this_00,1);
      local_res10.StructuredArchive = (FStructuredArchive *)FVar2;
      pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
      FSoftObjectPath::SerializePath(this_00,pFVar7);
      this->SoftObjectPathListIndex = this->SoftObjectPathListIndex + 1;
    } while (this->SoftObjectPathListIndex < (int)this->_padding_);
  }
  if ((this->SoftObjectPathListIndex == (int)this->_padding_) &&
     (bVar4 = IsTimeLimitExceeded(this,L"serializing soft object path list",1), !bVar4)) {
    return LINKER_Loaded;
  }
  return LINKER_TimedOut;
}

// SerializeThumbnails @ 1420d9ab0

ELinkerStatus __thiscall FLinkerLoad::SerializeThumbnails(FLinkerLoad *this,bool param_1)

{
  return LINKER_Loaded;
}

// SetDebugSerializationFlags @ 1420d9b50

void __thiscall FLinkerLoad::SetDebugSerializationFlags(FLinkerLoad *this,uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001420d9b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x78))();
  return;
}

// SetLoader @ 1420da4d0

void __thiscall FLinkerLoad::SetLoader(FLinkerLoad *this,FArchive *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FBinaryArchiveFormatter *this_00;
  FBinaryArchiveFormatter *pFVar3;
  FStructuredArchiveRecord FVar4;
  
  this->bLoaderNeedsEngineVersionChecks = false;
  this->field_0x469 = this->field_0x469 | param_2 << 7;
  this->Loader = param_1;
  if (this->StructuredArchive != (FStructuredArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructuredArchive == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x24d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->StructuredArchiveRootRecord).bIsSet != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!StructuredArchiveRootRecord.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0x24e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->StructuredArchiveFormatter == (FBinaryArchiveFormatter *)0x0) {
    this_00 = ::operator_new(0x10);
    pFVar3 = (FBinaryArchiveFormatter *)0x0;
    if (this_00 != (FBinaryArchiveFormatter *)0x0) {
      pFVar3 = FBinaryArchiveFormatter::FBinaryArchiveFormatter
                         (this_00,(FArchive *)&this->_padding_);
    }
    this->StructuredArchiveFormatter = pFVar3;
  }
  FVar4 = (FStructuredArchiveRecord)::operator_new(8);
  if (FVar4 != (FStructuredArchiveRecord)0x0) {
    *(FBinaryArchiveFormatter **)FVar4 = this->StructuredArchiveFormatter;
  }
  this->StructuredArchive = (FStructuredArchive *)FVar4;
  (this->StructuredArchiveRootRecord).TypedValue = FVar4;
  (this->StructuredArchiveRootRecord).bIsSet = true;
  return;
}

// SetPackagePath @ 1420da5c0

void __thiscall FLinkerLoad::SetPackagePath(FLinkerLoad *this,FPackagePath *param_1)

{
  FPackagePath::operator=(&this->PackagePath,param_1);
  return;
}

// SetSerializedProperty @ 1420da5e0

void __thiscall FLinkerLoad::SetSerializedProperty(FLinkerLoad *this,FProperty *param_1)

{
  this->_padding_ = (longlong)param_1;
                    /* WARNING: Could not recover jumptable at 0x0001420da5ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0xa0))();
  return;
}

// SetSerializedPropertyChain @ 1420da600

void __thiscall
FLinkerLoad::SetSerializedPropertyChain
          (FLinkerLoad *this,FArchiveSerializedPropertyChain *param_1,FProperty *param_2)

{
  FArchiveState::SetSerializedPropertyChain((FArchiveState *)this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001420da63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0xa8))((longlong *)this->_padding_,param_1,param_2);
  return;
}

// Tell @ 1420dbe40

long64 __thiscall FLinkerLoad::Tell(FLinkerLoad *this)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001420dbe4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x28))();
  return lVar1;
}

// Tick @ 1420dbe60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ELinkerStatus __thiscall
FLinkerLoad::Tick(FLinkerLoad *this,float param_1,bool param_2,bool param_3,
                 TMap<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
                 *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  ELinkerStatus EVar4;
  undefined ***pppuVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88 [2];
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->bHasFinishedInitialization) {
    return LINKER_Loaded;
  }
  QueryPerformanceCounter(local_88);
  dVar6 = (double)local_88[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->bTimeLimitExceeded = false;
  this->bUseTimeLimit = false;
  this->TimeLimit = param_1;
  dVar6 = dVar6 + __real_4170000000000000;
  this->field_0x469 = param_2 << 5 | this->field_0x469 & 0xbf | param_3 << 6;
  this->TickStartTime = dVar6;
  do {
    if (GEventDrivenLoaderEnabled == false) {
      if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1092,"LinkerLoad_CreateLoader",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x444);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1092);
      }
      local_50 = (undefined ***)0x0;
      local_68 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
      local_60 = `FLinkerLoad::Tick'::__l19::<lambda_1>::<lambda_invoker_cdecl>;
      local_78[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::
                    Call;
      EVar4 = CreateLoader(this,(TFunction<void___cdecl(void)> *)local_78);
      if (local_78[0] != (code *)0x0) {
        pppuVar5 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar5 = local_50;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (EVar4 == LINKER_Loaded) goto LAB_1420dc009;
    }
    else {
      if ((this->Loader == (FArchive *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Loader",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                             ,0x43d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
LAB_1420dc009:
      EVar4 = ProcessPackageSummary(this,param_4);
    }
    if (EVar4 != LINKER_TimedOut) {
      if (EVar4 != LINKER_Failed) {
        return EVar4;
      }
      UPackage::SetLinker((UPackage *)this->_padding_,(FLinkerLoad *)0x0);
      return LINKER_Failed;
    }
    if (this->bUseTimeLimit) {
      if (!this->bUseFullTimeLimit) {
        return LINKER_TimedOut;
      }
      bVar3 = IsTimeLimitExceeded(this,L"Checking Full Timer",1);
      if (bVar3) {
        return LINKER_TimedOut;
      }
    }
  } while( true );
}

// TotalSize @ 1420dc0e0

long64 __thiscall FLinkerLoad::TotalSize(FLinkerLoad *this)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001420dc0ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x30))();
  return lVar1;
}

// UpdateFromPackageFileSummary @ 1420dd820

/* WARNING: Enum "Type": Some values do not have unique names */

ELinkerStatus __thiscall FLinkerLoad::UpdateFromPackageFileSummary(FLinkerLoad *this)

{
  FPackagePath *this_00;
  longlong *plVar1;
  byte *pbVar2;
  FArchive *pFVar3;
  UPackage *this_01;
  void *_Src;
  code *pcVar4;
  FGuid *this_02;
  int iVar5;
  bool bVar6;
  int iVar7;
  ELinkerStatus EVar8;
  TOptional<FCustomVersion> *pTVar9;
  FName this_03;
  long64 lVar10;
  atomic<unsigned_int> aVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FCustomVersionContainer local_1e8;
  TArray<FCustomVersionDifference,TSizedDefaultAllocator<32>_> local_1d8;
  <lambda_2> local_1c8;
  <lambda_1> local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FAssetLog local_168;
  FAssetLog local_150;
  FAssetLog local_138;
  FString local_120;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  FCustomVersion local_f0;
  TUniqueFunction<void___cdecl(void)> local_c8;
  TUniqueFunction<void___cdecl(void)> local_98;
  TOptional<FCustomVersion> local_68;
  
  bVar6 = true;
  if ((char)this->_padding_ != '\0') {
LAB_1420ddcd4:
    plVar1 = &this->_padding_;
    (**(code **)(*plVar1 + 0x110))(plVar1,*(undefined8 *)((longlong)&this->_padding_ + 4));
    (**(code **)(*plVar1 + 0x118))(plVar1,*(undefined4 *)((longlong)&this->_padding_ + 4));
    (**(code **)(*plVar1 + 0x120))(plVar1,&this->_padding_);
    (**(code **)(*plVar1 + 0x68))(plVar1,&this->_padding_);
    if ((int)this->_padding_ < 0) {
      (**(code **)(*plVar1 + 0x80))(plVar1,1);
    }
    pbVar2 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar2 = *pbVar2 | 0x80;
    pFVar3 = this->Loader;
    if (pFVar3 != (FArchive *)0x0) {
      (**(code **)(*(longlong *)pFVar3 + 0x110))
                (pFVar3,*(undefined8 *)((longlong)&this->_padding_ + 4));
      (**(code **)(*(longlong *)this->Loader + 0x118))
                (this->Loader,*(undefined4 *)((longlong)&this->_padding_ + 4));
      (**(code **)(*(longlong *)this->Loader + 0x120))(this->Loader,&this->_padding_);
      (**(code **)(*(longlong *)this->Loader + 0x68))(this->Loader,&this->_padding_);
    }
    this_01 = (UPackage *)this->_padding_;
    if (this_01 != (UPackage *)0x0) {
      aVar11 = (atomic<unsigned_int>)
               ((uint)this_01->PackageFlagsPrivate & 0x100020 | (uint)this->_padding_);
      if (aVar11 != this_01->PackageFlagsPrivate) {
        this_01->PackageFlagsPrivate = aVar11;
      }
      if (this->Loader == (FArchive *)0x0) {
        lVar10 = 0;
      }
      else {
        lVar10 = (**(code **)(*(longlong *)this->Loader + 0x30))();
      }
      UPackage::SetFileSize(this_01,lVar10);
      UPackage::SetLinkerPackageVersion
                (this_01,*(FPackageFileVersion *)((longlong)&this->_padding_ + 4));
      UPackage::SetLinkerLicenseeVersion(this_01,*(int *)((longlong)&this->_padding_ + 4));
      if (!bVar6) {
        local_1e8.Versions.ArrayNum = (int)this->_padding_;
        lVar13 = (longlong)local_1e8.Versions.ArrayNum;
        _Src = (void *)this->_padding_;
        local_1e8.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_1e8.Versions.ArrayNum == 0) {
          local_1e8.Versions.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,local_1e8.Versions.ArrayNum,0,(ForAnyElementType *)&local_1e8,
                     local_1e8.Versions.ArrayNum,&local_1e8.Versions.ArrayMax);
          memcpy(local_1e8.Versions.AllocatorInstance.Data,_Src,lVar13 * 0x28);
        }
        UPackage::SetLinkerCustomVersions(this_01,&local_1e8);
      }
    }
    return LINKER_Loaded;
  }
  this_00 = &this->PackagePath;
  FPackagePath::GetDebugName(this_00,&local_1a8);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_1a8.Data.ArrayNum != 0) {
    FVar12.Data = local_1a8.Data.AllocatorInstance.Data;
  }
  FCurrentCustomVersions::Compare
            (&local_1d8,(TArray<FCustomVersion,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (wchar_t *)FVar12.Data);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  iVar5 = local_1d8.ArrayNum;
  pFVar14 = local_1d8.AllocatorInstance.Data + (longlong)local_1d8.ArrayNum * 0x10;
  FVar12.Data = local_1d8.AllocatorInstance.Data;
  bVar6 = true;
  while( true ) {
    while( true ) {
      if (local_1d8.ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FCustomVersionDifference,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar12.Data == pFVar14) {
        if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.AllocatorInstance.Data);
        }
        goto LAB_1420ddcd4;
      }
      this_02 = *(FGuid **)(FVar12.Data + 8);
      bVar6 = false;
      iVar7 = (int)*(undefined8 *)FVar12.Data;
      if (iVar7 != 0) break;
      if ((byte)LogLinker._0_1_ < 3) goto LAB_1420dd9a8;
      local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.Data.ArrayNum = 0;
      local_218.Data.ArrayMax = 0;
      FGuid::AppendString(this_02,&local_218,Digits);
      ::FString::PrintfImpl
                (&local_198,
                 L"Package was saved with a custom version that is not present. Tag %s  Version %d")
      ;
      local_168.Path = (wchar_t *)0x0;
      local_168.Object = (UObject *)0x0;
      local_168.PackagePath = this_00;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogLinker.field_0x4,Warning,&local_168,&local_198,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                 ,0x6e3);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (local_218.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_1420dd9a8;
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
      FVar12.Data = FVar12.Data + 0x10;
    }
    if (iVar7 == 3) break;
    if (iVar7 == 1) {
      pTVar9 = FCurrentCustomVersions::Get(&local_68,this_02);
      if ((pTVar9->bIsSet == false) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        EVar8 = (*pcVar4)();
        return EVar8;
      }
      local_f0.Key.A = (pTVar9->TypedValue).Key.A;
      local_f0.Key.B = (pTVar9->TypedValue).Key.B;
      local_f0.Key.C = (pTVar9->TypedValue).Key.C;
      local_f0.Key.D = (pTVar9->TypedValue).Key.D;
      local_f0.Version = (pTVar9->TypedValue).Version;
      local_f0.ReferenceCount = (pTVar9->TypedValue).ReferenceCount;
      local_f0.Validator = (pTVar9->TypedValue).Validator;
      local_f0.FriendlyName = (pTVar9->TypedValue).FriendlyName;
      if (1 < (byte)LogLinker._0_1_) {
        this_03 = FCustomVersion::GetFriendlyName(&local_f0);
        ::FName::ToString((FName *)this_03,&local_120);
        local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.Data.ArrayNum = 0;
        local_208.Data.ArrayMax = 0;
        FGuid::AppendString(this_02,&local_208,Digits);
        ::FString::PrintfImpl
                  (&local_188,
                   L"Package was saved with a newer custom version than the current. Tag %s Name \'%s\' PackageVersion %d  MaxExpected %d"
                  );
        local_150.Path = (wchar_t *)0x0;
        local_150.Object = (UObject *)0x0;
        local_150.PackagePath = this_00;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogLinker.field_0x4,Error,&local_150,&local_188,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x6fb);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
      }
      local_c8._0_8_ = 0;
      local_c8._40_8_ = 0;
      FPackagePath::GetDebugName(this_00,&local_238);
      local_1c8.DebugName.Data.AllocatorInstance.Data = local_238.Data.AllocatorInstance.Data;
      local_1c8.DebugName.Data.ArrayNum = local_238.Data.ArrayNum;
      local_1c8.DebugName.Data.ArrayMax = local_238.Data.ArrayMax;
      local_238.Data.ArrayNum = 0;
      local_238.Data.ArrayMax = 0;
      local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Async<_FLinkerLoad::UpdateFromPackageFileSummary_::__l34::<lambda_2>_>
                ((TFuture<void> *)local_110,TaskGraphMainThread,&local_1c8,&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_110._8_8_);
      FVar12.Data = local_238.Data.AllocatorInstance.Data;
      if (local_1c8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.DebugName.Data.AllocatorInstance.Data);
        FVar12.Data = local_238.Data.AllocatorInstance.Data;
      }
LAB_1420ddca0:
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
      if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.AllocatorInstance.Data);
      }
      return LINKER_Failed;
    }
LAB_1420dd9a8:
    FVar12.Data = FVar12.Data + 0x10;
  }
  if (1 < (byte)LogLinker._0_1_) {
    local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.Data.ArrayNum = 0;
    local_1f8.Data.ArrayMax = 0;
    FGuid::AppendString(this_02,&local_1f8,Digits);
    ::FString::PrintfImpl
              (&local_178,L"Package was saved with an invalid custom version. Tag %s  Version %d");
    local_138.Path = (wchar_t *)0x0;
    local_138.Object = (UObject *)0x0;
    local_138.PackagePath = this_00;
    UE::Core::Private::RecordAssetLog
              ((FName *)&LogLinker.field_0x4,Error,&local_138,&local_178,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x6e7);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
  }
  local_98._0_8_ = 0;
  local_98._40_8_ = 0;
  FPackagePath::GetDebugName(this_00,&local_228);
  local_1b8.DebugName.Data.AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data;
  local_1b8.DebugName.Data.ArrayNum = local_228.Data.ArrayNum;
  local_1b8.DebugName.Data.ArrayMax = local_228.Data.ArrayMax;
  local_228.Data.ArrayNum = 0;
  local_228.Data.ArrayMax = 0;
  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Async<_FLinkerLoad::UpdateFromPackageFileSummary_::__l23::<lambda_1>_>
            ((TFuture<void> *)local_100,TaskGraphMainThread,&local_1b8,&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_100._8_8_);
  FVar12.Data = local_228.Data.AllocatorInstance.Data;
  if (local_1b8.DebugName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.DebugName.Data.AllocatorInstance.Data);
    FVar12.Data = local_228.Data.AllocatorInstance.Data;
  }
  goto LAB_1420ddca0;
}

// Verify @ 1420ddee0

void __thiscall FLinkerLoad::Verify(FLinkerLoad *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (this->bHaveImportsBeenVerified == false) {
    if ((PRIVATE_GIsRunningCommandlet) && (uVar4 = 0, 0 < *(int *)((longlong)&this->_padding_ + 4)))
    {
      do {
        uVar3 = 0;
        if ((int)uVar4 < (int)this->_padding_) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        VerifyImport(this,uVar4);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < *(int *)((longlong)&this->_padding_ + 4));
    }
    this->bHaveImportsBeenVerified = true;
  }
  return;
}

// VerifyImport @ 1420ddf90

EVerifyResult __thiscall FLinkerLoad::VerifyImport(FLinkerLoad *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  ulonglong uVar2;
  FTlsAutoCleanup FVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  EVerifyResult EVar8;
  uint uVar9;
  FNameEntryId FVar10;
  int iVar11;
  undefined4 extraout_var;
  uint *puVar12;
  FTlsAutoCleanup *pFVar13;
  undefined4 extraout_var_00;
  FText *pFVar14;
  FString *pFVar15;
  UObjectBase *this_00;
  UClass *pUVar16;
  UClass *pUVar17;
  FLinkerManager *pFVar18;
  FLinkerLoad *pFVar19;
  longlong lVar20;
  ulonglong *puVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FLinkerLoad *local_res20;
  FString local_118;
  uint local_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  FLinkerLoad *local_f0;
  ulonglong local_e8;
  code *local_e0;
  undefined1 *local_d8;
  FText local_d0;
  FText local_c0;
  ulonglong local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((GEventDrivenLoaderEnabled) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GEventDrivenLoaderEnabled || !(1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0xd79,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    EVar8 = (*pcVar5)();
    return EVar8;
  }
  uVar9 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    EVar8 = (*pcVar5)();
    return EVar8;
  }
  puVar21 = (ulonglong *)((longlong)param_1 * 0x38 + this->_padding_);
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  VerifyImportInner(this,param_1,&local_118);
  EVar8 = VERIFY_Success;
  if ((((puVar21[6] != 0) && (*(int *)((longlong)puVar21 + 0x1c) == -1)) && (puVar21[5] == 0)) &&
     ((int)puVar21[1] != 0)) {
    uVar2 = *puVar21;
    FVar10 = FNameEntryId::FromValidEName((EName)local_res8);
    uStack_104 = 0;
    local_108 = *(uint *)CONCAT44(extraout_var,FVar10.Value);
    if (uVar2 != local_108) {
      puVar12 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
      local_d8 = local_res10;
      local_e0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar13 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_e0,puVar12);
      local_b0 = *puVar21;
      uStack_a8 = puVar21[1];
      FVar3 = pFVar13[0x2f];
      uStack_78 = (undefined4)uStack_a8;
      uStack_74 = (undefined4)(uStack_a8 >> 0x20);
      local_a0 = puVar21[2];
      uStack_98 = puVar21[3];
      uStack_70 = (undefined4)local_a0;
      uStack_6c = (undefined4)(local_a0 >> 0x20);
      uStack_68 = (undefined4)uStack_98;
      uStack_64 = (undefined4)(uStack_98 >> 0x20);
      local_90 = puVar21[4];
      uStack_88 = puVar21[5];
      local_e8 = puVar21[6];
      local_80 = local_b0;
      FVar10 = FNameEntryId::FromValidEName((EName)local_res18);
      uStack_fc = 0;
      local_100 = *(uint *)CONCAT44(extraout_var_00,FVar10.Value);
      *(ulonglong *)((longlong)puVar21 + 0x14) = (ulonglong)local_100;
      FLazyName::Resolve(&GLongCoreUObjectPackageName);
      *(undefined8 *)((longlong)puVar21 + 0xc) = local_f8;
      VerifyImportInner(this,param_1,&local_118);
      if (*(int *)((longlong)puVar21 + 0x1c) != -1) {
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_d0,L"LinkerLoad",L"LoadWarningSuffix_redirection",
                             L" [redirection]");
        pFVar15 = FText::ToString(pFVar14);
        iVar11 = (pFVar15->Data).ArrayNum;
        uVar9 = iVar11 - 1;
        if (iVar11 == 0) {
          uVar9 = 0;
        }
        ::FString::AppendChars(&local_118,(wchar_t *)(pFVar15->Data).AllocatorInstance.Data,uVar9);
        if (local_d0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
        }
        this_00 = (UObjectBase *)
                  CreateExport((FLinkerLoad *)puVar21[6],*(int *)((longlong)puVar21 + 0x1c));
        if (this_00 != (UObjectBase *)0x0) {
          pUVar16 = UObjectRedirector::GetPrivateStaticClass();
          pUVar17 = (this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar11 = (int)pUVar16->_padding_;
          if ((iVar11 <= (int)pUVar17->_padding_) &&
             ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar11 * 8) ==
              &pUVar16->_padding_)) {
            if ((GEventDrivenLoaderEnabled != false) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!GEventDrivenLoaderEnabled || !(1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                   ,0xdb0,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              EVar8 = (*pcVar5)();
              return EVar8;
            }
            UObjectBase::AtomicallySetFlags(this_00,RF_NeedLoad);
            Preload((FLinkerLoad *)&this->_padding_,(UObject *)this_00);
            lVar4 = this_00[1]._padding_;
            if (lVar4 != 0) {
              lVar20 = *(longlong *)(lVar4 + 0x10);
              lVar6 = CONCAT44(uStack_68,uStack_6c);
              if ((*(uint *)(lVar4 + 8) >> 4 & 1) != 0) {
LAB_1420de2d7:
                puVar21[5] = this_00[1]._padding_;
                *(int *)((longlong)FVar3 + 4) = *(int *)((longlong)FVar3 + 4) + 1;
                pFVar18 = FLinkerManager::Get();
                lpCriticalSection = &pFVar18->LoadersWithNewImportsCritical;
                local_f0 = this;
                if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::ReportNotNullPtr();
                }
                EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::
                Emplace<FLinkerLoad_*_const_&>
                          (&pFVar18->LoadersWithNewImports,&local_res20,(bool *)&local_f0);
                LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                *(ulonglong *)((longlong)puVar21 + 0xc) = CONCAT44(uStack_70,uStack_74);
                *(longlong *)((longlong)puVar21 + 0x14) = lVar6;
                iVar11 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)puVar21[5]);
                *(int *)((longlong)puVar21 + 0x1c) = iVar11;
                pFVar19 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)puVar21[5]);
                puVar21[6] = (ulonglong)pFVar19;
                EVar8 = VERIFY_Redirected;
                goto LAB_1420de37d;
              }
              for (; lVar20 != 0; lVar20 = *(longlong *)(lVar20 + 0x40)) {
                if (*(longlong *)(lVar20 + 0x18) == lVar6) goto LAB_1420de2d7;
              }
              pUVar17 = UObjectRedirector::GetPrivateStaticClass();
              if (*(UClass **)(this_00[1]._padding_ + 0x10) == pUVar17) {
                pFVar14 = FText::AsLocalizable_Advanced_LocText
                                    (&local_c0,L"LinkerLoad",
                                     L"LoadWarningSuffix_circularredirection",
                                     L" [circular redirection]");
                pFVar15 = FText::ToString(pFVar14);
                iVar1 = (pFVar15->Data).ArrayNum;
                iVar11 = iVar1 + -1;
                if (iVar1 == 0) {
                  iVar11 = 0;
                }
                ::FString::AppendChars
                          (&local_118,(wchar_t *)(pFVar15->Data).AllocatorInstance.Data,iVar11);
                if (local_c0.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
                }
              }
            }
          }
        }
      }
      *puVar21 = local_b0;
      puVar21[1] = uStack_a8;
      puVar21[2] = local_a0;
      puVar21[3] = uStack_98;
      puVar21[4] = local_90;
      puVar21[5] = uStack_88;
      puVar21[6] = local_e8;
      EVar8 = VERIFY_Failed;
    }
  }
LAB_1420de37d:
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return EVar8;
}

// VerifyImportInner @ 1420de3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLinkerLoad::VerifyImportInner(FLinkerLoad *this,int param_1,FString *param_2)

{
  FWindowsRecursiveMutex *pFVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  FNameEntryId FVar13;
  ELinkerStatus EVar14;
  uint uVar15;
  uint uVar16;
  undefined4 extraout_var;
  FObjectImport *pFVar17;
  undefined4 extraout_var_00;
  FName FVar18;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  FName FVar19;
  uint *puVar20;
  FTlsAutoCleanup *pFVar21;
  FLinkerManager *pFVar22;
  size_t sVar23;
  UClass *pUVar24;
  UObject *pUVar25;
  FLinkerLoad *pFVar26;
  FObjectImport *pFVar27;
  FUObjectItem *pFVar28;
  FLinkerLoad *pFVar29;
  FString *pFVar30;
  UPackage *pUVar31;
  UPackage *pUVar32;
  FName *this_00;
  ForAnyElementType FVar33;
  longlong lVar34;
  longlong lVar35;
  uint uVar36;
  uint uVar37;
  UPackage *pUVar38;
  FObjectImport *this_01;
  undefined1 auStackY_8b8 [32];
  uint local_884;
  UPackage *local_880;
  uint local_878 [2];
  undefined1 local_870;
  undefined1 local_86f [7];
  longlong local_868;
  UPackage *local_860;
  int local_858 [2];
  FLinkerLoad *local_850;
  undefined8 local_848;
  undefined8 local_840;
  uint local_838;
  undefined4 uStack_834;
  uint local_830;
  undefined4 uStack_82c;
  FNameEntryId local_828;
  uint uStack_824;
  FObjectImport *local_820;
  uint local_818;
  undefined4 uStack_814;
  uint local_810;
  undefined4 uStack_80c;
  uint local_808;
  undefined4 uStack_804;
  undefined8 local_800;
  FString local_7f8;
  FString local_7e8;
  undefined1 local_7d8 [4];
  undefined1 local_7d4 [4];
  undefined1 local_7d0 [4];
  int local_7cc;
  undefined1 local_7c8 [4];
  undefined1 local_7c4 [4];
  undefined1 local_7c0 [4];
  undefined1 local_7bc [12];
  longlong local_7b0;
  FName local_7a8;
  FName local_7a0;
  FName local_798;
  FName local_790;
  FName local_788;
  int local_780 [2];
  FLinkerLoad *local_778 [2];
  FScriptContainerElement *local_768;
  uint uStack_760;
  undefined4 uStack_75c;
  FString local_758;
  FString local_748;
  FLinkerLoad *local_738;
  int local_730;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  code *local_6c8;
  undefined1 *local_6c0;
  wchar_t *local_6b8;
  uint uStack_6b0;
  undefined4 uStack_6ac;
  wchar_t *local_6a8;
  uint uStack_6a0;
  undefined4 uStack_69c;
  code *local_698;
  undefined1 *local_690;
  FAssetLog local_688;
  FAssetLog local_670;
  FAssetLog local_658;
  uint *local_640;
  FObjectImport *local_638;
  TStringBuilderBase<wchar_t> *local_630;
  FAssetLog local_628;
  FAssetLog local_610;
  FAssetLog local_5f8;
  FAssetLog local_5e0;
  FAssetLog local_5c8;
  undefined1 local_5b0 [8];
  FName local_5a8;
  undefined1 local_5a0 [8];
  undefined1 local_598 [8];
  FString local_590;
  FString local_580;
  FString local_570;
  FString local_560;
  TStringView<wchar_t> local_548;
  TStringView<wchar_t> local_538;
  TStringView<wchar_t> local_528;
  FString local_518;
  FString local_508;
  undefined1 local_4f8 [96];
  bool local_498;
  TStringBuilderBase<wchar_t> local_488;
  wchar_t local_468 [256];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  local_878[0] = param_1;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar11 = false;
    bVar12 = false;
  }
  else {
    bVar11 = true;
    bVar12 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3724,"LinkerLoad_VerifyImportInner",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0xe8c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3724);
  }
  local_738 = this;
  local_730 = param_1;
  if ((GEventDrivenLoaderEnabled != false) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GEventDrivenLoaderEnabled || !(1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0xf46,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  if (((this->_padding_ & 1) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0xf47,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  pUVar31 = (UPackage *)0x0;
  uVar37 = 0;
  uVar15 = uVar37;
  if (param_1 < (int)this->_padding_) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  local_498 = false;
  this_01 = (FObjectImport *)((longlong)param_1 * 0x38 + this->_padding_);
  local_820 = this_01;
  if ((((this_01->SourceLinker == (FLinkerLoad *)0x0) || (this_01->SourceIndex == -1)) &&
      (local_800 = 0, this_01->ClassPackage != (FName)0x0)) &&
     (local_848 = 0, this_01->ClassName != (FName)0x0)) {
    lVar34 = this_01->_padding_;
    local_840 = 0;
    if ((lVar34 != 0) &&
       (((this_01->_padding_ != 0 ||
         (local_7b0 = lVar34,
         FLinkerInstancingContext::RemapPackage(&this->InstancingContext,&local_7a8), lVar34 == 0))
        || (local_7a8 != (FName)0x0)))) {
      local_268.Base = local_248;
      local_268.bIsDynamic = false;
      local_268.bIsExternal = false;
      local_268.CurPos = local_248;
      local_268.End = (wchar_t *)local_48;
      ::FName::AppendString((FName *)this_01,&local_268);
      local_880 = (UPackage *)0x0;
      local_860 = (UPackage *)0x0;
      if (this_01->_padding_ == 0) {
        FVar19 = this_01->ClassName;
        FVar13 = FNameEntryId::FromValidEName((EName)local_7d8);
        uStack_834 = 0;
        local_838 = *(uint *)CONCAT44(extraout_var,FVar13.Value);
        FVar18.Number = 0;
        FVar18.ComparisonIndex.Value = local_838;
        if (FVar19 != FVar18) {
          if (1 < (byte)LogLinker._0_1_) {
            if (local_268.End < local_268.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_268,1);
            }
            *local_268.CurPos = L'\0';
            ::FString::PrintfImpl
                      (&local_748,
                       L"%s has an inappropriate outermost, it was probably saved with a deprecated outer"
                      );
            local_670.PackagePath = &this->PackagePath;
            local_670.Path = (wchar_t *)0x0;
            local_670.Object = (UObject *)0x0;
            UE::Core::Private::RecordAssetLog
                      ((FName *)&LogLinker.field_0x4,Error,&local_670,&local_748,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0xf74);
            if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_748.Data.AllocatorInstance.Data);
            }
          }
          bVar12 = false;
          this_01->SourceLinker = (FLinkerLoad *)0x0;
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
          goto LAB_1420df7e0;
        }
      }
      uVar15 = this_01->_padding_;
      uVar16 = 0;
      pUVar32 = pUVar31;
      if (uVar15 == 0) {
        local_860 = `FLinkerLoad::VerifyImportInner'::__l2::<lambda_1>::operator()
                              (&local_738,this_01,(TOptional<FScopedSlowTask> *)local_4f8);
LAB_1420df24e:
        pUVar38 = local_860;
        bVar9 = false;
        if ((local_860 != (UPackage *)0x0) &&
           ((((uint)local_860->PackageFlagsPrivate & 0x11) != 0 ||
            (bVar12 = FLinkerInstancingContext::IsInstanced(&this->InstancingContext), bVar12)))) {
          FVar19 = this_01->ClassPackage;
          bVar12 = true;
          local_880 = pUVar38;
          FVar13 = FNameEntryId::FromValidEName((EName)local_7c8);
          uStack_814 = 0;
          local_818 = *(uint *)CONCAT44(extraout_var_02,FVar13.Value);
          FVar6.Number = 0;
          FVar6.ComparisonIndex.Value = local_818;
          pUVar32 = pUVar38;
          if (FVar19 != FVar6) {
            FLazyName::Resolve(&GLongCoreUObjectPackageName);
            FVar19 = this_01->ClassPackage;
            if (FVar19 != local_790) {
              FVar13 = FNameEntryId::FromValidEName((EName)local_7c4);
              uStack_80c = 0;
              local_810 = *(uint *)CONCAT44(extraout_var_03,FVar13.Value);
              FVar7.Number = 0;
              FVar7.ComparisonIndex.Value = local_810;
              if ((FVar19 != FVar7) &&
                 (FLazyName::Resolve(&GLongCorePackageName), this_01->ClassPackage != local_788))
              goto LAB_1420df3f6;
            }
          }
          FVar19 = this_01->ClassName;
          FVar13 = FNameEntryId::FromValidEName((EName)local_7c0);
          uStack_804 = 0;
          local_808 = *(uint *)CONCAT44(extraout_var_04,FVar13.Value);
          FVar8.Number = 0;
          FVar8.ComparisonIndex.Value = local_808;
          if ((FVar19 == FVar8) &&
             ((local_860->_padding_ == 0 &&
              (lVar34 = local_860->_padding_,
              FVar19 = FLinkerInstancingContext::RemapPackage(&this->InstancingContext,&local_5a8),
              *(longlong *)FVar19 == lVar34)))) {
            this_01->XObject = (UObject *)local_860;
            puVar20 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
            local_6c0 = &local_870;
            local_6c8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                        ::Call;
            pFVar21 = FThreadSingletonInitializer::Get
                                ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_6c8,puVar20
                                );
            *(int *)((longlong)pFVar21[0x2f] + 4) = *(int *)((longlong)pFVar21[0x2f] + 4) + 1;
            pFVar22 = FLinkerManager::Get();
            pFVar1 = &pFVar22->LoadersWithNewImportsCritical;
            local_850 = this;
            if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
            TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::
            Emplace<FLinkerLoad_*_const_&>
                      (&pFVar22->LoadersWithNewImports,(FLinkerLoad **)local_7bc,(bool *)&local_850)
            ;
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
            bVar12 = false;
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
            goto LAB_1420df7e0;
          }
          goto LAB_1420df3f6;
        }
        bVar12 = false;
        if ((this->LoadFlags & 0x4000) == 0) goto LAB_1420df3f6;
        bVar12 = true;
      }
      else {
        if ((int)uVar15 < 0) {
          VerifyImport(this,~uVar15);
          pFVar27 = FLinkerTables::Imp((FLinkerTables *)&this->_padding_,
                                       (FPackageIndex)this_01->_padding_);
          if ((pFVar27->SourceLinker == (FLinkerLoad *)0x0) && (pFVar27->XObject != (UObject *)0x0))
          {
            iVar2 = pFVar27->_padding_;
            pFVar17 = pFVar27;
            while (iVar2 < 0) {
              pFVar17 = FLinkerTables::Imp((FLinkerTables *)&this->_padding_,
                                           (FPackageIndex)pFVar17->_padding_);
              iVar2 = pFVar17->_padding_;
            }
            pUVar38 = (UPackage *)pFVar17->XObject;
            if (pUVar38 != (UPackage *)0x0) {
              pUVar24 = Z_Construct_UClass_UPackage_NoRegister();
              iVar2 = (int)pUVar24->_padding_;
              if (((iVar2 <= *(int *)(pUVar38->_padding_ + 0x38)) &&
                  ((longlong *)
                   *(undefined1 **)(*(longlong *)(pUVar38->_padding_ + 0x30) + (longlong)iVar2 * 8)
                   == &pUVar24->_padding_)) &&
                 ((((uint)pUVar38->PackageFlagsPrivate & 0x11) != 0 ||
                  (bVar9 = FLinkerInstancingContext::IsInstanced(&this->InstancingContext), bVar9)))
                 ) {
                local_860 = pUVar38;
              }
            }
          }
          if (this_01->SourceLinker == (FLinkerLoad *)0x0) {
            this_01->SourceLinker = pFVar27->SourceLinker;
          }
        }
        else {
          if (((int)uVar15 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Import.OuterIndex.IsExport()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                 ,0xfc9,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Import.HasPackageName()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                             ,0xfca,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
        }
        pFVar26 = this_01->SourceLinker;
        if (pFVar26 != (FLinkerLoad *)0x0) {
          if (!pFVar26->bHasFoundExistingExports) {
            if (4 < (byte)LogLinker._0_1_) {
              if (pFVar26->_padding_ == 0) {
                ::FString::FString(&local_7e8,L"None");
              }
              else {
                local_7a0 = *(FName *)(pFVar26->_padding_ + 0x18);
                ::FName::ToString(&local_7a0,&local_7e8);
              }
              ::FString::PrintfImpl
                        (&local_728,
                         L"Source linker \'%s\' has not processed all header information, ticking it now"
                        );
              local_658.PackagePath = &this->PackagePath;
              local_658.Path = (wchar_t *)0x0;
              local_658.Object = (UObject *)0x0;
              UE::Core::Private::RecordAssetLog
                        ((FName *)&LogLinker.field_0x4,Log,&local_658,&local_728,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                         ,0xfdb);
              if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_728.Data.AllocatorInstance.Data);
              }
              if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
              }
            }
            pFVar26 = this_01->SourceLinker;
            uVar15 = pFVar26->LoadFlags;
            pFVar26->LoadFlags = uVar15 | 0x80;
            EVar14 = Tick(this_01->SourceLinker,0.0,false,false,
                          (TMap<TTuple<FName,FPackageIndex>,FPackageIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FPackageIndex>,FPackageIndex,0>_>
                           *)0x0);
            if (EVar14 == LINKER_Failed) {
              if (2 < (byte)LogLinker._0_1_) {
                lVar34 = this_01->SourceLinker->_padding_;
                if (lVar34 == 0) {
                  ::FString::FString(&local_7f8,L"None");
                }
                else {
                  local_798 = *(FName *)(lVar34 + 0x18);
                  ::FName::ToString(&local_798,&local_7f8);
                }
                ::FString::PrintfImpl(&local_718,L"Failed ticking import source linker \'%s\'");
                local_688.PackagePath = &this->PackagePath;
                local_688.Path = (wchar_t *)0x0;
                local_688.Object = (UObject *)0x0;
                UE::Core::Private::RecordAssetLog
                          ((FName *)&LogLinker.field_0x4,Warning,&local_688,&local_718,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                           ,0xfe1);
                if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_718.Data.AllocatorInstance.Data);
                }
                if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
                }
              }
              pFVar26->LoadFlags = uVar15;
              bVar12 = false;
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
              goto LAB_1420df7e0;
            }
            pFVar26->LoadFlags = uVar15;
          }
          pUVar32 = (UPackage *)this_01->SourceLinker->_padding_;
          local_880 = pUVar32;
          uVar15 = ::GetTypeHash((FNameEntryId)(uint)this_01->_padding_);
          local_884 = (this_01->SourceLinker->ExportHash).Ptr[uVar15 & 0xff];
          while (local_884 != 0xffffffff) {
            if (((int)local_884 < 0) || ((int)this_01->SourceLinker->_padding_ <= (int)local_884)) {
              local_640 = &local_884;
              local_630 = &local_268;
              local_638 = this_01;
              bVar9 = `FLinkerLoad::VerifyImportInner'::__l103::<lambda_2>::operator()(&local_640);
              pUVar32 = local_880;
              if (!bVar9) break;
            }
            lVar34 = (longlong)(int)local_884;
            pFVar26 = this_01->SourceLinker;
            uVar15 = uVar37;
            if ((int)local_884 < (int)pFVar26->_padding_) {
              uVar15 = ~local_884 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar10 = (*pcVar4)();
              return (bool)uVar10;
            }
            local_868 = pFVar26->_padding_;
            lVar34 = lVar34 * 0x68;
            if (*(longlong *)(lVar34 + local_868) == this_01->_padding_) {
              pFVar26 = this_01->SourceLinker;
              FVar19 = this_01->ClassName;
              FVar13 = FNameEntryId::FromValidEName((EName)local_7d4);
              uStack_824 = 0;
              local_828.Value = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
              FVar18 = FLinkerTables::GetExportClassName
                                 ((FLinkerTables *)&pFVar26->_padding_,(int)local_5b0);
              uVar3 = *(ulonglong *)FVar18;
              FVar13 = FNameEntryId::FromValidEName((EName)local_7d0);
              uStack_82c = 0;
              local_830 = *(uint *)CONCAT44(extraout_var_01,FVar13.Value);
              FVar5.Number = uStack_824;
              FVar5.ComparisonIndex.Value = local_828.Value;
              if ((FVar19 == FVar5) == (uVar3 == local_830)) {
                lVar35 = local_868;
                if (this_01->_padding_ < 0) {
                  pFVar27 = FLinkerTables::Imp((FLinkerTables *)&this->_padding_,
                                               (FPackageIndex)this_01->_padding_);
                  lVar35 = local_868;
                  if (pFVar27->SourceLinker != (FLinkerLoad *)0x0) {
                    iVar2 = pFVar27->SourceIndex;
                    if (iVar2 != -1) {
                      if (this_01->SourceLinker == pFVar27->SourceLinker) {
                        if ((iVar2 < 0) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("ExportIndex >= 0",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                               ,0x6d,L""), bVar9)) {
                          pcVar4 = (code *)swi(3);
                          uVar10 = (*pcVar4)();
                          return (bool)uVar10;
                        }
                        lVar35 = local_868;
                        if (iVar2 + 1 == *(int *)(lVar34 + 8 + local_868)) goto LAB_1420decd2;
                      }
                      else {
                        if ((-1 < *(int *)(lVar34 + 8 + local_868)) &&
                           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                              ("SourceExport.OuterIndex.IsImport()",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                                               ,0x101e,L""), bVar9)) {
                          pcVar4 = (code *)swi(3);
                          uVar10 = (*pcVar4)();
                          return (bool)uVar10;
                        }
                        pFVar17 = FLinkerTables::Imp((FLinkerTables *)
                                                     &this_01->SourceLinker->_padding_,
                                                     (FPackageIndex)*(int *)(lVar34 + 8 + lVar35));
                        if (pFVar17->_padding_ == pFVar27->_padding_) {
                          if ((pFVar17->ClassName != pFVar27->ClassName) ||
                             (pFVar17->ClassPackage != pFVar27->ClassPackage)) {
                            local_858[0] = FPackageIndex::ToImport
                                                     ((FPackageIndex *)&this_01->_padding_);
                            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                                      (&this->ImportsToVerifyOnCreate,local_780,(bool *)local_858);
                          }
                          goto LAB_1420decd2;
                        }
                      }
                      goto LAB_1420dec24;
                    }
                    if (*(int *)(lVar34 + 8 + local_868) != 0) goto LAB_1420dec24;
                  }
                }
LAB_1420decd2:
                uVar15 = local_878[0];
                if ((~*(byte *)(lVar34 + 0x1c + lVar35) & 1) != 0) {
                  if (((int)local_878[0] < 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ImportIndex >= 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                         ,0x67,L""), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    uVar10 = (*pcVar4)();
                    return (bool)uVar10;
                  }
                  uVar15 = ~uVar15;
                  pUVar32 = pUVar31;
                  pUVar38 = pUVar31;
                  if (0 < *(int *)((longlong)&this->_padding_ + 4)) goto LAB_1420ded40;
                  goto LAB_1420def98;
                }
                FVar19 = FLinkerTables::GetExportClassName
                                   ((FLinkerTables *)&this_01->SourceLinker->_padding_,
                                    (int)local_5a0);
                if ((this_01->ClassName != *(FName *)FVar19) ||
                   (FVar19 = GetExportClassPackage(this_01->SourceLinker,(int)local_598),
                   this_01->ClassPackage != *(FName *)FVar19)) {
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (&this->ImportsToVerifyOnCreate,&local_7cc,(bool *)local_878);
                }
                this_01->SourceIndex = local_884;
                pUVar32 = local_880;
                break;
              }
            }
LAB_1420dec24:
            lVar34 = (longlong)(int)local_884;
            pFVar26 = this_01->SourceLinker;
            uVar15 = uVar16;
            if ((int)local_884 < (int)pFVar26->_padding_) {
              uVar15 = ~local_884 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar10 = (*pcVar4)();
              return (bool)uVar10;
            }
            pUVar32 = local_880;
            local_884 = *(uint *)(lVar34 * 0x68 + 0x48 + pFVar26->_padding_);
          }
        }
        bVar12 = false;
        if (pUVar32 == (UPackage *)0x0) goto LAB_1420df24e;
LAB_1420df3f6:
        bVar9 = bVar12;
        bVar12 = false;
      }
      if ((this_01->SourceIndex != -1) || ((pUVar32 == (UPackage *)0x0 && (bVar12 == false))))
      goto LAB_1420df7ce;
      local_488.Base = local_468;
      local_488.bIsDynamic = false;
      local_488.bIsExternal = false;
      local_488.CurPos = local_468;
      local_488.End = (wchar_t *)&local_268;
      ::FName::ToString(&this_01->ClassPackage,&local_488);
      if (local_488.End < (TStringBuilderBase<wchar_t> *)(local_488.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_488,1);
      }
      *local_488.CurPos = L'\0';
      local_6b8 = local_488.Base;
      uStack_6b0 = uVar16;
      if (local_488.Base != (wchar_t *)0x0) {
        sVar23 = wcslen(local_488.Base);
        uStack_6b0 = (uint)sVar23;
      }
      pUVar24 = Z_Construct_UClass_UPackage_NoRegister();
      local_548._12_4_ = uStack_6ac;
      local_548.Size = uStack_6b0;
      local_548.DataPtr = local_6b8;
      pUVar25 = StaticFindObject(pUVar24,(UObject *)0x0,&local_548,None);
      if (pUVar25 == (UObject *)0x0) {
LAB_1420df799:
        bVar12 = true;
      }
      else {
        ::FName::ToString(&this_01->ClassName,&local_488);
        if (local_488.End < (TStringBuilderBase<wchar_t> *)(local_488.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_488,1);
        }
        *local_488.CurPos = L'\0';
        local_6a8 = local_488.Base;
        if (local_488.Base != (wchar_t *)0x0) {
          sVar23 = wcslen(local_488.Base);
          uVar16 = (uint)sVar23;
        }
        uStack_6a0 = uVar16;
        pUVar24 = Z_Construct_UClass_UClass_NoRegister();
        local_538._12_4_ = uStack_69c;
        local_538.Size = uStack_6a0;
        local_538.DataPtr = local_6a8;
        pFVar26 = (FLinkerLoad *)StaticFindObject(pUVar24,pUVar25,&local_538,None);
        local_850 = pFVar26;
        if (pFVar26 == (FLinkerLoad *)0x0) goto LAB_1420df799;
        if (this_01->_padding_ < 0) {
          pFVar27 = FLinkerTables::Imp((FLinkerTables *)&this->_padding_,
                                       (FPackageIndex)this_01->_padding_);
          if ((UPackage *)pFVar27->XObject != (UPackage *)0x0) {
            local_880 = (UPackage *)pFVar27->XObject;
          }
        }
        pUVar32 = local_880;
        if (bVar12 != false) {
          pUVar32 = pUVar31;
        }
        pUVar25 = FindImportFast((UClass *)pFVar26,(UObject *)pUVar32,(FName)this_01->_padding_,
                                 bVar12);
        if ((bVar9) ||
           ((pUVar25 != (UObject *)0x0 &&
            (((pFVar28 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar25->field_0xc),
              ((ulonglong)((pFVar28->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0 &&
              (((byte)*(undefined4 *)&pUVar25->field_0x8 & 0x41) == 0x41)) ||
             (((*(uint *)&pUVar25->field_0x8 >> 4 & 1) != 0 &&
              ((pFVar28 = FUObjectArray::IndexToObject
                                    (&GUObjectArray,
                                     *(int *)(*(longlong *)&pUVar25->field_0x10 + 0xc)),
               ((ulonglong)((pFVar28->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0 &&
               (((byte)*(undefined4 *)(*(longlong *)&pUVar25->field_0x10 + 8) & 0x41) == 0x41)))))))
            ))) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if (pUVar25 == (UObject *)0x0) {
          if ((!bVar12) ||
             (pFVar29 = (FLinkerLoad *)Z_Construct_UClass_UScriptStruct_NoRegister(),
             pFVar26 = local_850, local_850 != pFVar29)) goto LAB_1420df799;
          pFVar30 = ::FName::ToString((FName *)this_01,&local_518);
          if ((pFVar30->Data).ArrayNum == 0) {
            local_768 = (FScriptContainerElement *)0x15060d16c;
LAB_1420df684:
            sVar23 = wcslen((wchar_t *)local_768);
            uVar37 = (uint)sVar23;
          }
          else {
            local_768 = (pFVar30->Data).AllocatorInstance.Data;
            if (local_768 != (FScriptContainerElement *)0x0) goto LAB_1420df684;
          }
          local_528._12_4_ = uStack_75c;
          local_528.Size = uVar37;
          local_528.DataPtr = (wchar_t *)local_768;
          uStack_760 = uVar37;
          pUVar25 = StaticFindFirstObject
                              ((UClass *)pFVar26,&local_528,EnsureIfAmbiguous|NativeFirst|ExactClass
                               ,Warning,L"Finding import by name");
          if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_518.Data.AllocatorInstance.Data);
          }
          if (pUVar25 != (UObject *)0x0) {
            pUVar31 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar25);
            pUVar32 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)local_880);
            if (pUVar32 == pUVar31) goto LAB_1420df6fe;
          }
          goto LAB_1420df799;
        }
LAB_1420df6fe:
        if (((this->LoadFlags & 0x4000) == 0) && (!bVar12)) goto LAB_1420df799;
        this_01->XObject = pUVar25;
        puVar20 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
        local_690 = local_86f;
        local_698 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar21 = FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_698,puVar20);
        *(int *)((longlong)pFVar21[0x2f] + 4) = *(int *)((longlong)pFVar21[0x2f] + 4) + 1;
        pFVar22 = FLinkerManager::Get();
        pFVar1 = &pFVar22->LoadersWithNewImportsCritical;
        local_778[0] = this;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::
        Emplace<FLinkerLoad_*_const_&>
                  (&pFVar22->LoadersWithNewImports,(FLinkerLoad **)(local_7bc + 4),(bool *)local_778
                  );
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        bVar12 = false;
      }
      if ((this_01->XObject == (UObject *)0x0) && (!bVar12)) {
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
        bVar12 = true;
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
        goto LAB_1420df7e0;
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
      goto LAB_1420df7ce;
    }
  }
  bVar12 = false;
  goto LAB_1420df7e0;
LAB_1420ded40:
  do {
    uVar36 = (uint)pUVar32;
    uVar37 = uVar16;
    if ((int)uVar36 < (int)this->_padding_) {
      uVar37 = ~uVar36 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    this_00 = (FName *)((longlong)&pUVar38->_padding_ + this->_padding_);
    if (this_00[2].Number == uVar15) {
      if (4 < (byte)LogLinker._0_1_) {
        ::FName::ToString(this_00,&local_590);
        ::FString::PrintfImpl(&local_758,L"Private import was referenced by export \'%s\' (parent)")
        ;
        local_628.PackagePath = &this->PackagePath;
        local_628.Path = (wchar_t *)0x0;
        local_628.Object = (UObject *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogLinker.field_0x4,Log,&local_628,&local_758,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x1046);
        FVar33.Data = local_590.Data.AllocatorInstance.Data;
        if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_758.Data.AllocatorInstance.Data);
          FVar33.Data = local_590.Data.AllocatorInstance.Data;
        }
        goto LAB_1420def72;
      }
    }
    else if (this_00[1].Number == uVar15) {
      if (4 < (byte)LogLinker._0_1_) {
        ::FName::ToString(this_00,&local_580);
        ::FString::PrintfImpl(&local_708,L"Private import was referenced by export \'%s\' (class)");
        local_610.PackagePath = &this->PackagePath;
        local_610.Path = (wchar_t *)0x0;
        local_610.Object = (UObject *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogLinker.field_0x4,Log,&local_610,&local_708,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0x104b);
        FVar33.Data = local_580.Data.AllocatorInstance.Data;
        if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_708.Data.AllocatorInstance.Data);
          FVar33.Data = local_580.Data.AllocatorInstance.Data;
        }
LAB_1420def72:
        if (FVar33.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar33.Data);
        }
      }
    }
    else if ((this_00[1].ComparisonIndex.Value == uVar15) && (4 < (byte)LogLinker._0_1_)) {
      ::FName::ToString(this_00,&local_508);
      ::FString::PrintfImpl(&local_6f8,L"Private import was referenced by export \'%s\' (outer)");
      local_5f8.PackagePath = &this->PackagePath;
      local_5f8.Path = (wchar_t *)0x0;
      local_5f8.Object = (UObject *)0x0;
      UE::Core::Private::RecordAssetLog
                ((FName *)&LogLinker.field_0x4,Log,&local_5f8,&local_6f8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                 ,0x1050);
      FVar33.Data = local_508.Data.AllocatorInstance.Data;
      if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        FVar33.Data = local_508.Data.AllocatorInstance.Data;
      }
      goto LAB_1420def72;
    }
    pUVar32 = (UPackage *)(ulonglong)(uVar36 + 1);
    pUVar38 = (UPackage *)&pUVar38[1]._padding_;
    this_01 = local_820;
    bVar11 = bVar12;
  } while ((int)(uVar36 + 1) < *(int *)((longlong)&this->_padding_ + 4));
LAB_1420def98:
  pUVar32 = pUVar31;
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    do {
      uVar37 = (uint)pUVar31;
      if (uVar37 != local_878[0]) {
        uVar36 = uVar16;
        if ((int)uVar37 < (int)this->_padding_) {
          uVar36 = ~uVar37 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        if ((*(uint *)((longlong)&pUVar32->_padding_ + this->_padding_) == uVar15) &&
           (4 < (byte)LogLinker._0_1_)) {
          if (local_268.End < local_268.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_268,1);
          }
          *local_268.CurPos = L'\0';
          ::FString::PrintfImpl
                    (&local_6e8,L"Private import was referenced by import \'%s\' (outer)");
          local_5e0.PackagePath = &this->PackagePath;
          local_5e0.Path = (wchar_t *)0x0;
          local_5e0.Object = (UObject *)0x0;
          UE::Core::Private::RecordAssetLog
                    ((FName *)&LogLinker.field_0x4,Log,&local_5e0,&local_6e8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                     ,0x105b);
          if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
          }
        }
      }
      pUVar31 = (UPackage *)(ulonglong)(uVar37 + 1);
      pUVar32 = (UPackage *)&pUVar32->LoadedPath;
      this_01 = local_820;
    } while ((int)(uVar37 + 1) < *(int *)((longlong)&this->_padding_ + 4));
  }
  if (2 < (byte)LogLinker._0_1_) {
    FLinkerTables::GetImportFullName((FLinkerTables *)&this->_padding_,&local_560,local_878[0]);
    ::FName::ToString(&this_01->ClassName,&local_570);
    ::FString::PrintfImpl(&local_6d8,L"Can\'t import private object %s %s");
    local_5c8.PackagePath = &this->PackagePath;
    local_5c8.Path = (wchar_t *)0x0;
    local_5c8.Object = (UObject *)0x0;
    UE::Core::Private::RecordAssetLog
              ((FName *)&LogLinker.field_0x4,Warning,&local_5c8,&local_6d8,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
               ,0x1063);
    if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
    }
    if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_570.Data.AllocatorInstance.Data);
    }
    if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_560.Data.AllocatorInstance.Data);
      bVar12 = false;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
      goto LAB_1420df7e0;
    }
  }
LAB_1420df7ce:
  bVar12 = false;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
LAB_1420df7e0:
  if (local_498 != false) {
    FSlowTask::Destroy((FSlowTask *)local_4f8);
    if ((ITextData *)local_4f8._16_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_4f8._16_8_ + 0x10))();
    }
    if ((ITextData *)local_4f8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_4f8._0_8_ + 0x10))();
    }
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar12;
}

// WillTextureBeLoaded @ 1420df870

bool __thiscall FLinkerLoad::WillTextureBeLoaded(FLinkerLoad *this,UClass *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FObjectResource *this_00;
  FString *pFVar5;
  UObject *pUVar6;
  int iVar7;
  FName *pFVar8;
  uint uVar9;
  FString local_28;
  FString local_18;
  
  uVar9 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar8 = (FName *)((longlong)param_2 * 0x68 + this->_padding_);
  if ((((((pFVar8[8] == (FName)0x0) && (bVar1 = (byte)pFVar8[9].Number, -1 < (char)bVar1)) &&
        ((pFVar8[9].Number & 0x100) == 0)) &&
       (((char)this->_padding_ == '\0' || ((bVar1 & 4) == 0)))) &&
      ((*(char *)((longlong)&this->_padding_ + 1) == '\0' || ((bVar1 & 2) == 0)))) &&
     (pFVar8[2].ComparisonIndex.Value != 0)) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::Reserve(&local_28,0x100);
    if ((param_2 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExportIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x6d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (param_2 + 1 != 0) {
      this_00 = FLinkerTables::ImpExp
                          ((FLinkerTables *)&this->_padding_,(FPackageIndex)(param_2 + 1));
      BuildPathName(this,&local_28,(FPackageIndex)(this_00->OuterIndex).Index);
      iVar7 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      if (0 < iVar7) {
        ::FString::AppendChar(&local_28,L'.');
      }
      pFVar5 = ::FName::ToString(&this_00->ObjectName,&local_18);
      iVar7 = (pFVar5->Data).ArrayNum;
      uVar9 = iVar7 - 1;
      if (iVar7 == 0) {
        uVar9 = 0;
      }
      ::FString::AppendChars(&local_28,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,uVar9);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pUVar6 = StaticFindObjectFastExplicit(param_1,*pFVar8,&local_28,None,RF_NoFlags);
    bVar3 = pUVar6 == (UObject *)0x0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// operator() @ 150485230

bool __thiscall `FLinkerLoad::FindExportIndex'::__l5::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar4 = false;
  bVar3 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3142015310010257942>);
  if (bVar5) {
    lVar1 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0xc0);
    if (lVar1 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    ::FName::ToString(*(FName **)((longlong)this + 0x10),&local_18);
    bVar4 = true;
    bVar3 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3142015310010257942>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_150485312;
    }
  }
  bVar5 = false;
LAB_150485312:
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 150485400

bool __thiscall `FLinkerLoad::VerifyImportInner'::__l103::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  TStringBuilderBase<wchar_t> *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_18;
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3142015310010257391>);
  if (bVar3) {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x30) + 0xc0);
    if (lVar1 == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res10,&local_18);
    }
    this_00 = *(TStringBuilderBase<wchar_t> **)((longlong)this + 0x10);
    if (this_00->End < this_00->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(this_00,1);
    }
    *this_00->CurPos = L'\0';
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3142015310010257391>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504854f5;
    }
  }
  bVar3 = false;
LAB_1504854f5:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

